/**
 * nhl_07_recomp - Recompiled code chunk 149
 * Functions: 250 (0x002B0500 - 0x002B7D60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002B0500
 * Original: 0x002B0500 - 0x002B0559 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0500: ;
    eax = MEM32(ecx + 0x94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xAC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */

loc_002B0520: ;
    ebx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = MEM32(ebx + edi + 0x48);
    _fa = (uint32_t)(MEM8(ebx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x260), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0549; /* jne: not equal / not zero */

loc_002B0533: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xBC);
    _fa = (uint32_t)(MEM32(ebx + ecx + 0x1468)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx + 0x1468), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B054A; /* jge: greater or equal (signed >=) */

loc_002B0545: ;
    SET_LO8(edx, 1);
    goto loc_002B054A;

loc_002B0549: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B054A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0550; /* jne: not equal / not zero */

loc_002B054E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B0550: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0520; /* je: equal / zero */

loc_002B0554: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B0570
 * Original: 0x002B0570 - 0x002B05C9 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0570: ;
    eax = MEM32(ecx + 0x94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xAC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */

loc_002B0590: ;
    ebx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = MEM32(ebx + edi + 0x48);
    _fa = (uint32_t)(MEM8(ebx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x260), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B05B9; /* jne: not equal / not zero */

loc_002B05A3: ;
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xBC);
    _fa = (uint32_t)(MEM32(ebx + ecx + 0x1468)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx + 0x1468), 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B05BA; /* jge: greater or equal (signed >=) */

loc_002B05B5: ;
    SET_LO8(edx, 1);
    goto loc_002B05BA;

loc_002B05B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B05BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B05C0; /* jne: not equal / not zero */

loc_002B05BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B05C0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0590; /* je: equal / zero */

loc_002B05C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B05E0
 * Original: 0x002B05E0 - 0x002B060B (43 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B05E0(void)
{

loc_002B05E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0xAC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + esi * 4 + 0xAC);
    MEM32(ecx + eax * 4 + 0xAC) = edi;
    POP32(esp, edi);
    MEM32(ecx + esi * 4 + 0xAC) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B0620
 * Original: 0x002B0620 - 0x002B0621 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0620(void)
{

loc_002B0620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B0630
 * Original: 0x002B0630 - 0x002B0631 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0630(void)
{

loc_002B0630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B0640
 * Original: 0x002B0640 - 0x002B0641 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0640(void)
{

loc_002B0640: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B0650
 * Original: 0x002B0650 - 0x002B0651 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0650(void)
{

loc_002B0650: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B0660
 * Original: 0x002B0660 - 0x002B06CC (108 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B0660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edx = 2;
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x128;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B0674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B06C7; /* jge: greater or equal (signed >=) */

loc_002B0678: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0680; /* jne: not equal / not zero */

loc_002B067D: ;
    eax = edx + -2;

loc_002B0680: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B06C7; /* jge: greater or equal (signed >=) */

loc_002B0684: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B068B; /* jne: not equal / not zero */

loc_002B0688: ;
    eax = edx + -1;

loc_002B068B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B06C7; /* jge: greater or equal (signed >=) */

loc_002B068F: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) eax = edx; /* cmove */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B06C7; /* jge: greater or equal (signed >=) */

loc_002B0699: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B06A1; /* jne: not equal / not zero */

loc_002B069E: ;
    eax = edx + 1;

loc_002B06A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B06C7; /* jge: greater or equal (signed >=) */

loc_002B06A5: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B06AD; /* jne: not equal / not zero */

loc_002B06AA: ;
    eax = edx + 2;

loc_002B06AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B06C7; /* jge: greater or equal (signed >=) */

loc_002B06B1: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B06B9; /* jne: not equal / not zero */

loc_002B06B6: ;
    eax = edx + 3;

loc_002B06B9: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + -2;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B0674; /* jl: less (signed <) */

loc_002B06C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B06F0
 * Original: 0x002B06F0 - 0x002B0760 (112 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B06F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B06F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B075B; /* ja: above (unsigned >) */

loc_002B06F9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B0760); /* switch: 7 entries, 7 targets */
    if (_jt == 0x002B0700u) goto loc_002B0700;
    if (_jt == 0x002B070Cu) goto loc_002B070C;
    if (_jt == 0x002B0723u) goto loc_002B0723;
    if (_jt == 0x002B0730u) goto loc_002B0730;
    if (_jt == 0x002B073Cu) goto loc_002B073C;
    if (_jt == 0x002B0748u) goto loc_002B0748;
    if (_jt == 0x002B0754u) goto loc_002B0754;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B0700: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B075B; /* je: equal / zero */

loc_002B0707: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B070C: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B071E; /* je: equal / zero */

loc_002B0714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B071E; /* je: equal / zero */

loc_002B0719: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B075B; /* jne: not equal / not zero */

loc_002B071E: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B0723: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B075B; /* jne: not equal / not zero */

loc_002B072B: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B0730: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B075B; /* jne: not equal / not zero */

loc_002B0737: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B073C: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B075B; /* jne: not equal / not zero */

loc_002B0743: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B0748: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B075B; /* jne: not equal / not zero */

loc_002B074F: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B0754: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0707; /* je: equal / zero */

loc_002B075B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B07B0
 * Original: 0x002B07B0 - 0x002B08E3 (307 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B07B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B07B0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_002B08DC; /* ja: above (unsigned >) */

loc_002B07C6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B08E4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002B07CDu) goto loc_002B07CD;
    if (_jt == 0x002B07F2u) goto loc_002B07F2;
    if (_jt == 0x002B0817u) goto loc_002B0817;
    if (_jt == 0x002B083Bu) goto loc_002B083B;
    if (_jt == 0x002B0860u) goto loc_002B0860;
    if (_jt == 0x002B0883u) goto loc_002B0883;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B07CD: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    eax = ZX8(MEM8(edx + 0x2C4));
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B07F2: ;
    eax = MEM32(esp + 0x14);
    edx = eax + eax * 4;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    edx = ZX8(MEM8(ecx + 0x260));
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B0817: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi + 8);
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(ecx + edx + 0x48);
    ecx = MEM32(eax + 0x24C);
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B083B: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    eax = ZX8(MEM8(edx + 0x261));
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B0860: ;
    eax = MEM32(esp + 0x14);
    edx = eax + eax * 4;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    PUSH32(esp, 0x002B0876u); RECOMP_ABI_CALL(0x0003400Fu, sub_0003400F); /* call 0x0003400F */

loc_002B0876: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B0883: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx + edi + 0x48);
    eax = MEM32(eax + 0x2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx + edi + 0x48;
    if (CMP_NE(_fa, _fb)) goto loc_002B08D5; /* jne: not equal / not zero */

loc_002B08A3: ;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + 0x24C);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002B08C1u); RECOMP_ABI_CALL(0x000174FAu, sub_000174FA); /* call 0x000174FA */

loc_002B08C1: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B08D5; /* jne: not equal / not zero */

loc_002B08C9: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi + 0x48);
    PUSH32(esp, 0x002B08D5u); RECOMP_ABI_CALL(0x000204ECu, sub_000204EC); /* call 0x000204EC */

loc_002B08D5: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(ecx) = eax;

loc_002B08DC: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B0950
 * Original: 0x002B0950 - 0x002B09A5 (85 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B0950: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002B0983; /* je: equal / zero */

loc_002B0959: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B09A2; /* jne: not equal / not zero */

loc_002B095C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + ecx + 0x48);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B0976: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0976; /* jne: not equal / not zero */

loc_002B0980: ;
    esp += 16; return; /* ret 12 */

loc_002B0983: ;
    eax = MEM32(esp + 4);
    edx = eax + eax * 4;
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    edx = MEM32(esp + 0xC);

loc_002B0998: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002B0998; /* jne: not equal / not zero */

loc_002B09A2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B09C0
 * Original: 0x002B09C0 - 0x002B09C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B09C0(void)
{

loc_002B09C0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_002B09D0
 * Original: 0x002B09D0 - 0x002B0B85 (437 bytes, 88 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B09D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B09D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B0B74; /* ja: above (unsigned >) */

loc_002B09DD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B0B88); /* switch: 21 entries, 21 targets */
    if (_jt == 0x002B09E4u) goto loc_002B09E4;
    if (_jt == 0x002B09F8u) goto loc_002B09F8;
    if (_jt == 0x002B0A0Cu) goto loc_002B0A0C;
    if (_jt == 0x002B0A20u) goto loc_002B0A20;
    if (_jt == 0x002B0A34u) goto loc_002B0A34;
    if (_jt == 0x002B0A48u) goto loc_002B0A48;
    if (_jt == 0x002B0A5Cu) goto loc_002B0A5C;
    if (_jt == 0x002B0A70u) goto loc_002B0A70;
    if (_jt == 0x002B0A84u) goto loc_002B0A84;
    if (_jt == 0x002B0A98u) goto loc_002B0A98;
    if (_jt == 0x002B0AACu) goto loc_002B0AAC;
    if (_jt == 0x002B0AC0u) goto loc_002B0AC0;
    if (_jt == 0x002B0AD4u) goto loc_002B0AD4;
    if (_jt == 0x002B0AE8u) goto loc_002B0AE8;
    if (_jt == 0x002B0AFCu) goto loc_002B0AFC;
    if (_jt == 0x002B0B10u) goto loc_002B0B10;
    if (_jt == 0x002B0B24u) goto loc_002B0B24;
    if (_jt == 0x002B0B38u) goto loc_002B0B38;
    if (_jt == 0x002B0B4Cu) goto loc_002B0B4C;
    if (_jt == 0x002B0B60u) goto loc_002B0B60;
    if (_jt == 0x002B0B74u) goto loc_002B0B74;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B09E4: ;
    ecx = MEM32(esp + 4);
    eax = 1;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B09F8: ;
    ecx = MEM32(esp + 4);
    eax = 2;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A0C: ;
    ecx = MEM32(esp + 4);
    eax = 3;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A20: ;
    ecx = MEM32(esp + 4);
    eax = 4;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A34: ;
    ecx = MEM32(esp + 4);
    eax = 5;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A48: ;
    ecx = MEM32(esp + 4);
    eax = 6;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A5C: ;
    ecx = MEM32(esp + 4);
    eax = 7;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A70: ;
    ecx = MEM32(esp + 4);
    eax = 8;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A84: ;
    ecx = MEM32(esp + 4);
    eax = 0xA;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0A98: ;
    ecx = MEM32(esp + 4);
    eax = 0xB;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0AAC: ;
    ecx = MEM32(esp + 4);
    eax = 0x14;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0AC0: ;
    ecx = MEM32(esp + 4);
    eax = 0xC;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0AD4: ;
    ecx = MEM32(esp + 4);
    eax = 0x10;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0AE8: ;
    ecx = MEM32(esp + 4);
    eax = 0x11;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0AFC: ;
    ecx = MEM32(esp + 4);
    eax = 0x12;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0B10: ;
    ecx = MEM32(esp + 4);
    eax = 0x17;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0B24: ;
    ecx = MEM32(esp + 4);
    eax = 0x13;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0B38: ;
    ecx = MEM32(esp + 4);
    eax = 0xD;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0B4C: ;
    ecx = MEM32(esp + 4);
    eax = 0x16;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0B60: ;
    ecx = MEM32(esp + 4);
    eax = 0x15;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0B74: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B0C60
 * Original: 0x002B0C60 - 0x002B0DB1 (337 bytes, 68 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0C60: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B0DA0; /* ja: above (unsigned >) */

loc_002B0C6D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B0DB4); /* switch: 16 entries, 16 targets */
    if (_jt == 0x002B0C74u) goto loc_002B0C74;
    if (_jt == 0x002B0C88u) goto loc_002B0C88;
    if (_jt == 0x002B0C9Cu) goto loc_002B0C9C;
    if (_jt == 0x002B0CB0u) goto loc_002B0CB0;
    if (_jt == 0x002B0CC4u) goto loc_002B0CC4;
    if (_jt == 0x002B0CD8u) goto loc_002B0CD8;
    if (_jt == 0x002B0CECu) goto loc_002B0CEC;
    if (_jt == 0x002B0D00u) goto loc_002B0D00;
    if (_jt == 0x002B0D14u) goto loc_002B0D14;
    if (_jt == 0x002B0D28u) goto loc_002B0D28;
    if (_jt == 0x002B0D3Cu) goto loc_002B0D3C;
    if (_jt == 0x002B0D50u) goto loc_002B0D50;
    if (_jt == 0x002B0D64u) goto loc_002B0D64;
    if (_jt == 0x002B0D78u) goto loc_002B0D78;
    if (_jt == 0x002B0D8Cu) goto loc_002B0D8C;
    if (_jt == 0x002B0DA0u) goto loc_002B0DA0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B0C74: ;
    ecx = MEM32(esp + 4);
    eax = 1;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0C88: ;
    ecx = MEM32(esp + 4);
    eax = 2;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0C9C: ;
    ecx = MEM32(esp + 4);
    eax = 4;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0CB0: ;
    ecx = MEM32(esp + 4);
    eax = 0xA;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0CC4: ;
    ecx = MEM32(esp + 4);
    eax = 0xF;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0CD8: ;
    ecx = MEM32(esp + 4);
    eax = 5;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0CEC: ;
    ecx = MEM32(esp + 4);
    eax = 6;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D00: ;
    ecx = MEM32(esp + 4);
    eax = 8;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D14: ;
    ecx = MEM32(esp + 4);
    eax = 9;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D28: ;
    ecx = MEM32(esp + 4);
    eax = 0xB;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D3C: ;
    ecx = MEM32(esp + 4);
    eax = 0xC;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D50: ;
    ecx = MEM32(esp + 4);
    eax = 0xE;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D64: ;
    ecx = MEM32(esp + 4);
    eax = 0x10;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D78: ;
    ecx = MEM32(esp + 4);
    eax = 3;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0D8C: ;
    ecx = MEM32(esp + 4);
    eax = 0x14;
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

loc_002B0DA0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX8(MEM8(eax + ecx + 0x2CD));
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B0EB0
 * Original: 0x002B0EB0 - 0x002B0F10 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0EBF; /* je: equal / zero */

loc_002B0EB9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002B0EBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0EBDu); } /* indirect call */
    }

loc_002B0EBF: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0ECC; /* je: equal / zero */

loc_002B0EC6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002B0ECCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0ECAu); } /* indirect call */
    }

loc_002B0ECC: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0EE6; /* je: equal / zero */

loc_002B0ED3: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002B0EDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0EDCu); } /* indirect call */
    }

loc_002B0EDF: ;
    MEM32(esi + 8) = 0;

loc_002B0EE6: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0F00; /* je: equal / zero */

loc_002B0EED: ;
    ecx = MEM32(0x8FA540);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002B0EF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0EF6u); } /* indirect call */
    }

loc_002B0EF9: ;
    MEM32(esi + 0xC) = 0;

loc_002B0F00: ;
    MEM32(esi + 0x10) = 0;
    ecx = esi + 0x14;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00013B0C(); return; /* tail jmp 0x00013B0C */

}

/**
 * sub_002B0F30
 * Original: 0x002B0F30 - 0x002B0F5F (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B0F30: ;
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B0F57; /* jle: less or equal (signed <=) */

loc_002B0F3B: ;
    ecx = MEM32(ecx + 8);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B0F45: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x24C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0F5A; /* je: equal / zero */

loc_002B0F4F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B0F45; /* jl: less (signed <) */

loc_002B0F57: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B0F5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0F70
 * Original: 0x002B0F70 - 0x002B0FCF (95 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0F70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002B0FCA; /* je: equal / zero */

loc_002B0F7C: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B0F87u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B0F87: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0FA7; /* je: equal / zero */

loc_002B0F93: ;
    ebx = esi + 1;

loc_002B0F96: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B0FA7; /* jge: greater or equal (signed >=) */

loc_002B0F9A: ;
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0F96; /* jne: not equal / not zero */

loc_002B0FA7: ;
    MEM32(ecx + edx * 4) = 1;
    edx = MEM32(edx * 4 + 0x81D0C0);
    POP32(esp, edi);
    ecx = ebp;
    POP32(esp, esi);
    /* nop */

loc_002B0FC0: ;
    SET_LO8(eax, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0FC0; /* jne: not equal / not zero */

loc_002B0FCA: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0FF0
 * Original: 0x002B0FF0 - 0x002B107C (140 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0FF0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002B1005; /* je: equal / zero */

loc_002B0FFB: ;
    MEM32(0x8C23C0) = 0xFFFFFFFFu;

loc_002B1005: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1078; /* je: equal / zero */

loc_002B100D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B1019u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B1019: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1046; /* je: equal / zero */

loc_002B1025: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8C23C0);
    esi = edi + 1;
    /* nop */

loc_002B1030: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1045; /* jge: greater or equal (signed >=) */

loc_002B1034: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1045; /* je: equal / zero */

loc_002B1038: ;
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1030; /* jne: not equal / not zero */

loc_002B1045: ;
    POP32(esp, ebx);

loc_002B1046: ;
    esi = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx + edx * 4) = 1;
    ecx = MEM32(edx * 4 + 0x81D248);
    POP32(esp, ebp);
    /* nop */

loc_002B1060: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1060; /* jne: not equal / not zero */

loc_002B106A: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1078; /* je: equal / zero */

loc_002B1072: ;
    MEM32(0x8C23C0) = edx;

loc_002B1078: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B10A0
 * Original: 0x002B10A0 - 0x002B10CF (47 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B10A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B10A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002B10CA; /* je: equal / zero */

loc_002B10AC: ;
    PUSH32(esp, 0x002B10B1u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B10B1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    ecx = MEM32(edx * 4 + 0x81D440);
    edx = edi;
    edi = edi;

loc_002B10C0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002B10C0; /* jne: not equal / not zero */

loc_002B10CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B10E0
 * Original: 0x002B10E0 - 0x002B10EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B10E0(void)
{

loc_002B10E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B10F0
 * Original: 0x002B10F0 - 0x002B1118 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B10F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B10F0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B1100;

    /* nop */

loc_002B1100: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x8FA79C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 4 + 0x8FA79C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1110; /* jge: greater or equal (signed >=) */

loc_002B1109: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1100; /* jl: less (signed <) */

loc_002B110F: ;
    esp += 4; return; /* ret */

loc_002B1110: ;
    eax = MEM32(ecx * 4 + 0x8FA7B4);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1130
 * Original: 0x002B1130 - 0x002B116D (61 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B1130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002B1130: ;
    eax = MEM32(ecx + 0x2A0);
    edx = MEM32(ecx + 0x29C);
    _fb = (uint32_t)(MEM32(ecx + 0x298)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF4240) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF4240 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B116A; /* jle: less or equal (signed <=) */

loc_002B114B: ;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x81D448)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002B116A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002B1164: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_002B116A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1180
 * Original: 0x002B1180 - 0x002B11A8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1180: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B1190;

    /* nop */

loc_002B1190: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x8FA6D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 4 + 0x8FA6D4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B11A0; /* jge: greater or equal (signed >=) */

loc_002B1199: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1190; /* jl: less (signed <) */

loc_002B119F: ;
    esp += 4; return; /* ret */

loc_002B11A0: ;
    eax = MEM32(ecx * 4 + 0x8FA6E8);
    esp += 4; return; /* ret */

}

/**
 * sub_002B11C0
 * Original: 0x002B11C0 - 0x002B121B (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B11C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B11C0: ;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B11D0;

    /* nop */

loc_002B11D0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x8FA6FC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax * 4 + 0x8FA6FC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B11E1; /* jge: greater or equal (signed >=) */

loc_002B11D9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B11D0; /* jl: less (signed <) */

loc_002B11DF: ;
    goto loc_002B11E8;

loc_002B11E1: ;
    ecx = MEM32(eax * 4 + 0x8FA70C);

loc_002B11E8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B11FA; /* je: equal / zero */

loc_002B11EE: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = eax;

loc_002B11FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B121A; /* jge: greater or equal (signed >=) */

loc_002B1201: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B1203: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x8FA71C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 4 + 0x8FA71C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1213; /* jge: greater or equal (signed >=) */

loc_002B120C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1203; /* jl: less (signed <) */

loc_002B1212: ;
    esp += 4; return; /* ret */

loc_002B1213: ;
    eax = MEM32(ecx * 4 + 0x8FA730);

loc_002B121A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1240
 * Original: 0x002B1240 - 0x002B1268 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1240: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B1250;

    /* nop */

loc_002B1250: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x8FA744)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx * 4 + 0x8FA744) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1260; /* jge: greater or equal (signed >=) */

loc_002B1259: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1250; /* jl: less (signed <) */

loc_002B125F: ;
    esp += 4; return; /* ret */

loc_002B1260: ;
    eax = MEM32(ecx * 4 + 0x8FA754);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1280
 * Original: 0x002B1280 - 0x002B128C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1280(void)
{

loc_002B1280: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8FA764);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1290
 * Original: 0x002B1290 - 0x002B12A7 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1290: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B12A1; /* je: equal / zero */

loc_002B1299: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B12A1; /* je: equal / zero */

loc_002B129E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B12A1: ;
    eax = MEM32(0x8C23D4);
    esp += 4; return; /* ret */

}

/**
 * sub_002B12B0
 * Original: 0x002B12B0 - 0x002B12E4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B12B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B12B0: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_002B12E3; /* je: equal / zero */

loc_002B12BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B12D1; /* jle: less or equal (signed <=) */

loc_002B12C0: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8FA7CC); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

loc_002B12D1: ;
    if (CMP_GE(_fas, _fbs)) goto loc_002B12E3; /* jge: greater or equal (signed >=) */

loc_002B12D3: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8FA7D0); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */

loc_002B12E3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1300
 * Original: 0x002B1300 - 0x002B1301 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1300(void)
{

loc_002B1300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1310
 * Original: 0x002B1310 - 0x002B1311 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1310(void)
{

loc_002B1310: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1320
 * Original: 0x002B1320 - 0x002B13A6 (134 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1320: ;
    ecx = MEM32(0x8FA7DC);
    SET_LO8(eax, MEM8(0x8FA7D8));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8FA7DC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002B13A5; /* jne: not equal / not zero */

loc_002B1336: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002B133Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B133F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1354; /* je: equal / zero */

loc_002B1346: ;
    ecx = eax;
    PUSH32(esp, 0x002B134Du); RECOMP_ABI_CALL(0x00024902u, sub_00024902); /* call 0x00024902 */

loc_002B134D: ;
    MEM32(0x8FA7E0) = eax;
    goto loc_002B135E;

loc_002B1354: ;
    MEM32(0x8FA7E0) = 0;

loc_002B135E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x002B1367u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B1367: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B137C; /* je: equal / zero */

loc_002B136E: ;
    ecx = eax;
    PUSH32(esp, 0x002B1375u); RECOMP_ABI_CALL(0x0002334Fu, sub_0002334F); /* call 0x0002334F */

loc_002B1375: ;
    MEM32(0x8FA7E4) = eax;
    goto loc_002B1386;

loc_002B137C: ;
    MEM32(0x8FA7E4) = 0;

loc_002B1386: ;
    ecx = MEM32(0x8FA7E0);
    PUSH32(esp, 0xFFFFFFFFu);
    MEM8(0x8FA7D8) = 1;
    PUSH32(esp, 0x002B139Au); RECOMP_ABI_CALL(0x0001CB12u, sub_0001CB12); /* call 0x0001CB12 */

loc_002B139A: ;
    ecx = MEM32(0x8FA7E4);
    g_seh_ebp = ebp; sub_00020442(); return; /* tail jmp 0x00020442 */

loc_002B13A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B13D0
 * Original: 0x002B13D0 - 0x002B1414 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B13D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B13D0: ;
    MEM32(0x8FA7DC) = MEM32(0x8FA7DC) - 1;
    _fa = (uint32_t)(MEM32(0x8FA7DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B1413; /* jne: not equal / not zero */

loc_002B13D8: ;
    ecx = MEM32(0x8FA7E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B13F2; /* je: equal / zero */

loc_002B13E2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002B13E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B13E6u); } /* indirect call */
    }

loc_002B13E8: ;
    MEM32(0x8FA7E0) = 0;

loc_002B13F2: ;
    ecx = MEM32(0x8FA7E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B140C; /* je: equal / zero */

loc_002B13FC: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002B1402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1400u); } /* indirect call */
    }

loc_002B1402: ;
    MEM32(0x8FA7E4) = 0;

loc_002B140C: ;
    MEM8(0x8FA7D8) = 0;

loc_002B1413: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1430
 * Original: 0x002B1430 - 0x002B14BA (138 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1430: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8FA7E0);
    PUSH32(esp, ebx);
    MEM32(esp + 4) = 0x7F9EE8;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B14AF; /* jle: less or equal (signed <=) */

loc_002B1451: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xEC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xF4);

loc_002B1461: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B1468u); RECOMP_ABI_CALL(0x00037674u, sub_00037674); /* call 0x00037674 */

loc_002B1468: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1487; /* jne: not equal / not zero */

loc_002B146D: ;
    eax = MEM32(esi + 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FA7E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B1481u); RECOMP_ABI_CALL(0x00036FD5u, sub_00036FD5); /* call 0x00036FD5 */

loc_002B1481: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B14A2; /* je: equal / zero */

loc_002B1487: ;
    ecx = MEM32(0x8FA7E0);
    eax = MEM32(ecx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1461; /* jl: less (signed <) */

loc_002B1495: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B14A2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B14AF: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B14E0
 * Original: 0x002B14E0 - 0x002B14E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B14E0(void)
{

loc_002B14E0: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_002B14F0
 * Original: 0x002B14F0 - 0x002B151A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B14F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B14F0: ;
    SET_LO8(eax, MEM8(ecx + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B14FF; /* je: equal / zero */

loc_002B14F7: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x1C));
    esp += 4; return; /* ret */

loc_002B14FF: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x81D44C); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1530
 * Original: 0x002B1530 - 0x002B1554 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1530(void)
{

loc_002B1530: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x34); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x40); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x20); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1560
 * Original: 0x002B1560 - 0x002B15CD (109 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1560: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x34); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB2D0); /* mulss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x20); /* cvtsi2ss */
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    if (CMP_EQ(_fa, _fb)) goto loc_002B15C1; /* je: equal / zero */

loc_002B158E: ;
    SET_LO8(ebx, MEM8(ecx + 0x45));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B15A1; /* je: equal / zero */

loc_002B1595: ;
    ecx = MEM32(ecx + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002B15A1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x81D44C); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002B15C1: ;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B15F0
 * Original: 0x002B15F0 - 0x002B15F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B15F0(void)
{

loc_002B15F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1600
 * Original: 0x002B1600 - 0x002B163C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1600: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B163A; /* jne: not equal / not zero */

loc_002B160D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x002B1616u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B1616: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1632; /* je: equal / zero */

loc_002B161D: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002B162Au); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002B162A: ;
    MEM32(esi + 0x1A0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B1632: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1A0) = eax;

loc_002B163A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1650
 * Original: 0x002B1650 - 0x002B16B4 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1686; /* jne: not equal / not zero */

loc_002B165F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x002B1668u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B1668: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B167E; /* je: equal / zero */

loc_002B166F: ;
    ecx = MEM32(edi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002B167Cu); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002B167C: ;
    goto loc_002B1680;

loc_002B167E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B1680: ;
    MEM32(edi + 0x1A0) = eax;

loc_002B1686: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 5;
    /* nop */

loc_002B1690: ;
    ecx = MEM32(edi + 0x1A0);
    eax = MEM32(ecx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B16A0u); RECOMP_ABI_CALL(0x0001A55Bu, sub_0001A55B); /* call 0x0001A55B */

loc_002B16A0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1690; /* jle: less or equal (signed <=) */

loc_002B16A8: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B16D0
 * Original: 0x002B16D0 - 0x002B1734 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B16D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B16D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1706; /* jne: not equal / not zero */

loc_002B16DF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x002B16E8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B16E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B16FE; /* je: equal / zero */

loc_002B16EF: ;
    ecx = MEM32(edi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002B16FCu); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002B16FC: ;
    goto loc_002B1700;

loc_002B16FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B1700: ;
    MEM32(edi + 0x1A0) = eax;

loc_002B1706: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0xA;
    /* nop */

loc_002B1710: ;
    ecx = MEM32(edi + 0x1A0);
    eax = MEM32(ecx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B1720u); RECOMP_ABI_CALL(0x0001A55Bu, sub_0001A55B); /* call 0x0001A55B */

loc_002B1720: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1710; /* jle: less or equal (signed <=) */

loc_002B1728: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1750
 * Original: 0x002B1750 - 0x002B17B4 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1786; /* jne: not equal / not zero */

loc_002B175F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x002B1768u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B1768: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B177E; /* je: equal / zero */

loc_002B176F: ;
    ecx = MEM32(edi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002B177Cu); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002B177C: ;
    goto loc_002B1780;

loc_002B177E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B1780: ;
    MEM32(edi + 0x1A0) = eax;

loc_002B1786: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B1790: ;
    ecx = MEM32(edi + 0x1A0);
    eax = MEM32(ecx + esi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B17A0u); RECOMP_ABI_CALL(0x0001A55Bu, sub_0001A55B); /* call 0x0001A55B */

loc_002B17A0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1790; /* jle: less or equal (signed <=) */

loc_002B17A8: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B17D0
 * Original: 0x002B17D0 - 0x002B1816 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B17D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B17D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B180F; /* jne: not equal / not zero */

loc_002B17DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x002B17E6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B17E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1807; /* je: equal / zero */

loc_002B17ED: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002B17FAu); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002B17FA: ;
    MEM32(esi + 0x1A0) = eax;
    eax = MEM32(0x8FA7E8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B1807: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1A0) = eax;

loc_002B180F: ;
    eax = MEM32(0x8FA7E8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1830
 * Original: 0x002B1830 - 0x002B1834 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1830(void)
{

loc_002B1830: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1840
 * Original: 0x002B1840 - 0x002B1844 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1840(void)
{

loc_002B1840: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1850
 * Original: 0x002B1850 - 0x002B1896 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B188F; /* jne: not equal / not zero */

loc_002B185D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x002B1866u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B1866: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1887; /* je: equal / zero */

loc_002B186D: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002B187Au); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002B187A: ;
    MEM32(esi + 0x1A0) = eax;
    eax = MEM32(0x8FA7F0);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B1887: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1A0) = eax;

loc_002B188F: ;
    eax = MEM32(0x8FA7F0);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B18B0
 * Original: 0x002B18B0 - 0x002B18B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18B0(void)
{

loc_002B18B0: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_002B18C0
 * Original: 0x002B18C0 - 0x002B18C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18C0(void)
{

loc_002B18C0: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_002B18D0
 * Original: 0x002B18D0 - 0x002B18D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18D0(void)
{

loc_002B18D0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_002B18E0
 * Original: 0x002B18E0 - 0x002B18E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18E0(void)
{

loc_002B18E0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_002B18F0
 * Original: 0x002B18F0 - 0x002B18FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18F0(void)
{

loc_002B18F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1900
 * Original: 0x002B1900 - 0x002B190A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1900(void)
{

loc_002B1900: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1910
 * Original: 0x002B1910 - 0x002B1914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1910(void)
{

loc_002B1910: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1920
 * Original: 0x002B1920 - 0x002B192F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1920(void)
{

loc_002B1920: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x10); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x14); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1940
 * Original: 0x002B1940 - 0x002B1944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1940(void)
{

loc_002B1940: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1950
 * Original: 0x002B1950 - 0x002B19A4 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1950(void)
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

loc_002B1950: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B1958u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002B1958: ;
    ecx = eax;
    PUSH32(esp, 0x002B195Fu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002B195F: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 4 (32-bit) */
    edx = MEM32(eax + 0x4C);
    edx = edx + edx + -4012;
    if (CMP_NE(_fa, _fb)) goto loc_002B1974; /* jne: not equal / not zero */

loc_002B196F: ;
    ecx = MEM32(esi + 0x1C);
    goto loc_002B1977;

loc_002B1974: ;
    ecx = MEM32(esi + 0x18);

loc_002B1977: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B1980: ;
    esi = MEM32(eax * 4 + 0x81D450);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B199B; /* jl: less (signed <) */

loc_002B198D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1980; /* jl: less (signed <) */

loc_002B1993: ;
    fp_push(MEMF(0x8FA5D4)); /* fld float */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B199B: ;
    fp_push(MEMF(eax * 4 + 0x8FA5B0)); /* fld float */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B19C0
 * Original: 0x002B19C0 - 0x002B19E3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B19C0(void)
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

loc_002B19C0: ;
    ecx = MEM32(ecx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B19C5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x81D478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x81D478) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B19DB; /* jl: less (signed <) */

loc_002B19CE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B19C5; /* jl: less (signed <) */

loc_002B19D4: ;
    fp_push(MEMF(0x8FA5AC)); /* fld float */
    esp += 4; return; /* ret */

loc_002B19DB: ;
    fp_push(MEMF(eax * 4 + 0x8FA588)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B19F0
 * Original: 0x002B19F0 - 0x002B1A13 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B19F0(void)
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

loc_002B19F0: ;
    ecx = MEM32(ecx + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B19F5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x81D4A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x81D4A0) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1A0B; /* jl: less (signed <) */

loc_002B19FE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B19F5; /* jl: less (signed <) */

loc_002B1A04: ;
    fp_push(MEMF(0x8FA60C)); /* fld float */
    esp += 4; return; /* ret */

loc_002B1A0B: ;
    fp_push(MEMF(eax * 4 + 0x8FA5D8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B1A20
 * Original: 0x002B1A20 - 0x002B1A24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1A20(void)
{

loc_002B1A20: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    esp += 4; return; /* ret */

}

/**
 * sub_002B1A30
 * Original: 0x002B1A30 - 0x002B1AA0 (112 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1A30: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B1A40u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_002B1A40: ;
    eax = MEM32(esi + 0x70);
    edi = esi + 0x74;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x002B1A51u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_002B1A51: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x34);
    MEM32(esi + 0x164) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(esi + 0x17C) = ecx;
    ecx = esp + 8;
    MEM32(esi + 0x168) = edx;
    MEM32(esi + 0x178) = eax;
    PUSH32(esp, 0x002B1A7Eu); RECOMP_ABI_CALL(0x0001C63Fu, sub_0001C63F); /* call 0x0001C63F */

loc_002B1A7E: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B1A88u); RECOMP_ABI_CALL(0x00021FAEu, sub_00021FAE); /* call 0x00021FAE */

loc_002B1A88: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002B1A91u); RECOMP_ABI_CALL(0x00022C0Bu, sub_00022C0B); /* call 0x00022C0B */

loc_002B1A91: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B1A9Au); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_002B1A9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1AC0
 * Original: 0x002B1AC0 - 0x002B1ADC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1AC0: ;
    eax = MEM32(0x8FA7F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1AD9; /* je: equal / zero */

loc_002B1AC9: ;
    edx = MEM32(eax + 0xC0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_002B1AD9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1AF0
 * Original: 0x002B1AF0 - 0x002B1B0A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1AF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    eax = ZX8(MEM8(edx + 0x2E7));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1B10
 * Original: 0x002B1B10 - 0x002B1B5B (75 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1B10: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax + eax * 4;
    eax = MEM32(edi);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + esi + 0x48);
    MEM8(ecx + 0x2E7) = LO8(edx);
    ecx = esp + 8;
    PUSH32(esp, 0x002B1B3Au); RECOMP_ABI_CALL(0x00033FECu, sub_00033FEC); /* call 0x00033FEC */

loc_002B1B3A: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + esi + 0x48);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B1B4Au); RECOMP_ABI_CALL(0x00012EFAu, sub_00012EFA); /* call 0x00012EFA */

loc_002B1B4A: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002B1B53u); RECOMP_ABI_CALL(0x00025730u, sub_00025730); /* call 0x00025730 */

loc_002B1B53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1B70
 * Original: 0x002B1B70 - 0x002B1B89 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1B70: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002B1B83; /* je: equal / zero */

loc_002B1B7A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B1B86; /* jne: not equal / not zero */

loc_002B1B7D: ;
    eax = MEM32(ecx + 0x1C);
    esp += 8; return; /* ret 4 */

loc_002B1B83: ;
    eax = MEM32(ecx + 0x2C);

loc_002B1B86: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1B90
 * Original: 0x002B1B90 - 0x002B1BEC (92 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1B90: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BA6; /* jg: greater (signed >) */

loc_002B1B9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BA6; /* jg: greater (signed >) */

loc_002B1BA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_002B1BA6: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BB8; /* jg: greater (signed >) */

loc_002B1BAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BB8; /* jg: greater (signed >) */

loc_002B1BB0: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_002B1BB8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BCA; /* jg: greater (signed >) */

loc_002B1BBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BCA; /* jg: greater (signed >) */

loc_002B1BC2: ;
    eax = 2;
    esp += 12; return; /* ret 8 */

loc_002B1BCA: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BDC; /* jg: greater (signed >) */

loc_002B1BCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BDC; /* jg: greater (signed >) */

loc_002B1BD4: ;
    eax = 3;
    esp += 12; return; /* ret 8 */

loc_002B1BDC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1BE4; /* jg: greater (signed >) */

loc_002B1BE1: ;
    edx = MEM32(ecx + 0x20);

loc_002B1BE4: ;
    eax = 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1C10
 * Original: 0x002B1C10 - 0x002B1CB7 (167 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1C10: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002B1C1C; /* jl: less (signed <) */

loc_002B1C19: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x32));
    edx = edx - 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002B1C1C: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002B1C62; /* ja: above (unsigned >) */

loc_002B1C25: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B1C74); /* switch: 5 entries, 4 targets */
    if (_jt == 0x002B1C2Cu) goto loc_002B1C2C;
    if (_jt == 0x002B1C3Eu) goto loc_002B1C3E;
    if (_jt == 0x002B1C50u) goto loc_002B1C50;
    if (_jt == 0x002B1C62u) goto loc_002B1C62;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B1C2C: ;
    eax = 0x81D4D8;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002D994(); return; /* tail jmp 0x0002D994 */

loc_002B1C3E: ;
    eax = 0x81D500;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002D994(); return; /* tail jmp 0x0002D994 */

loc_002B1C50: ;
    eax = 0x81D550;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002D994(); return; /* tail jmp 0x0002D994 */

loc_002B1C62: ;
    eax = 0x81D528;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002D994(); return; /* tail jmp 0x0002D994 */

    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x2B) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esp + ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esp + ebx) = MEM8(esp + ebx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esp + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    RECOMP_UNIMPL("bound ebx, qword ptr [ebx + ebp]", 0x002B1C7Cu); /* TODO: bound ebx, qword ptr [ebx + ebp] */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x1C)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + 0x1C) = MEM8(edx + 0x1C) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x1C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x2B) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
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
    eax = MEM32(ecx + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1CB0
 * Original: 0x002B1CB0 - 0x002B1CB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1CB0(void)
{

loc_002B1CB0: ;
    eax = MEM32(ecx + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1CC0
 * Original: 0x002B1CC0 - 0x002B1CFA (58 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1CC0: ;
    edx = MEM32(ecx + 0x98);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B1CF2; /* jle: less or equal (signed <=) */

loc_002B1CCE: ;
    ecx = MEM32(ecx);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B1CE0;

    /* nop */

loc_002B1CE0: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x24C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1CF5; /* je: equal / zero */

loc_002B1CEA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1CE0; /* jl: less (signed <) */

loc_002B1CF2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B1CF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1D10
 * Original: 0x002B1D10 - 0x002B1D2A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1D10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    eax = MEM32(edx + 0x24C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1D30
 * Original: 0x002B1D30 - 0x002B1D4A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1D30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x20);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    eax = MEM32(edx + 0x24C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1D50
 * Original: 0x002B1D50 - 0x002B1D70 (32 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1D50: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(ecx + 0x10);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    eax = MEM32(edx + 0x24C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1D80
 * Original: 0x002B1D80 - 0x002B1D9A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1D80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x20);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    eax = MEM32(edx + 0x24C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1DA0
 * Original: 0x002B1DA0 - 0x002B1DCF (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1DA0: ;
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B1DC7; /* jle: less or equal (signed <=) */

loc_002B1DAB: ;
    ecx = MEM32(ecx + 0x10);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1DB5: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x24C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1DCA; /* je: equal / zero */

loc_002B1DBF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1DB5; /* jl: less (signed <) */

loc_002B1DC7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B1DCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1DE0
 * Original: 0x002B1DE0 - 0x002B1E0F (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1DE0: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B1E07; /* jle: less or equal (signed <=) */

loc_002B1DEB: ;
    ecx = MEM32(ecx + 0x20);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1DF5: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x24C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1E0A; /* je: equal / zero */

loc_002B1DFF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1DF5; /* jl: less (signed <) */

loc_002B1E07: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B1E0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1E20
 * Original: 0x002B1E20 - 0x002B1E21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1E20(void)
{

loc_002B1E20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1E30
 * Original: 0x002B1E30 - 0x002B1E3D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1E30: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1E40
 * Original: 0x002B1E40 - 0x002B1FC7 (391 bytes, 131 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1E40: ;
    _fb = (uint32_t)(0x648) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x648;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x64C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002B1E63; /* jne: not equal / not zero */

loc_002B1E5A: ;
    eax = MEM32(ecx + 0x1C);
    MEM32(esp + 0xC) = eax;
    goto loc_002B1E6A;

loc_002B1E63: ;
    edx = MEM32(ecx + 0x2C);
    MEM32(esp + 0xC) = edx;

loc_002B1E6A: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1F9F; /* jle: less or equal (signed <=) */

loc_002B1E78: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x24;
    /* nop */

loc_002B1E80: ;
    edx = MEM32(esp + 0x65C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(esp + ebx * 8 + 0x1C) = ebx;
    MEM32(esp + ebx * 8 + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002B1E9D; /* jne: not equal / not zero */

loc_002B1E98: ;
    edx = MEM32(ecx + 0x10);
    goto loc_002B1EA0;

loc_002B1E9D: ;
    edx = MEM32(ecx + 0x20);

loc_002B1EA0: ;
    edx = MEM32(edx + edi + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1EB3; /* je: equal / zero */

loc_002B1EA8: ;
    MEM32(esp + ebx * 8 + 0x18) = edx;
    eax = edx;
    esi = 1;

loc_002B1EB3: ;
    _fa = (uint32_t)(MEM32(esp + 0x65C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x65C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1EC2; /* jne: not equal / not zero */

loc_002B1EBD: ;
    edx = MEM32(ecx + 0x10);
    goto loc_002B1EC5;

loc_002B1EC2: ;
    edx = MEM32(ecx + 0x20);

loc_002B1EC5: ;
    edx = MEM32(edi + edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1ED7; /* je: equal / zero */

loc_002B1ECC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + ebx * 8 + 0x18) = MEM32(esp + ebx * 8 + 0x18) + edx;
    _fa = (uint32_t)(MEM32(esp + ebx * 8 + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B1ED7: ;
    _fa = (uint32_t)(MEM32(esp + 0x65C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x65C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1EE6; /* jne: not equal / not zero */

loc_002B1EE1: ;
    edx = MEM32(ecx + 0x10);
    goto loc_002B1EE9;

loc_002B1EE6: ;
    edx = MEM32(ecx + 0x20);

loc_002B1EE9: ;
    edx = MEM32(edx + edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1EFC; /* je: equal / zero */

loc_002B1EF1: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + ebx * 8 + 0x18) = MEM32(esp + ebx * 8 + 0x18) + edx;
    _fa = (uint32_t)(MEM32(esp + ebx * 8 + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B1EFC: ;
    _fa = (uint32_t)(MEM32(esp + 0x65C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x65C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1F0B; /* jne: not equal / not zero */

loc_002B1F06: ;
    edx = MEM32(ecx + 0x10);
    goto loc_002B1F0E;

loc_002B1F0B: ;
    edx = MEM32(ecx + 0x20);

loc_002B1F0E: ;
    edx = MEM32(edx + edi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1F21; /* je: equal / zero */

loc_002B1F16: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + ebx * 8 + 0x18) = MEM32(esp + ebx * 8 + 0x18) + edx;
    _fa = (uint32_t)(MEM32(esp + ebx * 8 + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B1F21: ;
    _fa = (uint32_t)(MEM32(esp + 0x65C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x65C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1F30; /* jne: not equal / not zero */

loc_002B1F2B: ;
    edx = MEM32(ecx + 0x10);
    goto loc_002B1F33;

loc_002B1F30: ;
    edx = MEM32(ecx + 0x20);

loc_002B1F33: ;
    edx = MEM32(edx + edi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1F43; /* je: equal / zero */

loc_002B1F3B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + ebx * 8 + 0x18) = MEM32(esp + ebx * 8 + 0x18) + edx;
    _fa = (uint32_t)(MEM32(esp + ebx * 8 + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x10);

loc_002B1F43: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1F5F; /* jge: greater or equal (signed >=) */

loc_002B1F48: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1F53; /* jle: less or equal (signed <=) */

loc_002B1F4C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebp = eax;
    goto loc_002B1F58;

loc_002B1F53: ;
    ebp = 2;

loc_002B1F58: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 5;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ebp;

loc_002B1F5F: ;
    eax = MEM32(esp + ebx * 8 + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1F8D; /* jne: not equal / not zero */

loc_002B1F67: ;
    eax = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + ebx * 8 + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002B1F8D; /* jne: not equal / not zero */

loc_002B1F71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + ebx * 8 + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002B1F8D; /* jne: not equal / not zero */

loc_002B1F79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + ebx * 8 + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002B1F8D; /* jne: not equal / not zero */

loc_002B1F81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + ebx * 8 + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002B1F8D; /* jne: not equal / not zero */

loc_002B1F89: ;
    MEM32(esp + ebx * 8 + 0x18) = ebp;

loc_002B1F8D: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1E80; /* jl: less (signed <) */

loc_002B1F9D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002B1F9F: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x290E2);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B1FB5u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_002B1FB5: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x648) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x648;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2030
 * Original: 0x002B2030 - 0x002B2031 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2030(void)
{

loc_002B2030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2040
 * Original: 0x002B2040 - 0x002B20CD (141 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2040: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_002B2078; /* je: equal / zero */

loc_002B204D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B20B3; /* jne: not equal / not zero */

loc_002B2050: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx + eax * 4 + 0xC0);
    eax = MEM32(esp + 0x18);
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B20B3; /* je: equal / zero */

loc_002B2067: ;
    ecx = MEM32(ecx + 0xA0);
    eax = MEM32(ecx + eax * 8 + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B2078: ;
    esi = MEM32(ecx + 0xA4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B20B3; /* jle: less or equal (signed <=) */

loc_002B2084: ;
    eax = MEM32(ecx + 0xA0);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B2093: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B20AB; /* jne: not equal / not zero */

loc_002B209D: ;
    ebp = (uint32_t)(int32_t)SMEM8(eax);
    ebx = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + edi * 4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B20BD; /* je: equal / zero */

loc_002B20AB: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B2093; /* jl: less (signed <) */

loc_002B20B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B20BD: ;
    eax = MEM32(esp + 0x1C);
    eax = (uint32_t)(int32_t)SMEM8(eax + edx * 8 + 2);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B20F0
 * Original: 0x002B20F0 - 0x002B2126 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B20F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B20F0: ;
    eax = MEM32(0x8BFE70);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = 0x8BFE70;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002B2101u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B20FEu); } /* indirect call */
    }

loc_002B2101: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x002B210Cu); RECOMP_ABI_CALL(0x00022823u, sub_00022823); /* call 0x00022823 */

loc_002B210C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2F);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B2118u); RECOMP_ABI_CALL(0x000239ADu, sub_000239AD); /* call 0x000239AD */

loc_002B2118: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002B2121u); RECOMP_ABI_CALL(0x00020622u, sub_00020622); /* call 0x00020622 */

loc_002B2121: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2140
 * Original: 0x002B2140 - 0x002B2179 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2140: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 8;
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x002B2155u); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_002B2155: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2F);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B2165u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_002B2165: ;
    esi = MEM32(esp + 4);
    ecx = esp + 8;
    PUSH32(esp, 0x002B2172u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_002B2172: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2190
 * Original: 0x002B2190 - 0x002B2235 (165 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B2190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2190: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002B219Fu); RECOMP_ABI_CALL(0x00035E9Bu, sub_00035E9B); /* call 0x00035E9B */

loc_002B219F: ;
    ecx = MEM32(esi);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    _fa = (uint32_t)(MEM8(edx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x260), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B21DD; /* jne: not equal / not zero */

loc_002B21B4: ;
    edx = MEM32(esi + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B21D5; /* jle: less or equal (signed <=) */

loc_002B21BD: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B21C3: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x24C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x24C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B21D8; /* je: equal / zero */

loc_002B21CD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B21C3; /* jl: less (signed <) */

loc_002B21D5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B21D8: ;
    ecx = MEM32(esi + 0x20);
    goto loc_002B2208;

loc_002B21DD: ;
    edx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B2202; /* jle: less or equal (signed <=) */

loc_002B21E6: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_002B21F0: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x24C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x24C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2205; /* je: equal / zero */

loc_002B21FA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B21F0; /* jl: less (signed <) */

loc_002B2202: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B2205: ;
    ecx = MEM32(esi + 0x10);

loc_002B2208: ;
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 4 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_002B222A; /* jne: not equal / not zero */

loc_002B221F: ;
    edx = MEM32(esp + 8);
    eax = MEM32(eax + edx * 4 + 0x34);
    esp += 12; return; /* ret 8 */

loc_002B222A: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4 + 0x34);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2260
 * Original: 0x002B2260 - 0x002B2351 (241 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2260: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x6C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B2274u); RECOMP_ABI_CALL(0x0001A4ACu, sub_0001A4AC); /* call 0x0001A4AC */

loc_002B2274: ;
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0x002B2286u); RECOMP_ABI_CALL(0x0001BD20u, sub_0001BD20); /* call 0x0001BD20 */

loc_002B2286: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    ecx = 9;
    edx = 5;
    if (CMP_NE(_fa, _fb)) goto loc_002B229C; /* jne: not equal / not zero */

loc_002B2295: ;
    ecx = edx;
    edx = 6;

loc_002B229C: ;
    eax = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_G(_fas, _fbs)) goto loc_002B22AB; /* jg: greater (signed >) */

loc_002B22A9: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002B22AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B22B3; /* jge: greater or equal (signed >=) */

loc_002B22AF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B22C1;

loc_002B22B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B22BB; /* jge: greater or equal (signed >=) */

loc_002B22B7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B22BD;

loc_002B22BB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002B22BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B22C3; /* jg: greater (signed >) */

loc_002B22C1: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002B22C3: ;
    ecx = esi + edx;
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B22E8; /* jle: less or equal (signed <=) */

loc_002B22DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B22EB; /* jge: greater or equal (signed >=) */

loc_002B22E1: ;
    eax = 2;
    goto loc_002B22ED;

loc_002B22E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */

loc_002B22EB: ;
    if (CMP_A(_fa, _fb)) goto loc_002B2339; /* ja: above (unsigned >) */

loc_002B22ED: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B2354); /* switch: 4 entries, 3 targets */
    if (_jt == 0x002B22F4u) goto loc_002B22F4;
    if (_jt == 0x002B2309u) goto loc_002B2309;
    if (_jt == 0x002B2321u) goto loc_002B2321;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B22F4: ;
    ecx = esp + 8;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B22FFu); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_002B22FF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B2309: ;
    ecx = esp + 8;
    esi = 1;
    PUSH32(esp, 0x002B2317u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_002B2317: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B2321: ;
    ecx = esp + 8;
    esi = 2;
    PUSH32(esp, 0x002B232Fu); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_002B232F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B2339: ;
    ecx = esp + 8;
    esi = 3;
    PUSH32(esp, 0x002B2347u); RECOMP_ABI_CALL(0x00019CEBu, sub_00019CEB); /* call 0x00019CEB */

loc_002B2347: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B2410
 * Original: 0x002B2410 - 0x002B2450 (64 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B2410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2410: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B241Fu); RECOMP_ABI_CALL(0x0001B0A0u, sub_0001B0A0); /* call 0x0001B0A0 */

loc_002B241F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B244B; /* ja: above (unsigned >) */

loc_002B2424: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B2450); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002B242Bu) goto loc_002B242B;
    if (_jt == 0x002B2433u) goto loc_002B2433;
    if (_jt == 0x002B243Bu) goto loc_002B243B;
    if (_jt == 0x002B2443u) goto loc_002B2443;
    if (_jt == 0x002B244Bu) goto loc_002B244B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B242B: ;
    eax = 0x28;
    esp += 12; return; /* ret 8 */

loc_002B2433: ;
    eax = 0x1E;
    esp += 12; return; /* ret 8 */

loc_002B243B: ;
    eax = 0x14;
    esp += 12; return; /* ret 8 */

loc_002B2443: ;
    eax = 0xA;
    esp += 12; return; /* ret 8 */

loc_002B244B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2450
 * Original: 0x002B2450 - 0x002B24A9 (89 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2450: ;
    _fb = (uint32_t)(MEM32(ebx + ebp)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - MEM32(ebx + ebp);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & 0x2B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & 0x2B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x24) = MEM8(ebx + 0x24) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 0x2B);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
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
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B248Fu); RECOMP_ABI_CALL(0x0001A4ACu, sub_0001A4AC); /* call 0x0001A4AC */

loc_002B248F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B2495; /* jge: greater or equal (signed >=) */

loc_002B2493: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002B2495: ;
    ecx = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    esi = ecx + ecx + 1;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, esi);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B24C0
 * Original: 0x002B24C0 - 0x002B2503 (67 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B24C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B24C0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B24DE; /* jge: greater or equal (signed >=) */

loc_002B24C8: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx + edx * 4;
    ecx = ecx + eax * 2;

loc_002B24DE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x31 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B24FE; /* jle: less or equal (signed <=) */

loc_002B24E3: ;
    edx = ecx + -50;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + edx * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0xFFFFFFF6u;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B24FE: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2520
 * Original: 0x002B2520 - 0x002B2555 (53 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2520: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B2534u); RECOMP_ABI_CALL(0x00019917u, sub_00019917); /* call 0x00019917 */

loc_002B2534: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2544; /* jne: not equal / not zero */

loc_002B2538: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B254F; /* jge: greater or equal (signed >=) */

loc_002B253C: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002B2544: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B254F; /* jne: not equal / not zero */

loc_002B2549: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B254F; /* jle: less or equal (signed <=) */

loc_002B254D: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002B254F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B2570
 * Original: 0x002B2570 - 0x002B267D (269 bytes, 111 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2570: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002B257Bu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002B257B: ;
    ecx = eax;
    PUSH32(esp, 0x002B2582u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002B2582: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 7 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_002B25A8; /* jne: not equal / not zero */

loc_002B258A: ;
    eax = MEM32(esi + 0xB0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0xB4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0xB4))); }
    eax = MEM32(esi + 0xAC);
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B25A6u); RECOMP_ABI_CALL(0x000344A1u, sub_000344A1); /* call 0x000344A1 */

loc_002B25A6: ;
    goto loc_002B25AF;

loc_002B25A8: ;
    ecx = eax;
    PUSH32(esp, 0x002B25AFu); RECOMP_ABI_CALL(0x00030FA4u, sub_00030FA4); /* call 0x00030FA4 */

loc_002B25AF: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002B25C1u); RECOMP_ABI_CALL(0x0002DE5Du, sub_0002DE5D); /* call 0x0002DE5D */

loc_002B25C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B2674; /* ja: above (unsigned >) */

loc_002B25CA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B2680); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002B25D1u) goto loc_002B25D1;
    if (_jt == 0x002B25E8u) goto loc_002B25E8;
    if (_jt == 0x002B262Du) goto loc_002B262D;
    if (_jt == 0x002B2674u) goto loc_002B2674;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B25D1: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002B25DEu); RECOMP_ABI_CALL(0x00019917u, sub_00019917); /* call 0x00019917 */

loc_002B25DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B25E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002B25F1u); RECOMP_ABI_CALL(0x0001A4ACu, sub_0001A4AC); /* call 0x0001A4AC */

loc_002B25F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B25F7; /* jge: greater or equal (signed >=) */

loc_002B25F5: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002B25F7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B260Eu); RECOMP_ABI_CALL(0x000133E6u, sub_000133E6); /* call 0x000133E6 */

loc_002B260E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    ebp = eax + eax * 4;
    PUSH32(esp, 0x002B261Au); RECOMP_ABI_CALL(0x00019917u, sub_00019917); /* call 0x00019917 */

loc_002B261A: ;
    edx = eax + ebp * 2 + 2;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002B2626u); RECOMP_ABI_CALL(0x0001EA20u, sub_0001EA20); /* call 0x0001EA20 */

loc_002B2626: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B262D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002B2636u); RECOMP_ABI_CALL(0x0001A4ACu, sub_0001A4AC); /* call 0x0001A4AC */

loc_002B2636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B263C; /* jge: greater or equal (signed >=) */

loc_002B263A: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002B263C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B2655u); RECOMP_ABI_CALL(0x000133E6u, sub_000133E6); /* call 0x000133E6 */

loc_002B2655: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    ebp = eax + eax * 4;
    PUSH32(esp, 0x002B2661u); RECOMP_ABI_CALL(0x00019917u, sub_00019917); /* call 0x00019917 */

loc_002B2661: ;
    edx = eax + ebp * 2 + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002B266Du); RECOMP_ABI_CALL(0x0001EA20u, sub_0001EA20); /* call 0x0001EA20 */

loc_002B266D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B2674: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B2740
 * Original: 0x002B2740 - 0x002B2782 (66 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    eax = eax + eax * 4;
    ebx = ecx;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ebp);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + ecx + 0x48);
    ebp = MEM32(edx + 0x24C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + 0x20;

loc_002B2764: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002B2770u); RECOMP_ABI_CALL(0x0002436Cu, sub_0002436C); /* call 0x0002436C */

loc_002B2770: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B2764; /* jl: less (signed <) */

loc_002B277B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B27A0
 * Original: 0x002B27A0 - 0x002B27A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B27A0(void)
{

loc_002B27A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B27B0
 * Original: 0x002B27B0 - 0x002B286B (187 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B27B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B27B0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B2868; /* ja: above (unsigned >) */

loc_002B27BF: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2B286C); /* switch: 21 entries, 21 targets */
    if (_jt == 0x002B27C6u) goto loc_002B27C6;
    if (_jt == 0x002B27CBu) goto loc_002B27CB;
    if (_jt == 0x002B27D3u) goto loc_002B27D3;
    if (_jt == 0x002B27DBu) goto loc_002B27DB;
    if (_jt == 0x002B27E3u) goto loc_002B27E3;
    if (_jt == 0x002B27EBu) goto loc_002B27EB;
    if (_jt == 0x002B27F3u) goto loc_002B27F3;
    if (_jt == 0x002B27FBu) goto loc_002B27FB;
    if (_jt == 0x002B2803u) goto loc_002B2803;
    if (_jt == 0x002B280Bu) goto loc_002B280B;
    if (_jt == 0x002B2813u) goto loc_002B2813;
    if (_jt == 0x002B281Bu) goto loc_002B281B;
    if (_jt == 0x002B2823u) goto loc_002B2823;
    if (_jt == 0x002B282Bu) goto loc_002B282B;
    if (_jt == 0x002B2833u) goto loc_002B2833;
    if (_jt == 0x002B283Bu) goto loc_002B283B;
    if (_jt == 0x002B2843u) goto loc_002B2843;
    if (_jt == 0x002B284Bu) goto loc_002B284B;
    if (_jt == 0x002B2853u) goto loc_002B2853;
    if (_jt == 0x002B285Bu) goto loc_002B285B;
    if (_jt == 0x002B2863u) goto loc_002B2863;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B27C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002B27CB: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_002B27D3: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_002B27DB: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

loc_002B27E3: ;
    eax = 0x17;
    esp += 8; return; /* ret 4 */

loc_002B27EB: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_002B27F3: ;
    eax = 0x16;
    esp += 8; return; /* ret 4 */

loc_002B27FB: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_002B2803: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_002B280B: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_002B2813: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_002B281B: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_002B2823: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

loc_002B282B: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

loc_002B2833: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

loc_002B283B: ;
    eax = 0x14;
    esp += 8; return; /* ret 4 */

loc_002B2843: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

loc_002B284B: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

loc_002B2853: ;
    eax = 0x13;
    esp += 8; return; /* ret 4 */

loc_002B285B: ;
    eax = 0x15;
    esp += 8; return; /* ret 4 */

loc_002B2863: ;
    eax = 0xD;

loc_002B2868: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B292B
 * Original: 0x002B292B - 0x002B2933 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B292B(void)
{

loc_002B292B: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2933
 * Original: 0x002B2933 - 0x002B293B (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2933(void)
{

loc_002B2933: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B293B
 * Original: 0x002B293B - 0x002B2943 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B293B(void)
{

loc_002B293B: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2943
 * Original: 0x002B2943 - 0x002B294B (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2943(void)
{

loc_002B2943: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B294B
 * Original: 0x002B294B - 0x002B2953 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B294B(void)
{

loc_002B294B: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2953
 * Original: 0x002B2953 - 0x002B295B (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2953(void)
{

loc_002B2953: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B295B
 * Original: 0x002B295B - 0x002B2963 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B295B(void)
{

loc_002B295B: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2963
 * Original: 0x002B2963 - 0x002B296B (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2963(void)
{

loc_002B2963: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B296B
 * Original: 0x002B296B - 0x002B2973 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B296B(void)
{

loc_002B296B: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2973
 * Original: 0x002B2973 - 0x002B297B (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2973(void)
{

loc_002B2973: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B297B
 * Original: 0x002B297B - 0x002B2983 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B297B(void)
{

loc_002B297B: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2983
 * Original: 0x002B2983 - 0x002B298B (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2983(void)
{

loc_002B2983: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B298B
 * Original: 0x002B298B - 0x002B2993 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B298B(void)
{

loc_002B298B: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2993
 * Original: 0x002B2993 - 0x002B299B (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2993(void)
{

loc_002B2993: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B299B
 * Original: 0x002B299B - 0x002B29A3 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B299B(void)
{

loc_002B299B: ;
    eax = 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2A4C
 * Original: 0x002B2A4C - 0x002B2A54 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A4C(void)
{

loc_002B2A4C: ;
    eax = 0xF;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A54
 * Original: 0x002B2A54 - 0x002B2A5C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A54(void)
{

loc_002B2A54: ;
    eax = 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A5C
 * Original: 0x002B2A5C - 0x002B2A64 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A5C(void)
{

loc_002B2A5C: ;
    eax = 0x12;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A64
 * Original: 0x002B2A64 - 0x002B2A6C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A64(void)
{

loc_002B2A64: ;
    eax = 0x21;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A6C
 * Original: 0x002B2A6C - 0x002B2A74 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A6C(void)
{

loc_002B2A6C: ;
    eax = 0x11;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A74
 * Original: 0x002B2A74 - 0x002B2A7C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A74(void)
{

loc_002B2A74: ;
    eax = 0x22;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A7C
 * Original: 0x002B2A7C - 0x002B2A84 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A7C(void)
{

loc_002B2A7C: ;
    eax = 0x17;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A84
 * Original: 0x002B2A84 - 0x002B2A8C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A84(void)
{

loc_002B2A84: ;
    eax = 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A8C
 * Original: 0x002B2A8C - 0x002B2A94 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A8C(void)
{

loc_002B2A8C: ;
    eax = 0x19;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A94
 * Original: 0x002B2A94 - 0x002B2A9C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A94(void)
{

loc_002B2A94: ;
    eax = 0x1A;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A9C
 * Original: 0x002B2A9C - 0x002B2AA4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A9C(void)
{

loc_002B2A9C: ;
    eax = 0x1B;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2AA4
 * Original: 0x002B2AA4 - 0x002B2AAC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2AA4(void)
{

loc_002B2AA4: ;
    eax = 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2AAC
 * Original: 0x002B2AAC - 0x002B2AB4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2AAC(void)
{

loc_002B2AAC: ;
    eax = 0x1D;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2AB4
 * Original: 0x002B2AB4 - 0x002B2ABC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2AB4(void)
{

loc_002B2AB4: ;
    eax = 0x1E;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2ABC
 * Original: 0x002B2ABC - 0x002B2AC4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2ABC(void)
{

loc_002B2ABC: ;
    eax = 0x1F;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2AC4
 * Original: 0x002B2AC4 - 0x002B2ACC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2AC4(void)
{

loc_002B2AC4: ;
    eax = 0x23;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2ACC
 * Original: 0x002B2ACC - 0x002B2AD4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2ACC(void)
{

loc_002B2ACC: ;
    eax = 0x24;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2AD4
 * Original: 0x002B2AD4 - 0x002B2ADC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2AD4(void)
{

loc_002B2AD4: ;
    eax = 0x25;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2ADC
 * Original: 0x002B2ADC - 0x002B2AE4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2ADC(void)
{

loc_002B2ADC: ;
    eax = 0x26;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2AF8
 * Original: 0x002B2AF8 - 0x002B2B00 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2AF8(void)
{

loc_002B2AF8: ;
    eax = 0x2E;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B00
 * Original: 0x002B2B00 - 0x002B2B08 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B00(void)
{

loc_002B2B00: ;
    eax = 0x27;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B08
 * Original: 0x002B2B08 - 0x002B2B10 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B08(void)
{

loc_002B2B08: ;
    eax = 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B10
 * Original: 0x002B2B10 - 0x002B2B18 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B10(void)
{

loc_002B2B10: ;
    eax = 0x29;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B18
 * Original: 0x002B2B18 - 0x002B2B20 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B18(void)
{

loc_002B2B18: ;
    eax = 0x2A;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B20
 * Original: 0x002B2B20 - 0x002B2B28 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B20(void)
{

loc_002B2B20: ;
    eax = 0x2B;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B28
 * Original: 0x002B2B28 - 0x002B2B30 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B28(void)
{

loc_002B2B28: ;
    eax = 0x2C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B30
 * Original: 0x002B2B30 - 0x002B2B38 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B30(void)
{

loc_002B2B30: ;
    eax = 0x2F;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2B38
 * Original: 0x002B2B38 - 0x002B2B40 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B38(void)
{

loc_002B2B38: ;
    eax = 0x2D;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2C50
 * Original: 0x002B2C50 - 0x002B2CD2 (130 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2C50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002B2CCD; /* jle: less or equal (signed <=) */

loc_002B2C63: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    goto loc_002B2C70;

loc_002B2C6C: ;
    eax = MEM32(esp + 0x10);

loc_002B2C70: ;
    esi = MEM32(ebx + 0x8C);
    edi = MEM32(ebx + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x14;
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
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax + ecx + 0x48);
    ebp = MEM32(edx + 0x24C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + 0x20;

loc_002B2C98: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002B2CA4u); RECOMP_ABI_CALL(0x0002436Cu, sub_0002436C); /* call 0x0002436C */

loc_002B2CA4: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B2C98; /* jl: less (signed <) */

loc_002B2CAF: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002B2C6C; /* jl: less (signed <) */

loc_002B2CCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002B2CCD: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2D00
 * Original: 0x002B2D00 - 0x002B2D82 (130 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2D00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002B2D7D; /* jle: less or equal (signed <=) */

loc_002B2D13: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    goto loc_002B2D20;

loc_002B2D1C: ;
    eax = MEM32(esp + 0x10);

loc_002B2D20: ;
    esi = MEM32(ebx + 0x90);
    edi = MEM32(ebx + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x14;
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
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(eax + ecx + 0x48);
    ebp = MEM32(edx + 0x24C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + 0x20;

loc_002B2D48: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002B2D54u); RECOMP_ABI_CALL(0x0002436Cu, sub_0002436C); /* call 0x0002436C */

loc_002B2D54: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B2D48; /* jl: less (signed <) */

loc_002B2D5F: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002B2D1C; /* jl: less (signed <) */

loc_002B2D7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_002B2D7D: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2DB0
 * Original: 0x002B2DB0 - 0x002B2EBC (268 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2DB0: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B2EB7; /* ja: above (unsigned >) */

loc_002B2DBE: ;
    eax = ZX8(MEM8(eax + 0x2B2EDC));
    { uint32_t _jt = MEM32(eax * 4 + 0x2B2EBC); /* switch: 8 entries, 8 targets */
    if (_jt == 0x002B2DCCu) goto loc_002B2DCC;
    if (_jt == 0x002B2DEEu) goto loc_002B2DEE;
    if (_jt == 0x002B2E21u) goto loc_002B2E21;
    if (_jt == 0x002B2E40u) goto loc_002B2E40;
    if (_jt == 0x002B2E5Eu) goto loc_002B2E5E;
    if (_jt == 0x002B2E7Cu) goto loc_002B2E7C;
    if (_jt == 0x002B2E9Au) goto loc_002B2E9A;
    if (_jt == 0x002B2EB7u) goto loc_002B2EB7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B2DCC: ;
    eax = MEM32(esp + 8);
    edx = eax + eax * 4;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2EB7; /* jne: not equal / not zero */

loc_002B2DE9: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B2DEE: ;
    eax = MEM32(esp + 8);
    edx = eax + eax * 4;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    SET_LO8(eax, MEM8(ecx + 0x260));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2EB7; /* je: equal / zero */

loc_002B2E0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2EB7; /* je: equal / zero */

loc_002B2E14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2EB7; /* je: equal / zero */

loc_002B2E1C: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B2E21: ;
    eax = MEM32(esp + 8);
    edx = eax + eax * 4;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    SET_LO8(eax, MEM8(ecx + 0x260));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2EB7; /* je: equal / zero */

loc_002B2E3B: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B2E40: ;
    eax = MEM32(esp + 8);
    edx = eax + eax * 4;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2EB7; /* je: equal / zero */

loc_002B2E59: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B2E5E: ;
    eax = MEM32(esp + 8);
    edx = eax + eax * 4;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2EB7; /* je: equal / zero */

loc_002B2E77: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B2E7C: ;
    eax = MEM32(esp + 8);
    edx = eax + eax * 4;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2EB7; /* je: equal / zero */

loc_002B2E95: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_002B2E9A: ;
    eax = MEM32(esp + 8);
    edx = eax + eax * 4;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(edx + eax + 0x48);
    _fa = (uint32_t)(MEM8(ecx + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x260), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2DE9; /* jne: not equal / not zero */

loc_002B2EB7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2F40
 * Original: 0x002B2F40 - 0x002B33BD (1149 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2F40: ;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x58;
    edi = esp + 0x14;
    MEM32(esp + 0x260) = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_002B2F60: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2F60; /* jne: not equal / not zero */

loc_002B2F6A: ;
    esi = ecx + 0x80;
    edi = esp + 0x114;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_002B2F80: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2F80; /* jne: not equal / not zero */

loc_002B2F8A: ;
    edx = MEM32(ecx + 0x114);
    MEM32(esp + 0x268) = edx;
    edx = MEM32(ecx + 0xE8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(esp + 0x264) = 0x1770;
    if (CMP_A(_fa, _fb)) goto loc_002B2FC4; /* ja: above (unsigned >) */

loc_002B2FAD: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x2B33C0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002B2FB4u) goto loc_002B2FB4;
    if (_jt == 0x002B2FB8u) goto loc_002B2FB8;
    if (_jt == 0x002B2FBCu) goto loc_002B2FBC;
    if (_jt == 0x002B2FC0u) goto loc_002B2FC0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B2FB4: ;
    SET_LO8(edx, 4);
    goto loc_002B2FC6;

loc_002B2FB8: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_002B2FC6;

loc_002B2FBC: ;
    SET_LO8(edx, 1);
    goto loc_002B2FC6;

loc_002B2FC0: ;
    SET_LO8(edx, 2);
    goto loc_002B2FC6;

loc_002B2FC4: ;
    SET_LO8(edx, 3);

loc_002B2FC6: ;
    SET_LO8(ebx, MEM8(ecx + 0xDC));
    SET_LO16(esi, MEM16(ecx + 0xE0));
    edi = MEM32(ecx + 0xEC);
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x25D) = LO8(ebx);
    SET_LO8(ebx, MEM8(ecx + 0xD8));
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + 0x25A) = LO16(esi);
    SET_LO16(esi, MEM16(ecx + 0xE4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(esp + 0x25C) = LO8(ebx);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    MEM16(esp + 0x254) = LO16(esi);
    SET_LO16(esi, MEM16(ecx + 0xD4));
    MEM8(esp + 0x270) = LO8(ebx);
    SET_LO8(ebx, MEM8(ecx + 0xD0));
    POP32(esp, edi);
    MEM16(esp + 0x26E) = LO16(esi);
    POP32(esp, esi);
    MEM8(esp + 0x269) = LO8(ebx);
    MEM8(esp + 0x26C) = LO8(edx);
    MEM16(esp + 0x250) = LO16(eax);
    MEM16(esp + 0x24E) = LO16(eax);
    MEM8(esp + 0x26D) = 1;
    MEM8(esp + 0x26E) = LO8(eax);
    MEM8(esp + 0x2F9) = LO8(eax);
    MEM16(esp + 0x2FA) = LO16(eax);
    MEM32(esp + 0x2FC) = eax;
    MEM8(esp + 0x301) = LO8(eax);
    MEM8(esp + 0x302) = LO8(eax);
    MEM8(esp + 0x2F4) = LO8(eax);
    MEM8(esp + 0x2F5) = LO8(eax);
    MEM8(esp + 0x2F6) = LO8(eax);
    MEM8(esp + 0x2F7) = LO8(eax);
    MEM8(esp + 0x2F8) = LO8(eax);
    POP32(esp, ebx);
    MEM8(esp + 0x2D5) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_002B31FD; /* jne: not equal / not zero */

loc_002B30B0: ;
    SET_LO8(edx, MEM8(ecx + 0x17C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D6) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x180));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D7) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x184));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D9) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x188));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DA) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x18C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DB) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x194));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DD) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x198));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DE) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x19C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DF) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1A0));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E0) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1A4));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E1) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1AC));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E3) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1B0));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E4) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1B4));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E5) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1C4));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E9) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xF4));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D8) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x190));
    MEM8(esp + 0x2DC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1A8));
    MEM8(esp + 0x2E2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x1B8));
    SET_LO8(ecx, MEM8(ecx + 0x1BC));
    MEM8(esp + 0x2E8) = LO8(eax);
    MEM8(esp + 0x2E6) = LO8(edx);
    MEM8(esp + 0x2E7) = LO8(ecx);
    goto loc_002B31E0;

    /* nop */

loc_002B31E0: ;
    _fa = (uint32_t)(MEM8(esp + eax + 0x2D5)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + eax + 0x2D5), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002B31F2; /* jb: below (unsigned <) */

loc_002B31EA: ;
    MEM8(esp + eax + 0x2D5) = 0x31;

loc_002B31F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B31E0; /* jl: less (signed <) */

loc_002B31F8: ;
    goto loc_002B3398;

loc_002B31FD: ;
    SET_LO8(edx, MEM8(ecx + 0x11C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D6) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x120));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D7) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x124));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D8) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x128));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2D9) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x12C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DA) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x130));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DB) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x134));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x138));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DD) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x140));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2DF) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x144));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E0) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x148));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E1) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x14C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E2) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x158));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E5) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x15C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E6) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x160));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E7) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x164));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E8) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x168));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2E9) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xF0));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2EA) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x16C));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2EC) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xF4));
    _fb = (uint32_t)(0x32) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(edx, LO8(edx) - 0x32);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(esp + 0x2EB) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x150));
    MEM8(esp + 0x2E3) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x154));
    MEM8(esp + 0x2E4) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x170));
    SET_LO8(ecx, MEM8(ecx + 0x174));
    MEM8(esp + 0x2DE) = LO8(eax);
    MEM8(esp + 0x2ED) = LO8(edx);
    MEM8(esp + 0x2EE) = LO8(ecx);
    goto loc_002B3380;

    /* nop */

loc_002B3380: ;
    _fa = (uint32_t)(MEM8(esp + eax + 0x2D5)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + eax + 0x2D5), 0x32 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002B3392; /* jb: below (unsigned <) */

loc_002B338A: ;
    MEM8(esp + eax + 0x2D5) = 0x31;

loc_002B3392: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3380; /* jl: less (signed <) */

loc_002B3398: ;
    ecx = esp;
    PUSH32(esp, 0x002B33A0u); RECOMP_ABI_CALL(0x00033FECu, sub_00033FEC); /* call 0x00033FEC */

loc_002B33A0: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 4;
    PUSH32(esp, 0x002B33AEu); RECOMP_ABI_CALL(0x000236E7u, sub_000236E7); /* call 0x000236E7 */

loc_002B33AE: ;
    ecx = esp;
    PUSH32(esp, 0x002B33B6u); RECOMP_ABI_CALL(0x00025730u, sub_00025730); /* call 0x00025730 */

loc_002B33B6: ;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x300;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3500
 * Original: 0x002B3500 - 0x002B357B (123 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3500: ;
    eax = MEM32(ecx + 0x11C);
    edx = eax + eax * 2;
    _fb = (uint32_t)(MEM32(ecx + 0x168)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x168);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x164)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x164);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x160);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x15C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x15C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x158)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x158);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x14C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x14C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x148)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x148);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x144)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x144);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x140)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x140);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x138)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x138);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x134)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x134);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x130)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x130);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x12C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x12C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x128)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x124)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x124);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 0x120)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0x120);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x6BCA1AF3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
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
    esp += 4; return; /* ret */

}

/**
 * sub_002B35A0
 * Original: 0x002B35A0 - 0x002B35C7 (39 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B35A0(void)
{

loc_002B35A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x81FA34)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x81FA30)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x81D588)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002B35D0
 * Original: 0x002B35D0 - 0x002B3628 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B35D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B35D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B35D8u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B35D8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = XMM_SCALAR(MEMF(0x81D588)); /* movss */
    MEM8(0x8C2420) = LO8(edx);
    MEM32(esi + 0x44) = 0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x30) = edx;
    MEM32(esi + 0x34) = edx;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = edx;
    MEMF(esi + 0x4C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3640
 * Original: 0x002B3640 - 0x002B365A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3640: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B3646u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B3646: ;
    SET_LO16(ecx, MEM16(0x8C2420));
    esi = SX8(HI8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = SX8(LO8(ecx));
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3660
 * Original: 0x002B3660 - 0x002B3725 (197 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3660: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0x1F;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x1E;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x1C;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x002B36ACu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002B36AC: ;
    ecx = eax;
    PUSH32(esp, 0x002B36B3u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002B36B3: ;
    edi = MEM32(eax + 0x4C);
    MEM32(esp + 0x10) = 0x12;
    PUSH32(esp, 0x002B36C3u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B36C3: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x32;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebp = edx;
    PUSH32(esp, 0x002B36D2u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B36D2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0xD8) = edx;
    ebx = edx;
    PUSH32(esp, 0x002B36E7u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B36E7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + ebx * 4 + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + ebx * 4 + 0x14))); }
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 0xDC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002B3700; /* jne: not equal / not zero */

loc_002B36F6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    ebx = 0x11;
    if (CMP_L(_fas, _fbs)) goto loc_002B3704; /* jl: less (signed <) */

loc_002B3700: ;
    ebx = MEM32(esp + 0x10);

loc_002B3704: ;
    PUSH32(esp, 0x002B3709u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B3709: ;
    ecx = 0x14;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xE0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3760
 * Original: 0x002B3760 - 0x002B3828 (200 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3760: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002B3823; /* ja: above (unsigned >) */

loc_002B3772: ;
    eax = ZX8(MEM8(eax + 0x2B3834));
    { uint32_t _jt = MEM32(eax * 4 + 0x2B3828); /* switch: 3 entries, 3 targets */
    if (_jt == 0x002B3780u) goto loc_002B3780;
    if (_jt == 0x002B37AAu) goto loc_002B37AA;
    if (_jt == 0x002B3802u) goto loc_002B3802;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B3780: ;
    PUSH32(esp, 0x002B3785u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B3785: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B3791; /* jns: not sign (positive) */

loc_002B378C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B3791: ;
    MEM32(esi + 0xEC) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B37AA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B37B0u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B37B0: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B37BC; /* jns: not sign (positive) */

loc_002B37B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B37BC: ;
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xEC) = eax;
    edi = 3;
    MEM32(esp + 8) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_002B37E2; /* jne: not equal / not zero */

loc_002B37D8: ;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    goto loc_002B37EA;

loc_002B37E2: ;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = ecx;

loc_002B37EA: ;
    PUSH32(esp, 0x002B37EFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B37EF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    ecx = MEM32(esp + edx * 4 + 4);
    MEM32(esi + 0xE8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B3802: ;
    MEM32(esi + 0xE8) = 0;
    PUSH32(esp, 0x002B3811u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B3811: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B381D; /* jns: not sign (positive) */

loc_002B3818: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B381D: ;
    MEM32(esi + 0xEC) = eax;

loc_002B3823: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3880
 * Original: 0x002B3880 - 0x002B38EE (110 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3880: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B3886u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B3886: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8C2430)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x8C2430) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B38AB; /* jl: less (signed <) */

loc_002B3896: ;
    esi = (uint32_t)(int32_t)SMEM8(0x8C2424);
    PUSH32(esp, 0x002B38A2u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B38A2: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8C2425);
    goto loc_002B38DB;

loc_002B38AB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8C2434)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x8C2434) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B38C8; /* jl: less (signed <) */

loc_002B38B3: ;
    esi = (uint32_t)(int32_t)SMEM8(0x8C2428);
    PUSH32(esp, 0x002B38BFu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B38BF: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8C2429);
    goto loc_002B38DB;

loc_002B38C8: ;
    esi = (uint32_t)(int32_t)SMEM8(0x8C242C);
    PUSH32(esp, 0x002B38D4u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B38D4: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8C242D);

loc_002B38DB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0x63;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x63 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B38EC; /* jg: greater (signed >) */

loc_002B38EA: ;
    eax = esi;

loc_002B38EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3910
 * Original: 0x002B3910 - 0x002B394C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3910: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x002B3919u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B3919: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    _fb = (uint32_t)(0x45) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x45;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B392Bu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B392B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esi + esi * 4;
    MEM32(edi + 0xD0) = esi;
    eax = edx + eax + -164;
    MEM32(edi + 0xD4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3960
 * Original: 0x002B3960 - 0x002B399A (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B3968u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_002B3968: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x5C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x17 (32-bit) */
    MEM32(esi + 0xE4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002B398F; /* je: equal / zero */

loc_002B397B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x34 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B398F; /* je: equal / zero */

loc_002B3980: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x35 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B398F; /* je: equal / zero */

loc_002B3985: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B398F; /* je: equal / zero */

loc_002B398A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3998; /* jne: not equal / not zero */

loc_002B398F: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xE4) = edx;

loc_002B3998: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B39B0
 * Original: 0x002B39B0 - 0x002B3A0C (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B39B0(void)
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

loc_002B39B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x44);
    fp_push((double)SMEM32(ecx + 0x44)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B39C1; /* jge: greater or equal (signed >=) */

loc_002B39BB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_002B39C1: ;
    edx = MEM32(ecx + 0x48);
    fp_push((double)SMEM32(ecx + 0x48)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B39D1; /* jge: greater or equal (signed >=) */

loc_002B39CB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_002B39D1: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x81D588)); /* fmul dword ptr [0x81d588] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_002B3A0A; /* jb: below (unsigned <) */

loc_002B39F2: ;
    MEM8(0x8C2420) = MEM8(0x8C2420) - 1;
    _fa = (uint32_t)(MEM8(0x8C2420)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x81D590); /* subss */
    MEMF(ecx + 0x4C) = xmm0.f[0]; /* movss */

loc_002B3A0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B3A30
 * Original: 0x002B3A30 - 0x002B3A41 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3A30: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B3A3E; /* jge: greater or equal (signed >=) */

loc_002B3A39: ;
    eax = 0x32;

loc_002B3A3E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3A50
 * Original: 0x002B3A50 - 0x002B3AA8 (88 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3A50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002B3A5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3A5Bu); } /* indirect call */
    }

loc_002B3A5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002B3A9A; /* je: equal / zero */

loc_002B3A67: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002B3A72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3A6Fu); } /* indirect call */
    }

loc_002B3A72: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002B3A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3A7Au); } /* indirect call */
    }

loc_002B3A7D: ;
    ecx = edi + edi * 2;
    ecx = ecx + eax * 2;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    POP32(esp, edi);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, ebp);
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002B3A9A: ;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002B3AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3AA0u); } /* indirect call */
    }

loc_002B3AA3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B3AC0
 * Original: 0x002B3AC0 - 0x002B3AEF (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3AC0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002B3AC0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm1 = XMM_SCALAR(MEMF(0x81D580)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_002B3AD6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_002B3AD3: ;
    xmm0 = xmm1; /* movaps */

loc_002B3AD6: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    if ((_fca > _fcb)) goto loc_002B3AEE; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_002B3AEA: ;
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */

loc_002B3AEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3B00
 * Original: 0x002B3B00 - 0x002B3B38 (56 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3B00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B3B11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3B0Bu); } /* indirect call */
    }

loc_002B3B11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3B32; /* jle: less or equal (signed <=) */

loc_002B3B15: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002B3B1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3B1Au); } /* indirect call */
    }

loc_002B3B1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3B23; /* jne: not equal / not zero */

loc_002B3B22: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B3B23: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B3B2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3B28u); } /* indirect call */
    }

loc_002B3B2E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3B15; /* jl: less (signed <) */

loc_002B3B32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3B50
 * Original: 0x002B3B50 - 0x002B3B94 (68 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B3B61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3B5Bu); } /* indirect call */
    }

loc_002B3B61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3B8E; /* jle: less or equal (signed <=) */

loc_002B3B65: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002B3B6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3B6Au); } /* indirect call */
    }

loc_002B3B6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3B7F; /* jne: not equal / not zero */

loc_002B3B72: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x002B3B7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3B77u); } /* indirect call */
    }

loc_002B3B7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3B7F; /* jne: not equal / not zero */

loc_002B3B7E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B3B7F: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x002B3B8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3B84u); } /* indirect call */
    }

loc_002B3B8A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3B65; /* jl: less (signed <) */

loc_002B3B8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3BB0
 * Original: 0x002B3BB0 - 0x002B3BE8 (56 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3BB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B3BC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3BBBu); } /* indirect call */
    }

loc_002B3BC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3BE2; /* jle: less or equal (signed <=) */

loc_002B3BC5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002B3BCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3BCAu); } /* indirect call */
    }

loc_002B3BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B3BD3; /* je: equal / zero */

loc_002B3BD2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B3BD3: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B3BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3BD8u); } /* indirect call */
    }

loc_002B3BDE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3BC5; /* jl: less (signed <) */

loc_002B3BE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3C00
 * Original: 0x002B3C00 - 0x002B3C62 (98 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B3C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3C00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B3C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3C0Bu); } /* indirect call */
    }

loc_002B3C11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3C5A; /* jle: less or equal (signed <=) */

loc_002B3C15: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    /* nop */

loc_002B3C20: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x002B3C28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3C25u); } /* indirect call */
    }

loc_002B3C28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B3C4A; /* je: equal / zero */

loc_002B3C2C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002B3C34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3C31u); } /* indirect call */
    }

loc_002B3C34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B3C4A; /* je: equal / zero */

loc_002B3C39: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3C49; /* jne: not equal / not zero */

loc_002B3C3D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x002B3C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3C42u); } /* indirect call */
    }

loc_002B3C45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3C4A; /* jne: not equal / not zero */

loc_002B3C49: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B3C4A: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B3C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3C4Fu); } /* indirect call */
    }

loc_002B3C55: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3C20; /* jl: less (signed <) */

loc_002B3C59: ;
    POP32(esp, ebx);

loc_002B3C5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3C80
 * Original: 0x002B3C80 - 0x002B3CCD (77 bytes, 31 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3C80: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002B3C8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3C8Bu); } /* indirect call */
    }

loc_002B3C8E: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002B3CAF; /* je: equal / zero */

loc_002B3CA7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x002B3CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3CA7u); } /* indirect call */
    }

loc_002B3CAD: ;
    goto loc_002B3CB5;

loc_002B3CAF: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x002B3CB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3CAFu); } /* indirect call */
    }

loc_002B3CB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_002B3CC0; /* jge: greater or equal (signed >=) */

loc_002B3CBB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

loc_002B3CC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3CCA; /* jl: less (signed <) */

loc_002B3CC5: ;
    eax = 0x31;

loc_002B3CCA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B3CE0
 * Original: 0x002B3CE0 - 0x002B3D0A (42 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3CE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B3CF0: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x002B3CFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3CF7u); } /* indirect call */
    }

loc_002B3CFD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3CF0; /* jl: less (signed <) */

loc_002B3D03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B3D20
 * Original: 0x002B3D20 - 0x002B3D7E (94 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3D20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx * 4 + 0x81D598);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002B3D78; /* jle: less or equal (signed <=) */

loc_002B3D36: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    goto loc_002B3D40;

    /* nop */

loc_002B3D40: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002B3D49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3D46u); } /* indirect call */
    }

loc_002B3D49: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3D55; /* jne: not equal / not zero */

loc_002B3D4D: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    goto loc_002B3D5F;

loc_002B3D55: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3D6B; /* jne: not equal / not zero */

loc_002B3D5D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);

loc_002B3D5F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x002B3D6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3D65u); } /* indirect call */
    }

loc_002B3D6B: ;
    eax = MEM32(ebx * 4 + 0x81D598);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3D40; /* jl: less (signed <) */

loc_002B3D77: ;
    POP32(esp, ebp);

loc_002B3D78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B3DA0
 * Original: 0x002B3DA0 - 0x002B3DC3 (35 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3DA0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x002B3DADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3DAAu); } /* indirect call */
    }

loc_002B3DAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B3DBD; /* je: equal / zero */

loc_002B3DB1: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x25 (32-bit) */
    eax = 7;
    if (CMP_G(_fas, _fbs)) goto loc_002B3DBF; /* jg: greater (signed >) */

loc_002B3DBD: ;
    eax = esi;

loc_002B3DBF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B3DD0
 * Original: 0x002B3DD0 - 0x002B3DF3 (35 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3DD0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x002B3DDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3DDAu); } /* indirect call */
    }

loc_002B3DDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B3DED; /* je: equal / zero */

loc_002B3DE1: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x1D (32-bit) */
    eax = 0xF;
    if (CMP_G(_fas, _fbs)) goto loc_002B3DEF; /* jg: greater (signed >) */

loc_002B3DED: ;
    eax = esi;

loc_002B3DEF: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B3E00
 * Original: 0x002B3E00 - 0x002B3E12 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3E00(void)
{

loc_002B3E00: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x81FA38;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3E20
 * Original: 0x002B3E20 - 0x002B3E28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3E20: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC4)); return; /* indirect tail jmp */

}

/**
 * sub_002B3E30
 * Original: 0x002B3E30 - 0x002B3E34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3E30(void)
{

loc_002B3E30: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3E40
 * Original: 0x002B3E40 - 0x002B3E47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3E40(void)
{

loc_002B3E40: ;
    MEM32(ecx) = 0x81FA38;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3E50
 * Original: 0x002B3E50 - 0x002B3E54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3E50(void)
{

loc_002B3E50: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3E60
 * Original: 0x002B3E60 - 0x002B3EFE (158 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3E60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3EF8; /* jle: less or equal (signed <=) */

loc_002B3E7A: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B3E80: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + eax + 0xEE8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B3E95; /* jge: greater or equal (signed >=) */

loc_002B3E90: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002B3E9B;

loc_002B3E95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B3E9B; /* jge: greater or equal (signed >=) */

loc_002B3E9A: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B3E9B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x002B3EA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3EA0u); } /* indirect call */
    }

loc_002B3EA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3EAB; /* jne: not equal / not zero */

loc_002B3EA8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002B3EE3;

loc_002B3EAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B3EE2; /* je: equal / zero */

loc_002B3EB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3EE3; /* jl: less (signed <) */

loc_002B3EB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B3EE3; /* jg: greater (signed >) */

loc_002B3EBA: ;
    ecx = MEM32(esi + 8);
    ecx = edi + ecx + 0xBFC;
    PUSH32(esp, 0x002B3EC9u); RECOMP_ABI_CALL(0x00021CE3u, sub_00021CE3); /* call 0x00021CE3 */

loc_002B3EC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5A (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3ED3; /* jle: less or equal (signed <=) */

loc_002B3ECE: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002B3EE3;

loc_002B3ED3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3EDD; /* jle: less or equal (signed <=) */

loc_002B3ED8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002B3EE3;

loc_002B3EDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x46 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3EE3; /* jle: less or equal (signed <=) */

loc_002B3EE2: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B3EE3: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3E80; /* jl: less (signed <) */

loc_002B3EF7: ;
    POP32(esp, edi);

loc_002B3EF8: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3F30
 * Original: 0x002B3F30 - 0x002B3F74 (68 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B3F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3F30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3F6C; /* jle: less or equal (signed <=) */

loc_002B3F46: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    goto loc_002B3F50;

    /* nop */

loc_002B3F50: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002B3F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3F55u); } /* indirect call */
    }

loc_002B3F58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3F5D; /* jne: not equal / not zero */

loc_002B3F5C: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B3F5D: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3F50; /* jl: less (signed <) */

loc_002B3F6B: ;
    POP32(esp, ebx);

loc_002B3F6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3F90
 * Original: 0x002B3F90 - 0x002B3FE0 (80 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B3F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3F90: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B3FD8; /* jle: less or equal (signed <=) */

loc_002B3FA6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    goto loc_002B3FB0;

    /* nop */

loc_002B3FB0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002B3FB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3FB5u); } /* indirect call */
    }

loc_002B3FB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3FC9; /* jne: not equal / not zero */

loc_002B3FBC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x002B3FC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3FC1u); } /* indirect call */
    }

loc_002B3FC4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B3FC9; /* je: equal / zero */

loc_002B3FC8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B3FC9: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x82BC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3FB0; /* jl: less (signed <) */

loc_002B3FD7: ;
    POP32(esp, ebx);

loc_002B3FD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4000
 * Original: 0x002B4000 - 0x002B4006 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4000(void)
{

loc_002B4000: ;
    eax = 0x19;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4010
 * Original: 0x002B4010 - 0x002B404B (59 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4010: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x82BC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B403D; /* jle: less or equal (signed <=) */

loc_002B4021: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x92) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x92;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B4030;

    /* nop */

loc_002B4030: ;
    edi = (uint32_t)(int32_t)SMEM8(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4044; /* je: equal / zero */

loc_002B4037: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4030; /* jl: less (signed <) */

loc_002B403D: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002B4044: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4060
 * Original: 0x002B4060 - 0x002B408A (42 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4060: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4080; /* je: equal / zero */

loc_002B4068: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4080; /* je: equal / zero */

loc_002B406D: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x002B4077u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4074u); } /* indirect call */
    }

loc_002B4077: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4085; /* jl: less (signed <) */

loc_002B407B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B4085; /* jg: greater (signed >) */

loc_002B4080: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_002B4085: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B40A0
 * Original: 0x002B40A0 - 0x002B40A5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B40A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B40A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B40B0
 * Original: 0x002B40B0 - 0x002B40CD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B40B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B40B0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + edx * 8 + 0xC0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B40E0
 * Original: 0x002B40E0 - 0x002B40FD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B40E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B40E0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + edx * 8 + 0xBC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4110
 * Original: 0x002B4110 - 0x002B4133 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4110: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + ecx + 0xE5D));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4140
 * Original: 0x002B4140 - 0x002B415A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4140: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + edx + 0x6A));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4160
 * Original: 0x002B4160 - 0x002B417A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4160: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + edx + 0x6A));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4180
 * Original: 0x002B4180 - 0x002B41A3 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + ecx + 0xEBF));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(edx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B41B0
 * Original: 0x002B41B0 - 0x002B42D0 (288 bytes, 90 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B41B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B41B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x82BC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 4) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_002B42C9; /* jle: less or equal (signed <=) */

loc_002B41CE: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = edx + 0x6A;
    ebp = edx + esi * 4 + 0x1F4;
    ecx = edx + esi * 2 + 0x200;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + ebx + 0x238;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x24) = ecx;
    goto loc_002B4207;

loc_002B4203: ;
    eax = MEM32(esp + 0x18);

loc_002B4207: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4284; /* je: equal / zero */

loc_002B4210: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B4284; /* ja: above (unsigned >) */

loc_002B4215: ;
    ecx = ZX8(MEM8(esi + 0x2B42F4));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2B42D0); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002B4223u) goto loc_002B4223;
    if (_jt == 0x002B4234u) goto loc_002B4234;
    if (_jt == 0x002B423Du) goto loc_002B423D;
    if (_jt == 0x002B424Eu) goto loc_002B424E;
    if (_jt == 0x002B4254u) goto loc_002B4254;
    if (_jt == 0x002B426Bu) goto loc_002B426B;
    if (_jt == 0x002B4271u) goto loc_002B4271;
    if (_jt == 0x002B4276u) goto loc_002B4276;
    if (_jt == 0x002B427Cu) goto loc_002B427C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B4223: ;
    ecx = edi + esi * 2;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(ecx + ebx + 0x1FC));
    goto loc_002B4280;

loc_002B4234: ;
    ecx = MEM32(esp + 0x24);
    ecx = ZX8(MEM8(ecx));
    goto loc_002B4280;

loc_002B423D: ;
    ecx = edi + esi * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(ecx + ebx + 0x1EB));
    goto loc_002B4280;

loc_002B424E: ;
    ecx = ZX8(MEM8(ebp));
    goto loc_002B4280;

loc_002B4254: ;
    ecx = esi + 0xAB;
    eax = edi + ecx * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax + ebx));
    eax = MEM32(esp + 0x18);
    goto loc_002B4280;

loc_002B426B: ;
    ecx = ZX8(MEM8(eax + 2));
    goto loc_002B4280;

loc_002B4271: ;
    ecx = ZX8(MEM8(eax));
    goto loc_002B4280;

loc_002B4276: ;
    ecx = ZX8(MEM8(eax + -5));
    goto loc_002B4280;

loc_002B427C: ;
    ecx = ZX8(MEM8(eax + -10));

loc_002B4280: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B42C2; /* jne: not equal / not zero */

loc_002B4284: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 0x40;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edx + 0x82BC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4203; /* jl: less (signed <) */

loc_002B42B5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002B42C2: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B42C9: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B4360
 * Original: 0x002B4360 - 0x002B451B (443 bytes, 150 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4360: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4516; /* jl: less (signed <) */

loc_002B436C: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x82BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x82BC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B4516; /* jge: greater or equal (signed >=) */

loc_002B437B: ;
    SET_LO8(edx, MEM8(ecx + eax + 0x6A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4516; /* je: equal / zero */

loc_002B4387: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_002B4510; /* ja: above (unsigned >) */

loc_002B4395: ;
    esi = ZX8(MEM8(edx + 0x2B4544));
    { uint32_t _jt = MEM32(esi * 4 + 0x2B451C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x002B43A3u) goto loc_002B43A3;
    if (_jt == 0x002B43CCu) goto loc_002B43CC;
    if (_jt == 0x002B43F2u) goto loc_002B43F2;
    if (_jt == 0x002B4415u) goto loc_002B4415;
    if (_jt == 0x002B4435u) goto loc_002B4435;
    if (_jt == 0x002B4459u) goto loc_002B4459;
    if (_jt == 0x002B4486u) goto loc_002B4486;
    if (_jt == 0x002B44A8u) goto loc_002B44A8;
    if (_jt == 0x002B44CAu) goto loc_002B44CA;
    if (_jt == 0x002B44ECu) goto loc_002B44EC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B43A3: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx + edx * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax + 0x1FC;

loc_002B43B4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B43B9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B43B4; /* jl: less (signed <) */

loc_002B43C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B43C6: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B43CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + eax * 2;
    /* nop */

loc_002B43E0: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B43E6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B43E0; /* jl: less (signed <) */

loc_002B43EC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B43F2: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx + edx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax + 0x1EB;

loc_002B4403: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B4408: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4403; /* jl: less (signed <) */

loc_002B440F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B4415: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + eax * 4 + 0x1F4;

loc_002B4423: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B4429: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4423; /* jl: less (signed <) */

loc_002B442F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B4435: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + eax * 4 + 0x1F4;

loc_002B4443: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B444D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4443; /* jl: less (signed <) */

loc_002B4453: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B4459: ;
    ecx = edx + ecx + 0xAB;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ecx + edx * 2 + 0x156;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_002B4470: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B447A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4470; /* jl: less (signed <) */

loc_002B4480: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B4486: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x23A;

loc_002B4492: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B449B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4492; /* jl: less (signed <) */

loc_002B44A2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B44A8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x238;

loc_002B44B4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B44BD: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B44B4; /* jl: less (signed <) */

loc_002B44C4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B44CA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x233;

loc_002B44D6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B44DF: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B44D6; /* jl: less (signed <) */

loc_002B44E6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B44EC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x22E;
    goto loc_002B4500;

    /* nop */

loc_002B4500: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B43C6; /* jne: not equal / not zero */

loc_002B4509: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4500; /* jl: less (signed <) */

loc_002B4510: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B4516: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B45E0
 * Original: 0x002B45E0 - 0x002B474C (364 bytes, 123 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B45E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B45E0: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4747; /* jl: less (signed <) */

loc_002B45EC: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x82BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x82BC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B4747; /* jge: greater or equal (signed >=) */

loc_002B45FB: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_002B4740; /* ja: above (unsigned >) */

loc_002B460A: ;
    esi = ZX8(MEM8(edx + 0x2B4770));
    { uint32_t _jt = MEM32(esi * 4 + 0x2B474C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002B4618u) goto loc_002B4618;
    if (_jt == 0x002B463Au) goto loc_002B463A;
    if (_jt == 0x002B4659u) goto loc_002B4659;
    if (_jt == 0x002B467Bu) goto loc_002B467B;
    if (_jt == 0x002B469Bu) goto loc_002B469B;
    if (_jt == 0x002B46C4u) goto loc_002B46C4;
    if (_jt == 0x002B46E3u) goto loc_002B46E3;
    if (_jt == 0x002B4702u) goto loc_002B4702;
    if (_jt == 0x002B4721u) goto loc_002B4721;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B4618: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    edx = edx + edx * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(edx + ecx + 0x1FC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B463A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax * 2;
    ecx = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(edx + ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B4659: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x10);
    edx = edx + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(edx + ecx + 0x1EB));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B467B: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + eax * 4 + 0x1F4;
    ecx = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(edx + ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B469B: ;
    ecx = edx + ecx + 0xAB;
    edx = ecx + edx * 2 + 0x156;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(eax + edx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B46C4: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(eax + edx + 0x23A));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B46E3: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(eax + edx + 0x238));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B4702: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(eax + edx + 0x233));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B4721: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(eax + edx + 0x22E));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B4740: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_002B4747: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B4850
 * Original: 0x002B4850 - 0x002B4972 (290 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4850: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B496F; /* ja: above (unsigned >) */

loc_002B485D: ;
    edx = ZX8(MEM8(eax + 0x2B4998));
    { uint32_t _jt = MEM32(edx * 4 + 0x2B4974); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002B486Bu) goto loc_002B486B;
    if (_jt == 0x002B488Bu) goto loc_002B488B;
    if (_jt == 0x002B48A8u) goto loc_002B48A8;
    if (_jt == 0x002B48C8u) goto loc_002B48C8;
    if (_jt == 0x002B48E6u) goto loc_002B48E6;
    if (_jt == 0x002B4906u) goto loc_002B4906;
    if (_jt == 0x002B4921u) goto loc_002B4921;
    if (_jt == 0x002B493Cu) goto loc_002B493C;
    if (_jt == 0x002B4957u) goto loc_002B4957;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B486B: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + ecx + 0x1FC) = 1;
    esp += 16; return; /* ret 12 */

loc_002B488B: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    ecx = eax + edx * 2;
    edx = MEM32(esp + 8);
    MEM8(ecx + edx) = 1;
    esp += 16; return; /* ret 12 */

loc_002B48A8: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + ecx + 0x1EB) = 1;
    esp += 16; return; /* ret 12 */

loc_002B48C8: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    ecx = eax + edx * 4 + 0x1F4;
    edx = MEM32(esp + 8);
    MEM8(ecx + edx) = 1;
    esp += 16; return; /* ret 12 */

loc_002B48E6: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 2 + 0x201;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + ecx) = 1;
    esp += 16; return; /* ret 12 */

loc_002B4906: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEM8(edx + eax + 0x23A) = 1;
    esp += 16; return; /* ret 12 */

loc_002B4921: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEM8(edx + eax + 0x238) = 1;
    esp += 16; return; /* ret 12 */

loc_002B493C: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEM8(edx + eax + 0x233) = 1;
    esp += 16; return; /* ret 12 */

loc_002B4957: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    MEM8(edx + eax + 0x22E) = 1;

loc_002B496F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B4972
 * Original: 0x002B4972 - 0x002B4A10 (158 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4972(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4972: ;
    edi = edi;
    ecx = (uint32_t)((int32_t)MEM32(eax + 0x2B) * (int32_t)0);
    ecx = MEM32(eax + 0x2B);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -939513016) = MEM8(eax + -939513016) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + -939513016)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    RECOMP_UNIMPL("out 0x48, al", 0x002B4984u); /* TODO: out 0x48, al */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0 /* seg:es */);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x2B) = MEM32(ecx + 0x2B) & ecx;
    _fa = (uint32_t)(MEM32(ecx + 0x2B)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + ecx * 2) = MEM8(ecx + ecx * 2) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx + ecx * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCC080706u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCC080706u;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_002B4A10
 * Original: 0x002B4A10 - 0x002B4A44 (52 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4A10: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x82BC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B4A3D; /* jle: less or equal (signed <=) */

loc_002B4A21: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x92) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x92;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B4A30;

    /* nop */

loc_002B4A30: ;
    edi = (uint32_t)(int32_t)SMEM8(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4A3F; /* je: equal / zero */

loc_002B4A37: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4A30; /* jl: less (signed <) */

loc_002B4A3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B4A3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4A60
 * Original: 0x002B4A60 - 0x002B4A8F (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4A60: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0x82BC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B4A87; /* jle: less or equal (signed <=) */

loc_002B4A71: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4A78: ;
    edi = ZX16(MEM16(edx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4A8A; /* je: equal / zero */

loc_002B4A7F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4A78; /* jl: less (signed <) */

loc_002B4A87: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B4A8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4AA0
 * Original: 0x002B4AA0 - 0x002B4AFC (92 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4AA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B4AF7; /* jle: less or equal (signed <=) */

loc_002B4AB3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_002B4AB8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x002B4AC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4ABDu); } /* indirect call */
    }

loc_002B4AC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4AD7; /* je: equal / zero */

loc_002B4AC4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4AE8; /* je: equal / zero */

loc_002B4AC8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x002B4AD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4ACFu); } /* indirect call */
    }

loc_002B4AD5: ;
    goto loc_002B4AE8;

loc_002B4AD7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4AE8; /* jne: not equal / not zero */

loc_002B4ADB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x002B4AE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4AE2u); } /* indirect call */
    }

loc_002B4AE8: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4AB8; /* jl: less (signed <) */

loc_002B4AF6: ;
    POP32(esp, ebx);

loc_002B4AF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4B20
 * Original: 0x002B4B20 - 0x002B4B8D (109 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x82BC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B4B88; /* jle: less or equal (signed <=) */

loc_002B4B33: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_002B4B40: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x002B4B48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4B45u); } /* indirect call */
    }

loc_002B4B48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4B63; /* je: equal / zero */

loc_002B4B4C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4B78; /* je: equal / zero */

loc_002B4B50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4B78; /* je: equal / zero */

loc_002B4B54: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002B4B61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4B5Bu); } /* indirect call */
    }

loc_002B4B61: ;
    goto loc_002B4B78;

loc_002B4B63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4B6B; /* je: equal / zero */

loc_002B4B67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4B78; /* jne: not equal / not zero */

loc_002B4B6B: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002B4B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4B72u); } /* indirect call */
    }

loc_002B4B78: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x82BC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4B40; /* jl: less (signed <) */

loc_002B4B86: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B4B88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B4BB0
 * Original: 0x002B4BB0 - 0x002B4BE7 (55 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B4BDD; /* jle: less or equal (signed <=) */

loc_002B4BC3: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x002B4BCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4BC8u); } /* indirect call */
    }

loc_002B4BCB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4BE2; /* jne: not equal / not zero */

loc_002B4BCF: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4BC3; /* jl: less (signed <) */

loc_002B4BDD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B4BE2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4C00
 * Original: 0x002B4C00 - 0x002B4C62 (98 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4C00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM32(ebx) = 0xFFFFFFFFu;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp) = 0xFFFFFFFFu;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x82BC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B4C5B; /* jle: less or equal (signed <=) */

loc_002B4C2A: ;
    /* nop */

loc_002B4C30: ;
    edx = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x002B4C38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4C35u); } /* indirect call */
    }

loc_002B4C38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4C43; /* je: equal / zero */

loc_002B4C3C: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4C58; /* jne: not equal / not zero */

loc_002B4C41: ;
    MEM32(ebx) = esi;

loc_002B4C43: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x82BC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4C30; /* jl: less (signed <) */

loc_002B4C51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002B4C58: ;
    MEM32(ebp) = esi;

loc_002B4C5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B4C80
 * Original: 0x002B4C80 - 0x002B4EA8 (552 bytes, 164 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4C80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B4EA5; /* ja: above (unsigned >) */

loc_002B4C8D: ;
    edx = ZX8(MEM8(eax + 0x2B4ED0));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(edx * 4 + 0x2B4EA8); /* switch: 10 entries, 10 targets */
    if (_jt == 0x002B4C9Du) goto loc_002B4C9D;
    if (_jt == 0x002B4CD5u) goto loc_002B4CD5;
    if (_jt == 0x002B4D0Au) goto loc_002B4D0A;
    if (_jt == 0x002B4D42u) goto loc_002B4D42;
    if (_jt == 0x002B4D79u) goto loc_002B4D79;
    if (_jt == 0x002B4DB0u) goto loc_002B4DB0;
    if (_jt == 0x002B4DE4u) goto loc_002B4DE4;
    if (_jt == 0x002B4E15u) goto loc_002B4E15;
    if (_jt == 0x002B4E46u) goto loc_002B4E46;
    if (_jt == 0x002B4E77u) goto loc_002B4E77;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B4C9D: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + edi + 0x1FC) = 0;
    esi = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + eax + 0x1FC) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4CD5: ;
    edx = MEM32(esp + 0x14);
    edi = MEM32(ecx + 8);
    esi = edx + 8;
    edx = MEM32(esp + 0x10);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + esi * 2;
    MEM8(esi + edi) = 0;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + esi * 2;
    POP32(esp, edi);
    MEM8(eax + ecx) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4D0A: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + edi + 0x1EB) = 0;
    esi = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM8(esi + edx + 0x1EB) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4D42: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + esi * 4 + 0x1F4;
    MEM8(esi + edi) = 0;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + esi * 4 + 0x1F4;
    POP32(esp, edi);
    MEM8(eax + ecx) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4D79: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edx + esi * 4 + 0x1F4;
    MEM8(esi + edi) = 0;
    esi = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    edx = edx + esi * 4 + 0x1F4;
    POP32(esp, edi);
    MEM8(edx + eax) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4DB0: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 2 + 0x201;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + edi) = 0;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + ecx) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4DE4: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    esi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + esi + 0x23A) = 0;
    edx = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM8(edx + eax + 0x23A) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4E15: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    esi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + esi + 0x238) = 0;
    edx = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM8(edx + eax + 0x238) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4E46: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    esi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + esi + 0x233) = 0;
    edx = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM8(edx + eax + 0x233) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B4E77: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    esi = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + esi + 0x22E) = 0;
    edx = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    MEM8(edx + eax + 0x22E) = 1;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002B4EA5: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B51C0
 * Original: 0x002B51C0 - 0x002B51D7 (23 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B51C0(void)
{

loc_002B51C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    eax = MEM32(eax + ecx + 0xE48);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B51E0
 * Original: 0x002B51E0 - 0x002B51F8 (24 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B51E0(void)
{

loc_002B51E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    eax = ZX8(MEM8(eax + ecx + 0xE5C));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B5200
 * Original: 0x002B5200 - 0x002B5212 (18 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5200(void)
{

loc_002B5200: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0x92);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B5220
 * Original: 0x002B5220 - 0x002B5237 (23 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5220(void)
{

loc_002B5220: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    eax = MEM32(eax + ecx + 0xE4C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B5240
 * Original: 0x002B5240 - 0x002B525C (28 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5240(void)
{

loc_002B5240: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    ecx = eax + ecx + 0xBFC;
    PUSH32(esp, 0x002B5259u); RECOMP_ABI_CALL(0x0003400Fu, sub_0003400F); /* call 0x0003400F */

loc_002B5259: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B5270
 * Original: 0x002B5270 - 0x002B530A (154 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5270: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B5307; /* ja: above (unsigned >) */

loc_002B527F: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x2B530C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002B5286u) goto loc_002B5286;
    if (_jt == 0x002B529Eu) goto loc_002B529E;
    if (_jt == 0x002B52B6u) goto loc_002B52B6;
    if (_jt == 0x002B52CEu) goto loc_002B52CE;
    if (_jt == 0x002B52E6u) goto loc_002B52E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B5286: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    eax = (uint32_t)(int32_t)SMEM8(eax + ecx + 0xEE4);
    esp += 12; return; /* ret 8 */

loc_002B529E: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2F8);
    eax = (uint32_t)(int32_t)SMEM8(edx + eax + 0xEE5);
    esp += 12; return; /* ret 8 */

loc_002B52B6: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2F8);
    eax = (uint32_t)(int32_t)SMEM8(edx + eax + 0xEE6);
    esp += 12; return; /* ret 8 */

loc_002B52CE: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2F8);
    eax = (uint32_t)(int32_t)SMEM8(edx + eax + 0xEE7);
    esp += 12; return; /* ret 8 */

loc_002B52E6: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2F8);
    ecx = (uint32_t)(int32_t)SMEM8(edx + eax + 0xEE8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5304u); RECOMP_ABI_CALL(0x0001E9B7u, sub_0001E9B7); /* call 0x0001E9B7 */

loc_002B5304: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B5307: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B530A
 * Original: 0x002B530A - 0x002B5350 (70 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B530A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B530A: ;
    edi = edi;
    { uint32_t _tmp = MEM8(edx + 0x2B);
    MEM8(edx + 0x2B) = LO8(edx);
    SET_LO8(edx, _tmp); }
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -1241502894) = MEM8(esi + -1241502894) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi + -1241502894)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    RECOMP_UNIMPL("into", 0x002B5318u); /* TODO: into */
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    RECOMP_UNIMPL("out 0x52, al", 0x002B531Cu); /* TODO: out 0x52, al */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_002B5350
 * Original: 0x002B5350 - 0x002B5368 (24 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5350(void)
{

loc_002B5350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    eax = ZX8(MEM8(eax + ecx + 0xEE9));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B5370
 * Original: 0x002B5370 - 0x002B53C6 (86 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5370: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B53C3; /* ja: above (unsigned >) */

loc_002B537C: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2B53C8); /* switch: 5 entries, 4 targets */
    if (_jt == 0x002B5383u) goto loc_002B5383;
    if (_jt == 0x002B5393u) goto loc_002B5393;
    if (_jt == 0x002B53A3u) goto loc_002B53A3;
    if (_jt == 0x002B53B3u) goto loc_002B53B3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B5383: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B538Du); RECOMP_ABI_CALL(0x0002E597u, sub_0002E597); /* call 0x0002E597 */

loc_002B538D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002B5393: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B539Du); RECOMP_ABI_CALL(0x0001EB10u, sub_0001EB10); /* call 0x0001EB10 */

loc_002B539D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002B53A3: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B53ADu); RECOMP_ABI_CALL(0x0001853Fu, sub_0001853F); /* call 0x0001853F */

loc_002B53AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002B53B3: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B53C3; /* je: equal / zero */

loc_002B53BE: ;
    eax = 0xFFFFFFF6u;

loc_002B53C3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B53C6
 * Original: 0x002B53C6 - 0x002B5400 (58 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B53C6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002B53C6: ;
    edi = edi;
    { uint64_t _t = (uint64_t)(MEM32(ebx + 0x2B)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx + 0x2B) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebx + 0x2B)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x93002B53u) = eax;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ebx, 0x53);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(MEM32(ebx + 0x2B)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx + 0x2B) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebx + 0x2B)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_002B5400
 * Original: 0x002B5400 - 0x002B5458 (88 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5400: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2F8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = eax + esi;
    eax = MEM32(ecx + 0xEEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5450; /* jne: not equal / not zero */

loc_002B5421: ;
    ecx = MEM32(ecx + 0xE48);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi + 0x14;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002B5439u); RECOMP_ABI_CALL(0x000174FAu, sub_000174FA); /* call 0x000174FA */

loc_002B5439: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5450; /* jne: not equal / not zero */

loc_002B5441: ;
    eax = MEM32(edi + 8);
    ecx = eax + esi + 0xBFC;
    PUSH32(esp, 0x002B5450u); RECOMP_ABI_CALL(0x000204ECu, sub_000204EC); /* call 0x000204EC */

loc_002B5450: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B5470
 * Original: 0x002B5470 - 0x002B54AE (62 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5470: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(edx + 0xEF1));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B54A8; /* jne: not equal / not zero */

loc_002B548D: ;
    edx = MEM32(edx + 0xE48);
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B54A4u); RECOMP_ABI_CALL(0x000174FAu, sub_000174FA); /* call 0x000174FA */

loc_002B54A4: ;
    eax = MEM32(esp + 4);

loc_002B54A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B54C0
 * Original: 0x002B54C0 - 0x002B54D8 (24 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B54C0(void)
{

loc_002B54C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    eax = ZX8(MEM8(eax + ecx + 0xEF0));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B54E0
 * Original: 0x002B54E0 - 0x002B5505 (37 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B54E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B54E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    edx = MEM32(esp + 8);
    ecx = eax + ecx + 0xCFC;

loc_002B54F8: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002B54F8; /* jne: not equal / not zero */

loc_002B5502: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5510
 * Original: 0x002B5510 - 0x002B5535 (37 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    edx = MEM32(esp + 8);
    ecx = eax + ecx + 0xBFC;

loc_002B5528: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002B5528; /* jne: not equal / not zero */

loc_002B5532: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5540
 * Original: 0x002B5540 - 0x002B5AB0 (1392 bytes, 471 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5540: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = eax + ecx + 0xBFC;
    PUSH32(esp, edi);
    ecx = 0xAF;
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
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEB8));
    MEM8(ebp + 0x2BC) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEB9));
    MEM8(ebp + 0x2BD) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEBA));
    MEM8(ebp + 0x2BE) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEBB));
    MEM8(ebp + 0x2BF) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEBC));
    MEM8(ebp + 0x2C0) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEBD));
    MEM8(ebp + 0x2C1) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEC6));
    MEM8(ebp + 0x2CA) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEC7));
    MEM8(ebp + 0x2CB) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + ecx + 0xEC8));
    MEM8(ebp + 0x2CC) = LO8(ecx);
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(eax + ecx + 0xEBE));
    MEM8(ebp + 0x2C2) = LO8(eax);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x002B5616u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5613u); } /* indirect call */
    }

loc_002B5616: ;
    esi = MEM32(esp + 0x18);
    MEM8(ebp + 0x2C3) = LO8(eax);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002B5628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5625u); } /* indirect call */
    }

loc_002B5628: ;
    MEM8(ebp + 0x2C4) = LO8(eax);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x002B5636u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5633u); } /* indirect call */
    }

loc_002B5636: ;
    MEM8(ebp + 0x2C5) = LO8(eax);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x002B5644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5641u); } /* indirect call */
    }

loc_002B5644: ;
    MEM8(ebp + 0x2C6) = LO8(eax);
    ecx = MEM32(ebx + 8);
    eax = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(eax + ecx + 0xEC3));
    MEM8(ebp + 0x2C7) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEC4));
    MEM8(ebp + 0x2C8) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEC5));
    MEM8(ebp + 0x2C9) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE9));
    MEM8(ebp + 0x2ED) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO16(edx, MEM16(eax + ecx + 0xEEA));
    MEM16(ebp + 0x2EE) = LO16(edx);
    ecx = MEM32(ebx + 8);
    edx = MEM32(eax + ecx + 0xEEC);
    MEM32(ebp + 0x2F0) = edx;
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEF1));
    MEM8(ebp + 0x2F5) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEF2));
    edi = MEM32(esp + 0x20);
    MEM8(ebp + 0x2F6) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE4));
    MEM8(ebp + 0x2E8) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE5));
    MEM8(ebp + 0x2E9) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE6));
    MEM8(ebp + 0x2EA) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE7));
    MEM8(ebp + 0x2EB) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE8));
    _fa = (uint32_t)(MEM8(ebp + 0x260)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x260), 4 (8-bit) */
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM8(ebp + 0x2EC) = LO8(edx);
    ecx = ebx;
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002B58C8; /* jne: not equal / not zero */

loc_002B5739: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B573Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B573Bu); } /* indirect call */
    }

loc_002B573E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    MEM8(ebp + 0x2CD) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5751u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B574Eu); } /* indirect call */
    }

loc_002B5751: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    MEM8(ebp + 0x2CE) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5764u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5761u); } /* indirect call */
    }

loc_002B5764: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    MEM8(ebp + 0x2CF) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5777u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5774u); } /* indirect call */
    }

loc_002B5777: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    MEM8(ebp + 0x2D0) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B578Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5787u); } /* indirect call */
    }

loc_002B578A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    MEM8(ebp + 0x2D1) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B579Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B579Au); } /* indirect call */
    }

loc_002B579D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    MEM8(ebp + 0x2D2) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B57B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B57ADu); } /* indirect call */
    }

loc_002B57B0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1A);
    MEM8(ebp + 0x2D3) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B57C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B57C0u); } /* indirect call */
    }

loc_002B57C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    MEM8(ebp + 0x2D4) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B57D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B57D3u); } /* indirect call */
    }

loc_002B57D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    MEM8(ebp + 0x2D5) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B57E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B57E6u); } /* indirect call */
    }

loc_002B57E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    MEM8(ebp + 0x2D6) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B57FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B57F9u); } /* indirect call */
    }

loc_002B57FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    MEM8(ebp + 0x2D7) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B580Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B580Cu); } /* indirect call */
    }

loc_002B580F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    MEM8(ebp + 0x2D8) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B581Fu); } /* indirect call */
    }

loc_002B5822: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    MEM8(ebp + 0x2D9) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5835u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5832u); } /* indirect call */
    }

loc_002B5835: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    MEM8(ebp + 0x2DA) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5848u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5845u); } /* indirect call */
    }

loc_002B5848: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    MEM8(ebp + 0x2DB) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B585Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5858u); } /* indirect call */
    }

loc_002B585B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM8(ebp + 0x2DC) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B586Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B586Bu); } /* indirect call */
    }

loc_002B586E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1B);
    MEM8(ebp + 0x2DD) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B587Eu); } /* indirect call */
    }

loc_002B5881: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    MEM8(ebp + 0x2DE) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5891u); } /* indirect call */
    }

loc_002B5894: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x16);
    MEM8(ebp + 0x2DF) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B58A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B58A4u); } /* indirect call */
    }

loc_002B58A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    MEM8(ebp + 0x2E0) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B58BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B58B7u); } /* indirect call */
    }

loc_002B58BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x2E1) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_002B58C8: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B58CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B58CAu); } /* indirect call */
    }

loc_002B58CD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    MEM8(ebp + 0x2CD) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B58E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B58DDu); } /* indirect call */
    }

loc_002B58E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    MEM8(ebp + 0x2CE) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B58F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B58F0u); } /* indirect call */
    }

loc_002B58F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    MEM8(ebp + 0x2CF) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5903u); } /* indirect call */
    }

loc_002B5906: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    MEM8(ebp + 0x2D0) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5919u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5916u); } /* indirect call */
    }

loc_002B5919: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    MEM8(ebp + 0x2D1) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B592Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5929u); } /* indirect call */
    }

loc_002B592C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB);
    MEM8(ebp + 0x2D2) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B593Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B593Cu); } /* indirect call */
    }

loc_002B593F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xC);
    MEM8(ebp + 0x2D3) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5952u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B594Fu); } /* indirect call */
    }

loc_002B5952: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    MEM8(ebp + 0x2D4) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5962u); } /* indirect call */
    }

loc_002B5965: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    MEM8(ebp + 0x2D5) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5975u); } /* indirect call */
    }

loc_002B5978: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    MEM8(ebp + 0x2D7) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B598Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5988u); } /* indirect call */
    }

loc_002B598B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEM8(ebp + 0x2D8) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B599Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B599Bu); } /* indirect call */
    }

loc_002B599E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    MEM8(ebp + 0x2D9) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B59B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B59AEu); } /* indirect call */
    }

loc_002B59B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    MEM8(ebp + 0x2DA) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B59C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B59C1u); } /* indirect call */
    }

loc_002B59C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x11);
    MEM8(ebp + 0x2DD) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B59D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B59D4u); } /* indirect call */
    }

loc_002B59D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    MEM8(ebp + 0x2DE) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B59EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B59E7u); } /* indirect call */
    }

loc_002B59EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    MEM8(ebp + 0x2DF) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B59FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B59FAu); } /* indirect call */
    }

loc_002B59FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    MEM8(ebp + 0x2E0) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5A10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5A0Du); } /* indirect call */
    }

loc_002B5A10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x13);
    MEM8(ebp + 0x2E1) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5A23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5A20u); } /* indirect call */
    }

loc_002B5A23: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    MEM8(ebp + 0x2E2) = LO8(eax);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x002B5A36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5A33u); } /* indirect call */
    }

loc_002B5A36: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    MEM8(ebp + 0x2E3) = LO8(eax);
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002B5A49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5A46u); } /* indirect call */
    }

loc_002B5A49: ;
    MEM8(ebp + 0x2E4) = LO8(eax);
    ecx = MEM32(ebx + 8);
    eax = MEM32(esp + 0x10);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE1));
    MEM8(ebp + 0x2E5) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xEE2));
    MEM8(ebp + 0x2E6) = LO8(edx);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xED2));
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 0x2D6) = LO8(edx);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2F8);
    ecx = MEM32(ebx + 8);
    SET_LO8(edx, MEM8(eax + ecx + 0xED7));
    MEM8(ebp + 0x2DB) = LO8(edx);
    eax = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(esi + eax));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x2DC) = LO8(ecx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B5C10
 * Original: 0x002B5C10 - 0x002B5C25 (21 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C10(void)
{

loc_002B5C10: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + edx * 8 + 0xC0) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5C30
 * Original: 0x002B5C30 - 0x002B5C45 (21 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C30(void)
{

loc_002B5C30: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + edx * 8 + 0xBC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5C50
 * Original: 0x002B5C50 - 0x002B5C62 (18 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C50(void)
{

loc_002B5C50: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    MEM8(eax + edx + 0x6A) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5C70
 * Original: 0x002B5C70 - 0x002B5C8B (27 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C70(void)
{

loc_002B5C70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + ecx + 0xEBF) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5CA0
 * Original: 0x002B5CA0 - 0x002B5CB5 (21 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CA0(void)
{

loc_002B5CA0: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    MEM8(eax + edx + 0x92) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5CC0
 * Original: 0x002B5CC0 - 0x002B5CDB (27 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CC0(void)
{

loc_002B5CC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + ecx + 0xEBE) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5CF0
 * Original: 0x002B5CF0 - 0x002B5D30 (64 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CF0(void)
{

loc_002B5CF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(esi + 4));
    MEM8(edx + eax + 0xEE9) = LO8(ebx);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(esi + 8));
    MEM16(edx + eax + 0xEEA) = LO16(edi);
    SET_LO8(edx, MEM8(esi + 0xC));
    ecx = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + eax + 0xEF2) = LO8(edx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5D40
 * Original: 0x002B5D40 - 0x002B5D61 (33 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5D40: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 8);
    MEM8(eax + edx + 0xEE4) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B5D70
 * Original: 0x002B5D70 - 0x002B5E8E (286 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5D70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B5E8B; /* ja: above (unsigned >) */

loc_002B5D7D: ;
    edx = ZX8(MEM8(eax + 0x2B5EB4));
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(edx * 4 + 0x2B5E90); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002B5D8Cu) goto loc_002B5D8C;
    if (_jt == 0x002B5DACu) goto loc_002B5DAC;
    if (_jt == 0x002B5DC8u) goto loc_002B5DC8;
    if (_jt == 0x002B5DE3u) goto loc_002B5DE3;
    if (_jt == 0x002B5DFDu) goto loc_002B5DFD;
    if (_jt == 0x002B5E19u) goto loc_002B5E19;
    if (_jt == 0x002B5E31u) goto loc_002B5E31;
    if (_jt == 0x002B5E49u) goto loc_002B5E49;
    if (_jt == 0x002B5E5Cu) goto loc_002B5E5C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B5D8C: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + ecx + 0x1FC;
    ecx = 3;
    goto loc_002B5E72;

loc_002B5DAC: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    edi = eax + edx * 2;
    ecx = 2;
    goto loc_002B5E72;

loc_002B5DC8: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edx + ecx + 0x1EB;
    goto loc_002B5E6D;

loc_002B5DE3: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 8);
    edi = eax + edx * 4 + 0x1F4;
    ecx = 4;
    goto loc_002B5E72;

loc_002B5DFD: ;
    edx = MEM32(esp + 0xC);
    edi = eax + eax * 2 + 0x201;
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 3;
    goto loc_002B5E72;

loc_002B5E19: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = eax + ecx + 0x23A;
    ecx = 2;
    goto loc_002B5E72;

loc_002B5E31: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edx + eax + 0x238;
    ecx = 2;
    goto loc_002B5E72;

loc_002B5E49: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edx + eax + 0x233;
    goto loc_002B5E6D;

loc_002B5E5C: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edx + eax + 0x22E;

loc_002B5E6D: ;
    ecx = 5;

loc_002B5E72: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5E8A; /* je: equal / zero */

loc_002B5E76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B5E8A; /* jle: less or equal (signed <=) */

loc_002B5E7A: ;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_002B5E8A: ;
    POP32(esp, edi);

loc_002B5E8B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B5E8E
 * Original: 0x002B5E8E - 0x002B5F20 (146 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5E8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5E8E: ;
    edi = edi;
    MEM16(ebp + 0x2B) = 0 /* seg:ds */;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + ebx * 2 + 0x5DC8002B)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + ebx * 2 + 0x5DC8002B) = MEM8(ebp + ebx * 2 + 0x5DC8002B) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + ebx * 2 + 0x5DC8002B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (ecx == 0) goto loc_002B5EFB; /* jecxz */

loc_002B5E9E: ;
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_df = 1; /* std */
    POP32(esp, ebp);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x2B)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x2B) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi + 0x2B)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esp);
    POP32(esp, esi);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(eax)));
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebx))) >> 32) & 1);
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esp + eax))) >> 32) & 1);
    eax = eax + MEM32(esp + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCC080706u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xCC080706u)) >> 32) & 1);
    eax = eax + 0xCC080706u;
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

loc_002B5EFB: ;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_002B5F20
 * Original: 0x002B5F20 - 0x002B6094 (372 bytes, 112 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5F20: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = 2;
    PUSH32(esp, esi);
    eax = 3;
    esi = 4;
    PUSH32(esp, edi);
    edi = 5;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = esi;
    esi = MEM32(esp + 0x60);
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B5F90: ;
    edi = MEM32(esp + edx * 4 + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B6080; /* jle: less or equal (signed <=) */

loc_002B5F9E: ;
    edi = edi;

loc_002B5FA0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B6073; /* ja: above (unsigned >) */

loc_002B5FA9: ;
    edi = ZX8(MEM8(edx + 0x2B60B8));
    { uint32_t _jt = MEM32(edi * 4 + 0x2B6094); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002B5FB7u) goto loc_002B5FB7;
    if (_jt == 0x002B5FD0u) goto loc_002B5FD0;
    if (_jt == 0x002B5FE7u) goto loc_002B5FE7;
    if (_jt == 0x002B5FFDu) goto loc_002B5FFD;
    if (_jt == 0x002B6013u) goto loc_002B6013;
    if (_jt == 0x002B6029u) goto loc_002B6029;
    if (_jt == 0x002B603Cu) goto loc_002B603C;
    if (_jt == 0x002B604Fu) goto loc_002B604F;
    if (_jt == 0x002B6062u) goto loc_002B6062;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B5FB7: ;
    ebp = esi;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edx + edx * 2;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + eax + 0x1FC) = LO8(ebx);
    goto loc_002B6073;

loc_002B5FD0: ;
    ebp = MEM32(ecx + 8);
    edi = esi + 8;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + edi * 2;
    MEM8(edi + eax) = LO8(ebx);
    goto loc_002B6073;

loc_002B5FE7: ;
    ebp = esi;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edx + edx * 4;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + eax + 0x1EB) = LO8(ebx);
    goto loc_002B6073;

loc_002B5FFD: ;
    ebp = MEM32(ecx + 8);
    edi = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + edi * 4 + 0x1F4;
    MEM8(edi + eax) = LO8(ebx);
    goto loc_002B6073;

loc_002B6013: ;
    ebp = esi;
    { uint32_t _sv=(uint32_t)(ebp), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebp = _sv << _sc;
        _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edx + edx * 2 + 0x201;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + eax) = LO8(ebx);
    goto loc_002B6073;

loc_002B6029: ;
    ebp = MEM32(ecx + 8);
    edi = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + eax + 0x23A) = LO8(ebx);
    goto loc_002B6073;

loc_002B603C: ;
    ebp = MEM32(ecx + 8);
    edi = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + eax + 0x238) = LO8(ebx);
    goto loc_002B6073;

loc_002B604F: ;
    ebp = MEM32(ecx + 8);
    edi = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + eax + 0x233) = LO8(ebx);
    goto loc_002B6073;

loc_002B6062: ;
    ebp = MEM32(ecx + 8);
    edi = esi;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + eax + 0x22E) = LO8(ebx);

loc_002B6073: ;
    edi = MEM32(esp + edx * 4 + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5FA0; /* jl: less (signed <) */

loc_002B6080: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5F90; /* jl: less (signed <) */

loc_002B608A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B6140
 * Original: 0x002B6140 - 0x002B616B (43 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6140(void)
{

loc_002B6140: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(edx + eax + 0xEEC) = esi;
    ecx = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(ecx + eax + 0xEF1) = LO8(edx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B6180
 * Original: 0x002B6180 - 0x002B6191 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6180: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + 0x18));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x28) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x28 (8-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_002B61A0
 * Original: 0x002B61A0 - 0x002B6251 (177 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B61A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B61A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B61ACu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002B61AC: ;
    ecx = eax;
    PUSH32(esp, 0x002B61B3u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002B61B3: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x82BC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_002B6235; /* jle: less or equal (signed <=) */

loc_002B61CE: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B61D1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x002B61D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B61D6u); } /* indirect call */
    }

loc_002B61D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6220; /* jne: not equal / not zero */

loc_002B61DD: ;
    eax = MEM32(esi + 8);
    ecx = edi + eax;
    eax = MEM32(ecx + 0xEEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B621C; /* jne: not equal / not zero */

loc_002B61ED: ;
    ecx = MEM32(ecx + 0xE48);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi + 0x14;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x002B6205u); RECOMP_ABI_CALL(0x000174FAu, sub_000174FA); /* call 0x000174FA */

loc_002B6205: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B621C; /* jne: not equal / not zero */

loc_002B620D: ;
    eax = MEM32(esi + 8);
    ecx = edi + eax + 0xBFC;
    PUSH32(esp, 0x002B621Cu); RECOMP_ABI_CALL(0x000204ECu, sub_000204EC); /* call 0x000204EC */

loc_002B621C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + eax;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6220: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0x82BC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B61D1; /* jl: less (signed <) */

loc_002B6234: ;
    POP32(esp, edi);

loc_002B6235: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x34) (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B6280
 * Original: 0x002B6280 - 0x002B6387 (263 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6280: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    MEM32(esp + 8) = eax;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0x82BC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002B6381; /* jle: less or equal (signed <=) */

loc_002B629F: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = ebx + ebx + 0x200;
    PUSH32(esp, edi);
    edi = ebx * 4 + 0x1F4;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x24);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edi;

loc_002B62C3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B634C; /* ja: above (unsigned >) */

loc_002B62CC: ;
    ebp = ZX8(MEM8(ebx + 0x2B63AC));
    { uint32_t _jt = MEM32(ebp * 4 + 0x2B6388); /* switch: 9 entries, 9 targets */
    if (_jt == 0x002B62DAu) goto loc_002B62DA;
    if (_jt == 0x002B62EAu) goto loc_002B62EA;
    if (_jt == 0x002B62F5u) goto loc_002B62F5;
    if (_jt == 0x002B6305u) goto loc_002B6305;
    if (_jt == 0x002B630Cu) goto loc_002B630C;
    if (_jt == 0x002B6322u) goto loc_002B6322;
    if (_jt == 0x002B632Du) goto loc_002B632D;
    if (_jt == 0x002B6338u) goto loc_002B6338;
    if (_jt == 0x002B6343u) goto loc_002B6343;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B62DA: ;
    ebp = esi + ebx * 2;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + ebp + 0x1FC) = LO8(ecx);
    goto loc_002B634C;

loc_002B62EA: ;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + ebp) = LO8(ecx);
    goto loc_002B634C;

loc_002B62F5: ;
    ebp = esi + ebx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + ebp + 0x1EB) = LO8(ecx);
    goto loc_002B634C;

loc_002B6305: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx) = LO8(ecx);
    goto loc_002B634C;

loc_002B630C: ;
    edi = ebx + 0xAB;
    ebp = esi + edi * 2;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edx + ebp) = LO8(ecx);
    goto loc_002B634C;

loc_002B6322: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx + 0x23A) = LO8(ecx);
    goto loc_002B634C;

loc_002B632D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx + 0x238) = LO8(ecx);
    goto loc_002B634C;

loc_002B6338: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx + 0x233) = LO8(ecx);
    goto loc_002B634C;

loc_002B6343: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + edx + 0x22E) = LO8(ecx);

loc_002B634C: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x82BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0x82BC) (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_002B62C3; /* jl: less (signed <) */

loc_002B637D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B6381: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B6410
 * Original: 0x002B6410 - 0x002B65D6 (454 bytes, 130 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6410: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B6420u); RECOMP_ABI_CALL(0x0001CD01u, sub_0001CD01); /* call 0x0001CD01 */

loc_002B6420: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002B6439u); RECOMP_ABI_CALL(0x0002AFD7u, sub_0002AFD7); /* call 0x0002AFD7 */

loc_002B6439: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x1C) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_002B645D; /* jne: not equal / not zero */

loc_002B6441: ;
    ecx = esp + 0x10;
    MEM32(ebp + 0x10) = 6;
    PUSH32(esp, 0x002B6451u); RECOMP_ABI_CALL(0x00032BC9u, sub_00032BC9); /* call 0x00032BC9 */

loc_002B6451: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002B645D: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x18);
    edx = esi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_002B6543; /* jge: greater or equal (signed >=) */

loc_002B6470: ;
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2F8);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    ebx = edx + edx + 0x18;
    eax = edx * 8 + 0xB4;
    goto loc_002B64A0;

loc_002B6493: ;
    ecx = MEM32(esp + 0x10);
    goto loc_002B64A0;

    /* nop */

loc_002B64A0: ;
    esi = MEM32(ebp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + 0xBFC;
    edi = ecx + 0x904;
    ecx = 0xBE;
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
    ecx = MEM32(ebp + 8);
    SET_LO16(esi, MEM16(ebx + ecx + 2));
    MEM16(ebx + ecx) = LO16(esi);
    ecx = MEM32(ebp + 8);
    esi = edx + ecx;
    SET_LO8(ecx, MEM8(esi + 0x6A));
    MEM8(esi + 0x69) = LO8(ecx);
    ecx = MEM32(ebp + 8);
    esi = edx + ecx;
    SET_LO8(ecx, MEM8(esi + 0x92));
    MEM8(esi + 0x91) = LO8(ecx);
    ecx = MEM32(ebp + 8);
    esi = MEM32(eax + ecx + 8);
    MEM32(eax + ecx) = esi;
    ecx = MEM32(ebp + 8);
    esi = MEM32(eax + ecx + 0xC);
    MEM32(eax + ecx + 4) = esi;
    esi = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + 0x1FC;
    edi = ecx + 0x1BC;
    ecx = 0x10;
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
    edi = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x18);
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    edi = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_002B6493; /* jl: less (signed <) */

loc_002B6542: ;
    POP32(esp, edi);

loc_002B6543: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x82BC) = MEM32(eax + 0x82BC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x82BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    MEM8(eax + 0x18) = MEM8(eax + 0x18) - 1;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x8364) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x840C) = ecx;
    edx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B65C0; /* jle: less or equal (signed <=) */

loc_002B6570: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 4);

loc_002B6574: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + eax + 0xE5C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax + 0xE5C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6598; /* je: equal / zero */

loc_002B6580: ;
    esi = MEM32(eax + 0x8364);
    MEM32(eax + esi * 4 + 0x82C4) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x8364) = MEM32(eax + 0x8364) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x8364)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002B65AE;

loc_002B6598: ;
    esi = MEM32(eax + 0x840C);
    MEM32(eax + esi * 4 + 0x836C) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x840C) = MEM32(eax + 0x840C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x840C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B65AE: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2F8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6574; /* jl: less (signed <) */

loc_002B65C0: ;
    POP32(esp, ebx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B65CAu); RECOMP_ABI_CALL(0x00032BC9u, sub_00032BC9); /* call 0x00032BC9 */

loc_002B65CA: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B6650
 * Original: 0x002B6650 - 0x002B6655 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B6650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6650: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B6660
 * Original: 0x002B6660 - 0x002B6673 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002B6660: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x002B666Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6667u); } /* indirect call */
    }

loc_002B666A: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B6680
 * Original: 0x002B6680 - 0x002B66D5 (85 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6680: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x002B668Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B668Au); } /* indirect call */
    }

loc_002B668D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B66CF; /* ja: above (unsigned >) */

loc_002B6693: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B66D8); /* switch: 5 entries, 4 targets */
    if (_jt == 0x002B669Au) goto loc_002B669A;
    if (_jt == 0x002B66ADu) goto loc_002B66AD;
    if (_jt == 0x002B66C0u) goto loc_002B66C0;
    if (_jt == 0x002B66CFu) goto loc_002B66CF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B669A: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B66A4u); RECOMP_ABI_CALL(0x0002E597u, sub_0002E597); /* call 0x0002E597 */

loc_002B66A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B66AD: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B66B7u); RECOMP_ABI_CALL(0x0001853Fu, sub_0001853F); /* call 0x0001853F */

loc_002B66B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B66C0: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B66CAu); RECOMP_ABI_CALL(0x0001EB10u, sub_0001EB10); /* call 0x0001EB10 */

loc_002B66CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_002B66CF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B6710
 * Original: 0x002B6710 - 0x002B6742 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6710: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_002B672F; /* je: equal / zero */

loc_002B671C: ;
    ecx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + ecx + 0x8578);
    esp += 12; return; /* ret 8 */

loc_002B672F: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx + eax + 0xAAF8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B6750
 * Original: 0x002B6750 - 0x002B6782 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6750: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_002B676F; /* je: equal / zero */

loc_002B675C: ;
    ecx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + ecx + 0x91F8);
    esp += 12; return; /* ret 8 */

loc_002B676F: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx + eax + 0xB778);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B6790
 * Original: 0x002B6790 - 0x002B67C2 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6790: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_002B67AF; /* je: equal / zero */

loc_002B679C: ;
    ecx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + ecx + 0x9E78);
    esp += 12; return; /* ret 8 */

loc_002B67AF: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(edx + eax + 0xC3F8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B67D0
 * Original: 0x002B67D0 - 0x002B689C (204 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B67D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B67D0: ;
    edx = MEM32(0x8C2438);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B67F5; /* je: equal / zero */

loc_002B67DD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B67F5; /* je: equal / zero */

loc_002B67E2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B67F5; /* je: equal / zero */

loc_002B67E7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B67F5; /* je: equal / zero */

loc_002B67EC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6899; /* jne: not equal / not zero */

loc_002B67F5: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6899; /* je: equal / zero */

loc_002B6801: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6899; /* je: equal / zero */

loc_002B680A: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 4 (32-bit) */
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6867; /* jne: not equal / not zero */

loc_002B6818: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + 0x855C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B6856; /* jle: less or equal (signed <=) */

loc_002B6825: ;
    ecx = eax;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x855C); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x8464); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD378); /* mulss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_002B6856: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_002B6867: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6886; /* jne: not equal / not zero */

loc_002B686B: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x8560);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_002B6886: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x8560);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002B6899: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B68D0
 * Original: 0x002B68D0 - 0x002B6B0E (574 bytes, 188 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B68D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B68D0: ;
    eax = MEM32(0x8C2438);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002B68F8; /* je: equal / zero */

loc_002B68E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B68F8; /* je: equal / zero */

loc_002B68E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B68F8; /* je: equal / zero */

loc_002B68EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B68F8; /* je: equal / zero */

loc_002B68EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6B07; /* jne: not equal / not zero */

loc_002B68F8: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6B07; /* je: equal / zero */

loc_002B6904: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6B07; /* je: equal / zero */

loc_002B690D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B69D2; /* jne: not equal / not zero */

loc_002B6920: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x18 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B6AAC; /* ja: above (unsigned >) */

loc_002B6929: ;
    eax = ZX8(MEM8(ebx + 0x2B6B28));
    { uint32_t _jt = MEM32(eax * 4 + 0x2B6B10); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002B6937u) goto loc_002B6937;
    if (_jt == 0x002B6945u) goto loc_002B6945;
    if (_jt == 0x002B6960u) goto loc_002B6960;
    if (_jt == 0x002B6989u) goto loc_002B6989;
    if (_jt == 0x002B69B7u) goto loc_002B69B7;
    if (_jt == 0x002B6AACu) goto loc_002B6AAC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B6937: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x8478);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    goto loc_002B696C;

loc_002B6945: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 0x8460);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x002B6956u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6956: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_002B6AAC;

loc_002B6960: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x846C);
    PUSH32(esp, edx);
    PUSH32(esp, 8);

loc_002B696C: ;
    PUSH32(esp, 0x002B6971u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6971: ;
    esi = eax;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x8468);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x002B6984u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6984: ;
    goto loc_002B6AA7;

loc_002B6989: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 0x846C);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x002B699Au); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B699A: ;
    ecx = MEM32(edi + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x8468);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 7);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x002B69B2u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B69B2: ;
    goto loc_002B6AA7;

loc_002B69B7: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x8468);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x002B69C8u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B69C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_002B6AAC;

loc_002B69D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B6AAC; /* ja: above (unsigned >) */

loc_002B69DB: ;
    edx = ZX8(MEM8(ebx + 0x2B6B64));
    { uint32_t _jt = MEM32(edx * 4 + 0x2B6B44); /* switch: 8 entries, 8 targets */
    if (_jt == 0x002B6945u) goto loc_002B6945;
    if (_jt == 0x002B69E9u) goto loc_002B69E9;
    if (_jt == 0x002B6A04u) goto loc_002B6A04;
    if (_jt == 0x002B6A1Fu) goto loc_002B6A1F;
    if (_jt == 0x002B6A45u) goto loc_002B6A45;
    if (_jt == 0x002B6A5Du) goto loc_002B6A5D;
    if (_jt == 0x002B6A75u) goto loc_002B6A75;
    if (_jt == 0x002B6AACu) goto loc_002B6AAC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B69E9: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x8478);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x002B69FAu); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B69FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_002B6AAC;

loc_002B6A04: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x8470);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x002B6A15u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6A15: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_002B6AAC;

loc_002B6A1F: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x846C);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x002B6A30u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6A30: ;
    edx = MEM32(edi + 8);
    esi = eax;
    eax = MEM32(edx + 0x8470);
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x002B6A43u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6A43: ;
    goto loc_002B6AA7;

loc_002B6A45: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x846C);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x002B6A56u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6A56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_002B6AAC;

loc_002B6A5D: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x847C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x002B6A6Eu); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6A6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_002B6AAC;

loc_002B6A75: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 0x846C);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x002B6A86u); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6A86: ;
    ecx = MEM32(edi + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x847C);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0xC);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x002B6A9Eu); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6A9E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_002B6AA7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6AAC: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6AE0; /* je: equal / zero */

loc_002B6AB4: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6ACA; /* je: equal / zero */

loc_002B6ABC: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x8458);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    goto loc_002B6AD6;

loc_002B6ACA: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 0x8480);
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);

loc_002B6AD6: ;
    PUSH32(esp, 0x002B6ADBu); RECOMP_ABI_CALL(0x0002AAB4u, sub_0002AAB4); /* call 0x0002AAB4 */

loc_002B6ADB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6AE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002B6AE9u); RECOMP_ABI_CALL(0x0002E709u, sub_0002E709); /* call 0x0002E709 */

loc_002B6AE9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6AFE; /* jne: not equal / not zero */

loc_002B6AF0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6B03; /* jne: not equal / not zero */

loc_002B6AF5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002B6AFE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6B05; /* jne: not equal / not zero */

loc_002B6B03: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002B6B05: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B6B07: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B6B0E
 * Original: 0x002B6B0E - 0x002B6B43 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6B0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6B0E: ;
    edi = edi;
    MEM32(ecx + 0x2B) = ebp;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x37002B69) = MEM8(edi + 0x37002B69) + HI8(edx);
    _fa = (uint32_t)(MEM8(edi + 0x37002B69)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp = (uint32_t)((int32_t)MEM32(ebx) * (int32_t)0x2B694500);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x69) = MEM8(eax + 0x69) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x69)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    PUSH32(esp, 0x2B);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1030102) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1030102;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8D010505u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8D010505u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

}

/**
 * sub_002B6C50
 * Original: 0x002B6C50 - 0x002B6CE4 (148 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8C2438);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6C74; /* je: equal / zero */

loc_002B6C60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6C74; /* je: equal / zero */

loc_002B6C65: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6C74; /* je: equal / zero */

loc_002B6C6A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6C74; /* je: equal / zero */

loc_002B6C6F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6CE0; /* jne: not equal / not zero */

loc_002B6C74: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6CE0; /* je: equal / zero */

loc_002B6C7C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6CE0; /* je: equal / zero */

loc_002B6C81: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002B6C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6C8Au); } /* indirect call */
    }

loc_002B6C8D: ;
    ecx = MEM32(esi + 8);
    SET_LO8(edx, MEM8(ecx + 0x841C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6CCF; /* je: equal / zero */

loc_002B6C9A: ;
    edx = MEM32(ecx + 0x8438);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6CBA; /* jne: not equal / not zero */

loc_002B6CA5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002B6CB6u); RECOMP_ABI_CALL(0x0001458Eu, sub_0001458E); /* call 0x0001458E */

loc_002B6CB6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B6CBA: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002B6CCBu); RECOMP_ABI_CALL(0x0001458Eu, sub_0001458E); /* call 0x0001458E */

loc_002B6CCB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B6CCF: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002B6CE0u); RECOMP_ABI_CALL(0x0001458Eu, sub_0001458E); /* call 0x0001458E */

loc_002B6CE0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B6D10
 * Original: 0x002B6D10 - 0x002B6D2D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6D10: ;
    eax = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(eax + 0x841C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6D2A; /* je: equal / zero */

loc_002B6D1D: ;
    eax = MEM32(eax + 0x8438);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

loc_002B6D2A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B6D40
 * Original: 0x002B6D40 - 0x002B6D9A (90 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6D40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x8364);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B6D94; /* jle: less or equal (signed <=) */

loc_002B6D56: ;
    PUSH32(esp, edi);
    edi = 0x82C4;
    /* nop */

loc_002B6D60: ;
    eax = MEM32(edi + eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x002B6D6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6D68u); } /* indirect call */
    }

loc_002B6D6B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6D82; /* je: equal / zero */

loc_002B6D6F: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x002B6D7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6D7Au); } /* indirect call */
    }

loc_002B6D7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6D82; /* jne: not equal / not zero */

loc_002B6D81: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B6D82: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x8364);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6D60; /* jl: less (signed <) */

loc_002B6D93: ;
    POP32(esp, edi);

loc_002B6D94: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6DB0
 * Original: 0x002B6DB0 - 0x002B6E0A (90 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x840C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B6E04; /* jle: less or equal (signed <=) */

loc_002B6DC6: ;
    PUSH32(esp, edi);
    edi = 0x836C;
    /* nop */

loc_002B6DD0: ;
    eax = MEM32(edi + eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x002B6DDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6DD8u); } /* indirect call */
    }

loc_002B6DDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6DF2; /* je: equal / zero */

loc_002B6DDF: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + eax);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x002B6DEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6DEAu); } /* indirect call */
    }

loc_002B6DED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6DF2; /* jne: not equal / not zero */

loc_002B6DF1: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B6DF2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x840C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6DD0; /* jl: less (signed <) */

loc_002B6E03: ;
    POP32(esp, edi);

loc_002B6E04: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6E20
 * Original: 0x002B6E20 - 0x002B6F09 (233 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6E20: ;
    _fb = (uint32_t)(0xC10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x8418) = edi;
    eax = MEM32(0x8C2438);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6E59; /* je: equal / zero */

loc_002B6E41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6E59; /* je: equal / zero */

loc_002B6E46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6E59; /* je: equal / zero */

loc_002B6E4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6E59; /* je: equal / zero */

loc_002B6E50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6F00; /* jne: not equal / not zero */

loc_002B6E59: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6F00; /* je: equal / zero */

loc_002B6E65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6F00; /* je: equal / zero */

loc_002B6E6E: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B6E78u); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_002B6E78: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B6E85u); RECOMP_ABI_CALL(0x0002566Du, sub_0002566D); /* call 0x0002566D */

loc_002B6E85: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002B6EF6; /* je: equal / zero */

loc_002B6E8F: ;
    eax = MEM32(esi + 0x8414);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6EA2; /* je: equal / zero */

loc_002B6E99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6E9Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002B6E9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6EA2: ;
    ecx = ebx * 8;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B6EB0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002B6EB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 0x8414) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002B6EF6; /* jle: less or equal (signed <=) */

loc_002B6EBD: ;
    /* nop */

loc_002B6EC0: ;
    edx = MEM32(esi + 0x8418);
    eax = eax + edx * 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x002B6ED4u); RECOMP_ABI_CALL(0x0002637Eu, sub_0002637E); /* call 0x0002637E */

loc_002B6ED4: ;
    ecx = MEM32(esi + 0x8418);
    eax = MEM32(esi + 0x8414);
    _fa = (uint32_t)(MEM32(eax + ecx * 8 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 8 + 4), 0xFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6EF1; /* jne: not equal / not zero */

loc_002B6EEA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x8418) = ecx;

loc_002B6EF1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6EC0; /* jl: less (signed <) */

loc_002B6EF6: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B6EFFu); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_002B6EFF: ;
    POP32(esp, ebx);

loc_002B6F00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B6F50
 * Original: 0x002B6F50 - 0x002B6FA3 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6F50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x002B6F60u); RECOMP_ABI_CALL(0x0003095Au, sub_0003095A); /* call 0x0003095A */

loc_002B6F60: ;
    eax = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(eax + 0x18));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B6F94; /* jle: less or equal (signed <=) */

loc_002B6F6C: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B6F70: ;
    eax = edi + eax + 0xBFC;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B6F81u); RECOMP_ABI_CALL(0x00024FD8u, sub_00024FD8); /* call 0x00024FD8 */

loc_002B6F81: ;
    eax = MEM32(ebx + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2F8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2F8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6F70; /* jl: less (signed <) */

loc_002B6F93: ;
    POP32(esp, edi);

loc_002B6F94: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002B6F9Du); RECOMP_ABI_CALL(0x00019C4Bu, sub_00019C4B); /* call 0x00019C4B */

loc_002B6F9D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B6FC0
 * Original: 0x002B6FC0 - 0x002B7088 (200 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6FC0: ;
    eax = MEM32(0x8C2438);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002B6FEB; /* je: equal / zero */

loc_002B6FD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6FEB; /* je: equal / zero */

loc_002B6FD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6FEB; /* je: equal / zero */

loc_002B6FDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6FEB; /* je: equal / zero */

loc_002B6FE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B7080; /* jne: not equal / not zero */

loc_002B6FEB: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7080; /* je: equal / zero */

loc_002B6FF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7080; /* je: equal / zero */

loc_002B7000: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x002B700Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B7007u); } /* indirect call */
    }

loc_002B700D: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B7032; /* jle: less or equal (signed <=) */

loc_002B7017: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x002B701Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B701Cu); } /* indirect call */
    }

loc_002B701F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B702D; /* jne: not equal / not zero */

loc_002B7023: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002B702Bu); RECOMP_ABI_CALL(0x0001FB82u, sub_0001FB82); /* call 0x0001FB82 */

loc_002B702B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B702D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B7017; /* jl: less (signed <) */

loc_002B7032: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x002B703Bu); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_002B703B: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B7044u); RECOMP_ABI_CALL(0x0001C63Fu, sub_0001C63F); /* call 0x0001C63F */

loc_002B7044: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x002B7056u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_002B7056: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x130) = ebx;
    PUSH32(esp, 0x002B706Bu); RECOMP_ABI_CALL(0x00021FAEu, sub_00021FAE); /* call 0x00021FAE */

loc_002B706B: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B7074u); RECOMP_ABI_CALL(0x00022C0Bu, sub_00022C0B); /* call 0x00022C0B */

loc_002B7074: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x002B707Du); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_002B707D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B7080: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B70C0
 * Original: 0x002B70C0 - 0x002B7161 (161 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B70C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B70C0: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x8C2438);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_002B70EA; /* je: equal / zero */

loc_002B70D6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B70EA; /* je: equal / zero */

loc_002B70DB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B70EA; /* je: equal / zero */

loc_002B70E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B70EA; /* je: equal / zero */

loc_002B70E5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B7159; /* jne: not equal / not zero */

loc_002B70EA: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7159; /* je: equal / zero */

loc_002B70F2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7159; /* je: equal / zero */

loc_002B70F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B70FEu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002B70FE: ;
    ecx = eax;
    PUSH32(esp, 0x002B7105u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002B7105: ;
    ecx = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0x002B7110u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_002B7110: ;
    ecx = MEM32(edi + 4);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x002B7122u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_002B7122: ;
    eax = MEM32(esp + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x38) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B714A; /* jl: less (signed <) */

loc_002B712E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B714A; /* jg: greater (signed >) */

loc_002B7133: ;
    ecx = esp + 0xC;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x002B713Eu); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_002B713E: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B714A: ;
    ecx = esp + 0xC;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B7155u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_002B7155: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);

loc_002B7159: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7190
 * Original: 0x002B7190 - 0x002B71A9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7190: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002B71A3; /* je: equal / zero */

loc_002B719A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B71A0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002B71A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B71A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B71B0
 * Original: 0x002B71B0 - 0x002B7249 (153 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B71B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B71B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x002B71D2u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_002B71D2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x002B71ECu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_002B71EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x002B7206u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_002B7206: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_002B722B; /* jae: above or equal (unsigned >=) */

loc_002B721C: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B722B: ;
    if (CMP_NE(_fa, _fb)) goto loc_002B7237; /* jne: not equal / not zero */

loc_002B722D: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002B721C; /* jbe: below or equal (unsigned <=) */

loc_002B7237: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7270
 * Original: 0x002B7270 - 0x002B72C7 (87 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7270: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x002B7279u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002B7279: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x002B7282u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002B7282: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B72AE; /* je: equal / zero */

loc_002B7288: ;
    eax = MEM32(edi + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B72A4; /* jne: not equal / not zero */

loc_002B7292: ;
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x84)); return; /* indirect tail jmp */

loc_002B72A4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002B72A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B72A6u); } /* indirect call */
    }

loc_002B72A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002B72AE: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002B72C0u); RECOMP_ABI_CALL(0x00011AC8u, sub_00011AC8); /* call 0x00011AC8 */

loc_002B72C0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B72E0
 * Original: 0x002B72E0 - 0x002B736E (142 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B72E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B72E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa == 0)) goto loc_002B730F; /* je: equal / zero */

loc_002B72EF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002B72FB; /* je: equal / zero */

loc_002B72F2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002B72FB: ;
    eax = MEM32(esi + 0x5C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002B730F: ;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002B72F2; /* je: equal / zero */

loc_002B7316: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B7321u); RECOMP_ABI_CALL(0x0002DA16u, sub_0002DA16); /* call 0x0002DA16 */

loc_002B7321: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002B732Du); RECOMP_ABI_CALL(0x000268FBu, sub_000268FB); /* call 0x000268FB */

loc_002B732D: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x002B7336u); RECOMP_ABI_CALL(0x000263B0u, sub_000263B0); /* call 0x000263B0 */

loc_002B7336: ;
    esi = MEM32(esi + 0x5C);
    ebx = eax;
    eax = esi + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002B735A; /* ja: above (unsigned >) */

loc_002B7343: ;
    ecx = ZX8(MEM8(eax + 0x2B7378));
    { uint32_t _jt = MEM32(ecx * 4 + 0x2B7370); /* switch: 2 entries, 2 targets */
    if (_jt == 0x002B7351u) goto loc_002B7351;
    if (_jt == 0x002B735Au) goto loc_002B735A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B7351: ;
    ecx = edi;
    PUSH32(esp, 0x002B7358u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_002B7358: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B735A: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B7363u); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_002B7363: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B736E
 * Original: 0x002B736E - 0x002B73B0 (66 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B736E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B736E: ;
    edi = edi;
    PUSH32(esp, ecx);
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_002B739E;

loc_002B7373: ;
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + 0x73) = MEM8(edx + 0x73) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx + 0x73)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_002B739E: ;
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
 * sub_002B73B0
 * Original: 0x002B73B0 - 0x002B74A5 (245 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B73B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B73B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa == 0)) goto loc_002B73F5; /* je: equal / zero */

loc_002B73C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B749B; /* jne: not equal / not zero */

loc_002B73C9: ;
    eax = MEM32(esp + 0xCC);
    edx = MEM32(esp + 0xD0);
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x8C2448);

loc_002B73E1: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002B73E1; /* jne: not equal / not zero */

loc_002B73EB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B73F5: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002B73FEu); RECOMP_ABI_CALL(0x0002DA16u, sub_0002DA16); /* call 0x0002DA16 */

loc_002B73FE: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002B740Au); RECOMP_ABI_CALL(0x000268FBu, sub_000268FB); /* call 0x000268FB */

loc_002B740A: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x002B7413u); RECOMP_ABI_CALL(0x000263B0u, sub_000263B0); /* call 0x000263B0 */

loc_002B7413: ;
    ecx = MEM32(esp + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B7477; /* jl: less (signed <) */

loc_002B741E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002B7428u); RECOMP_ABI_CALL(0x00035ECDu, sub_00035ECD); /* call 0x00035ECD */

loc_002B7428: ;
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x002B7433u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_002B7433: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002B7442u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_002B7442: ;
    edx = MEM32(esp + 0xD0);
    eax = esp + 0x56;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002B7451: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B7451; /* jne: not equal / not zero */

loc_002B745B: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002B7464u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_002B7464: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002B746Du); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_002B746D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B7477: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002B747Fu); RECOMP_ABI_CALL(0x0001B8D9u, sub_0001B8D9); /* call 0x0001B8D9 */

loc_002B747F: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0xD0);

loc_002B7488: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002B7488; /* jne: not equal / not zero */

loc_002B7492: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002B749Bu); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_002B749B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B74F0
 * Original: 0x002B74F0 - 0x002B7558 (104 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B74F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B74F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002B752D; /* jne: not equal / not zero */

loc_002B74FE: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002B7507u); RECOMP_ABI_CALL(0x0002DA16u, sub_0002DA16); /* call 0x0002DA16 */

loc_002B7507: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002B7513u); RECOMP_ABI_CALL(0x000268FBu, sub_000268FB); /* call 0x000268FB */

loc_002B7513: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x002B751Cu); RECOMP_ABI_CALL(0x000263B0u, sub_000263B0); /* call 0x000263B0 */

loc_002B751C: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B7536; /* jge: greater or equal (signed >=) */

loc_002B7524: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002B752Du); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_002B752D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002B7536: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002B7540u); RECOMP_ABI_CALL(0x00035ECDu, sub_00035ECD); /* call 0x00035ECD */

loc_002B7540: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = eax;
    ecx = esp + 4;
    PUSH32(esp, 0x002B754Fu); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_002B754F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B7580
 * Original: 0x002B7580 - 0x002B759E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B7580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7580: ;
    eax = MEM32(ecx + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B759B; /* ja: above (unsigned >) */

loc_002B7588: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2B75A0); /* switch: 12 entries, 3 targets */
    if (_jt == 0x002B758Fu) goto loc_002B758F;
    if (_jt == 0x002B7593u) goto loc_002B7593;
    if (_jt == 0x002B7597u) goto loc_002B7597;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B758F: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

loc_002B7593: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

loc_002B7597: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

loc_002B759B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B759E
 * Original: 0x002B759E - 0x002B75F0 (82 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B759E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B759E: ;
    edi = edi;

    g_seh_ebp = ebp; sub_002B75F0(); return; /* fallthrough 0x002B75F0 */

}

/**
 * sub_002B75F0
 * Original: 0x002B75F0 - 0x002B7A74 (1156 bytes, 346 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B75F0(void)
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

loc_002B75F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B7A71; /* jge: greater or equal (signed >=) */

loc_002B75FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B7A71; /* jl: less (signed <) */

loc_002B7605: ;
    edx = MEM32(ecx + 0x6C);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFF7u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFF7u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002B7A71; /* ja: above (unsigned >) */

loc_002B761E: ;
    edx = ZX8(MEM8(edx + 0x2B7B3C));
    { uint32_t _jt = MEM32(edx * 4 + 0x2B7A74); /* switch: 50 entries, 50 targets */
    if (_jt == 0x002B762Cu) goto loc_002B762C;
    if (_jt == 0x002B763Fu) goto loc_002B763F;
    if (_jt == 0x002B7658u) goto loc_002B7658;
    if (_jt == 0x002B766Eu) goto loc_002B766E;
    if (_jt == 0x002B768Du) goto loc_002B768D;
    if (_jt == 0x002B76ADu) goto loc_002B76AD;
    if (_jt == 0x002B76D1u) goto loc_002B76D1;
    if (_jt == 0x002B76E7u) goto loc_002B76E7;
    if (_jt == 0x002B76FDu) goto loc_002B76FD;
    if (_jt == 0x002B7713u) goto loc_002B7713;
    if (_jt == 0x002B7729u) goto loc_002B7729;
    if (_jt == 0x002B773Fu) goto loc_002B773F;
    if (_jt == 0x002B7755u) goto loc_002B7755;
    if (_jt == 0x002B776Du) goto loc_002B776D;
    if (_jt == 0x002B7783u) goto loc_002B7783;
    if (_jt == 0x002B7799u) goto loc_002B7799;
    if (_jt == 0x002B77AFu) goto loc_002B77AF;
    if (_jt == 0x002B77C5u) goto loc_002B77C5;
    if (_jt == 0x002B77DBu) goto loc_002B77DB;
    if (_jt == 0x002B77F1u) goto loc_002B77F1;
    if (_jt == 0x002B7807u) goto loc_002B7807;
    if (_jt == 0x002B7820u) goto loc_002B7820;
    if (_jt == 0x002B7839u) goto loc_002B7839;
    if (_jt == 0x002B7852u) goto loc_002B7852;
    if (_jt == 0x002B786Bu) goto loc_002B786B;
    if (_jt == 0x002B7884u) goto loc_002B7884;
    if (_jt == 0x002B789Du) goto loc_002B789D;
    if (_jt == 0x002B78B6u) goto loc_002B78B6;
    if (_jt == 0x002B78CFu) goto loc_002B78CF;
    if (_jt == 0x002B78E7u) goto loc_002B78E7;
    if (_jt == 0x002B78FFu) goto loc_002B78FF;
    if (_jt == 0x002B7917u) goto loc_002B7917;
    if (_jt == 0x002B792Fu) goto loc_002B792F;
    if (_jt == 0x002B7947u) goto loc_002B7947;
    if (_jt == 0x002B795Fu) goto loc_002B795F;
    if (_jt == 0x002B7978u) goto loc_002B7978;
    if (_jt == 0x002B7991u) goto loc_002B7991;
    if (_jt == 0x002B79AAu) goto loc_002B79AA;
    if (_jt == 0x002B79C3u) goto loc_002B79C3;
    if (_jt == 0x002B79DCu) goto loc_002B79DC;
    if (_jt == 0x002B79F5u) goto loc_002B79F5;
    if (_jt == 0x002B7A0Eu) goto loc_002B7A0E;
    if (_jt == 0x002B7A27u) goto loc_002B7A27;
    if (_jt == 0x002B7A34u) goto loc_002B7A34;
    if (_jt == 0x002B7A41u) goto loc_002B7A41;
    if (_jt == 0x002B7A4Eu) goto loc_002B7A4E;
    if (_jt == 0x002B7A52u) goto loc_002B7A52;
    if (_jt == 0x002B7A56u) goto loc_002B7A56;
    if (_jt == 0x002B7A5Au) goto loc_002B7A5A;
    if (_jt == 0x002B7A71u) goto loc_002B7A71;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002B762C: ;
    ecx = MEM32(ecx + 0x30);
    eax = eax + eax * 4;
    edx = MEM32(ecx + eax * 4 + 4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B763F: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0xC);
    edx = MEM32(ecx + 0x94);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7658: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x5C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B766E: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax + edx * 4 + 0xC);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x6A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_002B7680: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B7680; /* jne: not equal / not zero */

loc_002B768A: ;
    esp += 16; return; /* ret 12 */

loc_002B768D: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax + edx * 4 + 0xC);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x56;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_002B76A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B76A0; /* jne: not equal / not zero */

loc_002B76AA: ;
    esp += 16; return; /* ret 12 */

loc_002B76AD: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    eax = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

loc_002B76D1: ;
    ecx = MEM32(ecx + 0x30);
    eax = eax + eax * 4;
    edx = MEM32(ecx + eax * 4 + 0x10);
    eax = MEM32(edx + 0x3C);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_002B76E7: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B76FD: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x2C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7713: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x38);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7729: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x34);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B773F: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7755: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B7764u); RECOMP_ABI_CALL(0x00025CD5u, sub_00025CD5); /* call 0x00025CD5 */

loc_002B7764: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

loc_002B776D: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7783: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x44);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7799: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x48);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B77AF: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x4C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B77C5: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x50);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B77DB: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x54);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B77F1: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0x58);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7807: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xB4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7820: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xC0);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7839: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xB8);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7852: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xBC);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B786B: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xA4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7884: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xB0);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B789D: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xA8);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B78B6: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xAC);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B78CF: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B78DEu); RECOMP_ABI_CALL(0x000155BAu, sub_000155BA); /* call 0x000155BA */

loc_002B78DE: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

loc_002B78E7: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B78F6u); RECOMP_ABI_CALL(0x0001FE0Cu, sub_0001FE0C); /* call 0x0001FE0C */

loc_002B78F6: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

loc_002B78FF: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B790Eu); RECOMP_ABI_CALL(0x00019F20u, sub_00019F20); /* call 0x00019F20 */

loc_002B790E: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

loc_002B7917: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B7926u); RECOMP_ABI_CALL(0x0001BC53u, sub_0001BC53); /* call 0x0001BC53 */

loc_002B7926: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

loc_002B792F: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B793Eu); RECOMP_ABI_CALL(0x000173C9u, sub_000173C9); /* call 0x000173C9 */

loc_002B793E: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

loc_002B7947: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B7956u); RECOMP_ABI_CALL(0x0001C86Fu, sub_0001C86F); /* call 0x0001C86F */

loc_002B7956: ;
    ecx = MEM32(esp + 0xC);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

loc_002B795F: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xC4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7978: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xD0);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7991: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xC8);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B79AA: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xCC);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B79C3: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xD4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B79DC: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xE0);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B79F5: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xD8);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7A0E: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    edx = MEM32(ecx + 0xDC);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_002B7A27: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = 0;
    esp += 16; return; /* ret 12 */

loc_002B7A34: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    esp += 16; return; /* ret 12 */

loc_002B7A41: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = 0;
    esp += 16; return; /* ret 12 */

loc_002B7A4E: ;
    PUSH32(esp, 1);
    goto loc_002B7A5C;

loc_002B7A52: ;
    PUSH32(esp, 2);
    goto loc_002B7A5C;

loc_002B7A56: ;
    PUSH32(esp, 3);
    goto loc_002B7A5C;

loc_002B7A5A: ;
    PUSH32(esp, 4);

loc_002B7A5C: ;
    edx = eax + eax * 4;
    eax = MEM32(ecx + 0x30);
    ecx = MEM32(eax + edx * 4 + 0x10);
    PUSH32(esp, 0x002B7A6Bu); RECOMP_ABI_CALL(0x00034280u, sub_00034280); /* call 0x00034280 */

loc_002B7A6B: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;

loc_002B7A71: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B7D60
 * Original: 0x002B7D60 - 0x002B7DE6 (134 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7D60: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x30);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(eax + esi + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x90), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7DDB; /* je: equal / zero */

loc_002B7D84: ;
    _fa = (uint32_t)(MEM16(eax + 0x2A)) & 0xFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x2A), 0x1E (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002B7DDB; /* jb: below (unsigned <) */

loc_002B7D8B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B7D91u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002B7D91: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + esi + 0xC);
    _fb = (uint32_t)(0x56) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x56;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ebx = eax;
    eax = esp + 0x10;
    PUSH32(esp, 0x7F82AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7DADu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002B7DAD: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7DB7u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002B7DB7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002B7DC4u); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_002B7DC4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7DDA; /* je: equal / zero */

loc_002B7DC8: ;
    edx = MEM32(esp + 0x114);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002B7DDAu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002B7DDA: ;
    POP32(esp, ebx);

loc_002B7DDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}
