/**
 * nhl_07_recomp - Recompiled code chunk 180
 * Functions: 250 (0x003BE960 - 0x003C32C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003BE960
 * Original: 0x003BE960 - 0x003BE966 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE960(void)
{

loc_003BE960: ;
    eax = 0x834B20;
    esp += 4; return; /* ret */

}

/**
 * sub_003BE970
 * Original: 0x003BE970 - 0x003BE994 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE970: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834AEC;
    PUSH32(esp, 0x003BE97Eu); RECOMP_ABI_CALL(0x00035DA6u, sub_00035DA6); /* call 0x00035DA6 */

loc_003BE97E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BE98E; /* je: equal / zero */

loc_003BE985: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BE98Bu); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BE98B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BE98E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BE9A0
 * Original: 0x003BE9A0 - 0x003BE9BE (30 bytes, 10 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003BE9A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BE9A0: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BE9B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BE9B2u); } /* indirect call */
    }

loc_003BE9B5: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BE9D0
 * Original: 0x003BE9D0 - 0x003BE9D9 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE9D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BE9D0: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BE9E0
 * Original: 0x003BE9E0 - 0x003BE9E3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BE9E0(void)
{

loc_003BE9E0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BE9F0
 * Original: 0x003BE9F0 - 0x003BE9F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BE9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BE9F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BEA00
 * Original: 0x003BEA00 - 0x003BEA12 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEA00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEA00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BEA0Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEA0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BEA20
 * Original: 0x003BEA20 - 0x003BEA2C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEA20(void)
{

loc_003BEA20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8CD9A0);
    esp += 4; return; /* ret */

}

/**
 * sub_003BEA30
 * Original: 0x003BEA30 - 0x003BEA7A (74 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003BEA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEA30: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BEA77; /* jle: less or equal (signed <=) */

loc_003BEA3E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);

loc_003BEA48: ;
    eax = MEM32(edi + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEA66; /* je: equal / zero */

loc_003BEA4F: ;
    ecx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003BEA59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BEA56u); } /* indirect call */
    }

loc_003BEA59: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BEA5Fu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003BEA5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEA72; /* je: equal / zero */

loc_003BEA66: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BEA48; /* jl: less (signed <) */

loc_003BEA6B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003BEA72: ;
    eax = MEM32(edi + esi * 4);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003BEA77: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003BEA90
 * Original: 0x003BEA90 - 0x003BEAA9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEA90: ;
    eax = MEM32(0x907160);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x906F20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003BEAA5u); RECOMP_ABI_CALL(0x0001AC77u, sub_0001AC77); /* call 0x0001AC77 */

loc_003BEAA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BEAB0
 * Original: 0x003BEAB0 - 0x003BEAC7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEAB0: ;
    eax = MEM32(0x907160);
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x906F20) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x907160) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003BEAD0
 * Original: 0x003BEAD0 - 0x003BEADB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEAD0(void)
{

loc_003BEAD0: ;
    MEM32(0x907160) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BEAE0
 * Original: 0x003BEAE0 - 0x003BEB03 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEAE0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BEAEFu); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEAEF: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x907160) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BEB10
 * Original: 0x003BEB10 - 0x003BEB2E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEB10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x003BEB1Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEB1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEB29; /* je: equal / zero */

loc_003BEB22: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00026338(); return; /* tail jmp 0x00026338 */

loc_003BEB29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEB40
 * Original: 0x003BEB40 - 0x003BEB5E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEB40: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x003BEB4Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEB4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEB59; /* je: equal / zero */

loc_003BEB52: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00023836(); return; /* tail jmp 0x00023836 */

loc_003BEB59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEB70
 * Original: 0x003BEB70 - 0x003BEB8E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEB70: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x003BEB7Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEB7B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEB89; /* je: equal / zero */

loc_003BEB82: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002659F(); return; /* tail jmp 0x0002659F */

loc_003BEB89: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEBA0
 * Original: 0x003BEBA0 - 0x003BEBBE (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEBA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x003BEBABu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEBAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEBB9; /* je: equal / zero */

loc_003BEBB2: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002FAE1(); return; /* tail jmp 0x0002FAE1 */

loc_003BEBB9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEBD0
 * Original: 0x003BEBD0 - 0x003BEBEE (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEBD0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x003BEBDBu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEBDB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEBE9; /* je: equal / zero */

loc_003BEBE2: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002C86E(); return; /* tail jmp 0x0002C86E */

loc_003BEBE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEC00
 * Original: 0x003BEC00 - 0x003BEC1E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEC00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x003BEC0Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEC0B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEC19; /* je: equal / zero */

loc_003BEC12: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002C9BD(); return; /* tail jmp 0x0002C9BD */

loc_003BEC19: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEC30
 * Original: 0x003BEC30 - 0x003BEC51 (33 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEC30: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x003BEC3Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEC3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEC4C; /* je: equal / zero */

loc_003BEC45: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00013BC5(); return; /* tail jmp 0x00013BC5 */

loc_003BEC4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEC60
 * Original: 0x003BEC60 - 0x003BEC7E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEC60: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x003BEC6Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEC6B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEC79; /* je: equal / zero */

loc_003BEC72: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00037264(); return; /* tail jmp 0x00037264 */

loc_003BEC79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEC90
 * Original: 0x003BEC90 - 0x003BECB1 (33 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEC90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20C);
    PUSH32(esp, 0x003BEC9Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEC9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BECAC; /* je: equal / zero */

loc_003BECA5: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00023750(); return; /* tail jmp 0x00023750 */

loc_003BECAC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BECC0
 * Original: 0x003BECC0 - 0x003BECE1 (33 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BECC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BECC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA0);
    PUSH32(esp, 0x003BECCEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BECCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BECDC; /* je: equal / zero */

loc_003BECD5: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00029268(); return; /* tail jmp 0x00029268 */

loc_003BECDC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BECF0
 * Original: 0x003BECF0 - 0x003BED0E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BECF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x003BECFBu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BECFB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BED09; /* je: equal / zero */

loc_003BED02: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002C22E(); return; /* tail jmp 0x0002C22E */

loc_003BED09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BED20
 * Original: 0x003BED20 - 0x003BED3E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BED20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BED20: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x003BED2Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BED2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BED39; /* je: equal / zero */

loc_003BED32: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00028F39(); return; /* tail jmp 0x00028F39 */

loc_003BED39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BED50
 * Original: 0x003BED50 - 0x003BED6E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BED50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BED50: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x003BED5Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BED5B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BED69; /* je: equal / zero */

loc_003BED62: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002A212(); return; /* tail jmp 0x0002A212 */

loc_003BED69: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BED80
 * Original: 0x003BED80 - 0x003BED9E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BED80: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x003BED8Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BED8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BED99; /* je: equal / zero */

loc_003BED92: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00031CD3(); return; /* tail jmp 0x00031CD3 */

loc_003BED99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEDB0
 * Original: 0x003BEDB0 - 0x003BEDCE (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BEDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BEDB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x003BEDBBu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEDBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEDC9; /* je: equal / zero */

loc_003BEDC2: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_000341D1(); return; /* tail jmp 0x000341D1 */

loc_003BEDC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEDE0
 * Original: 0x003BEDE0 - 0x003BEE24 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEDE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003BEDECu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BEDEC: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEE1E; /* je: equal / zero */

loc_003BEDF5: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x1A);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BEE12u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003BEE12: ;
    MEM32(esi) = 0x83489C;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_003BEE1E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BEE40
 * Original: 0x003BEE40 - 0x003BEE57 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEE40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x834B30;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BEE60
 * Original: 0x003BEE60 - 0x003BEE64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEE60(void)
{

loc_003BEE60: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003BEE70
 * Original: 0x003BEE70 - 0x003BEE74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEE70(void)
{

loc_003BEE70: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003BEE80
 * Original: 0x003BEE80 - 0x003BEE89 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEE80: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003BEE90
 * Original: 0x003BEE90 - 0x003BEE99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEE90(void)
{

loc_003BEE90: ;
    eax = ecx;
    MEM32(eax) = 0x834B34;
    esp += 4; return; /* ret */

}

/**
 * sub_003BEEA0
 * Original: 0x003BEEA0 - 0x003BEEA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEEA0(void)
{

loc_003BEEA0: ;
    eax = 0x834B48;
    esp += 4; return; /* ret */

}

/**
 * sub_003BEEB0
 * Original: 0x003BEEB0 - 0x003BEEB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEEB0(void)
{

loc_003BEEB0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_003BEEC0
 * Original: 0x003BEEC0 - 0x003BEEDF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEEC0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003BEED9; /* je: equal / zero */

loc_003BEED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BEED6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BEED6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BEED9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BEEF0
 * Original: 0x003BEEF0 - 0x003BF12E (574 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BEEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BEEF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0x8CD9A0;
    goto loc_003BEF00;

    /* nop */

loc_003BEF00: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BEF22; /* je: equal / zero */

loc_003BEF06: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BEF0Eu); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEF0E: ;
    eax = MEM32(0x907160);
    ecx = MEM32(edi);
    MEM32(eax * 4 + 0x906F20) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x907160) = eax;

loc_003BEF22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8CDA1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x8CDA1C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003BEF00; /* jl: less (signed <) */

loc_003BEF2D: ;
    PUSH32(esp, 0x8CDB44);
    ecx = esi;
    PUSH32(esp, 0x003BEF39u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEF39: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDB44;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDAE0);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BEF5Bu); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEF5B: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDAE0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDACC);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BEF7Du); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEF7D: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDACC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDAF4);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BEF9Fu); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEF9F: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDAF4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDB1C);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BEFC1u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEFC1: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDB1C;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDB58);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BEFE3u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BEFE3: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDB58;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDB08);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF005u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF005: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDB08;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDB30);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF027u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF027: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDB30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDD38);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF049u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF049: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDD38;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDD28);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF06Bu); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF06B: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDD28;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDCA4);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF08Du); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF08D: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDCA4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDCB8);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF0AFu); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF0AF: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDCB8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDC90);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF0D1u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF0D1: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDC90;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDCF8);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF0F3u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF0F3: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDCF8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8CDCCC);
    ecx = esi;
    MEM32(0x907160) = eax;
    PUSH32(esp, 0x003BF115u); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF115: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = 0x8CDCCC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x907160) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF1C0
 * Original: 0x003BF1C0 - 0x003BF1E3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF1C0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BF1CFu); RECOMP_ABI_CALL(0x0002D7C8u, sub_0002D7C8); /* call 0x0002D7C8 */

loc_003BF1CF: ;
    eax = MEM32(0x907160);
    MEM32(eax * 4 + 0x906F20) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x907160) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF1F0
 * Original: 0x003BF1F0 - 0x003BF2BB (203 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF2B4; /* je: equal / zero */

loc_003BF203: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BF23A; /* jne: not equal / not zero */

loc_003BF207: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BF233; /* jle: less or equal (signed <=) */

loc_003BF20B: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF21E; /* je: equal / zero */

loc_003BF212: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BF21Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BF21Bu); } /* indirect call */
    }

loc_003BF21E: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003BF233: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003BF23A: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003BF254u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BF254: ;
    ebx = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    eax = MEM32(esi + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_003BF27B; /* jle: less or equal (signed <=) */

loc_003BF263: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF29A; /* je: equal / zero */

loc_003BF267: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF29A; /* je: equal / zero */

loc_003BF26E: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003BF279u); RECOMP_ABI_CALL(0x0002E71Du, sub_0002E71D); /* call 0x0002E71D */

loc_003BF279: ;
    goto loc_003BF297;

loc_003BF27B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF29A; /* je: equal / zero */

loc_003BF27F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BF286; /* jle: less or equal (signed <=) */

loc_003BF283: ;
    MEM32(esi + 8) = edi;

loc_003BF286: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003BF297u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003BF297: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BF29A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF2AD; /* je: equal / zero */

loc_003BF2A1: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BF2ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BF2AAu); } /* indirect call */
    }

loc_003BF2AD: ;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 4) = edi;
    POP32(esp, ebx);

loc_003BF2B4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BF2F0
 * Original: 0x003BF2F0 - 0x003BF32A (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834B30;
    if (CMP_LE(_fas, _fbs)) goto loc_003BF328; /* jle: less or equal (signed <=) */

loc_003BF300: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF313; /* je: equal / zero */

loc_003BF307: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BF313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BF310u); } /* indirect call */
    }

loc_003BF313: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003BF328: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF340
 * Original: 0x003BF340 - 0x003BF38E (78 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF340: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834B30;
    if (CMP_LE(_fas, _fbs)) goto loc_003BF378; /* jle: less or equal (signed <=) */

loc_003BF350: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF363; /* je: equal / zero */

loc_003BF357: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003BF363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BF360u); } /* indirect call */
    }

loc_003BF363: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003BF378: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BF388; /* je: equal / zero */

loc_003BF37F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BF385u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BF385: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BF388: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF3B0
 * Original: 0x003BF3B0 - 0x003BF3F4 (68 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF3B0: ;
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
    PUSH32(esp, 0x003BF3D0u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003BF3D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x834B54;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x4C) = 0x834B30;
    MEM32(esi + 0x74) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BF410
 * Original: 0x003BF410 - 0x003BF413 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BF410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF410: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BF420
 * Original: 0x003BF420 - 0x003BF429 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF420(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BF420: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BF430
 * Original: 0x003BF430 - 0x003BF438 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF430(void)
{

loc_003BF430: ;
    eax = 0x834ADC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF440
 * Original: 0x003BF440 - 0x003BF446 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF440(void)
{

loc_003BF440: ;
    eax = 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF450
 * Original: 0x003BF450 - 0x003BF456 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF450(void)
{

loc_003BF450: ;
    eax = 0x83490C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF460
 * Original: 0x003BF460 - 0x003BF47E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF460: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003BF468u); RECOMP_ABI_CALL(0x0002CD1Eu, sub_0002CD1E); /* call 0x0002CD1E */

loc_003BF468: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003BF478; /* je: equal / zero */

loc_003BF46F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BF475u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003BF475: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003BF478: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF490
 * Original: 0x003BF490 - 0x003BF4AE (30 bytes, 10 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003BF490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BF490: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003BF4A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003BF4A2u); } /* indirect call */
    }

loc_003BF4A5: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BF4C0
 * Original: 0x003BF4C0 - 0x003BF4C9 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF4C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BF4C0: ;
    fp_push(MEMF(0x7A9980)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BF4D0
 * Original: 0x003BF4D0 - 0x003BF4D3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF4D0(void)
{

loc_003BF4D0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003BF4E0
 * Original: 0x003BF4E0 - 0x003BF53E (94 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF4E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x003BF4EEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003BF4EE: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF537; /* je: equal / zero */

loc_003BF4F7: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BF514u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003BF514: ;
    MEM32(esi) = 0x834B54;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = edi;
    MEM32(esi + 0x4C) = 0x834B30;
    MEM32(esi + 0x74) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_003BF537: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003BF560
 * Original: 0x003BF560 - 0x003BF56F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF560(void)
{

loc_003BF560: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = ecx;
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF580
 * Original: 0x003BF580 - 0x003BF584 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF580(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BF580: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BF590
 * Original: 0x003BF590 - 0x003BF59E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF590(void)
{

loc_003BF590: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF5B0
 * Original: 0x003BF5B0 - 0x003BF5DD (45 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF5B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003BF5CD; /* jne: not equal / not zero */

loc_003BF5BF: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BF5CAu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BF5CA: ;
    MEM32(esi + 8) = eax;

loc_003BF5CD: ;
    esi = MEM32(esi + 8);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003BF5D8u); RECOMP_ABI_CALL(0x00018233u, sub_00018233); /* call 0x00018233 */

loc_003BF5D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF5F0
 * Original: 0x003BF5F0 - 0x003BF60A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF5F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF610
 * Original: 0x003BF610 - 0x003BF62A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF610: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF630
 * Original: 0x003BF630 - 0x003BF63A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF630(void)
{

loc_003BF630: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF640
 * Original: 0x003BF640 - 0x003BF64E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF640(void)
{

loc_003BF640: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF660
 * Original: 0x003BF660 - 0x003BF670 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF660: ;
    eax = MEM32(ecx + 0x40);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4) = edx;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF680
 * Original: 0x003BF680 - 0x003BF683 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF680(void)
{

loc_003BF680: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF690
 * Original: 0x003BF690 - 0x003BF6BB (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF690: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 4;
    PUSH32(esp, edi);
    /* nop */

loc_003BF6A0: ;
    edi = MEM32(ecx + -36);
    esi = MEM32(ecx + -72);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BF6A0; /* jne: not equal / not zero */

loc_003BF6B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF6D0
 * Original: 0x003BF6D0 - 0x003BF6D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF6D0(void)
{

loc_003BF6D0: ;
    eax = MEM32(ecx + 0x88);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF6E0
 * Original: 0x003BF6E0 - 0x003BF6E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF6E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BF6E0: ;
    fp_push(MEMF(ecx + 0xAC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BF6F0
 * Original: 0x003BF6F0 - 0x003BF6F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF6F0(void)
{

loc_003BF6F0: ;
    eax = ecx + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF700
 * Original: 0x003BF700 - 0x003BF707 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF700(void)
{

loc_003BF700: ;
    eax = ecx + 0x98;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF710
 * Original: 0x003BF710 - 0x003BF714 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF710(void)
{

loc_003BF710: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF720
 * Original: 0x003BF720 - 0x003BF72D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF720(void)
{

loc_003BF720: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x480) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF730
 * Original: 0x003BF730 - 0x003BF741 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF730(void)
{

loc_003BF730: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x470) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF750
 * Original: 0x003BF750 - 0x003BF757 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003BF750: ;
    fp_push(MEMF(ecx + 0x470)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003BF760
 * Original: 0x003BF760 - 0x003BF764 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF760(void)
{

loc_003BF760: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF770
 * Original: 0x003BF770 - 0x003BF77A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF770(void)
{

loc_003BF770: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF780
 * Original: 0x003BF780 - 0x003BF788 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF780(void)
{

loc_003BF780: ;
    MEM8(ecx + 0x509) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF790
 * Original: 0x003BF790 - 0x003BF798 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF790(void)
{

loc_003BF790: ;
    MEM8(ecx + 0x509) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF7A0
 * Original: 0x003BF7A0 - 0x003BF7D3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF7A0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF7CF; /* je: equal / zero */

loc_003BF7A8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BF7BD; /* jne: not equal / not zero */

loc_003BF7AF: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BF7BAu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BF7BA: ;
    MEM32(esi + 8) = eax;

loc_003BF7BD: ;
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

loc_003BF7CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF7E0
 * Original: 0x003BF7E0 - 0x003BF81B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF7E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x274;
    esi = 4;

loc_003BF7F0: ;
    ebx = MEM32(eax + -36);
    edi = MEM32(eax + -72);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BF7F0; /* jne: not equal / not zero */

loc_003BF807: ;
    esi = MEM32(ecx + 0x15C);
    eax = MEM32(ecx + 0x1A0);
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF830
 * Original: 0x003BF830 - 0x003BF863 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 0x274;
    esi = 4;

loc_003BF840: ;
    ebx = MEM32(eax + -36);
    edi = MEM32(eax + -72);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BF840; /* jne: not equal / not zero */

loc_003BF857: ;
    eax = MEM32(ecx + 0x15C);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF870
 * Original: 0x003BF870 - 0x003BF875 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF870(void)
{

loc_003BF870: ;
    MEM8(ecx + 0x14) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF880
 * Original: 0x003BF880 - 0x003BF885 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF880(void)
{

loc_003BF880: ;
    MEM8(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF890
 * Original: 0x003BF890 - 0x003BF894 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF890(void)
{

loc_003BF890: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF8A0
 * Original: 0x003BF8A0 - 0x003BF8AC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF8A0(void)
{

loc_003BF8A0: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF8B0
 * Original: 0x003BF8B0 - 0x003BF8C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF8B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF8D0
 * Original: 0x003BF8D0 - 0x003BF8EA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF8D0(void)
{

loc_003BF8D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BF8D6u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003BF8D6: ;
    ecx = eax;
    PUSH32(esp, 0x003BF8DDu); RECOMP_ABI_CALL(0x0001CD8Du, sub_0001CD8D); /* call 0x0001CD8D */

loc_003BF8DD: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x003BF8E6u); RECOMP_ABI_CALL(0x0002F226u, sub_0002F226); /* call 0x0002F226 */

loc_003BF8E6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF8F0
 * Original: 0x003BF8F0 - 0x003BF92D (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003BF8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF8F0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF92A; /* je: equal / zero */

loc_003BF8F7: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF926; /* je: equal / zero */

loc_003BF8FF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BF914; /* jne: not equal / not zero */

loc_003BF906: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BF911u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BF911: ;
    MEM32(esi + 8) = eax;

loc_003BF914: ;
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

loc_003BF926: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003BF92A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003BF940
 * Original: 0x003BF940 - 0x003BF973 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF940: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF96F; /* je: equal / zero */

loc_003BF948: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BF95D; /* jne: not equal / not zero */

loc_003BF94F: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BF95Au); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BF95A: ;
    MEM32(esi + 8) = eax;

loc_003BF95D: ;
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

loc_003BF96F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF980
 * Original: 0x003BF980 - 0x003BF9B3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF980: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BF9AF; /* je: equal / zero */

loc_003BF988: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BF99D; /* jne: not equal / not zero */

loc_003BF98F: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BF99Au); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BF99A: ;
    MEM32(esi + 8) = eax;

loc_003BF99D: ;
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

loc_003BF9AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF9C0
 * Original: 0x003BF9C0 - 0x003BF9CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BF9C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003BF9D0
 * Original: 0x003BF9D0 - 0x003BF9D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF9D0(void)
{

loc_003BF9D0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BF9E0
 * Original: 0x003BF9E0 - 0x003BF9E9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF9E0(void)
{

loc_003BF9E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BF9F0
 * Original: 0x003BF9F0 - 0x003BF9FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BF9F0(void)
{

loc_003BF9F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BFA00
 * Original: 0x003BFA00 - 0x003BFA8A (138 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BFA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x003BFA0Au); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003BFA0A: ;
    esi = MEM32(ebx + 8);
    ebp = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFA31; /* je: equal / zero */

loc_003BFA15: ;
    PUSH32(esp, edi);

loc_003BFA16: ;
    edi = MEM32(esi + 4);
    ecx = esi;
    PUSH32(esp, 0x003BFA20u); RECOMP_ABI_CALL(0x00034E7Eu, sub_00034E7E); /* call 0x00034E7E */

loc_003BFA20: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x003BFA28u); RECOMP_ABI_CALL(0x0002BDC9u, sub_0002BDC9); /* call 0x0002BDC9 */

loc_003BFA28: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003BFA16; /* jne: not equal / not zero */

loc_003BFA2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_003BFA31: ;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = eax;
    ebx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFA86; /* je: equal / zero */

loc_003BFA41: ;
    MEM32(ebx + 0x94) = eax;
    ecx = MEM32(0x87DA6C);
    eax = ebx + 0x98;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x87DA6C);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = edx;
    eax = MEM32(0x87DA70);
    MEM32(ebx + 4) = eax;
    ecx = MEM32(0x87DA74);
    MEM32(ebx + 8) = ecx;

loc_003BFA86: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003BFAB0
 * Original: 0x003BFAB0 - 0x003BFB06 (86 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BFAB0: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFB05; /* je: equal / zero */

loc_003BFAB9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_003BFAC0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx + 0x274;
    edi = 4;
    /* nop */

loc_003BFAD0: ;
    ebp = MEM32(ecx + -36);
    ebx = MEM32(ecx + -72);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFAD0; /* jne: not equal / not zero */

loc_003BFAE8: ;
    ecx = MEM32(edx + 0x1A0);
    ebx = MEM32(edx + 0x15C);
    edx = MEM32(edx + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFAC0; /* jne: not equal / not zero */

loc_003BFB01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003BFB05: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BFB20
 * Original: 0x003BFB20 - 0x003BFB2D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFB20: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BFB30
 * Original: 0x003BFB30 - 0x003BFB59 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFB30: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0;
    MEM32(ecx + 8) = eax;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFB51; /* je: equal / zero */

loc_003BFB49: ;
    MEM32(edx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_003BFB51: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BFB70
 * Original: 0x003BFB70 - 0x003BFBB2 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFB70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFBAF; /* je: equal / zero */

loc_003BFB78: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003BFB87; /* je: equal / zero */

loc_003BFB7F: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003BFB8D;

loc_003BFB87: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_003BFB8D: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFB9A; /* je: equal / zero */

loc_003BFB94: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_003BFB9F;

loc_003BFB9A: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;

loc_003BFB9F: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_003BFBAF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BFBD0
 * Original: 0x003BFBD0 - 0x003BFC1E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFBD0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFC1D; /* je: equal / zero */

loc_003BFBD7: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003BFBE6; /* je: equal / zero */

loc_003BFBDE: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003BFBEC;

loc_003BFBE6: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_003BFBEC: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFC08; /* je: equal / zero */

loc_003BFBF3: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003BFC08: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_003BFC1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BFC40
 * Original: 0x003BFC40 - 0x003BFC8E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFC40: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFC8D; /* je: equal / zero */

loc_003BFC47: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003BFC56; /* je: equal / zero */

loc_003BFC4E: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003BFC5C;

loc_003BFC56: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_003BFC5C: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFC78; /* je: equal / zero */

loc_003BFC63: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003BFC78: ;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(ecx) = MEM32(ecx) - 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);

loc_003BFC8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003BFCB0
 * Original: 0x003BFCB0 - 0x003BFCD9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFCB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFCB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x834B88;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003BFCF0
 * Original: 0x003BFCF0 - 0x003BFCFC (12 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BFCF0: ;
    MEM32(ecx + 0x2C) = 0;
    g_seh_ebp = ebp; sub_0001EEDF(); return; /* tail jmp 0x0001EEDF */

}

/**
 * sub_003BFD00
 * Original: 0x003BFD00 - 0x003BFD18 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003BFD00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003BFD08u); RECOMP_ABI_CALL(0x0001EEDFu, sub_0001EEDF); /* call 0x0001EEDF */

loc_003BFD08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003BFD20
 * Original: 0x003BFD20 - 0x003BFE85 (357 bytes, 119 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BFD20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x003BFD2Cu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003BFD2C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x24) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003BFE78; /* je: equal / zero */

loc_003BFD45: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(edi + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003BFDEE; /* je: equal / zero */

loc_003BFD55: ;
    PUSH32(esp, ebp);
    goto loc_003BFD60;

    /* nop */
    /* nop */

loc_003BFD60: ;
    ebp = MEM32(esi + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x274;
    edx = 4;

loc_003BFD70: ;
    ebx = MEM32(eax + -72);
    _fb = (uint32_t)(MEM32(eax + -36)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + -36);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + -108)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + -108);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + -144)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(eax + -144);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003BFD70; /* jne: not equal / not zero */

loc_003BFD89: ;
    eax = MEM32(esi + 0x15C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_003BFDDA; /* jne: not equal / not zero */

loc_003BFD97: ;
    ecx = esi;
    PUSH32(esp, 0x003BFD9Eu); RECOMP_ABI_CALL(0x00034E7Eu, sub_00034E7E); /* call 0x00034E7E */

loc_003BFD9E: ;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFDAE; /* je: equal / zero */

loc_003BFDA6: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    goto loc_003BFDB4;

loc_003BFDAE: ;
    edx = MEM32(esi + 4);
    MEM32(edi + 8) = edx;

loc_003BFDB4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFDC1; /* je: equal / zero */

loc_003BFDBB: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    goto loc_003BFDC6;

loc_003BFDC1: ;
    edx = MEM32(esi);
    MEM32(edi + 0xC) = edx;

loc_003BFDC6: ;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(edi + 4) = MEM32(edi + 4) - 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003BFDD8u); RECOMP_ABI_CALL(0x0002BDC9u, sub_0002BDC9); /* call 0x0002BDC9 */

loc_003BFDD8: ;
    goto loc_003BFDE3;

loc_003BFDDA: ;
    MEM32(esi + 8) = 5;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BFDE3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    esi = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_003BFD60; /* jne: not equal / not zero */

loc_003BFDED: ;
    POP32(esp, ebp);

loc_003BFDEE: ;
    PUSH32(esp, 0x003BFDF3u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003BFDF3: ;
    ecx = eax;
    PUSH32(esp, 0x003BFDFAu); RECOMP_ABI_CALL(0x0001CD8Du, sub_0001CD8D); /* call 0x0001CD8D */

loc_003BFDFA: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x003BFE03u); RECOMP_ABI_CALL(0x0002F226u, sub_0002F226); /* call 0x0002F226 */

loc_003BFE03: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BFE0Fu); RECOMP_ABI_CALL(0x000166F9u, sub_000166F9); /* call 0x000166F9 */

loc_003BFE0F: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 8) = 2;
    MEM8(esi + 0x50A) = 1;
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1BC) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0xC);
    MEM32(esi) = edx;
    MEM32(esi + 4) = ebx;
    MEM32(edi + 0xC) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFE60; /* je: equal / zero */

loc_003BFE4C: ;
    MEM32(eax + 4) = esi;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003BFE60: ;
    eax = MEM32(edi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = eax;
    MEM32(edi + 0x10) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003BFE78: ;
    MEM8(edi + 0x14) = LO8(ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BFEE0
 * Original: 0x003BFEE0 - 0x003C0069 (393 bytes, 147 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BFEE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFFCD; /* je: equal / zero */

loc_003BFEF3: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFF0F; /* je: equal / zero */

loc_003BFEFA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFF0F; /* jne: not equal / not zero */

loc_003BFF01: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BFF0Cu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BFF0C: ;
    MEM32(esi + 8) = eax;

loc_003BFF0F: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    ebx = MEM32(ebp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_003BFF2F; /* jne: not equal / not zero */

loc_003BFF19: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFF2F; /* je: equal / zero */

loc_003BFF1D: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFF33; /* jne: not equal / not zero */

loc_003BFF26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003BFF2F: ;
    ecx = MEM32(esp + 0x14);

loc_003BFF33: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFF65; /* je: equal / zero */

loc_003BFF3A: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFF53; /* jne: not equal / not zero */

loc_003BFF41: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003BFF4Cu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BFF4C: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;

loc_003BFF53: ;
    esi = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xB (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003BFF67;

loc_003BFF65: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003BFF67: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003BFF7E; /* jne: not equal / not zero */

loc_003BFF6E: ;
    eax = ecx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003BFF77u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003BFF77: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx + 8) = eax;

loc_003BFF7E: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003BFF89u); RECOMP_ABI_CALL(0x00018233u, sub_00018233); /* call 0x00018233 */

loc_003BFF89: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003BFFFA; /* je: equal / zero */

loc_003BFF8F: ;
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = edx;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003BFFBE; /* jle: less or equal (signed <=) */

loc_003BFF9C: ;
    MEM32(eax + 0x24) = edx;
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(edi + 0x20) = eax;
    PUSH32(esp, 0x003BFFAFu); RECOMP_ABI_CALL(0x0002A929u, sub_0002A929); /* call 0x0002A929 */

loc_003BFFAF: ;
    ecx = eax;
    PUSH32(esp, 0x003BFFB6u); RECOMP_ABI_CALL(0x000198B8u, sub_000198B8); /* call 0x000198B8 */

loc_003BFFB6: ;
    MEM32(ebp + 0x480) = eax;
    goto loc_003BFFD4;

loc_003BFFBE: ;
    edx = MEM32(esp + 0x14);
    MEM32(edi + 0x20) = edx;
    MEM32(ebp + 0x480) = eax;
    goto loc_003BFFD4;

loc_003BFFCD: ;
    eax = MEM32(esp + 0x14);
    MEM32(edi + 0x20) = eax;

loc_003BFFD4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(esp + 0x14);
    MEM32(edi + 0x1C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003C0023; /* jne: not equal / not zero */

loc_003BFFDF: ;
    PUSH32(esp, 0x003BFFE4u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003BFFE4: ;
    ecx = eax;
    PUSH32(esp, 0x003BFFEBu); RECOMP_ABI_CALL(0x0001CD8Du, sub_0001CD8D); /* call 0x0001CD8D */

loc_003BFFEB: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x003BFFF4u); RECOMP_ABI_CALL(0x0002F226u, sub_0002F226); /* call 0x0002F226 */

loc_003BFFF4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003C0003; /* jne: not equal / not zero */

loc_003BFFFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003C0003: ;
    edx = MEM32(edi + 0xC);
    MEM32(esi) = edx;
    MEM32(esi + 4) = 0;
    MEM32(edi + 0xC) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C001D; /* je: equal / zero */

loc_003C0018: ;
    MEM32(eax + 4) = esi;
    goto loc_003C0020;

loc_003C001D: ;
    MEM32(edi + 8) = esi;

loc_003C0020: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C0023: ;
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003C002Eu); RECOMP_ABI_CALL(0x000166F9u, sub_000166F9); /* call 0x000166F9 */

loc_003C002E: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(ebx + 0x509) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003C004E; /* jne: not equal / not zero */

loc_003C003E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 2;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003C004E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 4;
    MEMF(ebx + 0x470) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003BFFFF
 * Original: 0x003BFFFF - 0x003C0069 (106 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BFFFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BFFFF: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    MEM32(eax + 4) = esi;
    goto loc_003C0020;

loc_003C001D: ;
    MEM32(edi + 8) = esi;

loc_003C0020: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003C002Eu); RECOMP_ABI_CALL(0x000166F9u, sub_000166F9); /* call 0x000166F9 */

loc_003C002E: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(ebx + 0x509) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003C004E; /* jne: not equal / not zero */

loc_003C003E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 2;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003C004E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 4;
    MEMF(ebx + 0x470) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0000
 * Original: 0x003C0000 - 0x003C0069 (105 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C0000: ;
    esp += 12; return; /* ret 8 */

    MEM32(eax + 4) = esi;
    goto loc_003C0020;

loc_003C001D: ;
    MEM32(edi + 8) = esi;

loc_003C0020: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003C002Eu); RECOMP_ABI_CALL(0x000166F9u, sub_000166F9); /* call 0x000166F9 */

loc_003C002E: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(ebx + 0x509) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003C004E; /* jne: not equal / not zero */

loc_003C003E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 2;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003C004E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 4;
    MEMF(ebx + 0x470) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0032
 * Original: 0x003C0032 - 0x003C0069 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0032(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C0032: ;
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(ebx + 0x509) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003C004E; /* jne: not equal / not zero */

loc_003C003E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 2;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003C004E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 8) = 4;
    MEMF(ebx + 0x470) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C00D0
 * Original: 0x003C00D0 - 0x003C00FA (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C00D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C00D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C00F8; /* je: equal / zero */

loc_003C00DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C00E0u); RECOMP_ABI_CALL(0x00034E7Eu, sub_00034E7E); /* call 0x00034E7E */

loc_003C00E0: ;
    PUSH32(esp, 0x003C00E5u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C00E5: ;
    ecx = esi + 4;
    edi = eax;
    PUSH32(esp, 0x003C00EFu); RECOMP_ABI_CALL(0x0001C7CFu, sub_0001C7CF); /* call 0x0001C7CF */

loc_003C00EF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C00F7u); RECOMP_ABI_CALL(0x0002BDC9u, sub_0002BDC9); /* call 0x0002BDC9 */

loc_003C00F7: ;
    POP32(esp, edi);

loc_003C00F8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0110
 * Original: 0x003C0110 - 0x003C012E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0110(void)
{

loc_003C0110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003C0119u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C0119: ;
    ecx = esi + 4;
    edi = eax;
    PUSH32(esp, 0x003C0123u); RECOMP_ABI_CALL(0x0002BA04u, sub_0002BA04); /* call 0x0002BA04 */

loc_003C0123: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C012Bu); RECOMP_ABI_CALL(0x0002BDC9u, sub_0002BDC9); /* call 0x0002BDC9 */

loc_003C012B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0140
 * Original: 0x003C0140 - 0x003C0152 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C0140: ;
    MEM32(ecx) = 0x834B88;
    MEM32(ecx + 0x2C) = 0;
    g_seh_ebp = ebp; sub_0001EEDF(); return; /* tail jmp 0x0001EEDF */

}

/**
 * sub_003C0160
 * Original: 0x003C0160 - 0x003C0664 (1284 bytes, 351 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0160(void)
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

loc_003C0160: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003C016Fu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C016F: ;
    esi = eax;
    ecx = esi;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x003C017Cu); RECOMP_ABI_CALL(0x00032FCAu, sub_00032FCA); /* call 0x00032FCA */

loc_003C017C: ;
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x68); /* mulss */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(ebp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003C01BA; /* je: equal / zero */

loc_003C01AA: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax + 0x470) = xmm0.f[0]; /* movss */

loc_003C01BA: ;
    eax = MEM32(ebp + 0x18);
    MEM32(eax + 0x94) = edi;
    edx = MEM32(0x87DA6C);
    ecx = eax + 0x98;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x87DA6C);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003C0231; /* je: equal / zero */

loc_003C020A: ;
    ebx = MEM32(esp + 0x68);
    edi = edi;

loc_003C0210: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003C021C; /* jne: not equal / not zero */

loc_003C0219: ;
    MEM32(ebp + 0x10) = ecx;

loc_003C021C: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C022Bu); RECOMP_ABI_CALL(0x00033E02u, sub_00033E02); /* call 0x00033E02 */

loc_003C022B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003C0210; /* jne: not equal / not zero */

loc_003C0231: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0406; /* je: equal / zero */

loc_003C0245: ;
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003C0250u); RECOMP_ABI_CALL(0x00034F50u, sub_00034F50); /* call 0x00034F50 */

loc_003C0250: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ebx = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003C02A7; /* jne: not equal / not zero */

loc_003C025B: ;
    ecx = esi;
    PUSH32(esp, 0x003C0262u); RECOMP_ABI_CALL(0x00034E7Eu, sub_00034E7E); /* call 0x00034E7E */

loc_003C0262: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0270; /* je: equal / zero */

loc_003C0268: ;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    goto loc_003C0276;

loc_003C0270: ;
    eax = MEM32(esi + 4);
    MEM32(ebp + 8) = eax;

loc_003C0276: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0283; /* je: equal / zero */

loc_003C027D: ;
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    goto loc_003C0288;

loc_003C0283: ;
    edx = MEM32(esi);
    MEM32(ebp + 0xC) = edx;

loc_003C0288: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(ebp + 4) = MEM32(ebp + 4) - 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C02A2u); RECOMP_ABI_CALL(0x0002BDC9u, sub_0002BDC9); /* call 0x0002BDC9 */

loc_003C02A2: ;
    goto loc_003C0354;

loc_003C02A7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x470)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C0354; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003C02C4: ;
    edi = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C02F6; /* je: equal / zero */

loc_003C02CE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C0)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x68);
    MEM32(edi + 0x5C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */

loc_003C02F6: ;
    ecx = MEM32(esi + 0x15C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C0354; /* jle: less or equal (signed <=) */

loc_003C0302: ;
    ecx = MEM32(esi + eax * 4 + 0x11C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x470); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C0349; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003C031B: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x6C); /* addss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x470)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + eax * 4 + 0x11C);
    edx = MEM32(edi + 0x40);
    MEM32(edi + edx * 4) = ecx;
    MEM32(edi + 0x40) = MEM32(edi + 0x40) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C0349: ;
    ecx = MEM32(esi + 0x15C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C0302; /* jl: less (signed <) */

loc_003C0354: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003C0245; /* jne: not equal / not zero */

loc_003C035E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AD340); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C0406; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AD340)) */

loc_003C0371: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0406; /* je: equal / zero */

loc_003C0379: ;
    ebx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    if (CMP_L(_fas, _fbs)) goto loc_003C03E9; /* jl: less (signed <) */

loc_003C038D: ;
    edx = ebx + -4;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi + 8;
    esi = edx * 4;
    edi = edi;

loc_003C03A0: ;
    ecx = MEM32(eax + -8);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + -4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    if ((_fa != 0)) goto loc_003C03A0; /* jne: not equal / not zero */

loc_003C03E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C0406; /* jge: greater or equal (signed >=) */

loc_003C03ED: ;
    /* nop */

loc_003C03F0: ;
    eax = MEM32(edi + esi * 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_003C03F0; /* jl: less (signed <) */

loc_003C0406: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C04C4; /* je: equal / zero */

loc_003C0411: ;
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = 0xB;
    if (CMP_EQ(_fa, _fb)) goto loc_003C0445; /* je: equal / zero */

loc_003C041D: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0432; /* jne: not equal / not zero */

loc_003C0424: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003C042Fu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C042F: ;
    MEM32(esi + 8) = eax;

loc_003C0432: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    goto loc_003C0447;

loc_003C0445: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003C0447: ;
    esi = MEM32(ebp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0474; /* je: equal / zero */

loc_003C044E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0463; /* jne: not equal / not zero */

loc_003C0455: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003C0460u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C0460: ;
    MEM32(esi + 8) = eax;

loc_003C0463: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(ebx) (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003C0476;

loc_003C0474: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003C0476: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C04C4; /* jne: not equal / not zero */

loc_003C047A: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C04C4; /* je: equal / zero */

loc_003C0481: ;
    edx = MEM32(eax + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C04BB; /* jle: less or equal (signed <=) */

loc_003C048A: ;
    ecx = edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(eax + 0x24) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003C04AB; /* jl: less (signed <) */

loc_003C0494: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C04AB; /* jge: greater or equal (signed >=) */

loc_003C0498: ;
    edx = MEM32(eax + 0x20);
    eax = edx + ecx * 4;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C04A9u); RECOMP_ABI_CALL(0x00016145u, sub_00016145); /* call 0x00016145 */

loc_003C04A9: ;
    goto loc_003C04C4;

loc_003C04AB: ;
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C04B9u); RECOMP_ABI_CALL(0x00016145u, sub_00016145); /* call 0x00016145 */

loc_003C04B9: ;
    goto loc_003C04C4;

loc_003C04BB: ;
    MEM32(ebp + 0x1C) = esi;
    MEM32(ebp + 0x20) = esi;
    MEM32(ebp + 0x24) = esi;

loc_003C04C4: ;
    eax = MEM32(0x87DA6C);
    ecx = MEM32(0x87DA70);
    edx = MEM32(0x87DA74);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003C0626; /* je: equal / zero */

loc_003C04F9: ;
    /* nop */

loc_003C0500: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003C050Bu); RECOMP_ABI_CALL(0x0001A817u, sub_0001A817); /* call 0x0001A817 */

loc_003C050B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x470)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1A4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1A8)); /* movss */
    edx = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1AC)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x3C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x40) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x44) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1B0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1B4)); /* movss */
    edx = MEM32(esp + 0x48);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1B8)); /* movss */
    eax = MEM32(esp + 0x4C);
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x54) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x58) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x5C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_003C0500; /* jne: not equal / not zero */

loc_003C0626: ;
    ebp = MEM32(ebp + 0x18);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp + 0x44;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x50;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = eax;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    MEM32(ebp) = ecx;
    POP32(esp, edi);
    MEM32(ebp + 4) = edx;
    POP32(esp, esi);
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C07B0
 * Original: 0x003C07B0 - 0x003C07DD (45 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C07B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C07B0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003C07C4u); RECOMP_ABI_CALL(0x00016145u, sub_00016145); /* call 0x00016145 */

loc_003C07C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C07D9; /* je: equal / zero */

loc_003C07C8: ;
    edx = MEM32(esi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edx + 0x488) = xmm0.f[0]; /* movss */

loc_003C07D9: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003C07F0
 * Original: 0x003C07F0 - 0x003C081E (46 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C07F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C07F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834B88;
    MEM32(esi + 0x2C) = 0;
    PUSH32(esp, 0x003C0805u); RECOMP_ABI_CALL(0x0001EEDFu, sub_0001EEDF); /* call 0x0001EEDF */

loc_003C0805: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C0818; /* je: equal / zero */

loc_003C080C: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003C0818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C0815u); } /* indirect call */
    }

loc_003C0818: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0830
 * Original: 0x003C0830 - 0x003C083A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0830(void)
{

loc_003C0830: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0840
 * Original: 0x003C0840 - 0x003C084E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0840: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 9 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003C0860
 * Original: 0x003C0860 - 0x003C086E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0860: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 0xA (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003C0880
 * Original: 0x003C0880 - 0x003C088E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0880: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 0xC (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003C08A0
 * Original: 0x003C08A0 - 0x003C08D4 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C08A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C08A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C08B6; /* jne: not equal / not zero */

loc_003C08AA: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C08B3u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C08B3: ;
    MEM32(esi + 8) = eax;

loc_003C08B6: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C08D0; /* jne: not equal / not zero */

loc_003C08C0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C08C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C08C4u); } /* indirect call */
    }

loc_003C08C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C08D0; /* jne: not equal / not zero */

loc_003C08CC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003C08D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C08F0
 * Original: 0x003C08F0 - 0x003C0918 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C08F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C08F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0906; /* jne: not equal / not zero */

loc_003C08FA: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C0903u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C0903: ;
    MEM32(esi + 8) = eax;

loc_003C0906: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 9 (16-bit) */
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
 * sub_003C0930
 * Original: 0x003C0930 - 0x003C0958 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0930: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0946; /* jne: not equal / not zero */

loc_003C093A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C0943u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C0943: ;
    MEM32(esi + 8) = eax;

loc_003C0946: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xA (16-bit) */
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
 * sub_003C0970
 * Original: 0x003C0970 - 0x003C0998 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0970: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0986; /* jne: not equal / not zero */

loc_003C097A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C0983u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C0983: ;
    MEM32(esi + 8) = eax;

loc_003C0986: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xC (16-bit) */
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
 * sub_003C09B0
 * Original: 0x003C09B0 - 0x003C09B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C09B0(void)
{

loc_003C09B0: ;
    eax = MEM32(0x9071F8);
    esp += 4; return; /* ret */

}

/**
 * sub_003C09C0
 * Original: 0x003C09C0 - 0x003C09C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C09C0(void)
{

loc_003C09C0: ;
    eax = MEM32(0x9071FC);
    esp += 4; return; /* ret */

}

/**
 * sub_003C09D0
 * Original: 0x003C09D0 - 0x003C09D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C09D0(void)
{

loc_003C09D0: ;
    eax = MEM32(0x907200);
    esp += 4; return; /* ret */

}

/**
 * sub_003C09E0
 * Original: 0x003C09E0 - 0x003C09E9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C09E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C09E0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_003C09F0
 * Original: 0x003C09F0 - 0x003C0A13 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C09F0(void)
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

loc_003C09F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0A06; /* je: equal / zero */

loc_003C09F8: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003C0A06: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C0A20
 * Original: 0x003C0A20 - 0x003C0A23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A20(void)
{

loc_003C0A20: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0A30
 * Original: 0x003C0A30 - 0x003C0A34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A30(void)
{

loc_003C0A30: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0A40
 * Original: 0x003C0A40 - 0x003C0A4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A40(void)
{

loc_003C0A40: ;
    MEM32(ecx + 0x100) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0A50
 * Original: 0x003C0A50 - 0x003C0A57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A50(void)
{

loc_003C0A50: ;
    eax = MEM32(ecx + 0x100);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0A60
 * Original: 0x003C0A60 - 0x003C0A6D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A60(void)
{

loc_003C0A60: ;
    eax = ecx;
    MEM32(eax + 0x100) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0A70
 * Original: 0x003C0A70 - 0x003C0A71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A70(void)
{

loc_003C0A70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0A80
 * Original: 0x003C0A80 - 0x003C0AA4 (36 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0A80: ;
    eax = MEM32(ecx + 0x100);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 8) = edx;
    eax = MEM32(ecx + 0x100);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 8 + 4) = edx;
    MEM32(ecx + 0x100) = MEM32(ecx + 0x100) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0AB0
 * Original: 0x003C0AB0 - 0x003C0ABA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0AB0(void)
{

loc_003C0AB0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0AC0
 * Original: 0x003C0AC0 - 0x003C0AD3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0AC0(void)
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

loc_003C0AC0: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0ACA; /* jne: not equal / not zero */

loc_003C0AC6: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_003C0ACA: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x14);
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C0AE0
 * Original: 0x003C0AE0 - 0x003C0B0B (43 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0AE0: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0B08; /* je: equal / zero */

loc_003C0AE7: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0AFB; /* jne: not equal / not zero */

loc_003C0AED: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_003C0AFB: ;
    ecx = MEM32(ecx + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C0B08u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003C0B08: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0B20
 * Original: 0x003C0B20 - 0x003C0B5E (62 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0B20(void)
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

loc_003C0B20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + edx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0B47; /* jne: not equal / not zero */

loc_003C0B35: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_003C0B47: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C0B70
 * Original: 0x003C0B70 - 0x003C0BAE (62 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0B70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
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
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0BAB; /* je: equal / zero */

loc_003C0B90: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0B9E; /* jne: not equal / not zero */

loc_003C0B96: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_003C0B9E: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x003C0BABu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003C0BAB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C0BC0
 * Original: 0x003C0BC0 - 0x003C0BC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0BC0(void)
{

loc_003C0BC0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0BD0
 * Original: 0x003C0BD0 - 0x003C0BD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0BD0(void)
{

loc_003C0BD0: ;
    eax = MEM32(0x9071E4);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0BE0
 * Original: 0x003C0BE0 - 0x003C0BEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0BE0(void)
{

loc_003C0BE0: ;
    eax = MEM32(esp + 4);
    MEM32(0x9071EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0BF0
 * Original: 0x003C0BF0 - 0x003C0BF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0BF0(void)
{

loc_003C0BF0: ;
    eax = MEM32(0x9071EC);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0C00
 * Original: 0x003C0C00 - 0x003C0C49 (73 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0C00: ;
    ecx = MEM32(0x9071E4);
    eax = MEM32(esp + 4);
    edx = MEM32(0x9071EC);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx + eax + 1;
    ecx = MEM32(edx + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0C48; /* je: equal / zero */

loc_003C0C2F: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C0C3B; /* jne: not equal / not zero */

loc_003C0C35: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_003C0C3B: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x003C0C48u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003C0C48: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0C60
 * Original: 0x003C0C60 - 0x003C0C64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0C60(void)
{

loc_003C0C60: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0C70
 * Original: 0x003C0C70 - 0x003C0C7A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0C70(void)
{

loc_003C0C70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0C80
 * Original: 0x003C0C80 - 0x003C0C85 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0C80(void)
{

loc_003C0C80: ;
    MEM8(ecx + 0x18) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0C90
 * Original: 0x003C0C90 - 0x003C0C95 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0C90(void)
{

loc_003C0C90: ;
    MEM8(ecx + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0CA0
 * Original: 0x003C0CA0 - 0x003C0CA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0CA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003C0CA0: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C0CB0
 * Original: 0x003C0CB0 - 0x003C0CBE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0CB0(void)
{

loc_003C0CB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0CD0
 * Original: 0x003C0CD0 - 0x003C0CDA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0CD0(void)
{

loc_003C0CD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0CE0
 * Original: 0x003C0CE0 - 0x003C0CEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0CE0(void)
{

loc_003C0CE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0CF0
 * Original: 0x003C0CF0 - 0x003C0D11 (33 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0CF0(void)
{

loc_003C0CF0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x14) = eax;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x28) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003C0D20
 * Original: 0x003C0D20 - 0x003C0D24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D20(void)
{

loc_003C0D20: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0D30
 * Original: 0x003C0D30 - 0x003C0D34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D30(void)
{

loc_003C0D30: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0D40
 * Original: 0x003C0D40 - 0x003C0D44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D40(void)
{

loc_003C0D40: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0D50
 * Original: 0x003C0D50 - 0x003C0D5F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D50(void)
{

loc_003C0D50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(ecx + 0x28) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003C0D5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C0D59u); } /* indirect call */
    }

loc_003C0D5C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0D70
 * Original: 0x003C0D70 - 0x003C0D74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D70(void)
{

loc_003C0D70: ;
    SET_LO8(eax, MEM8(ecx + 0xD));
    esp += 4; return; /* ret */

}

/**
 * sub_003C0D80
 * Original: 0x003C0D80 - 0x003C0D84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D80(void)
{

loc_003C0D80: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0D90
 * Original: 0x003C0D90 - 0x003C0D94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0D90(void)
{

loc_003C0D90: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0DA0
 * Original: 0x003C0DA0 - 0x003C0DA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0DA0(void)
{

loc_003C0DA0: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0DB0
 * Original: 0x003C0DB0 - 0x003C0DB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0DB0(void)
{

loc_003C0DB0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0DC0
 * Original: 0x003C0DC0 - 0x003C0DC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0DC0(void)
{

loc_003C0DC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0DD0
 * Original: 0x003C0DD0 - 0x003C0DD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0DD0(void)
{

loc_003C0DD0: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0DE0
 * Original: 0x003C0DE0 - 0x003C0E28 (72 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C0DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0DE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003C0DEAu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C0DEA: ;
    ebp = eax;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C0E1E; /* jle: less or equal (signed <=) */

loc_003C0DF4: ;
    PUSH32(esp, ebx);
    ebx = esi + 4;
    goto loc_003C0E00;

    /* nop */

loc_003C0E00: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDEADDEADu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0xDEADDEADu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C0E13; /* je: equal / zero */

loc_003C0E0B: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C0E13u); RECOMP_ABI_CALL(0x0001B4E2u, sub_0001B4E2); /* call 0x0001B4E2 */

loc_003C0E13: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C0E00; /* jl: less (signed <) */

loc_003C0E1D: ;
    POP32(esp, ebx);

loc_003C0E1E: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0E40
 * Original: 0x003C0E40 - 0x003C0E4F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0E40: ;
    eax = MEM32(ecx);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 4) = edx;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0E60
 * Original: 0x003C0E60 - 0x003C0E6B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0E60(void)
{

loc_003C0E60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0E70
 * Original: 0x003C0E70 - 0x003C0E76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0E70(void)
{

loc_003C0E70: ;
    eax = 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0E80
 * Original: 0x003C0E80 - 0x003C0E92 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0E80: ;
    eax = 0x10;

loc_003C0E85: ;
    MEM32(ecx) = 0;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C0E85; /* jne: not equal / not zero */

loc_003C0E91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0EA0
 * Original: 0x003C0EA0 - 0x003C0EC0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0EA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0x10;
    /* nop */

loc_003C0EB0: ;
    ecx = esi;
    PUSH32(esp, 0x003C0EB7u); RECOMP_ABI_CALL(0x000137ECu, sub_000137EC); /* call 0x000137EC */

loc_003C0EB7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C0EB0; /* jne: not equal / not zero */

loc_003C0EBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0ED0
 * Original: 0x003C0ED0 - 0x003C0EDD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0ED0(void)
{

loc_003C0ED0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0EE0
 * Original: 0x003C0EE0 - 0x003C0EE9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0EE0(void)
{

loc_003C0EE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0EF0
 * Original: 0x003C0EF0 - 0x003C0EF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0EF0(void)
{

loc_003C0EF0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0F00
 * Original: 0x003C0F00 - 0x003C0F11 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0F00(void)
{

loc_003C0F00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xAC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0F20
 * Original: 0x003C0F20 - 0x003C0F3D (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0F20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0F50
 * Original: 0x003C0F50 - 0x003C0F6D (29 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C0F50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x98;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C0F80
 * Original: 0x003C0F80 - 0x003C0F87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0F80(void)
{

loc_003C0F80: ;
    eax = MEM32(ecx + 0x480);
    esp += 4; return; /* ret */

}

/**
 * sub_003C0F90
 * Original: 0x003C0F90 - 0x003C0F98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0F90(void)
{

loc_003C0F90: ;
    MEM8(ecx + 0x508) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0FA0
 * Original: 0x003C0FA0 - 0x003C0FA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0FA0(void)
{

loc_003C0FA0: ;
    MEM8(ecx + 0x508) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0FB0
 * Original: 0x003C0FB0 - 0x003C0FB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0FB0(void)
{

loc_003C0FB0: ;
    SET_LO8(eax, MEM8(ecx + 0x508));
    esp += 4; return; /* ret */

}

/**
 * sub_003C0FC0
 * Original: 0x003C0FC0 - 0x003C0FC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0FC0(void)
{

loc_003C0FC0: ;
    SET_LO8(eax, MEM8(ecx + 0x509));
    esp += 4; return; /* ret */

}

/**
 * sub_003C0FD0
 * Original: 0x003C0FD0 - 0x003C0FD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0FD0(void)
{

loc_003C0FD0: ;
    eax = ecx + 0x498;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0FE0
 * Original: 0x003C0FE0 - 0x003C0FE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0FE0(void)
{

loc_003C0FE0: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003C0FF0
 * Original: 0x003C0FF0 - 0x003C0FFD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C0FF0(void)
{

loc_003C0FF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x490) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1000
 * Original: 0x003C1000 - 0x003C1007 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1000(void)
{

loc_003C1000: ;
    eax = MEM32(ecx + 0x490);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1010
 * Original: 0x003C1010 - 0x003C103B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1010: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1029; /* jne: not equal / not zero */

loc_003C101B: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C1026u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1026: ;
    MEM32(esi + 8) = eax;

loc_003C1029: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 9 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1050
 * Original: 0x003C1050 - 0x003C1054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003C1050: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C1060
 * Original: 0x003C1060 - 0x003C1064 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003C1060: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C1070
 * Original: 0x003C1070 - 0x003C1074 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1070(void)
{

loc_003C1070: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1080
 * Original: 0x003C1080 - 0x003C1084 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1080(void)
{

loc_003C1080: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1090
 * Original: 0x003C1090 - 0x003C1094 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1090(void)
{

loc_003C1090: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_003C10A0
 * Original: 0x003C10A0 - 0x003C10A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C10A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003C10A0: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C10B0
 * Original: 0x003C10B0 - 0x003C10B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C10B0(void)
{

loc_003C10B0: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_003C10C0
 * Original: 0x003C10C0 - 0x003C10C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C10C0(void)
{

loc_003C10C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C10D0
 * Original: 0x003C10D0 - 0x003C10D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C10D0(void)
{

loc_003C10D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C10E0
 * Original: 0x003C10E0 - 0x003C111B (59 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C10E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C10E0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(ecx + 0xC) = eax;
    MEMF(ecx + 0x470) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x47C) = LO8(eax);
    MEM32(ecx + 0x118) = eax;
    MEMF(ecx + 0x1BC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C0) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1130
 * Original: 0x003C1130 - 0x003C1172 (66 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1130: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C116D; /* je: equal / zero */

loc_003C113C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x114);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C116B; /* jle: less or equal (signed <=) */

loc_003C114A: ;
    /* nop */

loc_003C1150: ;
    eax = MEM32(esi + edi * 8 + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1166; /* jne: not equal / not zero */

loc_003C1158: ;
    ecx = MEM32(esi + edi * 8 + 0x14);
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003C1166u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1164u); } /* indirect call */
    }

loc_003C1166: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1150; /* jl: less (signed <) */

loc_003C116B: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_003C116D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1190
 * Original: 0x003C1190 - 0x003C11AF (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1190: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x88) = eax;
    MEMF(ecx + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003C11C0
 * Original: 0x003C11C0 - 0x003C1208 (72 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C11C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C11C0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003C11CAu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C11CA: ;
    ebp = eax;
    eax = MEM32(esi + 0x44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1201; /* jle: less or equal (signed <=) */

loc_003C11D5: ;
    PUSH32(esp, ebx);
    ebx = esi + 4;
    /* nop */

loc_003C11E0: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C11EAu); RECOMP_ABI_CALL(0x0001B4E2u, sub_0001B4E2); /* call 0x0001B4E2 */

loc_003C11EA: ;
    eax = MEM32(esi + 0x44);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C11E0; /* jl: less (signed <) */

loc_003C11F5: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x44) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003C1201: ;
    MEM32(esi + 0x44) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1220
 * Original: 0x003C1220 - 0x003C1271 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003C1220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1220: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003C122Au); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C122A: ;
    ebp = eax;
    eax = MEM32(esi + 0x88);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1267; /* jle: less or equal (signed <=) */

loc_003C1238: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x48;
    /* nop */

loc_003C1240: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C124Au); RECOMP_ABI_CALL(0x0001B4E2u, sub_0001B4E2); /* call 0x0001B4E2 */

loc_003C124A: ;
    eax = MEM32(esi + 0x88);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1240; /* jl: less (signed <) */

loc_003C1258: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x88) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003C1267: ;
    MEM32(esi + 0x88) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1290
 * Original: 0x003C1290 - 0x003C12A0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003C1298u); RECOMP_ABI_CALL(0x00034C1Cu, sub_00034C1C); /* call 0x00034C1C */

loc_003C1298: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002C2A1(); return; /* tail jmp 0x0002C2A1 */

}

/**
 * sub_003C12B0
 * Original: 0x003C12B0 - 0x003C13CB (283 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C12B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C12B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = 0;
    edi = ecx + 0x15C;
    /* nop */

loc_003C12D0: ;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1335; /* jle: less or equal (signed <=) */

loc_003C12D8: ;
    ebp = edi + -64;
    goto loc_003C12E0;

    /* nop */

loc_003C12E0: ;
    eax = MEM32(ebp);
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C12FB; /* jne: not equal / not zero */

loc_003C12ED: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003C12F8u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C12F8: ;
    MEM32(esi + 8) = eax;

loc_003C12FB: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1313; /* jne: not equal / not zero */

loc_003C1305: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C130Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1307u); } /* indirect call */
    }

loc_003C130A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C13C1; /* je: equal / zero */

loc_003C1313: ;
    PUSH32(esp, 0x003C1318u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C1318: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003C1323u); RECOMP_ABI_CALL(0x0002BEDCu, sub_0002BEDC); /* call 0x0002BEDC */

loc_003C1323: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C13C1; /* jne: not equal / not zero */

loc_003C132B: ;
    eax = MEM32(edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C12E0; /* jl: less (signed <) */

loc_003C1335: ;
    eax = MEM32(edi + 0x44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1360; /* jle: less or equal (signed <=) */

loc_003C133E: ;
    ebp = edi + 4;

loc_003C1341: ;
    PUSH32(esp, 0x003C1346u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C1346: ;
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x003C1351u); RECOMP_ABI_CALL(0x0002BEDCu, sub_0002BEDC); /* call 0x0002BEDC */

loc_003C1351: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C13C1; /* jne: not equal / not zero */

loc_003C1355: ;
    eax = MEM32(edi + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1341; /* jl: less (signed <) */

loc_003C1360: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x114;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003C12D0; /* jl: less (signed <) */

loc_003C1378: ;
    esi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x22C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x22C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C1384: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C13AE; /* jle: less or equal (signed <=) */

loc_003C138C: ;
    ebp = esi + 4;
    /* nop */

loc_003C1390: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C1399u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C1399: ;
    ecx = eax;
    PUSH32(esp, 0x003C13A0u); RECOMP_ABI_CALL(0x0002BEDCu, sub_0002BEDC); /* call 0x0002BEDC */

loc_003C13A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C13C1; /* jne: not equal / not zero */

loc_003C13A4: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1390; /* jl: less (signed <) */

loc_003C13AE: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1384; /* jl: less (signed <) */

loc_003C13B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C13C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003C1420
 * Original: 0x003C1420 - 0x003C1423 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1420(void)
{

loc_003C1420: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1430
 * Original: 0x003C1430 - 0x003C1440 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1430(void)
{

loc_003C1430: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1450
 * Original: 0x003C1450 - 0x003C1451 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1450(void)
{

loc_003C1450: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1460
 * Original: 0x003C1460 - 0x003C148A (42 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1460: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_003C146E; /* je: equal / zero */

loc_003C146B: ;
    MEM32(edx + 8) = eax;

loc_003C146E: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C14A0
 * Original: 0x003C14A0 - 0x003C14E0 (64 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C14A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C14A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = esi;
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003C14C2; /* je: equal / zero */

loc_003C14AD: ;
    /* nop */

loc_003C14B0: ;
    edx = eax;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C14B0; /* jne: not equal / not zero */

loc_003C14C2: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C14CC; /* je: equal / zero */

loc_003C14C9: ;
    MEM32(eax + 8) = edx;

loc_003C14CC: ;
    MEM32(esi + 8) = 0;
    eax = MEM32(ecx + 4);
    MEM32(edx + 0xC) = eax;
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C14F0
 * Original: 0x003C14F0 - 0x003C14F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C14F0(void)
{

loc_003C14F0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1500
 * Original: 0x003C1500 - 0x003C1525 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1500: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x10) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003C151F; /* jl: less (signed <) */

loc_003C150F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C151F; /* jge: greater or equal (signed >=) */

loc_003C1514: ;
    edx = MEM32(ecx + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003C151F: ;
    eax = MEM32(ecx + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1530
 * Original: 0x003C1530 - 0x003C1534 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1530(void)
{

loc_003C1530: ;
    eax = MEM32(ecx + 0x6C);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1540
 * Original: 0x003C1540 - 0x003C1552 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1540: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C154Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003C154E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003C1560
 * Original: 0x003C1560 - 0x003C15DB (123 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003C1560: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x6C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C156F; /* jle: less or equal (signed <=) */

loc_003C1569: ;
    eax = edx + 1;
    MEM32(ecx + 0x6C) = eax;

loc_003C156F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
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
    if (CMP_LE(_fas, _fbs)) goto loc_003C15D8; /* jle: less or equal (signed <=) */

loc_003C1598: ;
    ecx = MEM32(ecx + 0x64);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + ecx + -12); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C15C7; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003C15BC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

loc_003C15C7: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */

loc_003C15D8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003C1600
 * Original: 0x003C1600 - 0x003C1628 (40 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1600: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x64);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + edx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = edx;
    ecx = MEM32(ecx + 0x64);
    edx = MEM32(eax + ecx + 4);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003C1640
 * Original: 0x003C1640 - 0x003C1655 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1654; /* je: equal / zero */

loc_003C1648: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C1654u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1651u); } /* indirect call */
    }

loc_003C1654: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1660
 * Original: 0x003C1660 - 0x003C1663 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1660(void)
{

loc_003C1660: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1670
 * Original: 0x003C1670 - 0x003C1671 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1670(void)
{

loc_003C1670: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C1680
 * Original: 0x003C1680 - 0x003C16C4 (68 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1680: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1695; /* jl: less (signed <) */

loc_003C1688: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C1695; /* jge: greater or equal (signed >=) */

loc_003C168D: ;
    ecx = MEM32(ecx + 0x44);
    ecx = ecx + eax * 4;
    goto loc_003C1698;

loc_003C1695: ;
    ecx = MEM32(ecx + 0x44);

loc_003C1698: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C16B0; /* jne: not equal / not zero */

loc_003C16A2: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003C16ADu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C16AD: ;
    MEM32(esi + 8) = eax;

loc_003C16B0: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xA (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C16E0
 * Original: 0x003C16E0 - 0x003C16E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16E0(void)
{

loc_003C16E0: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_003C16F0
 * Original: 0x003C16F0 - 0x003C16F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C16F0(void)
{

loc_003C16F0: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1700
 * Original: 0x003C1700 - 0x003C1720 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1700: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1718; /* jl: less (signed <) */

loc_003C1708: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x30) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C1718; /* jge: greater or equal (signed >=) */

loc_003C170D: ;
    ecx = MEM32(ecx + 0x34);
    eax = ecx + eax * 4;
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

loc_003C1718: ;
    ecx = MEM32(ecx + 0x34);
    eax = MEM32(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1730
 * Original: 0x003C1730 - 0x003C1734 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1730(void)
{

loc_003C1730: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_003C1740
 * Original: 0x003C1740 - 0x003C1765 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C1740: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x40) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003C175F; /* jl: less (signed <) */

loc_003C174F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C175F; /* jge: greater or equal (signed >=) */

loc_003C1754: ;
    edx = MEM32(ecx + 0x3C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003C175F: ;
    eax = MEM32(ecx + 0x3C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1770
 * Original: 0x003C1770 - 0x003C17BD (77 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1770(void)
{

loc_003C1770: ;
    eax = ecx;
    MEM32(eax + 0xF0) = 0;
    edx = MEM32(0x87DA6C);
    ecx = eax + 0xF4;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x87DA6C);
    ecx = eax + 0x100;
    MEM32(ecx) = edx;
    edx = MEM32(0x87DA70);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C17D0
 * Original: 0x003C17D0 - 0x003C1888 (184 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C17D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C17D0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = eax;
    MEM8(ecx + 0x47C) = LO8(eax);
    MEM32(ecx + 0x118) = eax;
    MEMF(ecx + 0x1BC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C0) = xmm0.f[0]; /* movss */
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0x470) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    MEM32(ecx + 0x15C) = eax;
    MEM32(ecx + 0x1A0) = eax;
    MEMF(ecx + 0x1BC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C0) = xmm0.f[0]; /* movss */
    edx = ecx + 0x22C;
    esi = 0x10;

loc_003C1827: ;
    MEM32(edx) = eax;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C1827; /* jne: not equal / not zero */

loc_003C182F: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    SET_LO8(edx, 1);
    MEMF(ecx + 0x474) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x478) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM8(ecx + 0x47C) = LO8(eax);
    MEM32(ecx + 0x480) = eax;
    MEM32(ecx + 0x490) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM8(ecx + 0x46C) = LO8(eax);
    MEM8(ecx + 0x508) = LO8(edx);
    MEM8(ecx + 0x509) = LO8(eax);
    MEM8(ecx + 0x50A) = LO8(edx);
    MEMF(ecx + 0x488) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C18C0
 * Original: 0x003C18C0 - 0x003C1A7F (447 bytes, 150 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C18C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C18C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, 0x003C18CDu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C18CD: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A78; /* je: equal / zero */

loc_003C18DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_003C18E0: ;
    edi = MEM32(esi + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C18F8; /* jne: not equal / not zero */

loc_003C18EA: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C18F5u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C18F5: ;
    MEM32(edi + 8) = eax;

loc_003C18F8: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1A6A; /* jne: not equal / not zero */

loc_003C1906: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C190Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C190Au); } /* indirect call */
    }

loc_003C190D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1A6A; /* jne: not equal / not zero */

loc_003C1916: ;
    edi = MEM32(edi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C192E; /* jne: not equal / not zero */

loc_003C1920: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C192Bu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C192B: ;
    MEM32(edi + 8) = eax;

loc_003C192E: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 9 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = eax + eax * 8;
    eax = MEM32(esp + 0x10);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ebp = eax + edx * 4 + 0x22C;
    if (CMP_EQ(_fa, _fb)) goto loc_003C19C3; /* je: equal / zero */

loc_003C195D: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x10), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C19C3; /* je: equal / zero */

loc_003C1965: ;
    eax = MEM32(ebp);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C19BB; /* jle: less or equal (signed <=) */

loc_003C1973: ;
    edx = ebp + 4;
    goto loc_003C1980;

    /* nop */
    /* nop */

loc_003C1980: ;
    eax = MEM32(edx);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x10) = edi;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C199D; /* je: equal / zero */

loc_003C199A: ;
    MEM32(ecx + 8) = eax;

loc_003C199D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1980; /* jl: less (signed <) */

loc_003C19BB: ;
    eax = MEM32(esi + 4);
    goto loc_003C1A5C;

loc_003C19C3: ;
    edx = MEM32(eax + 0x50C);
    MEM32(0x9071EC) = edx;
    eax = MEM32(eax + 0x50C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003C19DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C19DAu); } /* indirect call */
    }

loc_003C19DD: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    MEM32(edi + 0x28) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003C19EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C19E8u); } /* indirect call */
    }

loc_003C19EB: ;
    edx = MEM32(edi + 0x18);
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | edx;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A6A; /* je: equal / zero */

loc_003C19F9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ecx = eax;

loc_003C1A00: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    MEM32(ecx + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A1F; /* je: equal / zero */

loc_003C1A15: ;
    edx = MEM32(ebp);
    MEM32(ebp + edx * 4 + 4) = ecx;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C1A1F: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1A00; /* jne: not equal / not zero */

loc_003C1A26: ;
    ecx = eax;
    goto loc_003C1A30;

    /* nop */

loc_003C1A30: ;
    edx = ecx;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1A30; /* jne: not equal / not zero */

loc_003C1A42: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A4C; /* je: equal / zero */

loc_003C1A49: ;
    MEM32(ecx + 8) = edx;

loc_003C1A4C: ;
    MEM32(eax + 8) = 0;
    ecx = MEM32(esi + 4);
    MEM32(edx + 0xC) = ecx;
    MEM32(esi + 4) = eax;

loc_003C1A5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1A6A; /* je: equal / zero */

loc_003C1A60: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C1A6Au); RECOMP_ABI_CALL(0x000305E0u, sub_000305E0); /* call 0x000305E0 */

loc_003C1A6A: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C18E0; /* jne: not equal / not zero */

loc_003C1A75: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003C1A78: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1AF0
 * Original: 0x003C1AF0 - 0x003C1C9B (427 bytes, 135 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1AF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C1C94; /* je: equal / zero */

loc_003C1B04: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    goto loc_003C1B10;

    /* nop */

loc_003C1B10: ;
    ebx = MEM32(esi + 0x14);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_003C1B2B; /* jne: not equal / not zero */

loc_003C1B1D: ;
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003C1B28u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1B28: ;
    MEM32(ebx + 8) = eax;

loc_003C1B2B: ;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1BD9; /* jne: not equal / not zero */

loc_003C1B39: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C1B3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1B3Bu); } /* indirect call */
    }

loc_003C1B3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1BD9; /* jne: not equal / not zero */

loc_003C1B47: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003C1B55u); RECOMP_ABI_CALL(0x00020834u, sub_00020834); /* call 0x00020834 */

loc_003C1B55: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1BC4; /* je: equal / zero */

loc_003C1B5B: ;
    ebx = MEM32(eax + 0x14);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1B73; /* jne: not equal / not zero */

loc_003C1B65: ;
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003C1B70u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1B70: ;
    MEM32(ebx + 8) = eax;

loc_003C1B73: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1C87; /* jne: not equal / not zero */

loc_003C1B81: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C1B88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1B85u); } /* indirect call */
    }

loc_003C1B88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1C87; /* jne: not equal / not zero */

loc_003C1B91: ;
    ebx = MEM32(ebx + 0x34);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1BA9; /* jne: not equal / not zero */

loc_003C1B9B: ;
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003C1BA6u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1BA6: ;
    MEM32(ebx + 8) = eax;

loc_003C1BA9: ;
    eax = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 9 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1C87; /* jne: not equal / not zero */

loc_003C1BC4: ;
    edx = MEM32(edi + 0x88);
    MEM32(edi + edx * 4 + 0x48) = esi;
    MEM32(edi + 0x88) = MEM32(edi + 0x88) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003C1C87;

loc_003C1BD9: ;
    eax = MEM32(edi + 0x44);
    edx = MEM32(esi + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1C4B; /* jle: less or equal (signed <=) */

loc_003C1BE5: ;
    ecx = edi + 4;

loc_003C1BE8: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1C00; /* je: equal / zero */

loc_003C1BEE: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C1C17; /* je: equal / zero */

loc_003C1BF3: ;
    eax = MEM32(edi + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1BE8; /* jl: less (signed <) */

loc_003C1BFE: ;
    goto loc_003C1C4B;

loc_003C1C00: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x24) = eax;
    goto loc_003C1C4B;

loc_003C1C17: ;
    ecx = MEM32(edi + ebx * 4 + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    eax = MEM32(ecx + 0x28);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = edx;
    PUSH32(esp, 0x003C1C3Bu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C1C3B: ;
    ecx = MEM32(edi + ebx * 4 + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003C1C47u); RECOMP_ABI_CALL(0x0001B4E2u, sub_0001B4E2); /* call 0x0001B4E2 */

loc_003C1C47: ;
    MEM32(edi + ebx * 4 + 4) = esi;

loc_003C1C4B: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1C87; /* jne: not equal / not zero */

loc_003C1C52: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    MEM32(edi + eax * 4 + 4) = esi;
    eax = MEM32(edi + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C4074)); /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(edi + 0x44) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = eax;

loc_003C1C87: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    esi = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_003C1B10; /* jne: not equal / not zero */

loc_003C1C91: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003C1C94: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C1D10
 * Original: 0x003C1D10 - 0x003C1D93 (131 bytes, 54 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1D10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C1D8A; /* je: equal / zero */

loc_003C1D1E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    /* nop */

loc_003C1D30: ;
    ebx = MEM32(esi + 0x14);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1D48; /* jne: not equal / not zero */

loc_003C1D3A: ;
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003C1D45u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1D45: ;
    MEM32(ebx + 8) = eax;

loc_003C1D48: ;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1D74; /* jne: not equal / not zero */

loc_003C1D52: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C1D57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1D54u); } /* indirect call */
    }

loc_003C1D57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1D74; /* jne: not equal / not zero */

loc_003C1D5C: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003C1D70u); RECOMP_ABI_CALL(0x000261EEu, sub_000261EE); /* call 0x000261EE */

loc_003C1D70: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003C1D79;

loc_003C1D74: ;
    MEM32(ebp + edi * 4) = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C1D79: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1D30; /* jne: not equal / not zero */

loc_003C1D80: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_003C1D8A: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C1DC0
 * Original: 0x003C1DC0 - 0x003C1EC4 (260 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1DC0: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    MEM32(esp + 8) = ebx;
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003C1EB9; /* je: equal / zero */

loc_003C1DDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_003C1DE1: ;
    esi = MEM32(ebp + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1DF9; /* jne: not equal / not zero */

loc_003C1DEB: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C1DF6u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1DF6: ;
    MEM32(esi + 8) = eax;

loc_003C1DF9: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1EAC; /* jne: not equal / not zero */

loc_003C1E07: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C1E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1E0Bu); } /* indirect call */
    }

loc_003C1E0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1EAC; /* jne: not equal / not zero */

loc_003C1E17: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003C1E22u); RECOMP_ABI_CALL(0x00031279u, sub_00031279); /* call 0x00031279 */

loc_003C1E22: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1EAC; /* jle: less or equal (signed <=) */

loc_003C1E2D: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003C1E44u); RECOMP_ABI_CALL(0x000261EEu, sub_000261EE); /* call 0x000261EE */

loc_003C1E44: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x54) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003C1E6C; /* jle: less or equal (signed <=) */

loc_003C1E52: ;
    edx = MEM32(esp + ecx * 4 + 0x78);
    edi = MEM32(esp + 0x54);
    MEM32(esp + edi * 4 + 0x14) = edx;
    edx = MEM32(esp + 0x54);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x54) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003C1E52; /* jl: less (signed <) */

loc_003C1E6C: ;
    eax = MEM32(esi + 0x40);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C1EAC; /* jle: less or equal (signed <=) */

loc_003C1E75: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1E86; /* jl: less (signed <) */

loc_003C1E79: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C1E86; /* jge: greater or equal (signed >=) */

loc_003C1E7E: ;
    eax = MEM32(esi + 0x44);
    eax = eax + edi * 4;
    goto loc_003C1E89;

loc_003C1E86: ;
    eax = MEM32(esi + 0x44);

loc_003C1E89: ;
    ebx = MEM32(eax);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1EA0; /* jne: not equal / not zero */

loc_003C1E92: ;
    ecx = ebx + 4;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003C1E9Du); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1E9D: ;
    MEM32(ebx + 8) = eax;

loc_003C1EA0: ;
    eax = MEM32(esi + 0x40);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1E75; /* jl: less (signed <) */

loc_003C1EA8: ;
    ebx = MEM32(esp + 0x10);

loc_003C1EAC: ;
    ebp = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1DE1; /* jne: not equal / not zero */

loc_003C1EB7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003C1EB9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C1F10
 * Original: 0x003C1F10 - 0x003C2026 (278 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C1F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C1F10: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x87DA74);
    edx = MEM32(0x87DA6C);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x87DA70);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx + 0x118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C1FED; /* je: equal / zero */

loc_003C1F4D: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1F66; /* jne: not equal / not zero */

loc_003C1F58: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C1F63u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1F63: ;
    MEM32(esi + 8) = eax;

loc_003C1F66: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1FEB; /* jne: not equal / not zero */

loc_003C1F71: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C1F79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1F76u); } /* indirect call */
    }

loc_003C1F79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1FEB; /* jne: not equal / not zero */

loc_003C1F7E: ;
    eax = MEM32(ebp + 0x40);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003C1FEB; /* jle: less or equal (signed <=) */

loc_003C1F8B: ;
    PUSH32(esp, edi);
    /* nop */

loc_003C1F90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1FA1; /* jl: less (signed <) */

loc_003C1F94: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C1FA1; /* jge: greater or equal (signed >=) */

loc_003C1F99: ;
    eax = MEM32(ebp + 0x44);
    eax = eax + esi * 4;
    goto loc_003C1FA4;

loc_003C1FA1: ;
    eax = MEM32(ebp + 0x44);

loc_003C1FA4: ;
    edi = MEM32(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C1FBB; /* jne: not equal / not zero */

loc_003C1FAD: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003C1FB8u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C1FB8: ;
    MEM32(edi + 8) = eax;

loc_003C1FBB: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xA (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x494);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C1FE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C1FDEu); } /* indirect call */
    }

loc_003C1FE1: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C1F90; /* jl: less (signed <) */

loc_003C1FEA: ;
    POP32(esp, edi);

loc_003C1FEB: ;
    POP32(esp, ebp);
    POP32(esp, esi);

loc_003C1FED: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = ebx + 0x1A4;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1B0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003C2070
 * Original: 0x003C2070 - 0x003C20D9 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2070: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    esi = ebx + 0x118;
    PUSH32(esp, 0x003C2086u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C2086: ;
    ebp = eax;
    eax = MEM32(esi + 0x44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C20AD; /* jle: less or equal (signed <=) */

loc_003C2091: ;
    ebx = esi + 4;

loc_003C2094: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C209Eu); RECOMP_ABI_CALL(0x0001B4E2u, sub_0001B4E2); /* call 0x0001B4E2 */

loc_003C209E: ;
    eax = MEM32(esi + 0x44);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C2094; /* jl: less (signed <) */

loc_003C20A9: ;
    ebx = MEM32(esp + 0x10);

loc_003C20AD: ;
    ecx = esi;
    MEM32(esi + 0x44) = 0;
    PUSH32(esp, 0x003C20BBu); RECOMP_ABI_CALL(0x0002C2A1u, sub_0002C2A1); /* call 0x0002C2A1 */

loc_003C20BB: ;
    esi = ebx + 0x22C;
    edi = 0x10;

loc_003C20C6: ;
    ecx = esi;
    PUSH32(esp, 0x003C20CDu); RECOMP_ABI_CALL(0x000137ECu, sub_000137EC); /* call 0x000137EC */

loc_003C20CD: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C20C6; /* jne: not equal / not zero */

loc_003C20D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2100
 * Original: 0x003C2100 - 0x003C210B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2100: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x118;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002C2A1(); return; /* tail jmp 0x0002C2A1 */

}

/**
 * sub_003C2110
 * Original: 0x003C2110 - 0x003C2173 (99 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2110: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x480);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2161; /* je: equal / zero */

loc_003C211D: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C2161; /* jle: less or equal (signed <=) */

loc_003C2124: ;
    eax = MEM32(eax + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C213F; /* jne: not equal / not zero */

loc_003C2131: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C213Cu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C213C: ;
    MEM32(esi + 8) = eax;

loc_003C213F: ;
    esi = MEM32(esi + 8);
    ecx = MEM32(0x9071F8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xC (16-bit) */
    PUSH32(esp, ecx);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C215Eu); RECOMP_ABI_CALL(0x000189AEu, sub_000189AE); /* call 0x000189AE */

loc_003C215E: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_003C2161: ;
    edx = MEM32(0x9071F8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x003C2171u); RECOMP_ABI_CALL(0x000189AEu, sub_000189AE); /* call 0x000189AE */

loc_003C2171: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2190
 * Original: 0x003C2190 - 0x003C22C7 (311 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2190(void)
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

loc_003C2190: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003C21B5; /* jne: not equal / not zero */

loc_003C21A7: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C21B2u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C21B2: ;
    MEM32(esi + 8) = eax;

loc_003C21B5: ;
    esi = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x28);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    MEM32(esp + 0x10) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x14) = edx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fca = xmm2.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C21EE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(esp + 0x14)) */

loc_003C21E0: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(0x7A9980); /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_003C21EE: ;
    SET_LO8(eax, MEM8(edi + 0x508));
    MEM8(esp + 0x1C) = LO8(eax);
    eax = MEM32(ebx + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C22BD; /* jle: less or equal (signed <=) */

loc_003C2205: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(ebx + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003C221D; /* jl: less (signed <) */

loc_003C2210: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C221D; /* jge: greater or equal (signed >=) */

loc_003C2215: ;
    ecx = MEM32(ebx + 0x1C);
    eax = ecx + ebp * 4;
    goto loc_003C2220;

loc_003C221D: ;
    eax = MEM32(ebx + 0x1C);

loc_003C2220: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C223D; /* jne: not equal / not zero */

loc_003C2229: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003C2234u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2234: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esi + 8) = eax;

loc_003C223D: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2260; /* jne: not equal / not zero */

loc_003C2255: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x490)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x490) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C22B1; /* je: equal / zero */

loc_003C2260: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2272; /* je: equal / zero */

loc_003C226C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_003C2275;

loc_003C2272: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_003C2275: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C22B1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_003C227E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C22B1; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003C2289: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C2292; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003C228E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003C2297;

loc_003C2292: ;
    ecx = 1;

loc_003C2297: ;
    edx = MEM32(edi + 0x114);
    MEM32(edi + edx * 8 + 0x14) = eax;
    eax = MEM32(edi + 0x114);
    MEM32(edi + eax * 8 + 0x18) = ecx;
    MEM32(edi + 0x114) = MEM32(edi + 0x114) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x114)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003C22B1: ;
    eax = MEM32(ebx + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C2205; /* jl: less (signed <) */

loc_003C22BD: ;
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
 * sub_003C2320
 * Original: 0x003C2320 - 0x003C2354 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2320: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C233D; /* je: equal / zero */

loc_003C232A: ;
    ecx = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C233D; /* je: equal / zero */

loc_003C2331: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C233Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C233Au); } /* indirect call */
    }

loc_003C233D: ;
    MEM32(esi + 0x64) = 0;
    MEM32(esi + 0x68) = 0;
    MEM32(esi + 0x6C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2370
 * Original: 0x003C2370 - 0x003C244E (222 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2370: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x208) = ebx;
    ecx = MEM32(0x87DA6C);
    eax = esi + 0x20C;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x87DA6C);
    edx = esi + 0x218;
    MEM32(edx) = eax;
    ecx = MEM32(0x87DA70);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x87DA74);
    MEM32(edx + 8) = eax;
    ecx = esi + 0x498;
    MEM8(esi + 0x46C) = LO8(ebx);
    MEMF(esi + 0x470) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x474) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x478) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x490) = ebx;
    MEM32(esi + 0x494) = ebx;
    PUSH32(esp, 0x003C240Bu); RECOMP_ABI_CALL(0x00020B59u, sub_00020B59); /* call 0x00020B59 */

loc_003C240B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x50C) = ebx;
    MEM8(esi + 0x47C) = LO8(ebx);
    MEM32(esi + 0x15C) = ebx;
    MEM32(esi + 0x1A0) = ebx;
    MEMF(esi + 0x1BC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    eax = esi + 0x22C;
    ecx = 0x10;

loc_003C2441: ;
    MEM32(eax) = ebx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C2441; /* jne: not equal / not zero */

loc_003C2449: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2490
 * Original: 0x003C2490 - 0x003C2495 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2490: ;
    g_seh_ebp = ebp; sub_00034E7E(); return; /* tail jmp 0x00034E7E */

}

/**
 * sub_003C24A0
 * Original: 0x003C24A0 - 0x003C24C1 (33 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C24A0(void)
{

loc_003C24A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x494) = eax;
    PUSH32(esp, 0x003C24B2u); RECOMP_ABI_CALL(0x00017DF6u, sub_00017DF6); /* call 0x00017DF6 */

loc_003C24B2: ;
    ecx = esi + 0x118;
    PUSH32(esp, 0x003C24BDu); RECOMP_ABI_CALL(0x0002C2A1u, sub_0002C2A1); /* call 0x0002C2A1 */

loc_003C24BD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C24D0
 * Original: 0x003C24D0 - 0x003C2523 (83 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C24D0(void)
{

loc_003C24D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x003C24DAu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C24DA: ;
    ecx = eax;
    PUSH32(esp, 0x003C24E1u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C24E1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = eax;
    eax = MEM32(esp + 0x10);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x28) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0x14) = eax;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x003C251Bu); RECOMP_ABI_CALL(0x000305E0u, sub_000305E0); /* call 0x000305E0 */

loc_003C251B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C2540
 * Original: 0x003C2540 - 0x003C2762 (546 bytes, 158 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2540(void)
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

loc_003C2540: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_003C2578; /* jle: less or equal (signed <=) */

loc_003C2553: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C4074)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x1C);
    edx = esi + 4;

loc_003C2568: ;
    ebx = MEM32(edx);
    MEM32(ebx + 0x24) = edi;
    ebx = MEM32(esi + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C2568; /* jl: less (signed <) */

loc_003C2578: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C2581u); RECOMP_ABI_CALL(0x00020834u, sub_00020834); /* call 0x00020834 */

loc_003C2581: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xF0) = 0;
    edx = MEM32(0x87DA6C);
    ecx = esi + 0xF4;
    MEM32(ecx) = edx;
    eax = MEM32(0x87DA70);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x87DA74);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x87DA6C);
    eax = esi + 0x100;
    MEM32(eax) = ecx;
    edx = MEM32(0x87DA70);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x87DA74);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x44);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003C2714; /* jle: less or equal (signed <=) */

loc_003C25E4: ;
    edi = esi + 4;
    PUSH32(esp, ebp);

loc_003C25E8: ;
    eax = MEM32(edi);
    edx = MEM32(eax + 0x24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x14) = edx;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C263A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_003C25FB: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2622; /* je: equal / zero */

loc_003C2602: ;
    ebx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C261B; /* jne: not equal / not zero */

loc_003C2609: ;
    edx = MEM32(esi + 0x88);
    MEM32(esi + edx * 4 + 0x48) = eax;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003C2622;

loc_003C261B: ;
    MEM32(eax + 0x10) = 0;

loc_003C2622: ;
    ebx = MEM32(esi + 0x44);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x44) = ebx;
    eax = ebx;
    eax = MEM32(esi + eax * 4 + 4);
    MEM32(edi) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003C2700;

loc_003C263A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003C2646u); RECOMP_ABI_CALL(0x0002B36Fu, sub_0002B36F); /* call 0x0002B36F */

loc_003C2646: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(0x9071EC);
    ebx = MEM32(edx + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + ebx + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C266F; /* jne: not equal / not zero */

loc_003C2668: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    goto loc_003C2679;

loc_003C266F: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x14);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_003C2679: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA820); /* comiss */
    if ((_fca >= _fcb)) goto loc_003C2684; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7AA820)) */

loc_003C2682: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003C2684: ;
    edx = MEM32(edi);
    ebp = MEM32(edx + 0x14);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C269E; /* jne: not equal / not zero */

loc_003C2690: ;
    eax = ebp + 4;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C269Bu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C269B: ;
    MEM32(ebp + 8) = eax;

loc_003C269E: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 1 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_003C26C4; /* je: equal / zero */

loc_003C26BC: ;
    ecx = MEM32(edi);
    MEM8(ecx + 0x18) = 1;
    goto loc_003C26CA;

loc_003C26C4: ;
    edx = MEM32(edi);
    MEM8(edx + 0x18) = 0;

loc_003C26CA: ;
    ecx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x2C); /* mulss */
    eax = MEM32(esi + 0xF0);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEM32(esi + eax * 4 + 0xB0) = ecx;
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xF0) = eax;

loc_003C2700: ;
    eax = MEM32(esi + 0x44);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003C25E8; /* jl: less (signed <) */

loc_003C2713: ;
    POP32(esp, ebp);

loc_003C2714: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esi + 0xAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xA8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, 0x003C273Fu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C273F: ;
    ecx = eax;
    PUSH32(esp, 0x003C2746u); RECOMP_ABI_CALL(0x00032FCAu, sub_00032FCA); /* call 0x00032FCA */

loc_003C2746: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    POP32(esp, edi);
    MEMF(esi + 0x110) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C27F0
 * Original: 0x003C27F0 - 0x003C27FD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C27F0(void)
{

loc_003C27F0: ;
    eax = MEM32(ecx + 0x118);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C27FCu); RECOMP_ABI_CALL(0x00031279u, sub_00031279); /* call 0x00031279 */

loc_003C27FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C2800
 * Original: 0x003C2800 - 0x003C2977 (375 bytes, 105 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2800(void)
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

loc_003C2800: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C283B; /* je: equal / zero */

loc_003C2810: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2825; /* jne: not equal / not zero */

loc_003C2817: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C2822u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2822: ;
    MEM32(edi + 8) = eax;

loc_003C2825: ;
    edi = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0xB (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = ecx;
    goto loc_003C2843;

loc_003C283B: ;
    MEM32(esp + 0x18) = 0;

loc_003C2843: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    ebx = 1;
    edi = edi;

loc_003C2850: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x114);
    ecx = MEM32(edx + esi + 0x15C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebp = edx + esi + 0x118;
    if (CMP_LE(_fas, _fbs)) goto loc_003C2960; /* jle: less or equal (signed <=) */

loc_003C286E: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xAC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x834B90); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C288B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x834B90)) */

loc_003C287F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    goto loc_003C288E;

loc_003C288B: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */

loc_003C288E: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(edx, MEM8(ecx + 0xD));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2920; /* je: equal / zero */

loc_003C28A5: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C294C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_003C28B6: ;
    MEM8(esi + 0x46C) = LO8(ebx);
    MEM8(esi + 0x508) = LO8(ebx);
    edx = MEM32(ebp + 4);
    edi = MEM32(edx + 0x14);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_003C28E7; /* jne: not equal / not zero */

loc_003C28D9: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C28E4u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C28E4: ;
    MEM32(edi + 8) = eax;

loc_003C28E7: ;
    eax = MEM32(edi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(ebx) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C2900u); RECOMP_ABI_CALL(0x00029FB0u, sub_00029FB0); /* call 0x00029FB0 */

loc_003C2900: ;
    ecx = MEM32(esi + 0x114);
    MEM32(esi + ecx * 8 + 0x14) = eax;
    edx = MEM32(esi + 0x114);
    MEM32(esi + edx * 8 + 0x18) = 0;
    MEM32(esi + 0x114) = MEM32(esi + 0x114) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x114)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003C2942;

loc_003C2920: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7A9980); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C294C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7A9980)) */

loc_003C2929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_003C2946; /* jne: not equal / not zero */

loc_003C293B: ;
    ecx = esi;
    PUSH32(esp, 0x003C2942u); RECOMP_ABI_CALL(0x0001BC9Eu, sub_0001BC9E); /* call 0x0001BC9E */

loc_003C2942: ;
    eax = MEM32(esp + 0x14);

loc_003C2946: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_003C294C: ;
    ecx = MEM32(ebp + 0xA8);
    MEM32(ebp + 0xA4) = ecx;
    MEMF(ebp + 0xA8) = xmm0.f[0]; /* movss */

loc_003C2960: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003C2850; /* jl: less (signed <) */

loc_003C296D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C29E0
 * Original: 0x003C29E0 - 0x003C2A13 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C29E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C29E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x15C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C2A10; /* jle: less or equal (signed <=) */

loc_003C29F0: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x11C;

loc_003C29F7: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C2A01u); RECOMP_ABI_CALL(0x00029B32u, sub_00029B32); /* call 0x00029B32 */

loc_003C2A01: ;
    eax = MEM32(esi + 0x15C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C29F7; /* jl: less (signed <) */

loc_003C2A0F: ;
    POP32(esp, ebx);

loc_003C2A10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C2A20
 * Original: 0x003C2A20 - 0x003C2A9D (125 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C2A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi + 0x64);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C2A5C; /* jg: greater (signed >) */

loc_003C2A33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2A4A; /* je: equal / zero */

loc_003C2A37: ;
    ecx = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2A4A; /* je: equal / zero */

loc_003C2A3E: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C2A4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C2A47u); } /* indirect call */
    }

loc_003C2A4A: ;
    eax = esi + 4;
    MEM32(esi + 0x68) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x64) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003C2A5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2A73; /* je: equal / zero */

loc_003C2A60: ;
    ecx = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2A73; /* je: equal / zero */

loc_003C2A67: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C2A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C2A70u); } /* indirect call */
    }

loc_003C2A73: ;
    PUSH32(esp, 1);
    eax = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    PUSH32(esp, 0x003C2A8Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003C2A8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x68) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x64) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C2AC0
 * Original: 0x003C2AC0 - 0x003C2B6F (175 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003C2AC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x6C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003C2AD1u); RECOMP_ABI_CALL(0x0001AE11u, sub_0001AE11); /* call 0x0001AE11 */

loc_003C2AD1: ;
    eax = MEM32(edi + 0x6C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C2B6A; /* jle: less or equal (signed <=) */

loc_003C2ADE: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003C2B00;

    /* nop */
    /* nop */

loc_003C2B00: ;
    ecx = MEM32(edi + 0x64);
    xmm0 = XMM_SCALAR(MEMF(ecx + eax + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x6C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C2B1B; /* jle: less or equal (signed <=) */

loc_003C2B15: ;
    ecx = edx + 1;
    MEM32(esi + 0x6C) = ecx;

loc_003C2B1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esi + 0x64);
    MEMF(eax + ecx) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x64);
    MEMF(ecx + eax + 4) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_003C2B5F; /* jle: less or equal (signed <=) */

loc_003C2B30: ;
    ecx = MEM32(esi + 0x64);
    xmm0 = XMM_SCALAR(MEMF(ecx + eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + eax + -12); /* subss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C2B53; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003C2B4C: ;
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    goto loc_003C2B5F;

loc_003C2B53: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx + -4) = xmm1.f[0]; /* movss */

loc_003C2B5F: ;
    ecx = MEM32(edi + 0x6C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C2B00; /* jl: less (signed <) */

loc_003C2B6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C2BA0
 * Original: 0x003C2BA0 - 0x003C2BA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2BA0: ;
    g_seh_ebp = ebp; sub_0001770C(); return; /* tail jmp 0x0001770C */

}

/**
 * sub_003C2BB0
 * Original: 0x003C2BB0 - 0x003C2BC4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003C2BB8u); RECOMP_ABI_CALL(0x00034E7Eu, sub_00034E7E); /* call 0x00034E7E */

loc_003C2BB8: ;
    ecx = esi + 0x498;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002CCC9(); return; /* tail jmp 0x0002CCC9 */

}

/**
 * sub_003C2BD0
 * Original: 0x003C2BD0 - 0x003C2BDD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BD0(void)
{

loc_003C2BD0: ;
    eax = ecx + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003C2BDCu); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_003C2BDC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003C2BE0
 * Original: 0x003C2BE0 - 0x003C2D15 (309 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2BE0(void)
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

loc_003C2BE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2C00; /* jne: not equal / not zero */

loc_003C2BF2: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C2BFDu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2BFD: ;
    MEM32(esi + 8) = eax;

loc_003C2C00: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xB (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebp + 0x498;
    PUSH32(esp, 0x003C2C1Fu); RECOMP_ABI_CALL(0x0001770Cu, sub_0001770C); /* call 0x0001770C */

loc_003C2C1F: ;
    edx = MEM32(ebp + 0x118);
    esi = MEM32(edx + 0x14);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2C3D; /* jne: not equal / not zero */

loc_003C2C2F: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C2C3Au); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2C3A: ;
    MEM32(esi + 8) = eax;

loc_003C2C3D: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2C57; /* jne: not equal / not zero */

loc_003C2C47: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C2C4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C2C4Bu); } /* indirect call */
    }

loc_003C2C4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2C57; /* jne: not equal / not zero */

loc_003C2C53: ;
    ebx = esi;
    goto loc_003C2C59;

loc_003C2C57: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003C2C59: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x478)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2D0A; /* je: equal / zero */

loc_003C2C6F: ;
    eax = MEM32(ebp + 0x50C);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C0)); /* movss */
    MEM32(0x9071EC) = eax;
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_003C2CFE; /* jle: less or equal (signed <=) */

loc_003C2C92: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C2CA3; /* jl: less (signed <) */

loc_003C2C96: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C2CA3; /* jge: greater or equal (signed >=) */

loc_003C2C9B: ;
    ecx = MEM32(ebx + 0x44);
    eax = ecx + edi * 4;
    goto loc_003C2CA6;

loc_003C2CA3: ;
    eax = MEM32(ebx + 0x44);

loc_003C2CA6: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2CBD; /* jne: not equal / not zero */

loc_003C2CAF: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003C2CBAu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2CBA: ;
    MEM32(esi + 8) = eax;

loc_003C2CBD: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xA (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0x50C);
    esi = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003C2CDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C2CD8u); } /* indirect call */
    }

loc_003C2CDB: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x1C8;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003C2CEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C2CEBu); } /* indirect call */
    }

loc_003C2CEE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    eax = MEM32(ebx + 0x40);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_003C2C92; /* jl: less (signed <) */

loc_003C2CFE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C2D0A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
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
 * sub_003C2D70
 * Original: 0x003C2D70 - 0x003C3075 (773 bytes, 240 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C2D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C2D70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x46C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_003C2E02; /* je: equal / zero */

loc_003C2D87: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2E02; /* je: equal / zero */

loc_003C2D8D: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(ebp + 0x46C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003C2DC2; /* je: equal / zero */

loc_003C2D9B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2DB0; /* jne: not equal / not zero */

loc_003C2DA2: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C2DADu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2DAD: ;
    MEM32(esi + 8) = eax;

loc_003C2DB0: ;
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
    goto loc_003C2DC4;

loc_003C2DC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003C2DC4: ;
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(ebp + 0x10);
    ecx = ~ecx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = eax;
    esi = ebp + 0x22C;
    edi = 0x10;
    ebx = 2;

loc_003C2DE1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C2DFC; /* jle: less or equal (signed <=) */

loc_003C2DE6: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2DFC; /* je: equal / zero */

loc_003C2DF0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2DFC; /* jne: not equal / not zero */

loc_003C2DF5: ;
    ecx = esi;
    PUSH32(esp, 0x003C2DFCu); RECOMP_ABI_CALL(0x000137ECu, sub_000137EC); /* call 0x000137EC */

loc_003C2DFC: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C2DE1; /* jne: not equal / not zero */

loc_003C2E02: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2E30; /* je: equal / zero */

loc_003C2E09: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2E1E; /* jne: not equal / not zero */

loc_003C2E10: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003C2E1Bu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2E1B: ;
    MEM32(esi + 8) = eax;

loc_003C2E1E: ;
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
    goto loc_003C2E32;

loc_003C2E30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003C2E32: ;
    edi = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3029; /* je: equal / zero */

loc_003C2E3F: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2E54; /* jne: not equal / not zero */

loc_003C2E46: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C2E51u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2E51: ;
    MEM32(edi + 8) = eax;

loc_003C2E54: ;
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(ebx + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2FDC; /* jne: not equal / not zero */

loc_003C2E62: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C2E69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C2E66u); } /* indirect call */
    }

loc_003C2E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2FDC; /* jne: not equal / not zero */

loc_003C2E72: ;
    esi = MEM32(ebx + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2E8A; /* jne: not equal / not zero */

loc_003C2E7C: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C2E87u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2E87: ;
    MEM32(esi + 8) = eax;

loc_003C2E8A: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 9 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003C2E9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C2E9Cu); } /* indirect call */
    }

loc_003C2E9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2FDC; /* je: equal / zero */

loc_003C2EA7: ;
    esi = MEM32(ebx + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2EBF; /* jne: not equal / not zero */

loc_003C2EB1: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C2EBCu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C2EBC: ;
    MEM32(esi + 8) = eax;

loc_003C2EBF: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 9 (16-bit) */
    MEM32(esp + 0x10) = 0;
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    ebx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_003C3029; /* jle: less or equal (signed <=) */

loc_003C2EE8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edi;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x118;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003C2F10;

loc_003C2EFF: ;
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x1C);
    goto loc_003C2F10;

    /* nop */

loc_003C2F10: ;
    eax = MEM32(0x9071E4);
    edx = MEM32(0x9071EC);
    ecx = MEM32(edx + 4);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xA8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003C2F55; /* je: equal / zero */

loc_003C2F3B: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C2F48; /* jne: not equal / not zero */

loc_003C2F41: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    goto loc_003C2F55;

loc_003C2F48: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x003C2F55u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003C2F55: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x40) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003C2F70; /* jl: less (signed <) */

loc_003C2F60: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x38) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C2F70; /* jge: greater or equal (signed >=) */

loc_003C2F69: ;
    eax = MEM32(esi + 0x3C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003C2F73;

loc_003C2F70: ;
    eax = MEM32(esi + 0x3C);

loc_003C2F73: ;
    edi = MEM32(eax + 0x64);
    PUSH32(esp, 0x003C2F7Bu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C2F7B: ;
    ecx = eax;
    PUSH32(esp, 0x003C2F82u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C2F82: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = MEM32(esp + 0x18);
    esi = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    MEM32(esi + 0x14) = edi;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x003C2FB1u); RECOMP_ABI_CALL(0x000305E0u, sub_000305E0); /* call 0x000305E0 */

loc_003C2FB1: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebp) = esi;
    esi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x114;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003C2EFF; /* jl: less (signed <) */

loc_003C2FD6: ;
    ebp = MEM32(esp + 0x18);
    goto loc_003C3029;

loc_003C2FDC: ;
    PUSH32(esp, 0x003C2FE1u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C2FE1: ;
    ecx = eax;
    PUSH32(esp, 0x003C2FE8u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C2FE8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x28) = ecx;
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(esi + 0x14) = edi;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x003C301Eu); RECOMP_ABI_CALL(0x000305E0u, sub_000305E0); /* call 0x000305E0 */

loc_003C301E: ;
    MEM32(ebp + 0x118) = esi;
    ebx = 1;

loc_003C3029: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C305F; /* jge: greater or equal (signed >=) */

loc_003C302E: ;
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x114);
    eax = 1;
    ecx = edx + ebp + 0x118;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003C3050;

    /* nop */
    /* nop */

loc_003C3050: ;
    MEM32(ecx) = 0;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x114;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003C3050; /* jne: not equal / not zero */

loc_003C305F: ;
    eax = ebp + 0x118;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x003C306Du); RECOMP_ABI_CALL(0x00015830u, sub_00015830); /* call 0x00015830 */

loc_003C306D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003C3140
 * Original: 0x003C3140 - 0x003C326B (299 bytes, 86 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C3140(void)
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

loc_003C3140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x494) = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x50C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003C325C; /* jl: less (signed <) */

loc_003C3163: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003C325C; /* jg: greater (signed >) */

loc_003C316C: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x490);
    PUSH32(esp, 0x003C3178u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003C3178: ;
    MEM32(eax + 0x24) = edi;
    edi = MEM32(esi + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3197; /* je: equal / zero */

loc_003C3182: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3197; /* jne: not equal / not zero */

loc_003C3189: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003C3194u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C3194: ;
    MEM32(edi + 8) = eax;

loc_003C3197: ;
    ecx = esi;
    MEM32(esi + 0x114) = 0;
    PUSH32(esp, 0x003C31A8u); RECOMP_ABI_CALL(0x00026211u, sub_00026211); /* call 0x00026211 */

loc_003C31A8: ;
    ecx = esi;
    PUSH32(esp, 0x003C31AFu); RECOMP_ABI_CALL(0x0001B98Du, sub_0001B98D); /* call 0x0001B98D */

loc_003C31AF: ;
    MEMF(esi + 0x474) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    SET_LO8(eax, MEM8(esi + 0x50A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_003C31D3; /* jne: not equal / not zero */

loc_003C31C7: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C31D3u); RECOMP_ABI_CALL(0x0002E1CDu, sub_0002E1CD); /* call 0x0002E1CD */

loc_003C31D3: ;
    eax = MEM32(esi + 0x15C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C3235; /* jle: less or equal (signed <=) */

loc_003C31DF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi + 0x11C;
    PUSH32(esp, ebp);
    /* nop */

loc_003C31F0: ;
    _fa = (uint32_t)(MEM8(esi + 0x50A)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x50A), 0 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C0)); /* movss */
    eax = MEM32(ecx);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_003C3220; /* jne: not equal / not zero */

loc_003C320D: ;
    edi = MEM32(eax + 0x28);
    MEM32(esp + 0x18) = edi;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    if ((_fca > _fcb)) goto loc_003C3220; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_003C321B: ;
    MEM32(eax + 0x24) = edi;
    goto loc_003C3223;

loc_003C3220: ;
    MEM32(eax + 0x24) = ebp;

loc_003C3223: ;
    MEM32(eax + 0x28) = ebp;
    eax = MEM32(esi + 0x15C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C31F0; /* jl: less (signed <) */

loc_003C3234: ;
    POP32(esp, ebp);

loc_003C3235: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003C3267; /* jne: not equal / not zero */

loc_003C323E: ;
    ecx = esi;
    PUSH32(esp, 0x003C3245u); RECOMP_ABI_CALL(0x0003366Eu, sub_0003366E); /* call 0x0003366E */

loc_003C3245: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003C3251u); RECOMP_ABI_CALL(0x000333B7u, sub_000333B7); /* call 0x000333B7 */

loc_003C3251: ;
    MEM8(esi + 0x50A) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_003C325C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x470) = xmm0.f[0]; /* movss */

loc_003C3267: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C32C0
 * Original: 0x003C32C0 - 0x003C34B4 (500 bytes, 124 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C32C0(void)
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

loc_003C32C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x47C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003C34AF; /* jne: not equal / not zero */

loc_003C32D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C34AF; /* je: equal / zero */

loc_003C32DD: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    MEM32(edi + 0x484) = ebp;
    MEM32(edi + 8) = 1;
    edx = MEM32(esi + 0xC);
    MEM32(esi + 8) = 2;
    MEM32(esi + 0x490) = eax;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C3325; /* jne: not equal / not zero */

loc_003C330A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9071FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x9071FC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3325; /* je: equal / zero */

loc_003C3312: ;
    SET_LO8(eax, MEM8(esi + 0x509));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C332C; /* jne: not equal / not zero */

loc_003C331C: ;
    MEM8(esi + 0x508) = 0;
    goto loc_003C332C;

loc_003C3325: ;
    MEM8(esi + 0x508) = 1;

loc_003C332C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x9071EC);
    ecx = MEM32(edi + 0x494);
    PUSH32(esp, 1);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003C3350u); RECOMP_ABI_CALL(0x00032CFAu, sub_00032CFA); /* call 0x00032CFA */

loc_003C3350: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM8(edi + 0x47C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_003C3467; /* je: equal / zero */

loc_003C335F: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = MEMF(edi + 0x488); /* comiss */
    MEMF(edi + 0x48C) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C337C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(edi + 0x488)) */

loc_003C3373: ;
    edx = MEM32(ebp + 0x14);
    MEM32(edi + 0x488) = edx;

loc_003C337C: ;
    eax = MEM32(esi + 0x15C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_003C33DD; /* jle: less or equal (signed <=) */

loc_003C3387: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x907200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x907200) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C33A1; /* jne: not equal / not zero */

loc_003C3392: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1C0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x18); /* addss */
    goto loc_003C33E0;

loc_003C33A1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9071F8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x9071F8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C33D6; /* je: equal / zero */

loc_003C33A9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9071FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x9071FC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C33D6; /* je: equal / zero */

loc_003C33B1: ;
    eax = MEM32(esi + 0x11C);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 0x003C33BFu); RECOMP_ABI_CALL(0x0002B482u, sub_0002B482); /* call 0x0002B482 */

loc_003C33BF: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003C33C7u); RECOMP_ABI_CALL(0x0001FBAFu, sub_0001FBAF); /* call 0x0001FBAF */

loc_003C33C7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x18); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    goto loc_003C33E0;

loc_003C33D6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    goto loc_003C33E0;

loc_003C33DD: ;
    xmm0 = xmm2; /* movaps */

loc_003C33E0: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x1C0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    POP32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C33F1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_003C33EE: ;
    xmm0 = xmm1; /* movaps */

loc_003C33F1: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x834B94); /* addss */
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003C3406u); RECOMP_ABI_CALL(0x0002A929u, sub_0002A929); /* call 0x0002A929 */

loc_003C3406: ;
    SET_LO8(ecx, MEM8(eax + 0xD));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C3444; /* je: equal / zero */

loc_003C340D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C342B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003C341B: ;
    xmm1.f[0] = xmm1.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_003C3491;

loc_003C342B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C3491; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003C3438: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_003C343C: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_003C3491;

loc_003C3444: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003C343C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003C3452: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C3491; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_003C345F: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_003C3491;

loc_003C3467: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 0x488); /* comiss */
    MEMF(edi + 0x48C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C348B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 0x488)) */

loc_003C347B: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    MEMF(edi + 0x488) = xmm1.f[0]; /* movss */

loc_003C348B: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_003C3491: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM8(esi + 0x50A) = 1;
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1BC) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);

loc_003C34AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
