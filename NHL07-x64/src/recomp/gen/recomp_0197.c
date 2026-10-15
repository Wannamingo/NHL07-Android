/**
 * nhl_07_recomp - Recompiled code chunk 197
 * Functions: 250 (0x0042F770 - 0x00434900)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0042F770
 * Original: 0x0042F770 - 0x0042F7ED (125 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F770: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x83889C;
    esi = edx;
    ecx = 7;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042F7B6; /* jne: not equal / not zero */

loc_0042F78F: ;
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

/**
 * sub_0042F810
 * Original: 0x0042F810 - 0x0042F834 (36 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F810(void)
{

loc_0042F810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(esi + 0x158);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042F827u); RECOMP_ABI_CALL(0x000292E0u, sub_000292E0); /* call 0x000292E0 */

loc_0042F827: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0042F82Fu); RECOMP_ABI_CALL(0x0003664Du, sub_0003664D); /* call 0x0003664D */

loc_0042F82F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F840
 * Original: 0x0042F840 - 0x0042FB0B (715 bytes, 340 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F840: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0042F8C6; /* ja: above (unsigned >) */

loc_0042F84E: ;
    edx = ZX8(MEM8(edx + 0x42F8E8));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F8CC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F85Cu) goto loc_0042F85C;
    if (_jt == 0x0042F865u) goto loc_0042F865;
    if (_jt == 0x0042F86Eu) goto loc_0042F86E;
    if (_jt == 0x0042F884u) goto loc_0042F884;
    if (_jt == 0x0042F89Au) goto loc_0042F89A;
    if (_jt == 0x0042F8B0u) goto loc_0042F8B0;
    if (_jt == 0x0042F8C6u) goto loc_0042F8C6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F85C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014903(); return; /* tail jmp 0x00014903 */

loc_0042F865: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00025D5C(); return; /* tail jmp 0x00025D5C */

loc_0042F86E: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F87B; /* je: equal / zero */

loc_0042F876: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F8C6; /* jne: not equal / not zero */

loc_0042F87B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003579D(); return; /* tail jmp 0x0003579D */

loc_0042F884: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F891; /* je: equal / zero */

loc_0042F88C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F8C6; /* jne: not equal / not zero */

loc_0042F891: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000349B0(); return; /* tail jmp 0x000349B0 */

loc_0042F89A: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F8A7; /* je: equal / zero */

loc_0042F8A2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F8C6; /* jne: not equal / not zero */

loc_0042F8A7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00027B84(); return; /* tail jmp 0x00027B84 */

loc_0042F8B0: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F8BD; /* je: equal / zero */

loc_0042F8B8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F8C6; /* jne: not equal / not zero */

loc_0042F8BD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00023174(); return; /* tail jmp 0x00023174 */

loc_0042F8C6: ;
    esp += 8; return; /* ret 4 */

    edx = ZX8(MEM8(edx + 0x42F9D8));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F9BC); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F94Cu) goto loc_0042F94C;
    if (_jt == 0x0042F955u) goto loc_0042F955;
    if (_jt == 0x0042F95Eu) goto loc_0042F95E;
    if (_jt == 0x0042F974u) goto loc_0042F974;
    if (_jt == 0x0042F98Au) goto loc_0042F98A;
    if (_jt == 0x0042F9A0u) goto loc_0042F9A0;
    if (_jt == 0x0042F9B6u) goto loc_0042F9B6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F94C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014903(); return; /* tail jmp 0x00014903 */

loc_0042F955: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00031EE5(); return; /* tail jmp 0x00031EE5 */

loc_0042F95E: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F96B; /* je: equal / zero */

loc_0042F966: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F96B: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00036526(); return; /* tail jmp 0x00036526 */

loc_0042F974: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F981; /* je: equal / zero */

loc_0042F97C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F981: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000115DC(); return; /* tail jmp 0x000115DC */

loc_0042F98A: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F997; /* je: equal / zero */

loc_0042F992: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F997: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001244B(); return; /* tail jmp 0x0001244B */

loc_0042F9A0: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F9AD; /* je: equal / zero */

loc_0042F9A8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F9B6; /* jne: not equal / not zero */

loc_0042F9AD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00022657(); return; /* tail jmp 0x00022657 */

loc_0042F9B6: ;
    esp += 8; return; /* ret 4 */

    edx = ZX8(MEM8(edx + 0x42FAB0));
    { uint32_t _jt = MEM32(edx * 4 + 0x42FA8C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0042FA3Cu) goto loc_0042FA3C;
    if (_jt == 0x0042FA45u) goto loc_0042FA45;
    if (_jt == 0x0042FA4Eu) goto loc_0042FA4E;
    if (_jt == 0x0042FA57u) goto loc_0042FA57;
    if (_jt == 0x0042FA60u) goto loc_0042FA60;
    if (_jt == 0x0042FA69u) goto loc_0042FA69;
    if (_jt == 0x0042FA74u) goto loc_0042FA74;
    if (_jt == 0x0042FA7Du) goto loc_0042FA7D;
    if (_jt == 0x0042FA86u) goto loc_0042FA86;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042FA3C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003664D(); return; /* tail jmp 0x0003664D */

loc_0042FA45: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00023629(); return; /* tail jmp 0x00023629 */

loc_0042FA4E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002EE48(); return; /* tail jmp 0x0002EE48 */

loc_0042FA57: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00030775(); return; /* tail jmp 0x00030775 */

loc_0042FA60: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000241E1(); return; /* tail jmp 0x000241E1 */

loc_0042FA69: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00021171(); return; /* tail jmp 0x00021171 */

loc_0042FA74: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00037160(); return; /* tail jmp 0x00037160 */

loc_0042FA7D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000152B3(); return; /* tail jmp 0x000152B3 */

loc_0042FA86: ;
    esp += 8; return; /* ret 4 */

    esp += 4; return; /* ret */

}

/**
 * sub_0042FB20
 * Original: 0x0042FB20 - 0x0042FB2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB20(void)
{

loc_0042FB20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x88) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042FB30
 * Original: 0x0042FB30 - 0x0042FB34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0042FB30: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0042FB40
 * Original: 0x0042FB40 - 0x0042FB44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0042FB40: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0042FB50
 * Original: 0x0042FB50 - 0x0042FB54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB50(void)
{

loc_0042FB50: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_0042FB60
 * Original: 0x0042FB60 - 0x0042FB85 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FB60: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0042FB7D; /* je: equal / zero */

loc_0042FB69: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0042FB75; /* je: equal / zero */

loc_0042FB6C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0042FB75: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0042FB7D: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042FB90
 * Original: 0x0042FB90 - 0x0042FBB3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x38;
    PUSH32(esp, 0x0042FB9Bu); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0042FB9B: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x0042FBA3u); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0042FBA3: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0042FBABu); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0042FBAB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_0042FBC0
 * Original: 0x0042FBC0 - 0x0042FC8C (204 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FBC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 4);
    ebp = ecx;
    MEM32(esp + 0x10) = ebp;
    edx = eax + 1;

loc_0042FBD5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FBD5; /* jne: not equal / not zero */

loc_0042FBDC: ;
    ecx = MEM32(0x9094E8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edx = esi + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x839CF8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0042FBF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FBF6u); } /* indirect call */
    }

loc_0042FBF9: ;
    MEM32(ebp + 0x44) = eax;
    ecx = MEM32(edi + 4);
    /* nop */

loc_0042FC00: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0042FC00; /* jne: not equal / not zero */

loc_0042FC0A: ;
    eax = MEM32(ebp + 0x44);
    MEM8(esi + eax) = LO8(edx);
    ecx = MEM32(ebp + 0x44);
    MEM8(ecx + esi + 1) = LO8(edx);
    esi = MEM32(ebp + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x48;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0042FC84; /* je: equal / zero */

loc_0042FC26: ;
    eax = esi;
    edx = eax + 1;
    goto loc_0042FC30;

    /* nop */

loc_0042FC30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FC30; /* jne: not equal / not zero */

loc_0042FC37: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x839CF0);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0042FC46u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042FC46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FC78; /* je: equal / zero */

loc_0042FC4D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839CF0);
    MEM32(ebp) = esi;
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0042FC61u); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_0042FC61: ;
    MEM8(eax + esi) = 0;
    esi = eax + esi + 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FC26; /* jne: not equal / not zero */

loc_0042FC70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0042FC78: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + ebx * 4 + 0x48) = 0;

loc_0042FC84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042FCC0
 * Original: 0x0042FCC0 - 0x0042FD4B (139 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FCC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x48;
    ebx = 8;
    edi = edi;

loc_0042FCD0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FCE7; /* je: equal / zero */

loc_0042FCD6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0042FCDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FCDBu); } /* indirect call */
    }

loc_0042FCDE: ;
    MEM32(edi + 0x20) = eax;
    MEM32(edi) = 0;

loc_0042FCE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0042FCD0; /* jne: not equal / not zero */

loc_0042FCED: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042FCFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FCF9u); } /* indirect call */
    }

loc_0042FCFC: ;
    ecx = esi;
    MEM32(esi + 0x44) = 0;
    PUSH32(esp, 0x0042FD0Au); RECOMP_ABI_CALL(0x0002D0CFu, sub_0002D0CF); /* call 0x0002D0CF */

loc_0042FD0A: ;
    ebp = esi + 0x88;
    edi = ebp;
    ebx = 8;
    goto loc_0042FD20;

    /* nop */

loc_0042FD20: ;
    PUSH32(esp, 0x839D30);
    ecx = esi;
    PUSH32(esp, 0x0042FD2Cu); RECOMP_ABI_CALL(0x000353CEu, sub_000353CE); /* call 0x000353CE */

loc_0042FD2C: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0042FD20; /* jne: not equal / not zero */

loc_0042FD34: ;
    esi = MEM32(esi + 0xBC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FD44; /* je: equal / zero */

loc_0042FD3E: ;
    MEM32(esi + 0x88) = ebp;

loc_0042FD44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042FD70
 * Original: 0x0042FD70 - 0x0042FDA7 (55 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FD70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FD96; /* je: equal / zero */

loc_0042FD7E: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042FD89u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042FD89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xB4) = 0;

loc_0042FD96: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0042FDA2u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_0042FDA2: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042FDC0
 * Original: 0x0042FDC0 - 0x0042FDEA (42 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FDC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x68;
    edi = 8;
    /* nop */

loc_0042FDD0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FDDE; /* je: equal / zero */

loc_0042FDD6: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0042FDDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FDDBu); } /* indirect call */
    }

loc_0042FDDE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0042FDD0; /* jne: not equal / not zero */

loc_0042FDE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042FE00
 * Original: 0x0042FE00 - 0x0042FE2A (42 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FE00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x68;
    edi = 8;
    /* nop */

loc_0042FE10: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FE1E; /* je: equal / zero */

loc_0042FE16: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0042FE1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FE1Bu); } /* indirect call */
    }

loc_0042FE1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0042FE10; /* jne: not equal / not zero */

loc_0042FE24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042FE40
 * Original: 0x0042FE40 - 0x0042FE4F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FE40: ;
    eax = MEM32(ecx + 0xB0);
    ecx = MEM32(ecx + eax * 4 + 0x68);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_0042FE60
 * Original: 0x0042FE60 - 0x0042FEF1 (145 bytes, 60 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FE60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = ecx;
    ecx = MEM32(eax + 0xE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0042FE8A; /* je: equal / zero */

loc_0042FE79: ;
    _fa = (uint32_t)(MEM32(eax + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FE8A; /* je: equal / zero */

loc_0042FE81: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0042FE86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FE84u); } /* indirect call */
    }

loc_0042FE86: ;
    eax = MEM32(esp + 0x10);

loc_0042FE8A: ;
    edi = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xAC) = esi;
    MEM32(esp + 0x20) = ecx;
    esi = eax + 0x68;

loc_0042FEA5: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FED8; /* je: equal / zero */

loc_0042FEAB: ;
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FEC8; /* je: equal / zero */

loc_0042FEB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FEC8; /* je: equal / zero */

loc_0042FEBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = edx;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0042FEC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FEC3u); } /* indirect call */
    }

loc_0042FEC6: ;
    goto loc_0042FED4;

loc_0042FEC8: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0042FED4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FED1u); } /* indirect call */
    }

loc_0042FED4: ;
    eax = MEM32(esp + 0x10);

loc_0042FED8: ;
    ecx = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0042FEA5; /* jb: below (unsigned <) */

loc_0042FEE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0042FF20
 * Original: 0x0042FF20 - 0x0042FF2F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FF20: ;
    eax = MEM32(ecx + 0xAC);
    ecx = MEM32(ecx + eax * 4 + 0x68);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_0042FF40
 * Original: 0x0042FF40 - 0x0042FF54 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FF40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042FF40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x839D34;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x88) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0042FF60
 * Original: 0x0042FF60 - 0x0043000C (172 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042FF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042FF60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0xC) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_00430002; /* jbe: below or equal (unsigned <=) */

loc_0042FF7E: ;
    eax = ebp + 8;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebx);

loc_0042FF86: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FFA5; /* jne: not equal / not zero */

loc_0042FF93: ;
    SET_LO8(ebx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042FFA3; /* je: equal / zero */

loc_0042FF9A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042FFA3; /* jb: below (unsigned <) */

loc_0042FF9E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;

loc_0042FFA3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */

loc_0042FFA5: ;
    if (CMP_G(_fas, _fbs)) goto loc_0042FFD1; /* jg: greater (signed >) */

loc_0042FFA7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0042FFD1; /* jae: above or equal (unsigned >=) */

loc_0042FFAB: ;
    ebx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0042FFBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042FFBCu); } /* indirect call */
    }

loc_0042FFBF: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_0042FFEE;

loc_0042FFD1: ;
    ecx = MEM32(ebp + 0x88);
    eax = MEM32(ecx + esi * 4 + 4);
    eax = MEM32(eax + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042FFE8; /* jne: not equal / not zero */

loc_0042FFE3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0042FFEA;

loc_0042FFE8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0042FFEA: ;
    MEM32(esp + 0x10) = edx;

loc_0042FFEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042FF86; /* jb: below (unsigned <) */

loc_0042FFF3: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 4) = 0;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00430002: ;
    MEM32(ebp + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00430040
 * Original: 0x00430040 - 0x004300DB (155 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430040(void)
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

loc_00430040: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0043005B; /* jne: not equal / not zero */

loc_00430052: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00430058u); RECOMP_ABI_CALL(0x000251E5u, sub_000251E5); /* call 0x000251E5 */

loc_00430058: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0043005B: ;
    eax = MEM32(esi + 4);
    ebp = MEM32(esp + 0x90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00430094; /* jbe: below or equal (unsigned <=) */

loc_0043006B: ;
    ecx = esi + 8;
    edi = edi;

loc_00430070: ;
    edx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_00430094; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebp + 0xC)) */

loc_0043007D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430089; /* jne: not equal / not zero */

loc_00430082: ;
    SET_LO8(edx, MEM8(ebp + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430094; /* jne: not equal / not zero */

loc_00430089: ;
    edx = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00430070; /* jb: below (unsigned <) */

loc_00430094: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_004300C4; /* jae: above or equal (unsigned >=) */

loc_00430098: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = eax;
    PUSH32(esp, ebx);
    eax = esi + edi * 4 + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004300B0u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_004300B0: ;
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esi + edi * 4 + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004300C0u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_004300C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_004300C4: ;
    MEM32(esi + edi * 4 + 8) = ebp;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430110
 * Original: 0x00430110 - 0x00430120 (16 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430110: ;
    eax = ecx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043011D; /* je: equal / zero */

loc_00430117: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;

loc_0043011D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00430130
 * Original: 0x00430130 - 0x00430161 (49 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430130: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043014A; /* je: equal / zero */

loc_00430137: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0043014A: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    MEM32(edx) = 0;
    MEM32(eax) = 0xFFFFFE6Au;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00430170
 * Original: 0x00430170 - 0x004301A1 (49 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430170: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043018A; /* je: equal / zero */

loc_00430177: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

loc_0043018A: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    MEM32(edx) = 0;
    MEM32(eax) = 0xFFFFFE6Au;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004301B0
 * Original: 0x004301B0 - 0x00430232 (130 bytes, 45 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004301B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004301B0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004301C8; /* jne: not equal / not zero */

loc_004301BC: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_0043020A;

loc_004301C8: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004301D2u); RECOMP_ABI_CALL(0x005743C9u, sub_005743C9); /* call 0x005743C9 */

loc_004301D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004301E5; /* jne: not equal / not zero */

loc_004301D9: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0;
    goto loc_0043020A;

loc_004301E5: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0043020Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_0043020A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00430213u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00430213: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00430222; /* je: equal / zero */

loc_0043021A: ;
    MEM32(esp + 0x14) = 0;

loc_00430222: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0043022Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0043022B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00430260
 * Original: 0x00430260 - 0x00430355 (245 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00430260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00430270u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00430270: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    edi = esi + 0x10;
    ecx = edi;
    PUSH32(esp, 0x00430283u); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_00430283: ;
    ebx = esi + 0x24;
    ecx = ebx;
    PUSH32(esp, 0x0043028Du); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_0043028D: ;
    ebp = esi + 0x38;
    ecx = ebp;
    PUSH32(esp, 0x00430297u); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_00430297: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x833DC0);
    PUSH32(esp, 0x004302A6u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004302A6: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004302B2u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_004302B2: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x829EE8);
    PUSH32(esp, 0x004302C1u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004302C1: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x004302CDu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_004302CD: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7CFB50);
    PUSH32(esp, 0x004302DCu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004302DC: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x004302E8u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_004302E8: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x839D48);
    PUSH32(esp, 0x004302F7u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_004302F7: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00430303u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_00430303: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x839D40);
    PUSH32(esp, 0x00430312u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00430312: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0043031Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_0043031E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x82C544);
    PUSH32(esp, 0x0043032Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0043032D: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00430339u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_00430339: ;
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_0043034D; /* je: equal / zero */

loc_00430347: ;
    MEM32(eax) = 0x33060;

loc_0043034D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004303A0
 * Original: 0x004303A0 - 0x004303C0 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004303A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004303A0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004303AC; /* jne: not equal / not zero */

loc_004303A7: ;
    eax = 0x87DB50;

loc_004303AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 0x10;
    esi = eax;
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
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004303D0
 * Original: 0x004303D0 - 0x004303EE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004303D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004303D0: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004303E2; /* je: equal / zero */

loc_004303D7: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

loc_004303E2: ;
    edx = MEM32(esp + 4);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430400
 * Original: 0x00430400 - 0x0043041D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430400: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430412; /* je: equal / zero */

loc_00430407: ;
    SET_LO8(eax, MEM8(eax));
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

loc_00430412: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, 1);
    MEM8(edx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430430
 * Original: 0x00430430 - 0x004304E0 (176 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430430: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0043043Eu); RECOMP_ABI_CALL(0x000258DEu, sub_000258DE); /* call 0x000258DE */

loc_0043043E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x839D54;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = 0xFFFFFFFFu;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xE0) = ebx;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4C);
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x84) = ebx;
    PUSH32(esp, 0x004304B8u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_004304B8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004304C8; /* je: equal / zero */

loc_004304BF: ;
    ecx = eax;
    PUSH32(esp, 0x004304C6u); RECOMP_ABI_CALL(0x0002FE60u, sub_0002FE60); /* call 0x0002FE60 */

loc_004304C6: ;
    goto loc_004304CA;

loc_004304C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004304CA: ;
    MEM32(esi + 0xB8) = eax;
    MEM8(esi + 0x28) = LO8(ebx);
    MEM32(esi + 0xA8) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430510
 * Original: 0x00430510 - 0x0043054E (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430510: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x38;
    PUSH32(esp, 0x0043051Bu); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0043051B: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x00430523u); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_00430523: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0043052Bu); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0043052B: ;
    ecx = esi;
    PUSH32(esp, 0x00430532u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00430532: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00430548; /* je: equal / zero */

loc_00430539: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430548; /* je: equal / zero */

loc_0043053D: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00430545u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00430545: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00430548: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430560
 * Original: 0x00430560 - 0x00430648 (232 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00430560: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x839DA8;
    esi = eax;
    ecx = 8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00430598; /* jne: not equal / not zero */

loc_0043057F: ;
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00430588u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00430588: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0xB0) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00430598: ;
    edi = 0x839D9C;
    esi = eax;
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
    if ((_flags == 0)) goto loc_00430605; /* jne: not equal / not zero */

loc_004305AA: ;
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004305B3u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_004305B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430641; /* je: equal / zero */

loc_004305BE: ;
    ecx = MEM32(0x9094A0);
    edx = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004305D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004305D3u); } /* indirect call */
    }

loc_004305D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004305F6; /* je: equal / zero */

loc_004305DA: ;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    MEM32(eax + 0x88) = esi;
    POP32(esp, esi);
    MEM32(eax) = 0x839D34;
    POP32(esp, ebp);
    MEM32(ebx + 0xBC) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004305F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM32(ebx + 0xBC) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00430605: ;
    esi = eax;
    edi = 0x839D90;
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
    if ((_flags == 0)) goto loc_00430639; /* jne: not equal / not zero */

loc_00430617: ;
    ecx = MEM32(edx + 8);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00430622u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043061Fu); } /* indirect call */
    }

loc_00430622: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0xA8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00430641; /* jne: not equal / not zero */

loc_0043062C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0xA8) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00430639: ;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00430641u); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00430641: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430690
 * Original: 0x00430690 - 0x0043078E (254 bytes, 68 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430690(void)
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

loc_00430690: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xB8);
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004306A4; /* je: equal / zero */

loc_004306A0: ;
    SET_LO8(ecx, MEM8(ecx));
    goto loc_004306A6;

loc_004306A4: ;
    SET_LO8(ecx, 1);

loc_004306A6: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004306B1; /* je: equal / zero */

loc_004306AD: ;
    edx = MEM32(eax);
    goto loc_004306B4;

loc_004306B1: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_004306B4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043078A; /* je: equal / zero */

loc_004306BC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00430718; /* jl: less (signed <) */

loc_004306C0: ;
    ecx = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esi + 0xC0;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0xD0) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0xC4) = ecx;
    ecx = MEM32(esi + 0xA8);
    MEM32(esi + 0xC8) = esi;
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xD4) = 0;
    MEM8(esi + 0xD8) = 1;
    MEM32(esi + 0xDC) = edx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00430714u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00430711u); } /* indirect call */
    }

loc_00430714: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00430718: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00430725u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00430722u); } /* indirect call */
    }

loc_00430725: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430736; /* jne: not equal / not zero */

loc_00430734: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00430736: ;
    edx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esi + 0xD0) = ecx;
    ecx = MEM32(esp + 0x14);
    eax = esi + 0xC0;
    MEM32(esi + 0xDC) = ecx;
    ecx = MEM32(esi + 0xA8);
    MEM32(eax) = edx;
    MEM32(esi + 0xC4) = edi;
    MEM32(esi + 0xC8) = esi;
    MEMF(esi + 0xCC) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xD4) = 0;
    MEM8(esi + 0xD8) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00430789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00430786u); } /* indirect call */
    }

loc_00430789: ;
    POP32(esp, edi);

loc_0043078A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004307D0
 * Original: 0x004307D0 - 0x004308FE (302 bytes, 115 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004307D0(void)
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

loc_004307D0: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00430846; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0xC)) */

loc_004307DF: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x88;
    /* nop */

loc_004307F0: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043080E; /* je: equal / zero */

loc_004307F6: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00430805; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00430800: ;
    xmm1 = xmm0; /* movaps */
    ebx = edx;

loc_00430805: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004307F0; /* jb: below (unsigned <) */

loc_0043080E: ;
    MEM32(eax + 0x10) = ebx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(ecx + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043082C; /* je: equal / zero */

loc_00430820: ;
    POP32(esp, ebx);

loc_00430821: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002D70A(); return; /* tail jmp 0x0002D70A */

loc_0043082C: ;
    esi = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00430840u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043083Du); } /* indirect call */
    }

loc_00430840: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00430846: ;
    SET_LO8(edx, MEM8(eax + 0x18));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430894; /* je: equal / zero */

loc_0043084D: ;
    edx = MEM32(ecx + 0xBC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430878; /* je: equal / zero */

loc_00430857: ;
    edx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edx * 4 + 0x88);
    edx = MEM32(edx + 0x20);
    POP32(esp, edi);
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = MEM32(ecx + 0xBC);
    g_seh_ebp = ebp; sub_0002D70A(); return; /* tail jmp 0x0002D70A */

loc_00430878: ;
    esi = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0043088Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043088Cu); } /* indirect call */
    }

loc_0043088F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00430894: ;
    edx = MEM32(eax + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_004308A0: ;
    esi = MEM32(ecx + edx * 4 + 0x88);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004308C1; /* je: equal / zero */

loc_004308AB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x20); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_004308C1; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x20)) */

loc_004308B6: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca >= _fcb)) goto loc_004308D4; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(eax + 0xC)) */

loc_004308C1: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004308C9; /* jne: not equal / not zero */

loc_004308C7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004308C9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004308A0; /* jb: below (unsigned <) */

loc_004308CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004308D4: ;
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430821; /* jne: not equal / not zero */

loc_004308E5: ;
    edi = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 8);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x28); PUSH32(esp, 0x004308F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004308F6u); } /* indirect call */
    }

loc_004308F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430950
 * Original: 0x00430950 - 0x00430972 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430950: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83881C;
    if (TEST_Z(_fa, _fb)) goto loc_0043096C; /* je: equal / zero */

loc_00430960: ;
    ecx = MEM32(0x9094A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0043096Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00430969u); } /* indirect call */
    }

loc_0043096C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430980
 * Original: 0x00430980 - 0x00430AE7 (359 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00430980: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004309AC; /* je: equal / zero */

loc_00430994: ;
    edx = esp + 0x50;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_004309A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004309A0; /* jne: not equal / not zero */

loc_004309AA: ;
    goto loc_004309B1;

loc_004309AC: ;
    MEM8(esp + 0x50) = 0;

loc_004309B1: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004309CE; /* je: equal / zero */

loc_004309BC: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_004309C2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004309C2; /* jne: not equal / not zero */

loc_004309CC: ;
    goto loc_004309D3;

loc_004309CE: ;
    MEM8(esp + 0x10) = 0;

loc_004309D3: ;
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, 0x82BE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004309E5u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_004309E5: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430A1E; /* jne: not equal / not zero */

loc_004309EE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00430A0C; /* jne: not equal / not zero */

loc_004309F4: ;
    edx = esp + 0x50;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00430A00: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430A00; /* jne: not equal / not zero */

loc_00430A0A: ;
    goto loc_00430A6D;

loc_00430A0C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00430A12: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430A12; /* jne: not equal / not zero */

loc_00430A1C: ;
    goto loc_00430A6D;

loc_00430A1E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430A3C; /* jne: not equal / not zero */

loc_00430A22: ;
    eax = esi + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00430A30;

    /* nop */

loc_00430A30: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430A30; /* jne: not equal / not zero */

loc_00430A3A: ;
    goto loc_00430A6D;

loc_00430A3C: ;
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00430A4Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00430A4C: ;
    eax = ebp + 1;
    MEM8(esp + edi + 0x5C) = 0;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430A6D; /* je: equal / zero */

loc_00430A5D: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00430A63: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430A63; /* jne: not equal / not zero */

loc_00430A6D: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x98);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00430AA8; /* je: equal / zero */

loc_00430A86: ;
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00430A92u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00430A92: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00430AA1u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00430AA1: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_00430ACA;

loc_00430AA8: ;
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00430AC5u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00430AC5: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_00430ACA: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x00430AD6u); RECOMP_ABI_CALL(0x0002011Du, sub_0002011D); /* call 0x0002011D */

loc_00430AD6: ;
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
 * sub_00430B40
 * Original: 0x00430B40 - 0x00430B98 (88 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00430B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi) = 0x839D54;
    if (CMP_EQ(_fa, _fb)) goto loc_00430B5B; /* je: equal / zero */

loc_00430B54: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00430B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00430B58u); } /* indirect call */
    }

loc_00430B5B: ;
    edi = MEM32(esi + 0xB8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430B8F; /* je: equal / zero */

loc_00430B65: ;
    ecx = edi + 0x38;
    PUSH32(esp, 0x00430B6Du); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_00430B6D: ;
    ecx = edi + 0x24;
    PUSH32(esp, 0x00430B75u); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_00430B75: ;
    ecx = edi + 0x10;
    PUSH32(esp, 0x00430B7Du); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_00430B7D: ;
    ecx = edi;
    PUSH32(esp, 0x00430B84u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00430B84: ;
    PUSH32(esp, 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00430B8Cu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00430B8C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00430B8F: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00029EE3(); return; /* tail jmp 0x00029EE3 */

}

/**
 * sub_00430BB0
 * Original: 0x00430BB0 - 0x00430BD1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430BB0: ;
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
    PUSH32(esp, 0x00430BCDu); RECOMP_ABI_CALL(0x00032197u, sub_00032197); /* call 0x00032197 */

loc_00430BCD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00430BE0
 * Original: 0x00430BE0 - 0x00430C05 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00430BE8u); RECOMP_ABI_CALL(0x00028589u, sub_00028589); /* call 0x00028589 */

loc_00430BE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00430BFF; /* je: equal / zero */

loc_00430BEF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430BFF; /* je: equal / zero */

loc_00430BF3: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00430BFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00430BFCu); } /* indirect call */
    }

loc_00430BFF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430C10
 * Original: 0x00430C10 - 0x00430C46 (54 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00430C1Eu); RECOMP_ABI_CALL(0x00016294u, sub_00016294); /* call 0x00016294 */

loc_00430C1E: ;
    ecx = MEM32(esi + 0xB8);
    edx = MEM32(edi + 4);
    eax = esi + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x839DB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00430C3Eu); RECOMP_ABI_CALL(0x00032197u, sub_00032197); /* call 0x00032197 */

loc_00430C3E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430C60
 * Original: 0x00430C60 - 0x00430D27 (199 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00430C60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00430CA7; /* ja: above (unsigned >) */

loc_00430C6C: ;
    edx = ZX8(MEM8(edx + 0x430CD0));
    { uint32_t _jt = MEM32(edx * 4 + 0x430CB4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00430C7Au) goto loc_00430C7A;
    if (_jt == 0x00430C83u) goto loc_00430C83;
    if (_jt == 0x00430C8Cu) goto loc_00430C8C;
    if (_jt == 0x00430C95u) goto loc_00430C95;
    if (_jt == 0x00430C9Eu) goto loc_00430C9E;
    if (_jt == 0x00430CA7u) goto loc_00430CA7;
    if (_jt == 0x00430CB0u) goto loc_00430CB0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00430C7A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00024ED4(); return; /* tail jmp 0x00024ED4 */

loc_00430C83: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002C418(); return; /* tail jmp 0x0002C418 */

loc_00430C8C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00028E26(); return; /* tail jmp 0x00028E26 */

loc_00430C95: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00012ADB(); return; /* tail jmp 0x00012ADB */

loc_00430C9E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001D89B(); return; /* tail jmp 0x0001D89B */

loc_00430CA7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00016294(); return; /* tail jmp 0x00016294 */

loc_00430CB0: ;
    esp += 8; return; /* ret 4 */

    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00430D21u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00430D1Fu); } /* indirect call */
    }

loc_00430D21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00430D24: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430D30
 * Original: 0x00430D30 - 0x00430D48 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430D30: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430D45; /* je: equal / zero */

loc_00430D37: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00430D42u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00430D40u); } /* indirect call */
    }

loc_00430D42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00430D45: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430D50
 * Original: 0x00430D50 - 0x00430D6D (29 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430D50: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430D6A; /* je: equal / zero */

loc_00430D57: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00430D67u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00430D65u); } /* indirect call */
    }

loc_00430D67: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00430D6A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00430D80
 * Original: 0x00430D80 - 0x00430D98 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430D80: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430D95; /* je: equal / zero */

loc_00430D87: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00430D92u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00430D90u); } /* indirect call */
    }

loc_00430D92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00430D95: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00430DA0
 * Original: 0x00430DA0 - 0x00430DAA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430DA0(void)
{

loc_00430DA0: ;
    eax = MEM32(esp + 4);
    MEM32(0x9095F8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00430DB0
 * Original: 0x00430DB0 - 0x00430DC3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430DB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00430DD0
 * Original: 0x00430DD0 - 0x00430DD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430DD0(void)
{

loc_00430DD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00430DE0
 * Original: 0x00430DE0 - 0x00430E03 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00430DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430DE0: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 3));
    edx = ZX8(MEM8(ecx + 2));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00430E10
 * Original: 0x00430E10 - 0x00430F59 (329 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00430E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00430E10: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00430F54; /* je: equal / zero */

loc_00430E20: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x10) = eax;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00430EF4; /* jne: not equal / not zero */

loc_00430E34: ;
    SET_LO8(ecx, MEM8(ebp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = ebp + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00430F52; /* je: equal / zero */

loc_00430E42: ;
    ecx = ZX8(MEM8(eax + 3));
    edx = ZX8(MEM8(eax + 2));
    ebx = ZX8(MEM8(eax + 0xA));
    edi = ZX8(MEM8(eax));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + 1));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + 0xB));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(MEM8(eax + 9));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(MEM8(eax + 8));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 0xC;
    eax = (uint32_t)(int32_t)SMEM8(eax + 4);
    _fb = (uint32_t)(0xFFFFFFBFu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    edx = ebx + edx + 0x10;
    if (CMP_A(_fa, _fb)) goto loc_00430EE2; /* ja: above (unsigned >) */

loc_00430E94: ;
    eax = ZX8(MEM8(eax + 0x430F70));
    { uint32_t _jt = MEM32(eax * 4 + 0x430F5C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00430EA2u) goto loc_00430EA2;
    if (_jt == 0x00430EAFu) goto loc_00430EAF;
    if (_jt == 0x00430EC3u) goto loc_00430EC3;
    if (_jt == 0x00430ED1u) goto loc_00430ED1;
    if (_jt == 0x00430EE2u) goto loc_00430EE2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00430EA2: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430EE2; /* je: equal / zero */

loc_00430EA8: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    goto loc_00430EDD;

loc_00430EAF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430EE2; /* je: equal / zero */

loc_00430EB6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00430EBEu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00430EBCu); } /* indirect call */
    }

loc_00430EBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00430EE2;

loc_00430EC3: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430EE2; /* je: equal / zero */

loc_00430ECA: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    goto loc_00430EDD;

loc_00430ED1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430EE2; /* je: equal / zero */

loc_00430ED8: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00430EDD: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00430EDFu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00430EDDu); } /* indirect call */
    }

loc_00430EDF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00430EE2: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00430E42; /* jne: not equal / not zero */

loc_00430EED: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00430EF4: ;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_00430F00: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00430F00; /* jne: not equal / not zero */

loc_00430F07: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = MEM32(0x9094F0);
    PUSH32(esp, esi);
    MEM32(0x9095F8) = eax;
    PUSH32(esp, 0x00430F1Bu); RECOMP_ABI_CALL(0x00028DEFu, sub_00028DEF); /* call 0x00028DEF */

loc_00430F1B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00430F24u); RECOMP_ABI_CALL(0x0001F8FDu, sub_0001F8FD); /* call 0x0001F8FD */

loc_00430F24: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00430F41; /* jbe: below or equal (unsigned <=) */

loc_00430F2F: ;
    /* nop */

loc_00430F30: ;
    ecx = esi + ebp;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00430F3Bu); RECOMP_ABI_CALL(0x00019EEEu, sub_00019EEE); /* call 0x00019EEE */

loc_00430F3B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00430F30; /* jb: below (unsigned <) */

loc_00430F41: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00430F4D; /* je: equal / zero */

loc_00430F45: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00430F4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00430F4Bu); } /* indirect call */
    }

loc_00430F4D: ;
    PUSH32(esp, 0x00430F52u); RECOMP_ABI_CALL(0x000256FEu, sub_000256FE); /* call 0x000256FE */

loc_00430F52: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00430F54: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00431010
 * Original: 0x00431010 - 0x00431120 (272 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00431010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    eax = esp + 4;
    PUSH32(esp, 0x839DD0);
    MEM16(esp + 8) = 0x20;
    PUSH32(esp, eax);
    MEM8(esp + 0xC) = LO8(ebx);
    PUSH32(esp, 0x00431030u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00431030: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0043103D; /* jne: not equal / not zero */

loc_00431038: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0043103D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x839DD8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0043104Cu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0043104C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00431057; /* jne: not equal / not zero */

loc_00431054: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00431057: ;
    edx = esp + 4;
    PUSH32(esp, 0x839E24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00431066u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00431066: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00431076; /* jne: not equal / not zero */

loc_0043106E: ;
    eax = 2;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00431076: ;
    eax = esp + 4;
    PUSH32(esp, 0x839E28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00431085u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00431085: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00431095; /* jne: not equal / not zero */

loc_0043108D: ;
    eax = 3;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00431095: ;
    ecx = esp + 4;
    PUSH32(esp, 0x839E2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004310A4u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_004310A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004310B4; /* jne: not equal / not zero */

loc_004310AC: ;
    eax = 4;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004310B4: ;
    edx = esp + 4;
    PUSH32(esp, 0x839E30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004310C3u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_004310C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004310D3; /* jne: not equal / not zero */

loc_004310CB: ;
    eax = 5;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004310D3: ;
    eax = esp + 4;
    PUSH32(esp, 0x839E34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004310E2u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_004310E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004310F2; /* jne: not equal / not zero */

loc_004310EA: ;
    eax = 6;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004310F2: ;
    ecx = esp + 4;
    PUSH32(esp, 0x839E38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00431101u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00431101: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00431111; /* jne: not equal / not zero */

loc_00431109: ;
    eax = 7;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00431111: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00431170
 * Original: 0x00431170 - 0x004311B1 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431170: ;
    SET_LO8(eax, MEM8(0x909700));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004311B0; /* jne: not equal / not zero */

loc_00431179: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00431180: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00431186u); RECOMP_ABI_CALL(0x0001EAE3u, sub_0001EAE3); /* call 0x0001EAE3 */

loc_00431186: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x9094F8) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00431180; /* jl: less (signed <) */

loc_00431198: ;
    ecx = 0x20;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0x909578;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM8(0x909700) = 1;
    POP32(esp, esi);

loc_004311B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004311D0
 * Original: 0x004311D0 - 0x004311EB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004311D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004311D0: ;
    SET_LO8(eax, MEM8(0x909700));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004311DE; /* jne: not equal / not zero */

loc_004311D9: ;
    PUSH32(esp, 0x004311DEu); RECOMP_ABI_CALL(0x0003047Du, sub_0003047D); /* call 0x0003047D */

loc_004311DE: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x9094F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00431200
 * Original: 0x00431200 - 0x0043121B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431200: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x839E50;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431230
 * Original: 0x00431230 - 0x00431244 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431230: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431243; /* je: equal / zero */

loc_0043123D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431243u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431241u); } /* indirect call */
    }

loc_00431243: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431250
 * Original: 0x00431250 - 0x00431261 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431250(void)
{

loc_00431250: ;
    eax = MEM32(esp + 4);
    MEM32(0x9095FC) = eax;
    MEM8(0x909600) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00431270
 * Original: 0x00431270 - 0x0043127D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431270: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x909600) = LO8(eax);
    MEM32(0x9095FC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00431280
 * Original: 0x00431280 - 0x0043128A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431280(void)
{

loc_00431280: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431290
 * Original: 0x00431290 - 0x0043129A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431290(void)
{

loc_00431290: ;
    MEM32(ecx + 0x10) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004312A0
 * Original: 0x004312A0 - 0x004312D1 (49 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004312A0(void)
{

loc_004312A0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004312AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004312ABu); } /* indirect call */
    }

loc_004312AE: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 8) = ecx;
    eax = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004312C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004312C1u); } /* indirect call */
    }

loc_004312C4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004312CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004312CAu); } /* indirect call */
    }

loc_004312CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004312E0
 * Original: 0x004312E0 - 0x00431303 (35 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004312E0(void)
{

loc_004312E0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004312EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004312EBu); } /* indirect call */
    }

loc_004312EE: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 8) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004312FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004312FBu); } /* indirect call */
    }

loc_004312FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00431310
 * Original: 0x00431310 - 0x0043133F (47 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431310: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0043131Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043131Bu); } /* indirect call */
    }

loc_0043131E: ;
    ecx = MEM32(esi + 0xC);
    MEM32(ecx + 8) = 0;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00431332u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043132Fu); } /* indirect call */
    }

loc_00431332: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0043133Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431338u); } /* indirect call */
    }

loc_0043133A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431350
 * Original: 0x00431350 - 0x0043138E (62 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431350: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi);
    edi = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00431362u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043135Fu); } /* indirect call */
    }

loc_00431362: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = 0;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0043137Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431379u); } /* indirect call */
    }

loc_0043137C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431388; /* je: equal / zero */

loc_00431380: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431388u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431386u); } /* indirect call */
    }

loc_00431388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004313A0
 * Original: 0x004313A0 - 0x004313B7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004313A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004313A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839E64;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004313C0
 * Original: 0x004313C0 - 0x004313D4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004313C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004313C0: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004313D3; /* je: equal / zero */

loc_004313CD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004313D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004313D1u); } /* indirect call */
    }

loc_004313D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004313E0
 * Original: 0x004313E0 - 0x0043140B (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004313E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004313E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431405; /* ja: above (unsigned >) */

loc_004313E9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x43140C); /* switch: 9 entries, 4 targets */
    if (_jt == 0x004313F0u) goto loc_004313F0;
    if (_jt == 0x004313F5u) goto loc_004313F5;
    if (_jt == 0x004313FDu) goto loc_004313FD;
    if (_jt == 0x00431405u) goto loc_00431405;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004313F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_004313F5: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_004313FD: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_00431405: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431450
 * Original: 0x00431450 - 0x0043146B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431450: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839E78;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431480
 * Original: 0x00431480 - 0x00431494 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431480: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431493; /* je: equal / zero */

loc_0043148D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431491u); } /* indirect call */
    }

loc_00431493: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004314A0
 * Original: 0x004314A0 - 0x004314CE (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004314A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004314A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004314C8; /* ja: above (unsigned >) */

loc_004314A9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4314D0); /* switch: 9 entries, 4 targets */
    if (_jt == 0x004314B0u) goto loc_004314B0;
    if (_jt == 0x004314B8u) goto loc_004314B8;
    if (_jt == 0x004314C0u) goto loc_004314C0;
    if (_jt == 0x004314C8u) goto loc_004314C8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004314B0: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_004314B8: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_004314C0: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_004314C8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004314CE
 * Original: 0x004314CE - 0x00431510 (66 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004314CE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004314CE: ;
    edi = edi;
    SET_LO8(eax, 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -939506924)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(eax + -939506924) = MEM8(eax + -939506924) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + -939506924)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x43) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x43) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x43) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x43) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x43) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x43) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x43) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
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

}

/**
 * sub_00431510
 * Original: 0x00431510 - 0x0043152B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431510: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839E8C;
    MEM32(eax + 4) = 2;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431540
 * Original: 0x00431540 - 0x00431554 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431540: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431553; /* je: equal / zero */

loc_0043154D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431551u); } /* indirect call */
    }

loc_00431553: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431560
 * Original: 0x00431560 - 0x004315B6 (86 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431560: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00431582u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00431582: ;
    ecx = MEM32(0x9095FC);
    MEM8(esp + esi + 0x14) = 0;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004315A4; /* je: equal / zero */

loc_00431596: ;
    ecx = MEM32(ecx + 0x10);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004315A1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0043159Fu); } /* indirect call */
    }

loc_004315A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004315A4: ;
    MEM32(edi + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004315D0
 * Original: 0x004315D0 - 0x00431606 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004315D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004315D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431600; /* ja: above (unsigned >) */

loc_004315D9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x431608); /* switch: 9 entries, 5 targets */
    if (_jt == 0x004315E0u) goto loc_004315E0;
    if (_jt == 0x004315E8u) goto loc_004315E8;
    if (_jt == 0x004315F0u) goto loc_004315F0;
    if (_jt == 0x004315F8u) goto loc_004315F8;
    if (_jt == 0x00431600u) goto loc_00431600;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004315E0: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_004315E8: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_004315F0: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_004315F8: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

loc_00431600: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431606
 * Original: 0x00431606 - 0x00431650 (74 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431606(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00431606: ;
    edi = edi;
    ecx -= 1; /* loopne: count down */
    if ((ecx != 0) && (_flags)) goto loc_0043161F; /* loopne: ecx is non-zero and zero flag clear */

loc_0043160A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x16000043) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x16000043) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0043161F: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x16000043) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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

}

/**
 * sub_00431650
 * Original: 0x00431650 - 0x0043166B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431650: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839EA0;
    MEM32(eax + 4) = 0xE;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431680
 * Original: 0x00431680 - 0x00431694 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431680: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431693; /* je: equal / zero */

loc_0043168D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431691u); } /* indirect call */
    }

loc_00431693: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004316A0
 * Original: 0x004316A0 - 0x004316CD (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004316A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004316A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004316C7; /* ja: above (unsigned >) */

loc_004316A9: ;
    eax = ZX8(MEM8(eax + 0x4316DC));
    { uint32_t _jt = MEM32(eax * 4 + 0x4316D0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x004316B7u) goto loc_004316B7;
    if (_jt == 0x004316BFu) goto loc_004316BF;
    if (_jt == 0x004316C7u) goto loc_004316C7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004316B7: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

loc_004316BF: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_004316C7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431700
 * Original: 0x00431700 - 0x0043171B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431700: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839EB4;
    MEM32(eax + 4) = 0xF;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431730
 * Original: 0x00431730 - 0x00431744 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431730: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431743; /* je: equal / zero */

loc_0043173D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431741u); } /* indirect call */
    }

loc_00431743: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431750
 * Original: 0x00431750 - 0x0043188A (314 bytes, 112 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431750: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x110);
    ebp = ecx;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_004317F5; /* jae: above or equal (unsigned >=) */

loc_00431774: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00431780u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00431780: ;
    ecx = esp + 0x1C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x839DD0);
    PUSH32(esp, ecx);
    MEM8(esp + esi + 0x24) = LO8(ebx);
    MEM32(ebp + 0x10) = ebx;
    PUSH32(esp, 0x00431798u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00431798: ;
    edi = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043187D; /* je: equal / zero */

loc_004317A5: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004317C9; /* jl: less (signed <) */

loc_004317AA: ;
    /* nop */

loc_004317B0: ;
    edx = (uint32_t)(int32_t)SMEM8(esp + esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004317BBu); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_004317BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004317C9; /* je: equal / zero */

loc_004317C2: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + esi + 0x11) = LO8(ebx);
    if ((_fas >= 0)) goto loc_004317B0; /* jns: not sign (positive) */

loc_004317C9: ;
    ecx = MEM32(0x9095FC);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043187D; /* je: equal / zero */

loc_004317DA: ;
    ecx = MEM32(ecx + 0x10);
    edx = esp + edi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004317E5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004317E3u); } /* indirect call */
    }

loc_004317E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004317F5: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    eax = esi + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x839EC8);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0043180Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043180Bu); } /* indirect call */
    }

loc_0043180E: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0043181Bu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0043181B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x839DD0);
    MEM8(edi + esi) = LO8(ebx);
    PUSH32(esp, edi);
    MEM32(ebp + 0x10) = ebx;
    PUSH32(esp, 0x0043182Eu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0043182E: ;
    ebp = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043187D; /* je: equal / zero */

loc_00431837: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00431858; /* jl: less (signed <) */

loc_0043183C: ;
    /* nop */

loc_00431840: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043184Au); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_0043184A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431858; /* je: equal / zero */

loc_00431851: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + edi + 1) = LO8(ebx);
    if ((_fas >= 0)) goto loc_00431840; /* jns: not sign (positive) */

loc_00431858: ;
    ecx = MEM32(0x9095FC);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431871; /* je: equal / zero */

loc_00431865: ;
    ecx = MEM32(ecx + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0043186Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0043186Cu); } /* indirect call */
    }

loc_0043186E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00431871: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0043187Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043187Au); } /* indirect call */
    }

loc_0043187D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004318E0
 * Original: 0x004318E0 - 0x0043190D (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004318E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004318E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431907; /* ja: above (unsigned >) */

loc_004318E9: ;
    eax = ZX8(MEM8(eax + 0x43191C));
    { uint32_t _jt = MEM32(eax * 4 + 0x431910); /* switch: 3 entries, 3 targets */
    if (_jt == 0x004318F7u) goto loc_004318F7;
    if (_jt == 0x004318FFu) goto loc_004318FF;
    if (_jt == 0x00431907u) goto loc_00431907;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004318F7: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

loc_004318FF: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00431907: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431940
 * Original: 0x00431940 - 0x0043195B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431940: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839EE8;
    MEM32(eax + 4) = 0xC;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431970
 * Original: 0x00431970 - 0x00431984 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431970: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431983; /* je: equal / zero */

loc_0043197D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431983u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431981u); } /* indirect call */
    }

loc_00431983: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431990
 * Original: 0x00431990 - 0x004319B6 (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431990: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x9095FC);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004319AB; /* je: equal / zero */

loc_004319A0: ;
    ecx = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x004319A8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x004319A6u); } /* indirect call */
    }

loc_004319A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004319AB: ;
    MEM32(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004319C0
 * Original: 0x004319C0 - 0x004319E5 (37 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004319C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004319C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004319DF; /* ja: above (unsigned >) */

loc_004319C9: ;
    eax = ZX8(MEM8(eax + 0x4319F0));
    { uint32_t _jt = MEM32(eax * 4 + 0x4319E8); /* switch: 2 entries, 2 targets */
    if (_jt == 0x004319D7u) goto loc_004319D7;
    if (_jt == 0x004319DFu) goto loc_004319DF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004319D7: ;
    eax = 0xD;
    esp += 8; return; /* ret 4 */

loc_004319DF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431A10
 * Original: 0x00431A10 - 0x00431A2B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431A10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839EFC;
    MEM32(eax + 4) = 0xD;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431A40
 * Original: 0x00431A40 - 0x00431A54 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431A40: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431A53; /* je: equal / zero */

loc_00431A4D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431A53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431A51u); } /* indirect call */
    }

loc_00431A53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431A60
 * Original: 0x00431A60 - 0x00431A66 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431A60: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431A70
 * Original: 0x00431A70 - 0x00431A8B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431A70: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F10;
    MEM32(eax + 4) = 9;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431AA0
 * Original: 0x00431AA0 - 0x00431AB4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431AA0: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431AB3; /* je: equal / zero */

loc_00431AAD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431AB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431AB1u); } /* indirect call */
    }

loc_00431AB3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431AC0
 * Original: 0x00431AC0 - 0x00431AE5 (37 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431AC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431ADF; /* ja: above (unsigned >) */

loc_00431AC9: ;
    eax = ZX8(MEM8(eax + 0x431AF0));
    { uint32_t _jt = MEM32(eax * 4 + 0x431AE8); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00431AD7u) goto loc_00431AD7;
    if (_jt == 0x00431ADFu) goto loc_00431ADF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00431AD7: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_00431ADF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431B10
 * Original: 0x00431B10 - 0x00431B2B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431B10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F24;
    MEM32(eax + 4) = 0xA;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431B40
 * Original: 0x00431B40 - 0x00431B54 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431B40: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431B53; /* je: equal / zero */

loc_00431B4D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431B53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431B51u); } /* indirect call */
    }

loc_00431B53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431B60
 * Original: 0x00431B60 - 0x00431BB7 (87 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431B60: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00431B82u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00431B82: ;
    ecx = MEM32(0x9095FC);
    MEM8(esp + esi + 0x14) = 0;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431BA5; /* je: equal / zero */

loc_00431B97: ;
    ecx = MEM32(ecx + 0x10);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00431BA2u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00431BA0u); } /* indirect call */
    }

loc_00431BA2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00431BA5: ;
    MEM32(edi + 0x10) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431BD0
 * Original: 0x00431BD0 - 0x00431BFD (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431BD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431BF7; /* ja: above (unsigned >) */

loc_00431BD9: ;
    eax = ZX8(MEM8(eax + 0x431C0C));
    { uint32_t _jt = MEM32(eax * 4 + 0x431C00); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00431BE7u) goto loc_00431BE7;
    if (_jt == 0x00431BEFu) goto loc_00431BEF;
    if (_jt == 0x00431BF7u) goto loc_00431BF7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00431BE7: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_00431BEF: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_00431BF7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431C30
 * Original: 0x00431C30 - 0x00431C4B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431C30: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F38;
    MEM32(eax + 4) = 0xB;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431C60
 * Original: 0x00431C60 - 0x00431C74 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431C60: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431C73; /* je: equal / zero */

loc_00431C6D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431C71u); } /* indirect call */
    }

loc_00431C73: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431C80
 * Original: 0x00431C80 - 0x00431C86 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431C80: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431C90
 * Original: 0x00431C90 - 0x00431CAB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431C90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F4C;
    MEM32(eax + 4) = 3;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431CC0
 * Original: 0x00431CC0 - 0x00431CD4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431CC0: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431CD3; /* je: equal / zero */

loc_00431CCD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431CD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431CD1u); } /* indirect call */
    }

loc_00431CD3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431CE0
 * Original: 0x00431CE0 - 0x00431D16 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431CE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431D10; /* ja: above (unsigned >) */

loc_00431CE9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x431D18); /* switch: 9 entries, 5 targets */
    if (_jt == 0x00431CF0u) goto loc_00431CF0;
    if (_jt == 0x00431CF8u) goto loc_00431CF8;
    if (_jt == 0x00431D00u) goto loc_00431D00;
    if (_jt == 0x00431D08u) goto loc_00431D08;
    if (_jt == 0x00431D10u) goto loc_00431D10;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00431CF0: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_00431CF8: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

loc_00431D00: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_00431D08: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_00431D10: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431D16
 * Original: 0x00431D16 - 0x00431D60 (74 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431D16(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00431D16: ;
    edi = edi;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x1CF00043)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(0x1CF00043) = MEM8(0x1CF00043) + LO8(ebx);
    _fa = (uint32_t)(MEM8(0x1CF00043)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1D100043) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x43) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1D080043) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x1D100043) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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

}

/**
 * sub_00431D60
 * Original: 0x00431D60 - 0x00431D7B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431D60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F60;
    MEM32(eax + 4) = 4;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431D90
 * Original: 0x00431D90 - 0x00431DA4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431D90: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431DA3; /* je: equal / zero */

loc_00431D9D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431DA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431DA1u); } /* indirect call */
    }

loc_00431DA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431DB0
 * Original: 0x00431DB0 - 0x00431DDC (44 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x909600);
    PUSH32(esp, 0x00431DC9u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00431DC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x909600) = LO8(eax);
    MEM32(edi + 0x10) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431DF0
 * Original: 0x00431DF0 - 0x00431E1D (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431DF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431E17; /* ja: above (unsigned >) */

loc_00431DF9: ;
    eax = ZX8(MEM8(eax + 0x431E2C));
    { uint32_t _jt = MEM32(eax * 4 + 0x431E20); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00431E07u) goto loc_00431E07;
    if (_jt == 0x00431E0Fu) goto loc_00431E0F;
    if (_jt == 0x00431E17u) goto loc_00431E17;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00431E07: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_00431E0F: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_00431E17: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431E50
 * Original: 0x00431E50 - 0x00431E6B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431E50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F74;
    MEM32(eax + 4) = 5;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431E80
 * Original: 0x00431E80 - 0x00431E94 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431E80: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431E93; /* je: equal / zero */

loc_00431E8D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431E93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431E91u); } /* indirect call */
    }

loc_00431E93: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431EA0
 * Original: 0x00431EA0 - 0x00431EC5 (37 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431EA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431EBF; /* ja: above (unsigned >) */

loc_00431EA9: ;
    eax = ZX8(MEM8(eax + 0x431ED0));
    { uint32_t _jt = MEM32(eax * 4 + 0x431EC8); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00431EB7u) goto loc_00431EB7;
    if (_jt == 0x00431EBFu) goto loc_00431EBF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00431EB7: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_00431EBF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431EF0
 * Original: 0x00431EF0 - 0x00431F0B (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431EF0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F88;
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431F20
 * Original: 0x00431F20 - 0x00431F34 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431F20: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431F33; /* je: equal / zero */

loc_00431F2D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431F33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431F31u); } /* indirect call */
    }

loc_00431F33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431F40
 * Original: 0x00431F40 - 0x00431F6D (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00431F40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00431F67; /* ja: above (unsigned >) */

loc_00431F49: ;
    eax = ZX8(MEM8(eax + 0x431F7C));
    { uint32_t _jt = MEM32(eax * 4 + 0x431F70); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00431F57u) goto loc_00431F57;
    if (_jt == 0x00431F5Fu) goto loc_00431F5F;
    if (_jt == 0x00431F67u) goto loc_00431F67;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00431F57: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_00431F5F: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_00431F67: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00431FA0
 * Original: 0x00431FA0 - 0x00431FBB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431FA0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839F9C;
    MEM32(eax + 4) = 7;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00431FD0
 * Original: 0x00431FD0 - 0x00431FE4 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431FD0: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00431FE3; /* je: equal / zero */

loc_00431FDD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00431FE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00431FE1u); } /* indirect call */
    }

loc_00431FE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00431FF0
 * Original: 0x00431FF0 - 0x00432051 (97 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00431FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00431FF0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00432013u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00432013: ;
    ecx = MEM32(0x9095FC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + esi + 0x18) = LO8(ebx);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043203C; /* je: equal / zero */

loc_00432029: ;
    ecx = MEM32(ecx + 0x10);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x909600);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00432039u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00432037u); } /* indirect call */
    }

loc_00432039: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0043203C: ;
    MEM8(0x909600) = LO8(ebx);
    MEM32(edi + 0x10) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432070
 * Original: 0x00432070 - 0x0043209D (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00432070: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00432097; /* ja: above (unsigned >) */

loc_00432079: ;
    eax = ZX8(MEM8(eax + 0x4320AC));
    { uint32_t _jt = MEM32(eax * 4 + 0x4320A0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00432087u) goto loc_00432087;
    if (_jt == 0x0043208Fu) goto loc_0043208F;
    if (_jt == 0x00432097u) goto loc_00432097;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00432087: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_0043208F: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_00432097: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004320D0
 * Original: 0x004320D0 - 0x004320EB (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004320D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004320D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax) = 0x839FB0;
    MEM32(eax + 4) = 8;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00432100
 * Original: 0x00432100 - 0x00432114 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432100: ;
    MEM32(ecx) = 0x839E50;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432113; /* je: equal / zero */

loc_0043210D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432113u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432111u); } /* indirect call */
    }

loc_00432113: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432120
 * Original: 0x00432120 - 0x00432156 (54 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00432120: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00432150; /* ja: above (unsigned >) */

loc_00432129: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x432158); /* switch: 9 entries, 5 targets */
    if (_jt == 0x00432130u) goto loc_00432130;
    if (_jt == 0x00432138u) goto loc_00432138;
    if (_jt == 0x00432140u) goto loc_00432140;
    if (_jt == 0x00432148u) goto loc_00432148;
    if (_jt == 0x00432150u) goto loc_00432150;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00432130: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_00432138: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_00432140: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_00432148: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

loc_00432150: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432156
 * Original: 0x00432156 - 0x004321CF (121 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432156(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432156: ;
    edi = edi;
    MEM8(ecx) = MEM8(ecx) ^ HI8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004321B6; /* je: equal / zero */

loc_004321B0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004321B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004321B4u); } /* indirect call */
    }

loc_004321B6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004321C9; /* je: equal / zero */

loc_004321BD: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004321C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004321C6u); } /* indirect call */
    }

loc_004321C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004321E0
 * Original: 0x004321E0 - 0x004324F0 (784 bytes, 221 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004321E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004321E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004324ED; /* ja: above (unsigned >) */

loc_004321ED: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x4324F0); /* switch: 16 entries, 16 targets */
    if (_jt == 0x004321F4u) goto loc_004321F4;
    if (_jt == 0x0043223Du) goto loc_0043223D;
    if (_jt == 0x0043226Bu) goto loc_0043226B;
    if (_jt == 0x00432299u) goto loc_00432299;
    if (_jt == 0x004322C7u) goto loc_004322C7;
    if (_jt == 0x004322F5u) goto loc_004322F5;
    if (_jt == 0x00432323u) goto loc_00432323;
    if (_jt == 0x00432351u) goto loc_00432351;
    if (_jt == 0x0043237Fu) goto loc_0043237F;
    if (_jt == 0x004323ADu) goto loc_004323AD;
    if (_jt == 0x004323DBu) goto loc_004323DB;
    if (_jt == 0x00432409u) goto loc_00432409;
    if (_jt == 0x00432437u) goto loc_00432437;
    if (_jt == 0x00432465u) goto loc_00432465;
    if (_jt == 0x0043248Fu) goto loc_0043248F;
    if (_jt == 0x004324B9u) goto loc_004324B9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004321F4: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0043220Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432208u); } /* indirect call */
    }

loc_0043220B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_00432213: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x10) = 0;
    MEM32(eax) = 0x839E64;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_0043223D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00432254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432251u); } /* indirect call */
    }

loc_00432254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_0043225C: ;
    ecx = eax;
    PUSH32(esp, 0x00432263u); RECOMP_ABI_CALL(0x00024006u, sub_00024006); /* call 0x00024006 */

loc_00432263: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_0043226B: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00432282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043227Fu); } /* indirect call */
    }

loc_00432282: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_0043228A: ;
    ecx = eax;
    PUSH32(esp, 0x00432291u); RECOMP_ABI_CALL(0x00023110u, sub_00023110); /* call 0x00023110 */

loc_00432291: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_00432299: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004322B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004322ADu); } /* indirect call */
    }

loc_004322B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_004322B8: ;
    ecx = eax;
    PUSH32(esp, 0x004322BFu); RECOMP_ABI_CALL(0x0001CC5Cu, sub_0001CC5C); /* call 0x0001CC5C */

loc_004322BF: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_004322C7: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004322DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004322DBu); } /* indirect call */
    }

loc_004322DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_004322E6: ;
    ecx = eax;
    PUSH32(esp, 0x004322EDu); RECOMP_ABI_CALL(0x00024FBAu, sub_00024FBA); /* call 0x00024FBA */

loc_004322ED: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_004322F5: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0043230Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432309u); } /* indirect call */
    }

loc_0043230C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_00432314: ;
    ecx = eax;
    PUSH32(esp, 0x0043231Bu); RECOMP_ABI_CALL(0x0002BA90u, sub_0002BA90); /* call 0x0002BA90 */

loc_0043231B: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_00432323: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0043233Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432337u); } /* indirect call */
    }

loc_0043233A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_00432342: ;
    ecx = eax;
    PUSH32(esp, 0x00432349u); RECOMP_ABI_CALL(0x00032048u, sub_00032048); /* call 0x00032048 */

loc_00432349: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_00432351: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00432368u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432365u); } /* indirect call */
    }

loc_00432368: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_00432370: ;
    ecx = eax;
    PUSH32(esp, 0x00432377u); RECOMP_ABI_CALL(0x0003564Eu, sub_0003564E); /* call 0x0003564E */

loc_00432377: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_0043237F: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00432396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432393u); } /* indirect call */
    }

loc_00432396: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_0043239E: ;
    ecx = eax;
    PUSH32(esp, 0x004323A5u); RECOMP_ABI_CALL(0x000141BFu, sub_000141BF); /* call 0x000141BF */

loc_004323A5: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_004323AD: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004323C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004323C1u); } /* indirect call */
    }

loc_004323C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_004323CC: ;
    ecx = eax;
    PUSH32(esp, 0x004323D3u); RECOMP_ABI_CALL(0x0003274Bu, sub_0003274B); /* call 0x0003274B */

loc_004323D3: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_004323DB: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004323F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004323EFu); } /* indirect call */
    }

loc_004323F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_004323FA: ;
    ecx = eax;
    PUSH32(esp, 0x00432401u); RECOMP_ABI_CALL(0x00036C4Cu, sub_00036C4C); /* call 0x00036C4C */

loc_00432401: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_00432409: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00432420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043241Du); } /* indirect call */
    }

loc_00432420: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_00432428: ;
    ecx = eax;
    PUSH32(esp, 0x0043242Fu); RECOMP_ABI_CALL(0x00011500u, sub_00011500); /* call 0x00011500 */

loc_0043242F: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_00432437: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0043244Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043244Bu); } /* indirect call */
    }

loc_0043244E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_00432456: ;
    ecx = eax;
    PUSH32(esp, 0x0043245Du); RECOMP_ABI_CALL(0x00036D9Bu, sub_00036D9B); /* call 0x00036D9B */

loc_0043245D: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_00432465: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0043247Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432479u); } /* indirect call */
    }

loc_0043247C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_00432480: ;
    ecx = eax;
    PUSH32(esp, 0x00432487u); RECOMP_ABI_CALL(0x0001F05Bu, sub_0001F05B); /* call 0x0001F05B */

loc_00432487: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_0043248F: ;
    ecx = MEM32(0x9095F8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004324A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004324A3u); } /* indirect call */
    }

loc_004324A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_004324AA: ;
    ecx = eax;
    PUSH32(esp, 0x004324B1u); RECOMP_ABI_CALL(0x0001A24Au, sub_0001A24A); /* call 0x0001A24A */

loc_004324B1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_004324B9: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004324D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004324CDu); } /* indirect call */
    }

loc_004324D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004324E3; /* je: equal / zero */

loc_004324D4: ;
    ecx = eax;
    PUSH32(esp, 0x004324DBu); RECOMP_ABI_CALL(0x00020726u, sub_00020726); /* call 0x00020726 */

loc_004324DB: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_004324E3: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

loc_004324ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00432650
 * Original: 0x00432650 - 0x0043267F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432650: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_00432666; /* je: equal / zero */

loc_00432660: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432666u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432664u); } /* indirect call */
    }

loc_00432666: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00432679; /* je: equal / zero */

loc_0043266D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432679u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432676u); } /* indirect call */
    }

loc_00432679: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432690
 * Original: 0x00432690 - 0x004326BF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432690: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004326A6; /* je: equal / zero */

loc_004326A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004326A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004326A4u); } /* indirect call */
    }

loc_004326A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004326B9; /* je: equal / zero */

loc_004326AD: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004326B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004326B6u); } /* indirect call */
    }

loc_004326B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004326D0
 * Original: 0x004326D0 - 0x004326FF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004326D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004326D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004326E6; /* je: equal / zero */

loc_004326E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004326E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004326E4u); } /* indirect call */
    }

loc_004326E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004326F9; /* je: equal / zero */

loc_004326ED: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004326F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004326F6u); } /* indirect call */
    }

loc_004326F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432710
 * Original: 0x00432710 - 0x0043273F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432710: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_00432726; /* je: equal / zero */

loc_00432720: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432724u); } /* indirect call */
    }

loc_00432726: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00432739; /* je: equal / zero */

loc_0043272D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432739u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432736u); } /* indirect call */
    }

loc_00432739: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432750
 * Original: 0x00432750 - 0x0043277F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432750: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_00432766; /* je: equal / zero */

loc_00432760: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432766u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432764u); } /* indirect call */
    }

loc_00432766: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00432779; /* je: equal / zero */

loc_0043276D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432779u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432776u); } /* indirect call */
    }

loc_00432779: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432790
 * Original: 0x00432790 - 0x004327BF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432790: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004327A6; /* je: equal / zero */

loc_004327A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004327A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004327A4u); } /* indirect call */
    }

loc_004327A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004327B9; /* je: equal / zero */

loc_004327AD: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004327B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004327B6u); } /* indirect call */
    }

loc_004327B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004327D0
 * Original: 0x004327D0 - 0x004327FF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004327D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004327D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004327E6; /* je: equal / zero */

loc_004327E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004327E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004327E4u); } /* indirect call */
    }

loc_004327E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004327F9; /* je: equal / zero */

loc_004327ED: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004327F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004327F6u); } /* indirect call */
    }

loc_004327F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432810
 * Original: 0x00432810 - 0x0043283F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432810: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_00432826; /* je: equal / zero */

loc_00432820: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432824u); } /* indirect call */
    }

loc_00432826: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00432839; /* je: equal / zero */

loc_0043282D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432839u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432836u); } /* indirect call */
    }

loc_00432839: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432850
 * Original: 0x00432850 - 0x0043287F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432850: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_00432866; /* je: equal / zero */

loc_00432860: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432866u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432864u); } /* indirect call */
    }

loc_00432866: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00432879; /* je: equal / zero */

loc_0043286D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432879u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432876u); } /* indirect call */
    }

loc_00432879: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432890
 * Original: 0x00432890 - 0x004328BF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432890: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004328A6; /* je: equal / zero */

loc_004328A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004328A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004328A4u); } /* indirect call */
    }

loc_004328A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004328B9; /* je: equal / zero */

loc_004328AD: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004328B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004328B6u); } /* indirect call */
    }

loc_004328B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004328D0
 * Original: 0x004328D0 - 0x004328FF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004328D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004328D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004328E6; /* je: equal / zero */

loc_004328E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004328E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004328E4u); } /* indirect call */
    }

loc_004328E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004328F9; /* je: equal / zero */

loc_004328ED: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004328F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004328F6u); } /* indirect call */
    }

loc_004328F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432910
 * Original: 0x00432910 - 0x0043293F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432910: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_00432926; /* je: equal / zero */

loc_00432920: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432926u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432924u); } /* indirect call */
    }

loc_00432926: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00432939; /* je: equal / zero */

loc_0043292D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432939u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432936u); } /* indirect call */
    }

loc_00432939: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432950
 * Original: 0x00432950 - 0x0043297F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432950: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_00432966; /* je: equal / zero */

loc_00432960: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432966u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432964u); } /* indirect call */
    }

loc_00432966: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00432979; /* je: equal / zero */

loc_0043296D: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432979u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432976u); } /* indirect call */
    }

loc_00432979: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432990
 * Original: 0x00432990 - 0x004329BF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432990: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004329A6; /* je: equal / zero */

loc_004329A0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004329A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004329A4u); } /* indirect call */
    }

loc_004329A6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004329B9; /* je: equal / zero */

loc_004329AD: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004329B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004329B6u); } /* indirect call */
    }

loc_004329B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004329D0
 * Original: 0x004329D0 - 0x004329FF (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004329D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004329D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x839E50;
    if (CMP_EQ(_fa, _fb)) goto loc_004329E6; /* je: equal / zero */

loc_004329E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004329E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004329E4u); } /* indirect call */
    }

loc_004329E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004329F9; /* je: equal / zero */

loc_004329ED: ;
    ecx = MEM32(0x9095F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004329F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004329F6u); } /* indirect call */
    }

loc_004329F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432A10
 * Original: 0x00432A10 - 0x00432AA6 (150 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00432A10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00432AA2; /* ja: above (unsigned >) */

loc_00432A20: ;
    ecx = ZX8(MEM8(eax + 0x432AB8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x432AA8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00432A2Eu) goto loc_00432A2E;
    if (_jt == 0x00432A6Au) goto loc_00432A6A;
    if (_jt == 0x00432A86u) goto loc_00432A86;
    if (_jt == 0x00432A96u) goto loc_00432A96;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00432A2E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00432A37u); RECOMP_ABI_CALL(0x0001F8FDu, sub_0001F8FD); /* call 0x0001F8FD */

loc_00432A37: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00432A48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432A45u); } /* indirect call */
    }

loc_00432A48: ;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 8) = edi;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(edi);
    MEM32(edi + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00432A5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432A59u); } /* indirect call */
    }

loc_00432A5C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432A62u); } /* indirect call */
    }

loc_00432A64: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00432A6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00432A72u); RECOMP_ABI_CALL(0x0001F8FDu, sub_0001F8FD); /* call 0x0001F8FD */

loc_00432A72: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00432A82u); RECOMP_ABI_CALL(0x0001189Du, sub_0001189D); /* call 0x0001189D */

loc_00432A82: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00432A86: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00432A92u); RECOMP_ABI_CALL(0x000281F1u, sub_000281F1); /* call 0x000281F1 */

loc_00432A92: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00432A96: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00432AA2u); RECOMP_ABI_CALL(0x0002B8ABu, sub_0002B8AB); /* call 0x0002B8AB */

loc_00432AA2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00432AA6
 * Original: 0x00432AA6 - 0x00432B00 (90 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432AA6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432AA6: ;
    edi = edi;
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0x2A);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -1778367702) = MEM8(esi + -1778367702) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi + -1778367702)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00432B00
 * Original: 0x00432B00 - 0x00432BA5 (165 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00432B00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00432B19; /* je: equal / zero */

loc_00432B0E: ;
    edi = edi;

loc_00432B10: ;
    ebp = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00432B10; /* jne: not equal / not zero */

loc_00432B19: ;
    MEM32(esp + 0x10) = 1;

loc_00432B21: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(eax, MEM8(0x909700));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00432B60; /* jne: not equal / not zero */

loc_00432B30: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00432B32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00432B38u); RECOMP_ABI_CALL(0x0001EAE3u, sub_0001EAE3); /* call 0x0001EAE3 */

loc_00432B38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x9094F8) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00432B32; /* jl: less (signed <) */

loc_00432B4A: ;
    ecx = 0x20;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = 0x909578;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(0x909700) = 1;

loc_00432B60: ;
    edx = MEM32(ebp);
    ecx = SX8(LO8(ebx));
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x9094F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00432B73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432B70u); } /* indirect call */
    }

loc_00432B73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00432B8C; /* jne: not equal / not zero */

loc_00432B78: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_00432B21;

loc_00432B8C: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00432B99u); RECOMP_ABI_CALL(0x00014EC6u, sub_00014EC6); /* call 0x00014EC6 */

loc_00432B99: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432BD0
 * Original: 0x00432BD0 - 0x00432BEB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432BD0(void)
{

loc_00432BD0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x909774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00432BEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432BE7u); } /* indirect call */
    }

loc_00432BEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432C00
 * Original: 0x00432C00 - 0x00432C15 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432C00: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432C14; /* je: equal / zero */

loc_00432C08: ;
    ecx = MEM32(0x909774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00432C14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432C11u); } /* indirect call */
    }

loc_00432C14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432C20
 * Original: 0x00432C20 - 0x00432C36 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432C20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00432C2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432C29u); } /* indirect call */
    }

loc_00432C2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00432C31u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00432C31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00432C40
 * Original: 0x00432C40 - 0x00432C58 (24 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432C40: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x839FD4;
    MEM32(0x90976C) = MEM32(0x90976C) + 1;
    _fa = (uint32_t)(MEM32(0x90976C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432C60
 * Original: 0x00432C60 - 0x00432C71 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C60(void)
{

loc_00432C60: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00432C69u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00432C69: ;
    ecx = eax;
    PUSH32(esp, 0x00432C70u); RECOMP_ABI_CALL(0x00012C0Cu, sub_00012C0C); /* call 0x00012C0C */

loc_00432C70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432C80
 * Original: 0x00432C80 - 0x00432CAD (45 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432C80: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839FD4;
    ecx = MEM32(0x90976C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(0x90976C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00432CA7; /* je: equal / zero */

loc_00432C9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00432CA4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00432CA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00432CA7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432CC0
 * Original: 0x00432CC0 - 0x00432CC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432CC0(void)
{

loc_00432CC0: ;
    eax = MEM32(0x909770);
    esp += 4; return; /* ret */

}

/**
 * sub_00432CD0
 * Original: 0x00432CD0 - 0x00432CE8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432CD0(void)
{

loc_00432CD0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x909774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00432CE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432CE4u); } /* indirect call */
    }

loc_00432CE7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432CF0
 * Original: 0x00432CF0 - 0x00432D0B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432CF0(void)
{

loc_00432CF0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x909774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00432D0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432D07u); } /* indirect call */
    }

loc_00432D0A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432D20
 * Original: 0x00432D20 - 0x00432D31 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432D20(void)
{

loc_00432D20: ;
    ecx = MEM32(0x909774);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00432D30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432D2Du); } /* indirect call */
    }

loc_00432D30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432D40
 * Original: 0x00432D40 - 0x00432D58 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432D40(void)
{

loc_00432D40: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x90977C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00432D57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432D54u); } /* indirect call */
    }

loc_00432D57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432D60
 * Original: 0x00432D60 - 0x00432D71 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432D60(void)
{

loc_00432D60: ;
    ecx = MEM32(0x90977C);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00432D70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432D6Du); } /* indirect call */
    }

loc_00432D70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00432D80
 * Original: 0x00432D80 - 0x00432E15 (149 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00432D80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x00432D92u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00432D92: ;
    ecx = eax;
    PUSH32(esp, 0x00432D99u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_00432D99: ;
    ecx = MEM32(0x909774);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, edi);
    PUSH32(esp, 0x835FC0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00432DB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00432DB5u); } /* indirect call */
    }

loc_00432DB8: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x400);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00432DCDu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00432DCD: ;
    ecx = eax;
    PUSH32(esp, 0x00432DD4u); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_00432DD4: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + ecx * 4 + 0x20) = ebx;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + edx * 4 + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00432DF0; /* jne: not equal / not zero */

loc_00432DE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00432DF0: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00432DFBu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00432DFB: ;
    ecx = eax;
    PUSH32(esp, 0x00432E02u); RECOMP_ABI_CALL(0x00574BAAu, sub_00574BAA); /* call 0x00574BAA */

loc_00432E02: ;
    eax = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C) = eax;
    esi = eax;
    POP32(esp, edi);
    eax = esi + -1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432E40
 * Original: 0x00432E40 - 0x00432EB2 (114 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00432E40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x00432E50u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00432E50: ;
    ebx = MEM32(esp + 0x1C);
    esi = eax;
    ecx = ebx;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x00432E61u); RECOMP_ABI_CALL(0x00037D27u, sub_00037D27); /* call 0x00037D27 */

loc_00432E61: ;
    PUSH32(esp, ebx);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00432E6Bu); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00432E6B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00432EA0; /* jle: less or equal (signed <=) */

loc_00432E71: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00432E79u); RECOMP_ABI_CALL(0x00024493u, sub_00024493); /* call 0x00024493 */

loc_00432E79: ;
    esi = eax;
    PUSH32(esp, 0x8326E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00432E86u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00432E86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432E97; /* je: equal / zero */

loc_00432E8D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00432E97u); RECOMP_ABI_CALL(0x0001EBA1u, sub_0001EBA1); /* call 0x0001EBA1 */

loc_00432E97: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00432E71; /* jl: less (signed <) */

loc_00432E9C: ;
    esi = MEM32(esp + 0x14);

loc_00432EA0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00432EA8u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_00432EA8: ;
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
 * sub_00432ED0
 * Original: 0x00432ED0 - 0x00432EDB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432ED0(void)
{

loc_00432ED0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x20);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432EE0
 * Original: 0x00432EE0 - 0x00432EE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432EE0(void)
{

loc_00432EE0: ;
    eax = ecx;
    MEM32(eax) = 0x839FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00432EF0
 * Original: 0x00432EF0 - 0x00432F00 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432EF0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00432EFCu); RECOMP_ABI_CALL(0x00564E97u, sub_00564E97); /* call 0x00564E97 */

loc_00432EFC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00432F10
 * Original: 0x00432F10 - 0x00432F18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432F10(void)
{

loc_00432F10: ;
    MEM8(ecx + 0x420) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00432F20
 * Original: 0x00432F20 - 0x00432FAC (140 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432F20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00432F2Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00432F2F: ;
    ecx = eax;
    PUSH32(esp, 0x00432F36u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_00432F36: ;
    esi = eax;
    eax = esi + 1;
    PUSH32(esp, 0x500);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00432F46u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00432F46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x500);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00432F5Eu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00432F5E: ;
    ecx = eax;
    PUSH32(esp, 0x00432F65u); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_00432F65: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x18);
    MEM8(edi + esi) = 0;
    PUSH32(esp, 0x00432F76u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00432F76: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00432F99; /* je: equal / zero */

loc_00432F7D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00432F86u); RECOMP_ABI_CALL(0x00562789u, sub_00562789); /* call 0x00562789 */

loc_00432F86: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00432F8Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00432F8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00432F99: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00432FA1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00432FA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00432FD0
 * Original: 0x00432FD0 - 0x00433062 (146 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00432FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00432FD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00432FE0; /* jne: not equal / not zero */

loc_00432FDD: ;
    eax = MEM32(edi + 0x14);

loc_00432FE0: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00432FEDu); RECOMP_ABI_CALL(0x0055EA11u, sub_0055EA11); /* call 0x0055EA11 */

loc_00432FED: ;
    esi = edi + 4;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x00432FFDu); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_00432FFD: ;
    edx = MEM32(eax);
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00433011u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00433011: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00433019u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00433019: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043302Bu); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_0043302B: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00433039u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00433039: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00433041u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00433041: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x00433053u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_00433053: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00433090
 * Original: 0x00433090 - 0x0043309E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433090(void)
{

loc_00433090: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043309Cu); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_0043309C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004330B0
 * Original: 0x004330B0 - 0x004330BE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004330B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004330B0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004330D0
 * Original: 0x004330D0 - 0x0043310D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004330D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004330D0: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM8(edx + 0x420) = LO8(eax);
    MEM32(edx + 0x424) = eax;
    MEM32(edx + 0x428) = eax;
    edi = edx + 0x20;
    ecx = 0x100;
    MEM8(edx + 8) = 1;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00433120
 * Original: 0x00433120 - 0x00433121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433120(void)
{

loc_00433120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00433130
 * Original: 0x00433130 - 0x0043315D (45 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0043313Eu); RECOMP_ABI_CALL(0x0057438Du, sub_0057438D); /* call 0x0057438D */

loc_0043313E: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00433156u); RECOMP_ABI_CALL(0x00561766u, sub_00561766); /* call 0x00561766 */

loc_00433156: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00433170
 * Original: 0x00433170 - 0x004331D5 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433170: ;
    ecx = MEM32(0x909774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x42C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0043318Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433187u); } /* indirect call */
    }

loc_0043318A: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004331CF; /* je: equal / zero */

loc_00433192: ;
    PUSH32(esp, edi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM8(edx + 8) = 1;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM8(edx + 0x420) = LO8(eax);
    MEM32(edx + 0x424) = eax;
    MEM32(edx + 0x428) = eax;
    edi = edx + 0x20;
    ecx = 0x100;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x909770) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_004331CF: ;
    MEM32(0x909770) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004331F0
 * Original: 0x004331F0 - 0x00433210 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004331F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004331F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0043320A; /* je: equal / zero */

loc_004331FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043320A; /* je: equal / zero */

loc_004331FE: ;
    ecx = MEM32(0x909774);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0043320Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433207u); } /* indirect call */
    }

loc_0043320A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00433220
 * Original: 0x00433220 - 0x00433229 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433220(void)
{

loc_00433220: ;
    eax = ecx;
    MEM32(eax) = 0x839FE4;
    esp += 4; return; /* ret */

}

/**
 * sub_00433230
 * Original: 0x00433230 - 0x00433238 (8 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433230(void)
{

loc_00433230: ;
    eax = MEM32(0x909778);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00433240
 * Original: 0x00433240 - 0x00433483 (579 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00433240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00433289; /* je: equal / zero */

loc_00433258: ;
    eax = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433289; /* je: equal / zero */

loc_00433261: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433289; /* je: equal / zero */

loc_00433266: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433273u); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_00433273: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433283u); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_00433283: ;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;

loc_00433289: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00433299; /* je: equal / zero */

loc_00433293: ;
    MEM32(edi) = 0;

loc_00433299: ;
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004332A6u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_004332A6: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433475; /* je: equal / zero */

loc_004332B1: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x84;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004332C5u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_004332C5: ;
    eax = esp + 0x8C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_004332D2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004332D2; /* jne: not equal / not zero */

loc_004332D9: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004332EDu); RECOMP_ABI_CALL(0x00562789u, sub_00562789); /* call 0x00562789 */

loc_004332ED: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433305u); RECOMP_ABI_CALL(0x0057438Du, sub_0057438D); /* call 0x0057438D */

loc_00433305: ;
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x839FE8);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433323u); RECOMP_ABI_CALL(0x00561766u, sub_00561766); /* call 0x00561766 */

loc_00433323: ;
    ecx = MEM32(edi);
    ebx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043333Bu); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_0043333B: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433349u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00433349: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433351u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00433351: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433362u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_00433362: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433378u); RECOMP_ABI_CALL(0x00557D90u, sub_00557D90); /* call 0x00557D90 */

loc_00433378: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043338Du); RECOMP_ABI_CALL(0x0055D26Du, sub_0055D26D); /* call 0x0055D26D */

loc_0043338D: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043339Bu); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_0043339B: ;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004333A3u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_004333A3: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004333B5u); RECOMP_ABI_CALL(0x0055852Du, sub_0055852D); /* call 0x0055852D */

loc_004333B5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FAAAAAB);
    PUSH32(esp, 0x42700000);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004333D6u); RECOMP_ABI_CALL(0x00557A00u, sub_00557A00); /* call 0x00557A00 */

loc_004333D6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x1C;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA8AC)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043345Bu); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_0043345B: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0043346Cu); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_0043346C: ;
    ecx = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00433475u); RECOMP_ABI_CALL(0x00561649u, sub_00561649); /* call 0x00561649 */

loc_00433475: ;
    POP32(esp, edi);
    MEM8(esi + 0x420) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00433520
 * Original: 0x00433520 - 0x0043353F (31 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433520: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043353B; /* je: equal / zero */

loc_00433529: ;
    ecx = esi;
    PUSH32(esp, 0x00433530u); RECOMP_ABI_CALL(0x00561649u, sub_00561649); /* call 0x00561649 */

loc_00433530: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00433538u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00433538: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0043353B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00433550
 * Original: 0x00433550 - 0x00433583 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433550: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x420));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433565; /* je: equal / zero */

loc_00433560: ;
    PUSH32(esp, 0x00433565u); RECOMP_ABI_CALL(0x000327E6u, sub_000327E6); /* call 0x000327E6 */

loc_00433565: ;
    ecx = MEM32(esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00433571u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_00433571: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0043357Bu); RECOMP_ABI_CALL(0x00565CF2u, sub_00565CF2); /* call 0x00565CF2 */

loc_0043357B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00433590
 * Original: 0x00433590 - 0x004335B0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433590: ;
    eax = MEM32(0x909770);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004335A5; /* je: equal / zero */

loc_00433599: ;
    ecx = MEM32(0x909774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004335A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004335A2u); } /* indirect call */
    }

loc_004335A5: ;
    MEM32(0x909770) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004335C0
 * Original: 0x004335C0 - 0x0043376B (427 bytes, 144 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004335C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004335C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    edi = ecx;
    PUSH32(esp, 0x004335CDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_004335CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004335E9; /* je: equal / zero */

loc_004335D4: ;
    ecx = MEM32(0x909774);
    PUSH32(esp, 0x83A020);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004335E7u); RECOMP_ABI_CALL(0x000355E5u, sub_000355E5); /* call 0x000355E5 */

loc_004335E7: ;
    goto loc_004335EB;

loc_004335E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004335EB: ;
    MEM32(0x909778) = eax;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004335F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004335F4u); } /* indirect call */
    }

loc_004335F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00433600u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00433600: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043360F; /* je: equal / zero */

loc_00433607: ;
    MEM32(eax) = 0x839FE4;
    goto loc_00433611;

loc_0043360F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00433611: ;
    PUSH32(esp, eax);
    MEM32(edi + 0x428) = eax;
    PUSH32(esp, 0x0043361Du); RECOMP_ABI_CALL(0x00574786u, sub_00574786); /* call 0x00574786 */

loc_0043361D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x2216B);
    PUSH32(esp, 0x252D0);
    MEM32(0x90977C) = eax;
    PUSH32(esp, 0x00433635u); RECOMP_ABI_CALL(0x0057483Au, sub_0057483A); /* call 0x0057483A */

loc_00433635: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0043363Fu); RECOMP_ABI_CALL(0x0057546Eu, sub_0057546E); /* call 0x0057546E */

loc_0043363F: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043364F; /* jne: not equal / not zero */

loc_0043364A: ;
    eax = 0x8248B8;

loc_0043364F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00433659u); RECOMP_ABI_CALL(0x00022D55u, sub_00022D55); /* call 0x00022D55 */

loc_00433659: ;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 0x83A00C;
    if (CMP_NE(_fa, _fb)) esi = eax; /* cmovne */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00433672u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00433672: ;
    ecx = eax;
    PUSH32(esp, 0x00433679u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_00433679: ;
    edx = MEM32(0x909774);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x500);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00433693u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00433693: ;
    ecx = eax;
    PUSH32(esp, 0x0043369Au); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_0043369A: ;
    esi = eax;
    PUSH32(esp, 0x004336A1u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_004336A1: ;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004336ADu); RECOMP_ABI_CALL(0x00574952u, sub_00574952); /* call 0x00574952 */

loc_004336AD: ;
    ecx = eax;
    PUSH32(esp, 0x004336B4u); RECOMP_ABI_CALL(0x00577044u, sub_00577044); /* call 0x00577044 */

loc_004336B4: ;
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x909774);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004336C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004336C3u); } /* indirect call */
    }

loc_004336C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x839FFC);
    PUSH32(esp, 0x004336D2u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_004336D2: ;
    ecx = eax;
    PUSH32(esp, 0x004336D9u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_004336D9: ;
    ecx = MEM32(0x909774);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x835FC0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004336F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004336F5u); } /* indirect call */
    }

loc_004336F8: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0x400);
    PUSH32(esp, esi);
    PUSH32(esp, 0x839FFC);
    PUSH32(esp, 0x00433711u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00433711: ;
    ecx = eax;
    PUSH32(esp, 0x00433718u); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_00433718: ;
    ecx = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(edi + 0x18) = esi;
    PUSH32(esp, 0x00433726u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00433726: ;
    ecx = eax;
    PUSH32(esp, 0x0043372Du); RECOMP_ABI_CALL(0x00574BAAu, sub_00574BAA); /* call 0x00574BAA */

loc_0043372D: ;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00433738u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00433738: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEM32(edi) = eax;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0043374Au); RECOMP_ABI_CALL(0x0055EA11u, sub_0055EA11); /* call 0x0055EA11 */

loc_0043374A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    MEM32(esp + 8) = eax;
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0043375D; /* jg: greater (signed >) */

loc_00433756: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0043375D: ;
    ecx = edi;
    PUSH32(esp, 0x00433764u); RECOMP_ABI_CALL(0x000327E6u, sub_000327E6); /* call 0x000327E6 */

loc_00433764: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004337E0
 * Original: 0x004337E0 - 0x00433957 (375 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004337E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004337E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0043381A; /* je: equal / zero */

loc_004337F0: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x00433800u); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_00433800: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00433810u); RECOMP_ABI_CALL(0x0055D588u, sub_0055D588); /* call 0x0055D588 */

loc_00433810: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    goto loc_0043381C;

loc_0043381A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0043381C: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00433838; /* je: equal / zero */

loc_00433826: ;
    ecx = edi;
    PUSH32(esp, 0x0043382Du); RECOMP_ABI_CALL(0x00561649u, sub_00561649); /* call 0x00561649 */

loc_0043382D: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00433835u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00433835: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00433838: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x00433845u); RECOMP_ABI_CALL(0x00564EB9u, sub_00564EB9); /* call 0x00564EB9 */

loc_00433845: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00433854u); RECOMP_ABI_CALL(0x0055E11Eu, sub_0055E11E); /* call 0x0055E11E */

loc_00433854: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 8);
    MEM32(esi) = ebx;
    PUSH32(esp, 0x00433862u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00433862: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043387D; /* je: equal / zero */

loc_00433869: ;
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x839FD4;
    MEM32(0x90976C) = MEM32(0x90976C) + 1;
    _fa = (uint32_t)(MEM32(0x90976C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax;

loc_0043387D: ;
    edi = MEM32(esi + 0x18);
    PUSH32(esp, 0x00433885u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00433885: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x0043388Du); RECOMP_ABI_CALL(0x005743CFu, sub_005743CF); /* call 0x005743CF */

loc_0043388D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x16078);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004338A3u); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_004338A3: ;
    MEM32(esi + 0x18) = 0;
    edi = esi + 0x20;
    MEM32(esp + 0x10) = 0x100;

loc_004338B5: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433913; /* je: equal / zero */

loc_004338BA: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004338C6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_004338C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004338E2; /* je: equal / zero */

loc_004338CD: ;
    ecx = MEM32(edi);
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x839FD4;
    MEM32(0x90976C) = MEM32(0x90976C) + 1;
    _fa = (uint32_t)(MEM32(0x90976C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax;
    goto loc_004338E4;

loc_004338E2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004338E4: ;
    ebp = MEM32(edi);
    PUSH32(esp, 0x004338EBu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_004338EB: ;
    PUSH32(esp, ebp);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x004338F5u); RECOMP_ABI_CALL(0x005743CFu, sub_005743CF); /* call 0x005743CF */

loc_004338F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x16078);
    PUSH32(esp, ebp);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x0043390Du); RECOMP_ABI_CALL(0x00574CE7u, sub_00574CE7); /* call 0x00574CE7 */

loc_0043390D: ;
    MEM32(edi) = 0;

loc_00433913: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_004338B5; /* jne: not equal / not zero */

loc_00433921: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1C) = edi;
    PUSH32(esp, 0x0043392Bu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_0043392B: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00433935u); RECOMP_ABI_CALL(0x005751E7u, sub_005751E7); /* call 0x005751E7 */

loc_00433935: ;
    PUSH32(esp, 0x0043393Au); RECOMP_ABI_CALL(0x00574800u, sub_00574800); /* call 0x00574800 */

loc_0043393A: ;
    eax = MEM32(esi + 0x428);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00433946u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00433946: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x428) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004339C0
 * Original: 0x004339C0 - 0x004339DB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004339C0(void)
{

loc_004339C0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x909798);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004339DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004339D7u); } /* indirect call */
    }

loc_004339DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004339F0
 * Original: 0x004339F0 - 0x004339F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004339F0(void)
{

loc_004339F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00433A00
 * Original: 0x00433A00 - 0x00433A04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A00(void)
{

loc_00433A00: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00433A10
 * Original: 0x00433A10 - 0x00433A17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A10(void)
{

loc_00433A10: ;
    eax = MEM32(ecx + 0x9044);
    esp += 4; return; /* ret */

}

/**
 * sub_00433A20
 * Original: 0x00433A20 - 0x00433A24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A20(void)
{

loc_00433A20: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_00433A30
 * Original: 0x00433A30 - 0x00433A37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A30(void)
{

loc_00433A30: ;
    eax = ecx + 0x3044;
    esp += 4; return; /* ret */

}

/**
 * sub_00433A40
 * Original: 0x00433A40 - 0x00433A47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A40(void)
{

loc_00433A40: ;
    eax = ecx + 0x6044;
    esp += 4; return; /* ret */

}

/**
 * sub_00433A50
 * Original: 0x00433A50 - 0x00433A56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A50(void)
{

loc_00433A50: ;
    eax = MEM32(0x909794);
    esp += 4; return; /* ret */

}

/**
 * sub_00433A60
 * Original: 0x00433A60 - 0x00433A7B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A60(void)
{

loc_00433A60: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00433A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433A77u); } /* indirect call */
    }

loc_00433A7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00433A90
 * Original: 0x00433A90 - 0x00433AA5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433A90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433AA4; /* je: equal / zero */

loc_00433A98: ;
    ecx = MEM32(0x909790);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00433AA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433AA1u); } /* indirect call */
    }

loc_00433AA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00433AB0
 * Original: 0x00433AB0 - 0x00433AFC (76 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433AB0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x909794);
    eax = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x909794) = ebx;
    MEM32(eax + 0x9048) = edx;
    edx = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax + 0x9044) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00433AF5; /* je: equal / zero */

loc_00433AE0: ;
    PUSH32(esp, esi);
    esi = eax + 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00433AE6: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00433AE6; /* jne: not equal / not zero */

loc_00433AF0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00433AF5: ;
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00433B10
 * Original: 0x00433B10 - 0x00433B3A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433B10: ;
    edx = MEM32(0x909794);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0x909794) = edx;
    esi = MEM32(ecx + 0x9048);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433B38; /* je: equal / zero */

loc_00433B28: ;
    ecx = esi;
    PUSH32(esp, 0x00433B2Fu); RECOMP_ABI_CALL(0x000368F5u, sub_000368F5); /* call 0x000368F5 */

loc_00433B2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00433B35u); RECOMP_ABI_CALL(0x0001921Eu, sub_0001921E); /* call 0x0001921E */

loc_00433B35: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00433B38: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00433B50
 * Original: 0x00433B50 - 0x00433BAD (93 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00433B50: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433BA8; /* jne: not equal / not zero */

loc_00433B58: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00433B6B; /* jne: not equal / not zero */

loc_00433B60: ;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 12; return; /* ret 8 */

loc_00433B6B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 4;

loc_00433B70: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433B98; /* jne: not equal / not zero */

loc_00433B7A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00433B94; /* je: equal / zero */

loc_00433B7E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00433B98; /* jne: not equal / not zero */

loc_00433B8A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00433B70; /* jne: not equal / not zero */

loc_00433B94: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00433B9D;

loc_00433B98: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00433B9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00433BA8; /* jne: not equal / not zero */

loc_00433BA3: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00433BA8: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00433BD0
 * Original: 0x00433BD0 - 0x00433C09 (57 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433BD0: ;
    eax = MEM32(ecx + 0x9044);
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4 + 0x44) = edx;
    eax = MEM32(ecx + 0x9044);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax * 4 + 0x3044) = edx;
    eax = MEM32(ecx + 0x9044);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4 + 0x6044) = edx;
    MEM32(ecx + 0x9044) = MEM32(ecx + 0x9044) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x9044)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00433C20
 * Original: 0x00433C20 - 0x00433C27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433C20(void)
{

loc_00433C20: ;
    eax = MEM32(ecx + 0x9048);
    esp += 4; return; /* ret */

}

/**
 * sub_00433C30
 * Original: 0x00433C30 - 0x00433C63 (51 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(0x909794) = MEM32(0x909794) - 1;
    _fa = (uint32_t)(MEM32(0x909794)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x9048);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433C4A; /* je: equal / zero */

loc_00433C43: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00433C4Au); RECOMP_ABI_CALL(0x000139E5u, sub_000139E5); /* call 0x000139E5 */

loc_00433C4A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00433C5D; /* je: equal / zero */

loc_00433C51: ;
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00433C5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433C5Au); } /* indirect call */
    }

loc_00433C5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00433C70
 * Original: 0x00433C70 - 0x00433C76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433C70(void)
{

loc_00433C70: ;
    eax = MEM32(0x90979C);
    esp += 4; return; /* ret */

}

/**
 * sub_00433C80
 * Original: 0x00433C80 - 0x00433C91 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433C80: ;
    ecx = MEM32(0x90979C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433C90; /* je: equal / zero */

loc_00433C8A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00433C90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433C8Eu); } /* indirect call */
    }

loc_00433C90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00433CA0
 * Original: 0x00433CA0 - 0x00433CF6 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x15010);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x9004) = ebx;
    MEM32(esi + 0x12008) = ebx;
    MEM32(esi + 0x1500C) = ebx;
    MEM32(esi + 0x15014) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00433CEC; /* je: equal / zero */

loc_00433CC9: ;
    MEM32(0x909794) = MEM32(0x909794) - 1;
    _fa = (uint32_t)(MEM32(0x909794)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x9048);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433CE0; /* je: equal / zero */

loc_00433CD9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00433CE0u); RECOMP_ABI_CALL(0x000139E5u, sub_000139E5); /* call 0x000139E5 */

loc_00433CE0: ;
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00433CECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433CE9u); } /* indirect call */
    }

loc_00433CEC: ;
    POP32(esp, edi);
    MEM32(esi + 0x15010) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00433D10
 * Original: 0x00433D10 - 0x00433DFE (238 bytes, 57 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00433D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ecx + 0x9004);
    eax = eax + eax * 2;
    edx = ecx + eax * 4 + 4;
    eax = MEM32(esp + 0xC);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0x9004);
    edx = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x9004) = eax;
    esi = MEM32(edx);
    eax = MEM32(ecx + 0x12008);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 0x9008) = esi;
    eax = MEM32(ecx + 0x12008);
    edx = MEM32(edx + 4);
    _fb = (uint32_t)(0xC01) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC01;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4) = edx;
    eax = MEM32(ecx + 0x12008);
    eax = eax + eax * 2;
    MEMF(ecx + eax * 4 + 0x9010) = xmm0.f[0]; /* movss */
    esi = MEM32(ecx + 0x12008);
    edx = MEM32(ecx + 0x1500C);
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x12008) = esi;
    MEM32(ecx + edx * 4 + 0x1200C) = eax;
    edx = MEM32(ecx + 0x1500C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1500C) = edx;
    eax = edx;
    edx = MEM32(ecx + 0x12008);
    esi = eax + -1;
    eax = MEM32(ecx + 0x15010);
    ecx = MEM32(ecx + 0x9004);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = MEM32(eax + 0x9044);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + edi * 4 + 0x44) = ecx;
    ecx = MEM32(eax + 0x9044);
    MEM32(eax + ecx * 4 + 0x3044) = edx;
    edx = MEM32(eax + 0x9044);
    MEM32(eax + edx * 4 + 0x6044) = esi;
    ecx = MEM32(eax + 0x9044);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x9044) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00433E40
 * Original: 0x00433E40 - 0x004340B9 (633 bytes, 198 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00433E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00433E40: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00433E55u); RECOMP_ABI_CALL(0x0056A600u, sub_0056A600); /* call 0x0056A600 */

loc_00433E55: ;
    eax = MEM32(esp + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00433E77; /* je: equal / zero */

loc_00433E60: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00433E69u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00433E69: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x00433E77u); RECOMP_ABI_CALL(0x0056798Eu, sub_0056798E); /* call 0x0056798E */

loc_00433E77: ;
    eax = MEM32(esi + 0x9004);
    PUSH32(esp, 2);
    ecx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x83A02C);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x00433E9Du); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00433E9D: ;
    eax = MEM32(esi + 0x12008);
    PUSH32(esp, 0);
    ecx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    edx = esi + 0x9008;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82AE08);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x00433EC6u); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00433EC6: ;
    ecx = MEM32(esi + 0x1500C);
    PUSH32(esp, 2);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    edx = esi + 0x1200C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x83A034);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x00433EECu); RECOMP_ABI_CALL(0x00568296u, sub_00568296); /* call 0x00568296 */

loc_00433EEC: ;
    eax = MEM32(0x909794);
    ecx = MEM32(0x909798);
    edx = MEM32(ecx);
    PUSH32(esp, 0x100);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x83A068);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00433F0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433F07u); } /* indirect call */
    }

loc_00433F0A: ;
    ecx = MEM32(0x909798);
    edx = MEM32(ecx);
    edi = eax;
    eax = MEM32(0x909794);
    PUSH32(esp, 0x100);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x83A040);
    MEM32(esp + 0x28) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00433F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00433F2Bu); } /* indirect call */
    }

loc_00433F2E: ;
    esi = MEM32(esi + 0x15010);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0043406A; /* je: equal / zero */

loc_00433F42: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ebx;
    goto loc_00433F50;

loc_00433F4A: ;
    ebx = MEM32(esp + 0x24);
    edi = edi;

loc_00433F50: ;
    ecx = MEM32(esi + 0x9044);
    eax = MEM32(esp + 0xC8);
    MEM32(edi) = ecx;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x4C;
    MEM32(ebx) = edx;
    PUSH32(esp, 0x00433F74u); RECOMP_ABI_CALL(0x0056A770u, sub_0056A770); /* call 0x0056A770 */

loc_00433F74: ;
    edx = MEM32(edi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A168);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00433F91u); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00433F91: ;
    ebp = esi + 4;
    eax = ebp;
    edx = eax + 1;
    /* nop */

loc_00433FA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00433FA0; /* jne: not equal / not zero */

loc_00433FA7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_00433FCF; /* je: equal / zero */

loc_00433FAF: ;
    edx = MEM32(edi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    eax = esi + 0x3044;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82ADFC);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00433FCFu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00433FCF: ;
    edx = MEM32(edi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    eax = esi + 0x6044;
    PUSH32(esp, eax);
    PUSH32(esp, 0x82A158);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00433FEFu); RECOMP_ABI_CALL(0x0056A304u, sub_0056A304); /* call 0x0056A304 */

loc_00433FEF: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x837D10);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00434005u); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_00434005: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82A144);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, 0x0043401Bu); RECOMP_ABI_CALL(0x005682CDu, sub_005682CD); /* call 0x005682CD */

loc_0043401B: ;
    eax = ebp;
    edx = eax + 1;

loc_00434020: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434020; /* jne: not equal / not zero */

loc_00434027: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    if ((_fa == 0)) goto loc_00434043; /* je: equal / zero */

loc_0043402F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x82ADE0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    PUSH32(esp, 0x00434043u); RECOMP_ABI_CALL(0x0056A352u, sub_0056A352); /* call 0x0056A352 */

loc_00434043: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00434051u); RECOMP_ABI_CALL(0x005679BBu, sub_005679BB); /* call 0x005679BB */

loc_00434051: ;
    esi = MEM32(esi + 0x9048);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00433F4A; /* jne: not equal / not zero */

loc_00434062: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x10);

loc_0043406A: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00434085u); RECOMP_ABI_CALL(0x0056973Eu, sub_0056973E); /* call 0x0056973E */

loc_00434085: ;
    ecx = MEM32(0x909798);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00434091u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043408Eu); } /* indirect call */
    }

loc_00434091: ;
    ecx = MEM32(0x909798);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0043409Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043409Au); } /* indirect call */
    }

loc_0043409D: ;
    esi = MEM32(esp + 0x14);
    ecx = esp + 0x44;
    PUSH32(esp, 0x004340AAu); RECOMP_ABI_CALL(0x0056A677u, sub_0056A677); /* call 0x0056A677 */

loc_004340AA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00434160
 * Original: 0x00434160 - 0x00434195 (53 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434160: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x83A090;
    MEM32(eax + 0x9004) = ecx;
    MEM32(eax + 0x12008) = ecx;
    MEM32(eax + 0x1500C) = ecx;
    MEM32(eax + 0x15010) = ecx;
    MEM32(eax + 0x15014) = ecx;
    ecx = MEM32(0x909798);
    MEM32(0x909790) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004341B0
 * Original: 0x004341B0 - 0x004341ED (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004341B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004341B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A090;
    PUSH32(esp, 0x004341BEu); RECOMP_ABI_CALL(0x0001B893u, sub_0001B893); /* call 0x0001B893 */

loc_004341BE: ;
    esi = MEM32(esi + 0x15010);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004341EB; /* je: equal / zero */

loc_004341C8: ;
    MEM32(0x909794) = MEM32(0x909794) - 1;
    _fa = (uint32_t)(MEM32(0x909794)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x9048);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004341DF; /* je: equal / zero */

loc_004341D8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004341DFu); RECOMP_ABI_CALL(0x000139E5u, sub_000139E5); /* call 0x000139E5 */

loc_004341DF: ;
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004341EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004341E8u); } /* indirect call */
    }

loc_004341EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00434200
 * Original: 0x00434200 - 0x00434256 (86 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434200: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x83A090;
    PUSH32(esp, 0x0043420Fu); RECOMP_ABI_CALL(0x0001B893u, sub_0001B893); /* call 0x0001B893 */

loc_0043420F: ;
    edi = MEM32(esi + 0x15010);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043423C; /* je: equal / zero */

loc_00434219: ;
    MEM32(0x909794) = MEM32(0x909794) - 1;
    _fa = (uint32_t)(MEM32(0x909794)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x9048);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434230; /* je: equal / zero */

loc_00434229: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00434230u); RECOMP_ABI_CALL(0x000139E5u, sub_000139E5); /* call 0x000139E5 */

loc_00434230: ;
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0043423Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434239u); } /* indirect call */
    }

loc_0043423C: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0043424F; /* je: equal / zero */

loc_00434243: ;
    ecx = MEM32(0x909798);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0043424Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043424Cu); } /* indirect call */
    }

loc_0043424F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434270
 * Original: 0x00434270 - 0x004342CC (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434270: ;
    ecx = MEM32(0x909798);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15018);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00434289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434286u); } /* indirect call */
    }

loc_00434289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004342C4; /* je: equal / zero */

loc_0043428D: ;
    MEM32(eax + 0x9004) = esi;
    MEM32(eax + 0x12008) = esi;
    MEM32(eax + 0x1500C) = esi;
    MEM32(eax + 0x15010) = esi;
    MEM32(eax + 0x15014) = esi;
    MEM32(eax) = 0x83A090;
    ecx = MEM32(0x909798);
    MEM32(0x909790) = ecx;
    MEM32(0x90979C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004342C4: ;
    MEM32(0x90979C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004342F0
 * Original: 0x004342F0 - 0x0043438E (158 bytes, 56 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004342F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004342F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x15010);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_0043430E; /* je: equal / zero */

loc_00434302: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0043430Au); RECOMP_ABI_CALL(0x0002CAB7u, sub_0002CAB7); /* call 0x0002CAB7 */

loc_0043430A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434347; /* jne: not equal / not zero */

loc_0043430E: ;
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x904C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00434328u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434325u); } /* indirect call */
    }

loc_00434328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043433F; /* je: equal / zero */

loc_0043432C: ;
    ecx = MEM32(esi + 0x15010);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0043433Du); RECOMP_ABI_CALL(0x0003378Bu, sub_0003378B); /* call 0x0003378B */

loc_0043433D: ;
    goto loc_00434341;

loc_0043433F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00434341: ;
    MEM32(esi + 0x15010) = eax;

loc_00434347: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0043435Du); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_0043435D: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00434373u); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_00434373: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00434389u); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_00434389: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004343C0
 * Original: 0x004343C0 - 0x00434498 (216 bytes, 81 insns)
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004343C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004343C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x15010);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_004343E0; /* je: equal / zero */

loc_004343D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x004343DCu); RECOMP_ABI_CALL(0x0002CAB7u, sub_0002CAB7); /* call 0x0002CAB7 */

loc_004343DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434419; /* jne: not equal / not zero */

loc_004343E0: ;
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x904C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004343FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004343F7u); } /* indirect call */
    }

loc_004343FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434411; /* je: equal / zero */

loc_004343FE: ;
    ecx = MEM32(esi + 0x15010);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0043440Fu); RECOMP_ABI_CALL(0x0003378Bu, sub_0003378B); /* call 0x0003378B */

loc_0043440F: ;
    goto loc_00434413;

loc_00434411: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00434413: ;
    MEM32(esi + 0x15010) = eax;

loc_00434419: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0043442Fu); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_0043442F: ;
    edi = MEM32(esp + 0x38);
    ebx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00434445u); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_00434445: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0043445Bu); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_0043445B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00434465u); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_00434465: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0043447Bu); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_0043447B: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00434491u); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_00434491: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 56; return; /* ret 52 */

}

/**
 * sub_004344D0
 * Original: 0x004344D0 - 0x00434558 (136 bytes, 48 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004344D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004344D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x15010);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (CMP_EQ(_fa, _fb)) goto loc_004344EE; /* je: equal / zero */

loc_004344E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004344EAu); RECOMP_ABI_CALL(0x0002CAB7u, sub_0002CAB7); /* call 0x0002CAB7 */

loc_004344EA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434527; /* jne: not equal / not zero */

loc_004344EE: ;
    ecx = MEM32(0x909790);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x904C);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00434508u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434505u); } /* indirect call */
    }

loc_00434508: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043451F; /* je: equal / zero */

loc_0043450C: ;
    ecx = MEM32(esi + 0x15010);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0043451Du); RECOMP_ABI_CALL(0x0003378Bu, sub_0003378B); /* call 0x0003378B */

loc_0043451D: ;
    goto loc_00434521;

loc_0043451F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00434521: ;
    MEM32(esi + 0x15010) = eax;

loc_00434527: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0043453Du); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_0043453D: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00434553u); RECOMP_ABI_CALL(0x00031DC3u, sub_00031DC3); /* call 0x00031DC3 */

loc_00434553: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00434580
 * Original: 0x00434580 - 0x00434585 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434580(void)
{

loc_00434580: ;
    eax = ZX16(MEM16(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_00434590
 * Original: 0x00434590 - 0x00434595 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434590(void)
{

loc_00434590: ;
    eax = ZX16(MEM16(ecx + 0x1A));
    esp += 4; return; /* ret */

}

/**
 * sub_004345A0
 * Original: 0x004345A0 - 0x004345A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004345A0(void)
{

loc_004345A0: ;
    eax = ZX16(MEM16(ecx + 0x1C));
    esp += 4; return; /* ret */

}

/**
 * sub_004345B0
 * Original: 0x004345B0 - 0x004345B5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004345B0(void)
{

loc_004345B0: ;
    eax = ZX16(MEM16(ecx + 0x1E));
    esp += 4; return; /* ret */

}

/**
 * sub_004345C0
 * Original: 0x004345C0 - 0x004345CD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004345C0(void)
{

loc_004345C0: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004345D0
 * Original: 0x004345D0 - 0x004345D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004345D0(void)
{

loc_004345D0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_004345E0
 * Original: 0x004345E0 - 0x004345EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004345E0(void)
{

loc_004345E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004345F0
 * Original: 0x004345F0 - 0x004345F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004345F0(void)
{

loc_004345F0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00434600
 * Original: 0x00434600 - 0x00434603 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434600(void)
{

loc_00434600: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00434610
 * Original: 0x00434610 - 0x00434615 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434610(void)
{

loc_00434610: ;
    eax = ZX16(MEM16(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_00434620
 * Original: 0x00434620 - 0x00434624 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434620(void)
{

loc_00434620: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00434630
 * Original: 0x00434630 - 0x00434634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434630(void)
{

loc_00434630: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00434640
 * Original: 0x00434640 - 0x0043464A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434640(void)
{

loc_00434640: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434650
 * Original: 0x00434650 - 0x00434665 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434650(void)
{

loc_00434650: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A094);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00434664u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434662u); } /* indirect call */
    }

loc_00434664: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00434670
 * Original: 0x00434670 - 0x00434681 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434670(void)
{

loc_00434670: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00434680u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043467Du); } /* indirect call */
    }

loc_00434680: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00434690
 * Original: 0x00434690 - 0x00434691 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434690(void)
{

loc_00434690: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004346A0
 * Original: 0x004346A0 - 0x004346A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004346A0(void)
{

loc_004346A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004346B0
 * Original: 0x004346B0 - 0x004346C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004346B0(void)
{

loc_004346B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A0AC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004346C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004346C2u); } /* indirect call */
    }

loc_004346C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004346D0
 * Original: 0x004346D0 - 0x004346E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004346D0(void)
{

loc_004346D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004346E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004346DDu); } /* indirect call */
    }

loc_004346E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004346F0
 * Original: 0x004346F0 - 0x004346F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004346F0(void)
{

loc_004346F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00434700
 * Original: 0x00434700 - 0x0043470D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434700: ;
    eax = MEM32(ecx);
    eax = ZX16(MEM16(eax + 0x18));
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00434710
 * Original: 0x00434710 - 0x0043471D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434710: ;
    eax = MEM32(ecx);
    eax = ZX16(MEM16(eax + 0x1A));
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x19);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00434720
 * Original: 0x00434720 - 0x0043472D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434720: ;
    eax = MEM32(ecx);
    eax = ZX16(MEM16(eax + 0x1C));
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x1A);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00434730
 * Original: 0x00434730 - 0x0043473D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434730: ;
    eax = MEM32(ecx);
    eax = ZX16(MEM16(eax + 0x1E));
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x1B);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00434740
 * Original: 0x00434740 - 0x00434765 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = ZX16(MEM16(esi + 0x1E));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00434759; /* jge: greater or equal (signed >=) */

loc_0043474F: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00434759: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x28);
    eax = MEM32(edx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434752
 * Original: 0x00434752 - 0x00434765 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434752(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434752: ;
    eax = MEM32(ecx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434770
 * Original: 0x00434770 - 0x0043477D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434770(void)
{

loc_00434770: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434777
 * Original: 0x00434777 - 0x0043477D (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434777(void)
{

loc_00434777: ;
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434780
 * Original: 0x00434780 - 0x0043478D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434780(void)
{

loc_00434780: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434790
 * Original: 0x00434790 - 0x00434793 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434790(void)
{

loc_00434790: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004347A0
 * Original: 0x004347A0 - 0x004347AA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004347A0: ;
    eax = MEM32(ecx);
    eax = ZX16(MEM16(eax + 0x18));
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004347B0
 * Original: 0x004347B0 - 0x004347B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347B0(void)
{

loc_004347B0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_004347C0
 * Original: 0x004347C0 - 0x004347C6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347C0(void)
{

loc_004347C0: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004347D0
 * Original: 0x004347D0 - 0x004347DD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347D0(void)
{

loc_004347D0: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004347E0
 * Original: 0x004347E0 - 0x004347E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347E0(void)
{

loc_004347E0: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_004347F0
 * Original: 0x004347F0 - 0x004347F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004347F0(void)
{

loc_004347F0: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_00434800
 * Original: 0x00434800 - 0x00434804 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434800(void)
{

loc_00434800: ;
    eax = ecx + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_00434810
 * Original: 0x00434810 - 0x00434815 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434810(void)
{

loc_00434810: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00434820
 * Original: 0x00434820 - 0x00434824 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434820(void)
{

loc_00434820: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00434830
 * Original: 0x00434830 - 0x00434866 (54 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434830: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x9097F4);
    PUSH32(esp, 0x0043483Eu); RECOMP_ABI_CALL(0x0002208Fu, sub_0002208F); /* call 0x0002208F */

loc_0043483E: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043485C; /* je: equal / zero */

loc_00434852: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0043485C: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434880
 * Original: 0x00434880 - 0x0043488D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434880(void)
{

loc_00434880: ;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434890
 * Original: 0x00434890 - 0x0043489D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434890(void)
{

loc_00434890: ;
    eax = MEM32(ecx + 0x34);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004348A0
 * Original: 0x004348A0 - 0x004348A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348A0(void)
{

loc_004348A0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_004348B0
 * Original: 0x004348B0 - 0x004348BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348B0(void)
{

loc_004348B0: ;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004348C0
 * Original: 0x004348C0 - 0x004348C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348C0(void)
{

loc_004348C0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_004348D0
 * Original: 0x004348D0 - 0x004348DD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348D0(void)
{

loc_004348D0: ;
    eax = MEM32(ecx + 0x3C);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004348E0
 * Original: 0x004348E0 - 0x004348ED (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348E0(void)
{

loc_004348E0: ;
    eax = MEM32(ecx + 0x40);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004348F0
 * Original: 0x004348F0 - 0x004348FD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004348F0(void)
{

loc_004348F0: ;
    eax = MEM32(ecx + 0x44);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434900
 * Original: 0x00434900 - 0x00434917 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434900(void)
{

loc_00434900: ;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx + 0x1C);
    ecx = MEM32(esp + 8);
    eax = eax + ecx * 8;
    esp += 12; return; /* ret 8 */

}
