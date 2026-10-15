/**
 * nhl_07_recomp - Recompiled code chunk 170
 * Functions: 250 (0x00363490 - 0x0036A9B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00363490
 * Original: 0x00363490 - 0x00363497 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363490(void)
{

loc_00363490: ;
    MEM32(ecx) = 0x82FFD8;
    esp += 4; return; /* ret */

}

/**
 * sub_003634A0
 * Original: 0x003634A0 - 0x003634BF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003634A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003634A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FFD8;
    if (TEST_Z(_fa, _fb)) goto loc_003634B9; /* je: equal / zero */

loc_003634B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003634B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003634B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003634B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003634D0
 * Original: 0x003634D0 - 0x003634D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003634D0(void)
{

loc_003634D0: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_003634E0
 * Original: 0x003634E0 - 0x003634FA (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003634E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003634E0: ;
    PUSH32(esp, 0x003634E5u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_003634E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003634F7; /* je: equal / zero */

loc_003634E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003634F0u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_003634F0: ;
    ecx = eax;
    PUSH32(esp, 0x003634F7u); RECOMP_ABI_CALL(0x00022FADu, sub_00022FAD); /* call 0x00022FAD */

loc_003634F7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363500
 * Original: 0x00363500 - 0x00363503 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363500(void)
{

loc_00363500: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00363510
 * Original: 0x00363510 - 0x00363576 (102 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363510: ;
    PUSH32(esp, 0x00363515u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_00363515: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363573; /* je: equal / zero */

loc_00363519: ;
    PUSH32(esp, 0x0036351Eu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036351E: ;
    MEM8(eax + 9) = 0;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00363573; /* ja: above (unsigned >) */

loc_0036352B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x363578); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00363532u) goto loc_00363532;
    if (_jt == 0x00363543u) goto loc_00363543;
    if (_jt == 0x00363554u) goto loc_00363554;
    if (_jt == 0x00363565u) goto loc_00363565;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00363532: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00363539u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_00363539: ;
    ecx = eax;
    PUSH32(esp, 0x00363540u); RECOMP_ABI_CALL(0x00022FADu, sub_00022FAD); /* call 0x00022FAD */

loc_00363540: ;
    esp += 8; return; /* ret 4 */

loc_00363543: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0036354Au); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036354A: ;
    ecx = eax;
    PUSH32(esp, 0x00363551u); RECOMP_ABI_CALL(0x00022FADu, sub_00022FAD); /* call 0x00022FAD */

loc_00363551: ;
    esp += 8; return; /* ret 4 */

loc_00363554: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0036355Bu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036355B: ;
    ecx = eax;
    PUSH32(esp, 0x00363562u); RECOMP_ABI_CALL(0x00022FADu, sub_00022FAD); /* call 0x00022FAD */

loc_00363562: ;
    esp += 8; return; /* ret 4 */

loc_00363565: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0036356Cu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036356C: ;
    ecx = eax;
    PUSH32(esp, 0x00363573u); RECOMP_ABI_CALL(0x00022FADu, sub_00022FAD); /* call 0x00022FAD */

loc_00363573: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00363576
 * Original: 0x00363576 - 0x003635B0 (58 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363576: ;
    edi = edi;
    SET_HI8(edx, HI8(edx) ^ MEM8(0x35430036));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + esi + 0x36) = MEM8(ebp + esi + 0x36) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebp + esi + 0x36)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + 0x35) = MEM8(ebp + 0x35) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x35)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + 0x35) = MEM8(ebp + 0x35) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x35)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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

}

/**
 * sub_003635B0
 * Original: 0x003635B0 - 0x0036366B (187 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003635B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003635B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ebp = ecx + eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00363665; /* jae: above or equal (unsigned >=) */

loc_003635CC: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);

loc_003635D1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00363664; /* jge: greater or equal (signed >=) */

loc_003635D9: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x7F (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003635E9; /* ja: above (unsigned >) */

loc_003635E0: ;
    SET_LO16(edx, ZX8(LO8(edx)));
    MEM16(esi) = LO16(edx);
    goto loc_00363657;

loc_003635E9: ;
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 0xE0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363616; /* jne: not equal / not zero */

loc_003635F3: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(edx) & 0x1F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + -2) = LO16(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036365C;

loc_00363616: ;
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 0xF0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xE0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036364F; /* jne: not equal / not zero */

loc_00363620: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(ecx + 2));
    SET_LO8(edx, LO8(edx) & 0x3F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + -2) = LO16(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036365C;

loc_0036364F: ;
    MEM8(ecx) = 0x2A;
    MEM16(esi) = 0x2A;

loc_00363657: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036365C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003635D1; /* jb: below (unsigned <) */

loc_00363664: ;
    POP32(esp, ebx);

loc_00363665: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00363600
 * Original: 0x00363600 - 0x0036366B (107 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363600: ;
    SET_LO16(ebx, ZX8(LO8(ebx)));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + -2) = LO16(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036365C;

    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 0xF0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xE0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036364F; /* jne: not equal / not zero */

loc_00363620: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(ecx + 2));
    SET_LO8(edx, LO8(edx) & 0x3F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, ZX8(LO8(edx)));
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + -2) = LO16(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036365C;

loc_0036364F: ;
    MEM8(ecx) = 0x2A;
    MEM16(esi) = 0x2A;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036365C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_003635D1(); return; } /* jb: below (unsigned <) */

loc_00363664: ;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003636A0
 * Original: 0x003636A0 - 0x0036372F (143 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003636A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003636A0: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036372D; /* jle: less or equal (signed <=) */

loc_003636B1: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    /* nop */

loc_003636C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036372A; /* jge: greater or equal (signed >=) */

loc_003636C4: ;
    SET_LO16(edi, MEM16(ebp + esi * 2));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x7F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003636D5; /* ja: above (unsigned >) */

loc_003636CF: ;
    SET_LO8(ebx, MEM8(ebp + esi * 2));
    goto loc_0036371C;

loc_003636D5: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x7FF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x7FF (16-bit) */
    ebx = edi;
    if (CMP_A(_fa, _fb)) goto loc_003636E9; /* ja: above (unsigned >) */

loc_003636DE: ;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, LO8(ebx) & 0x1F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | 0xC0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0036370A;

loc_003636E9: ;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, LO8(ebx) & 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | 0xE0);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036372A; /* jge: greater or equal (signed >=) */

loc_003636FA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ebx, MEM16(ebp + esi * 2));
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | 0x80);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0036370A: ;
    MEM8(ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036372A; /* jge: greater or equal (signed >=) */

loc_00363712: ;
    SET_LO8(ebx, MEM8(ebp + esi * 2));
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | 0x80);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0036371C: ;
    edi = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + -1) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003636C0; /* jl: less (signed <) */

loc_0036372A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_0036372D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00363760
 * Original: 0x00363760 - 0x00363852 (242 bytes, 92 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363760: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = esi;
    PUSH32(esp, edi);
    edx = eax + 1;

loc_00363770: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363770; /* jne: not equal / not zero */

loc_00363777: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    PUSH32(esp, 0x00363780u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_00363780: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x422);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, 0x830004);
    ecx = ebp + ebp + 2;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00363799u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363797u); } /* indirect call */
    }

loc_00363799: ;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003637A4u); RECOMP_ABI_CALL(0x00033CAEu, sub_00033CAE); /* call 0x00033CAE */

loc_003637A4: ;
    MEM32(esp + 0x2C) = eax;
    MEM16(edi + eax * 2) = 0;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x96) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x96;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi;
    MEM32(esp + 0x10) = eax;
    goto loc_003637D0;

loc_003637C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003637D0: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = 0x8DBD20;
    PUSH32(esp, 0x003637F6u); RECOMP_ABI_CALL(0x00545D90u, sub_00545D90); /* call 0x00545D90 */

loc_003637F6: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00363817; /* jle: less or equal (signed <=) */

loc_003637FE: ;
    ecx = ZX16(MEM16(esi + edx * 2));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363811; /* je: equal / zero */

loc_00363807: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00363811; /* je: equal / zero */

loc_0036380C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00363817; /* jne: not equal / not zero */

loc_00363811: ;
    MEM16(esi + edx * 2) = 0xA;

loc_00363817: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    esi = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003637C8; /* jne: not equal / not zero */

loc_00363828: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00363839u); RECOMP_ABI_CALL(0x0001FAB0u, sub_0001FAB0); /* call 0x0001FAB0 */

loc_00363839: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363844u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363841u); } /* indirect call */
    }

loc_00363844: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00363890
 * Original: 0x00363890 - 0x003638A9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363890(void)
{

loc_00363890: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(ecx + 0x18) = 4;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003638A8u); RECOMP_ABI_CALL(0x0001542Fu, sub_0001542F); /* call 0x0001542F */

loc_003638A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003638B0
 * Original: 0x003638B0 - 0x00363BCD (797 bytes, 271 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003638B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003638B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x800);
    PUSH32(esp, 0x003638C1u); RECOMP_ABI_CALL(0x004DCF00u, sub_004DCF00); /* call 0x004DCF00 */

loc_003638C1: ;
    PUSH32(esp, 0x800);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x003638CFu); RECOMP_ABI_CALL(0x004DCF00u, sub_004DCF00); /* call 0x004DCF00 */

loc_003638CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    PUSH32(esp, 0x003638D9u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003638D9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x003638E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003638DDu); } /* indirect call */
    }

loc_003638E0: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    ebx = eax;
    eax = MEM32(esp + 0x28);
    MEM32(eax) = 2;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = 2;
    ecx = MEM32(esp + 0x34);
    MEM32(edx) = eax;
    MEM32(ecx) = eax;
    edx = MEM32(ebx);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = 1;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x8631FC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x34) = 2;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036393Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363938u); } /* indirect call */
    }

loc_0036393B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00363942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036393Fu); } /* indirect call */
    }

loc_00363942: ;
    ecx = MEM32(0x8631FC);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EFFC);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363952u); } /* indirect call */
    }

loc_00363955: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036395Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363959u); } /* indirect call */
    }

loc_0036395C: ;
    ecx = MEM32(0x8631FC);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036396Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036396Cu); } /* indirect call */
    }

loc_0036396F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00363976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363973u); } /* indirect call */
    }

loc_00363976: ;
    eax = MEM32(esp + 0x40);
    edi = 0x830058;
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
    if ((_flags != 0)) goto loc_00363B0B; /* je: equal / zero */

loc_00363990: ;
    edi = 0x830048;
    esi = eax;
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
    if ((_flags != 0)) goto loc_00363B0B; /* je: equal / zero */

loc_003639A6: ;
    esi = eax;
    edi = 0x83003C;
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
    if ((_flags == 0)) goto loc_00363B1A; /* jne: not equal / not zero */

loc_003639BC: ;
    eax = MEM32(0x8C4E84);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003639D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003639CDu); } /* indirect call */
    }

loc_003639D0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003639D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003639D4u); } /* indirect call */
    }

loc_003639D7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003639EB; /* jl: less (signed <) */

loc_003639DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003639EB; /* jg: greater (signed >) */

loc_003639E2: ;
    eax = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    goto loc_003639F2;

loc_003639EB: ;
    ecx = MEM32(esp + 0x24);
    MEM8(ecx) = 1;

loc_003639F2: ;
    eax = MEM32(0x863218);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A03u); } /* indirect call */
    }

loc_00363A06: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A0Au); } /* indirect call */
    }

loc_00363A0D: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(0x863218);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A1Bu); } /* indirect call */
    }

loc_00363A1E: ;
    eax = MEM32(0x86321C);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A2Fu); } /* indirect call */
    }

loc_00363A32: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A36u); } /* indirect call */
    }

loc_00363A39: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(0x86321C);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A47u); } /* indirect call */
    }

loc_00363A4A: ;
    eax = MEM32(0x8C4EA0);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A5Bu); } /* indirect call */
    }

loc_00363A5E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A62u); } /* indirect call */
    }

loc_00363A65: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363A7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A7Bu); } /* indirect call */
    }

loc_00363A7E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A82u); } /* indirect call */
    }

loc_00363A85: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363A9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A9Bu); } /* indirect call */
    }

loc_00363A9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363AA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AA2u); } /* indirect call */
    }

loc_00363AA5: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363ABBu); } /* indirect call */
    }

loc_00363ABE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363AC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AC2u); } /* indirect call */
    }

loc_00363AC5: ;
    ecx = MEM32(0x8C4E98);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = MEM32(0x863214);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363ADEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363ADBu); } /* indirect call */
    }

loc_00363ADE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AE2u); } /* indirect call */
    }

loc_00363AE5: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363AFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AFBu); } /* indirect call */
    }

loc_00363AFE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B02u); } /* indirect call */
    }

loc_00363B05: ;
    MEM32(esp + 0x18) = eax;
    goto loc_00363B1E;

loc_00363B0B: ;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = 1;
    MEM8(eax) = 1;

loc_00363B1A: ;
    esi = MEM32(esp + 0x28);

loc_00363B1E: ;
    eax = MEM32(0x8C4E84);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B2Cu); } /* indirect call */
    }

loc_00363B2F: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B42u); } /* indirect call */
    }

loc_00363B45: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B58u); } /* indirect call */
    }

loc_00363B5B: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(0x8C4E90);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B6Eu); } /* indirect call */
    }

loc_00363B71: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x8C4E94);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B84u); } /* indirect call */
    }

loc_00363B87: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x8C4E98);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B9Au); } /* indirect call */
    }

loc_00363B9D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363BB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363BB0u); } /* indirect call */
    }

loc_00363BB3: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    MEM32(ecx) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0036392D
 * Original: 0x0036392D - 0x00363BCD (672 bytes, 235 insns)
 * Category: game_network
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036392D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036392D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x34) = 2;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036393Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363938u); } /* indirect call */
    }

loc_0036393B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00363942u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036393Fu); } /* indirect call */
    }

loc_00363942: ;
    ecx = MEM32(0x8631FC);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EFFC);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363952u); } /* indirect call */
    }

loc_00363955: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036395Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363959u); } /* indirect call */
    }

loc_0036395C: ;
    ecx = MEM32(0x8631FC);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036396Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036396Cu); } /* indirect call */
    }

loc_0036396F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00363976u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363973u); } /* indirect call */
    }

loc_00363976: ;
    eax = MEM32(esp + 0x40);
    edi = 0x830058;
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
    if ((_flags != 0)) goto loc_00363B0B; /* je: equal / zero */

loc_00363990: ;
    edi = 0x830048;
    esi = eax;
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
    if ((_flags != 0)) goto loc_00363B0B; /* je: equal / zero */

loc_003639A6: ;
    esi = eax;
    edi = 0x83003C;
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
    if ((_flags == 0)) goto loc_00363B1A; /* jne: not equal / not zero */

loc_003639BC: ;
    eax = MEM32(0x8C4E84);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003639D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003639CDu); } /* indirect call */
    }

loc_003639D0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003639D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003639D4u); } /* indirect call */
    }

loc_003639D7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003639EB; /* jl: less (signed <) */

loc_003639DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003639EB; /* jg: greater (signed >) */

loc_003639E2: ;
    eax = MEM32(esp + 0x24);
    MEM8(eax) = 0;
    goto loc_003639F2;

loc_003639EB: ;
    ecx = MEM32(esp + 0x24);
    MEM8(ecx) = 1;

loc_003639F2: ;
    eax = MEM32(0x863218);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A03u); } /* indirect call */
    }

loc_00363A06: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A0Au); } /* indirect call */
    }

loc_00363A0D: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(0x863218);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A1Bu); } /* indirect call */
    }

loc_00363A1E: ;
    eax = MEM32(0x86321C);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A2Fu); } /* indirect call */
    }

loc_00363A32: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A36u); } /* indirect call */
    }

loc_00363A39: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    eax = MEM32(0x86321C);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A47u); } /* indirect call */
    }

loc_00363A4A: ;
    eax = MEM32(0x8C4EA0);
    ecx = MEM32(0x863214);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363A5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A5Bu); } /* indirect call */
    }

loc_00363A5E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A62u); } /* indirect call */
    }

loc_00363A65: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363A7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A7Bu); } /* indirect call */
    }

loc_00363A7E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363A85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A82u); } /* indirect call */
    }

loc_00363A85: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363A9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363A9Bu); } /* indirect call */
    }

loc_00363A9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363AA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AA2u); } /* indirect call */
    }

loc_00363AA5: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363ABBu); } /* indirect call */
    }

loc_00363ABE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363AC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AC2u); } /* indirect call */
    }

loc_00363AC5: ;
    ecx = MEM32(0x8C4E98);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = MEM32(0x863214);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363ADEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363ADBu); } /* indirect call */
    }

loc_00363ADE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363AE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AE2u); } /* indirect call */
    }

loc_00363AE5: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363AFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363AFBu); } /* indirect call */
    }

loc_00363AFE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B02u); } /* indirect call */
    }

loc_00363B05: ;
    MEM32(esp + 0x18) = eax;
    goto loc_00363B1E;

loc_00363B0B: ;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = 1;
    MEM8(eax) = 1;

loc_00363B1A: ;
    esi = MEM32(esp + 0x28);

loc_00363B1E: ;
    eax = MEM32(0x8C4E84);
    edx = MEM32(ebp);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B2Cu); } /* indirect call */
    }

loc_00363B2F: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B42u); } /* indirect call */
    }

loc_00363B45: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B58u); } /* indirect call */
    }

loc_00363B5B: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(0x8C4E90);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B6Eu); } /* indirect call */
    }

loc_00363B71: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x8C4E94);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B84u); } /* indirect call */
    }

loc_00363B87: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x8C4E98);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363B9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363B9Au); } /* indirect call */
    }

loc_00363B9D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363BB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363BB0u); } /* indirect call */
    }

loc_00363BB3: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    MEM32(ecx) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00363CA0
 * Original: 0x00363CA0 - 0x00363D34 (148 bytes, 48 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00363CA0: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 2;
    PUSH32(esp, 0x00363CAFu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_00363CAF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00363CB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363CB3u); } /* indirect call */
    }

loc_00363CB6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(0x90E424);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363CDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363CD8u); } /* indirect call */
    }

loc_00363CDB: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00363CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363CE4u); } /* indirect call */
    }

loc_00363CE6: ;
    PUSH32(esp, 0x00363CEBu); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_00363CEB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363CF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363CEFu); } /* indirect call */
    }

loc_00363CF2: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00363CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363CFBu); } /* indirect call */
    }

loc_00363CFE: ;
    PUSH32(esp, 0x00363D03u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00363D03: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00363D0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363D07u); } /* indirect call */
    }

loc_00363D0A: ;
    ecx = MEM32(0x8631F8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8631F4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363D1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363D1Cu); } /* indirect call */
    }

loc_00363D1F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00363D26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363D23u); } /* indirect call */
    }

loc_00363D26: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ecx) = LO8(eax);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00363D60
 * Original: 0x00363D60 - 0x00363FD9 (633 bytes, 244 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00363D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00363D60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x8C4E84);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00363D7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363D78u); } /* indirect call */
    }

loc_00363D7B: ;
    edx = MEM32(esi);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x8C4EA0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363D8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363D8Bu); } /* indirect call */
    }

loc_00363D8E: ;
    edx = MEM32(esi);
    ebx = eax;
    eax = MEM32(0x8C4E8C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363D9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363D9Cu); } /* indirect call */
    }

loc_00363D9F: ;
    edx = MEM32(esi);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x8C4E90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363DB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363DAFu); } /* indirect call */
    }

loc_00363DB2: ;
    edx = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x8C4E94);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363DC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363DC2u); } /* indirect call */
    }

loc_00363DC5: ;
    edx = MEM32(esi);
    ebp = eax;
    eax = MEM32(0x8C4E98);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363DD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363DD3u); } /* indirect call */
    }

loc_00363DD6: ;
    edx = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x8C4E9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00363DE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363DE6u); } /* indirect call */
    }

loc_00363DE9: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00363DF2u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00363DF2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00363DF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363DF6u); } /* indirect call */
    }

loc_00363DF9: ;
    ecx = MEM32(0x8C4E7C);
    edx = MEM32(0x8631FC);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363E10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363E0Du); } /* indirect call */
    }

loc_00363E10: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00363E17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363E14u); } /* indirect call */
    }

loc_00363E17: ;
    ecx = MEM32(0x8C4E80);
    edx = MEM32(0x8631FC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363E2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363E29u); } /* indirect call */
    }

loc_00363E2C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00363E33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363E30u); } /* indirect call */
    }

loc_00363E33: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E3F; /* jne: not equal / not zero */

loc_00363E3A: ;
    ebx = 2;

loc_00363E3F: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E4D; /* jne: not equal / not zero */

loc_00363E45: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    goto loc_00363E4F;

loc_00363E4D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00363E4F: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E59; /* jne: not equal / not zero */

loc_00363E55: ;
    MEM32(esp + 0x10) = eax;

loc_00363E59: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00363E64; /* jne: not equal / not zero */

loc_00363E62: ;
    ebp = ecx;

loc_00363E64: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E6E; /* jne: not equal / not zero */

loc_00363E6A: ;
    MEM32(esp + 0x14) = ecx;

loc_00363E6E: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E78; /* jne: not equal / not zero */

loc_00363E74: ;
    MEM32(esp + 0x18) = ecx;

loc_00363E78: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E99; /* jne: not equal / not zero */

loc_00363E7D: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E99; /* jne: not equal / not zero */

loc_00363E83: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E99; /* jne: not equal / not zero */

loc_00363E89: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E99; /* jne: not equal / not zero */

loc_00363E8D: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363E99; /* jne: not equal / not zero */

loc_00363E93: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00363E9D; /* je: equal / zero */

loc_00363E99: ;
    MEM32(esp + 0x1C) = eax;

loc_00363E9D: ;
    ecx = MEM32(0x8C4EA0);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363EAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363EABu); } /* indirect call */
    }

loc_00363EAE: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363EC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363EC0u); } /* indirect call */
    }

loc_00363EC3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x8C4E90);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363ED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363ED5u); } /* indirect call */
    }

loc_00363ED8: ;
    eax = MEM32(0x8C4E94);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363EE5u); } /* indirect call */
    }

loc_00363EE8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x8C4E98);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363EFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363EFAu); } /* indirect call */
    }

loc_00363EFD: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363F12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F0Fu); } /* indirect call */
    }

loc_00363F12: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x8C4E84);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363F27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F24u); } /* indirect call */
    }

loc_00363F27: ;
    PUSH32(esp, 0x00363F2Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00363F2C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00363F33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F30u); } /* indirect call */
    }

loc_00363F33: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00363F3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F37u); } /* indirect call */
    }

loc_00363F3A: ;
    ecx = MEM32(0x8631FC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EFFC);
    ebp = eax;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00363F4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F4Cu); } /* indirect call */
    }

loc_00363F4F: ;
    edx = MEM32(edi);
    esi = eax;
    eax = MEM32(0x8631FC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF38);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363F63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F60u); } /* indirect call */
    }

loc_00363F63: ;
    edx = MEM32(edi);
    ebx = eax;
    eax = MEM32(0x8631FC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00363F77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F74u); } /* indirect call */
    }

loc_00363F77: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00363F80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F7Du); } /* indirect call */
    }

loc_00363F80: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00363F87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F84u); } /* indirect call */
    }

loc_00363F87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00363FCF; /* jne: not equal / not zero */

loc_00363F8C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00363FCF; /* je: equal / zero */

loc_00363F90: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00363F98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F95u); } /* indirect call */
    }

loc_00363F98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00363F9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363F9Cu); } /* indirect call */
    }

loc_00363F9F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00363FA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363FA3u); } /* indirect call */
    }

loc_00363FA6: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = esi;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00363FB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363FB2u); } /* indirect call */
    }

loc_00363FB5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00363FBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363FBAu); } /* indirect call */
    }

loc_00363FBD: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00363FC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363FC3u); } /* indirect call */
    }

loc_00363FC6: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00363FCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00363FCCu); } /* indirect call */
    }

loc_00363FCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364080
 * Original: 0x00364080 - 0x0036408A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364080(void)
{

loc_00364080: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364090
 * Original: 0x00364090 - 0x0036409B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364090: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036409A; /* jne: not equal / not zero */

loc_00364098: ;
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036409A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003640A0
 * Original: 0x003640A0 - 0x003640CB (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003640A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003640A0: ;
    PUSH32(esp, 0x003640A5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_003640A5: ;
    ecx = eax;
    PUSH32(esp, 0x003640ACu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_003640AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x003640B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003640B0u); } /* indirect call */
    }

loc_003640B6: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003640C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003640BFu); } /* indirect call */
    }

loc_003640C2: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003640E0
 * Original: 0x003640E0 - 0x00364100 (32 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003640E0(void)
{

loc_003640E0: ;
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x214) = 1;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003640F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003640F1u); } /* indirect call */
    }

loc_003640F4: ;
    eax = MEM32(esp + 4);
    MEM32(0x9001E4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364110
 * Original: 0x00364110 - 0x00364345 (565 bytes, 105 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00364110: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC0));
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xCC);
    PUSH32(esp, esi);
    esi = 0x5000B;
    edx = 0x5000C;
    ecx = 0x5000E;
    eax = 0x50013;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x8301AC;
    MEM32(esp + 0x14) = 0x50001;
    MEM32(esp + 0x18) = 0x830198;
    MEM32(esp + 0x1C) = 0x50002;
    MEM32(esp + 0x20) = 0x830184;
    MEM32(esp + 0x24) = 0x50003;
    MEM32(esp + 0x28) = 0x830178;
    MEM32(esp + 0x2C) = 0x50004;
    MEM32(esp + 0x30) = 0x83016C;
    MEM32(esp + 0x34) = 0x50005;
    MEM32(esp + 0x38) = 0x83015C;
    MEM32(esp + 0x3C) = 0x50006;
    MEM32(esp + 0x40) = 0x83014C;
    MEM32(esp + 0x44) = 0x50007;
    MEM32(esp + 0x48) = 0x830140;
    MEM32(esp + 0x4C) = 0x50008;
    MEM32(esp + 0x50) = 0x83012C;
    MEM32(esp + 0x54) = 0x50009;
    MEM32(esp + 0x58) = 0x830118;
    MEM32(esp + 0x5C) = 0x5000A;
    MEM32(esp + 0x60) = 0x830100;
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x68) = 0x8300F0;
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x70) = 0x8300E4;
    MEM32(esp + 0x74) = 0x5000D;
    MEM32(esp + 0x78) = 0x8300D4;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = 0x8300C0;
    MEM32(esp + 0x84) = 0x5000F;
    MEM32(esp + 0x88) = 0x8300B0;
    MEM32(esp + 0x8C) = 0x50010;
    MEM32(esp + 0x90) = 0x8300A0;
    MEM32(esp + 0x94) = 0x50011;
    MEM32(esp + 0x98) = 0x83008C;
    MEM32(esp + 0x9C) = 0x50012;
    MEM32(esp + 0xA0) = 0x83007C;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xA8) = 0x830074;
    MEM32(esp + 0xAC) = 0x50014;
    MEM32(esp + 0xB0) = 0x7DEFFC;
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xB8) = 0x830068;
    MEM32(esp + 0xBC) = esi;
    MEM32(esp + 0xC0) = 0x7DEFBC;
    MEM32(esp + 0xC4) = ecx;
    MEM32(esp + 0xC8) = 0x830060;
    MEM32(esp + 0xCC) = edx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003642D3: ;
    esi = MEM32(esp + edi * 8 + 0x10);
    eax = ebp;
    /* nop */

loc_003642E0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364308; /* jne: not equal / not zero */

loc_003642EA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00364304; /* je: equal / zero */

loc_003642EE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364308; /* jne: not equal / not zero */

loc_003642FA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003642E0; /* jne: not equal / not zero */

loc_00364304: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036430D;

loc_00364308: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036430D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00364324; /* je: equal / zero */

loc_00364311: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x18 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003642D3; /* jl: less (signed <) */

loc_00364317: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC0)) >> 32) & 1);
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00364324: ;
    eax = MEM32(esp + edi * 8 + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x00364335u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_00364335: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC0)) >> 32) & 1);
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003643E0
 * Original: 0x003643E0 - 0x003643E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003643E0(void)
{

loc_003643E0: ;
    eax = ecx;
    MEM32(eax) = 0x8301BC;
    esp += 4; return; /* ret */

}

/**
 * sub_003643F0
 * Original: 0x003643F0 - 0x003643F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003643F0(void)
{

loc_003643F0: ;
    MEM32(ecx) = 0x82F64C;
    esp += 4; return; /* ret */

}

/**
 * sub_00364400
 * Original: 0x00364400 - 0x0036445C (92 bytes, 27 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00364400: ;
    PUSH32(esp, 0x00364405u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00364405: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036440Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364409u); } /* indirect call */
    }

loc_0036440C: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8631F4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00364421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036441Eu); } /* indirect call */
    }

loc_00364421: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00364428u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364425u); } /* indirect call */
    }

loc_00364428: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00364454; /* ja: above (unsigned >) */

loc_0036442D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x36445C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00364434u) goto loc_00364434;
    if (_jt == 0x0036443Cu) goto loc_0036443C;
    if (_jt == 0x00364444u) goto loc_00364444;
    if (_jt == 0x0036444Cu) goto loc_0036444C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00364434: ;
    eax = 0x830250;
    esp += 8; return; /* ret 4 */

loc_0036443C: ;
    eax = 0x830224;
    esp += 8; return; /* ret 4 */

loc_00364444: ;
    eax = 0x8301FC;
    esp += 8; return; /* ret 4 */

loc_0036444C: ;
    eax = 0x8301D4;
    esp += 8; return; /* ret 4 */

loc_00364454: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003644F0
 * Original: 0x003644F0 - 0x003644F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003644F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003644F0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_00364500
 * Original: 0x00364500 - 0x00364503 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00364500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364500: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00364510
 * Original: 0x00364510 - 0x00364516 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364510(void)
{

loc_00364510: ;
    eax = 0x83027C;
    esp += 4; return; /* ret */

}

/**
 * sub_00364520
 * Original: 0x00364520 - 0x00364554 (52 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00364520: ;
    PUSH32(esp, 0x00364525u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00364525: ;
    PUSH32(esp, 0x0036452Au); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_0036452A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036454E; /* ja: above (unsigned >) */

loc_0036452F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x364554); /* switch: 6 entries, 5 targets */
    if (_jt == 0x00364536u) goto loc_00364536;
    if (_jt == 0x0036453Cu) goto loc_0036453C;
    if (_jt == 0x00364542u) goto loc_00364542;
    if (_jt == 0x00364548u) goto loc_00364548;
    if (_jt == 0x0036454Eu) goto loc_0036454E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00364536: ;
    eax = 0x7DFC08;
    esp += 4; return; /* ret */

loc_0036453C: ;
    eax = 0x7DFC04;
    esp += 4; return; /* ret */

loc_00364542: ;
    eax = 0x7DFC00;
    esp += 4; return; /* ret */

loc_00364548: ;
    eax = 0x7DFBFC;
    esp += 4; return; /* ret */

loc_0036454E: ;
    eax = 0x7DFC0C;
    esp += 4; return; /* ret */

}

/**
 * sub_003645A0
 * Original: 0x003645A0 - 0x003645A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003645A0(void)
{

loc_003645A0: ;
    eax = 0x830288;
    esp += 4; return; /* ret */

}

/**
 * sub_003645B0
 * Original: 0x003645B0 - 0x003645B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003645B0(void)
{

loc_003645B0: ;
    eax = 0x83028C;
    esp += 4; return; /* ret */

}

/**
 * sub_003645C0
 * Original: 0x003645C0 - 0x003645C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003645C0(void)
{

loc_003645C0: ;
    eax = 0x830294;
    esp += 4; return; /* ret */

}

/**
 * sub_003645D0
 * Original: 0x003645D0 - 0x003645D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003645D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003645D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003645E0
 * Original: 0x003645E0 - 0x003645E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003645E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003645E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003645F0
 * Original: 0x003645F0 - 0x003645F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003645F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003645F0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00364600
 * Original: 0x00364600 - 0x00364606 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364600(void)
{

loc_00364600: ;
    eax = 0xE4A;
    esp += 4; return; /* ret */

}

/**
 * sub_00364610
 * Original: 0x00364610 - 0x00364616 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364610(void)
{

loc_00364610: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00364620
 * Original: 0x00364620 - 0x00364626 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364620(void)
{

loc_00364620: ;
    eax = 0x82FC0C;
    esp += 4; return; /* ret */

}

/**
 * sub_00364630
 * Original: 0x00364630 - 0x00364636 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364630(void)
{

loc_00364630: ;
    eax = 0x82FC0C;
    esp += 4; return; /* ret */

}

/**
 * sub_00364640
 * Original: 0x00364640 - 0x00364646 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364640(void)
{

loc_00364640: ;
    SET_LO8(eax, MEM8(0x8FC1CD));
    esp += 4; return; /* ret */

}

/**
 * sub_00364650
 * Original: 0x00364650 - 0x00364659 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364650(void)
{

loc_00364650: ;
    eax = ecx;
    MEM32(eax) = 0x83029C;
    esp += 4; return; /* ret */

}

/**
 * sub_00364660
 * Original: 0x00364660 - 0x00364666 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364660(void)
{

loc_00364660: ;
    eax = MEM32(0x900270);
    esp += 4; return; /* ret */

}

/**
 * sub_00364670
 * Original: 0x00364670 - 0x00364679 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364670(void)
{

loc_00364670: ;
    eax = ecx;
    MEM32(eax) = 0x8302B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00364680
 * Original: 0x00364680 - 0x00364687 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364680(void)
{

loc_00364680: ;
    MEM32(ecx) = 0x82FDF8;
    esp += 4; return; /* ret */

}

/**
 * sub_00364690
 * Original: 0x00364690 - 0x00364699 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364690(void)
{

loc_00364690: ;
    eax = ecx;
    MEM32(eax) = 0x8302C0;
    esp += 4; return; /* ret */

}

/**
 * sub_003646A0
 * Original: 0x003646A0 - 0x003646A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003646A0(void)
{

loc_003646A0: ;
    MEM32(ecx) = 0x82F604;
    esp += 4; return; /* ret */

}

/**
 * sub_003646B0
 * Original: 0x003646B0 - 0x003646B3 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003646B0(void)
{

loc_003646B0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003646C0
 * Original: 0x003646C0 - 0x003646C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003646C0(void)
{

loc_003646C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003646D0
 * Original: 0x003646D0 - 0x003646D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003646D0(void)
{

loc_003646D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003646E0
 * Original: 0x003646E0 - 0x0036471F (63 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003646E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003646E0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00364717; /* je: equal / zero */

loc_003646EB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F99C);
    PUSH32(esp, 0x24);
    edx = esp + 8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x003646FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003646F9u); } /* indirect call */
    }

loc_003646FF: ;
    ecx = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esp + 0x10);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00364717: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00364730
 * Original: 0x00364730 - 0x00364739 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364730(void)
{

loc_00364730: ;
    eax = ecx;
    MEM32(eax) = 0x8302D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00364740
 * Original: 0x00364740 - 0x00364747 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364740(void)
{

loc_00364740: ;
    MEM32(ecx) = 0x82F618;
    esp += 4; return; /* ret */

}

/**
 * sub_00364750
 * Original: 0x00364750 - 0x00364755 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00364750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364750: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364760
 * Original: 0x00364760 - 0x00364807 (167 bytes, 61 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00364760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1B0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_003647EB; /* jae: above or equal (unsigned >=) */

loc_00364776: ;
    ecx = esp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036477Fu); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_0036477F: ;
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00364791u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00364791: ;
    MEM8(esp + 0x18) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x19;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x100);
    ecx = esp + 0x1C;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ecx);
    edx = esp + 0x14E;
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003647BDu); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_003647BD: ;
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x24;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003647D0;

    /* nop */

loc_003647D0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003647D0; /* jne: not equal / not zero */

loc_003647DA: ;
    ecx = esp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003647E3u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_003647E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_003647EB: ;
    edx = MEM32(ebp + 0xC);
    eax = 0x7E0E38;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003647F5: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003647F5; /* jne: not equal / not zero */

loc_003647FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00364830
 * Original: 0x00364830 - 0x00364839 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364830(void)
{

loc_00364830: ;
    eax = ecx;
    MEM32(eax) = 0x8302E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00364840
 * Original: 0x00364840 - 0x00364847 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364840(void)
{

loc_00364840: ;
    MEM32(ecx) = 0x82FFD8;
    esp += 4; return; /* ret */

}

/**
 * sub_00364850
 * Original: 0x00364850 - 0x0036486B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364850(void)
{

loc_00364850: ;
    PUSH32(esp, 0x00364855u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_00364855: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036485Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364859u); } /* indirect call */
    }

loc_0036485C: ;
    ecx = MEM32(0x86550C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0036486Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364867u); } /* indirect call */
    }

loc_0036486A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00364880
 * Original: 0x00364880 - 0x0036489B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364880(void)
{

loc_00364880: ;
    PUSH32(esp, 0x00364885u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_00364885: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036488Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364889u); } /* indirect call */
    }

loc_0036488C: ;
    ecx = MEM32(0x86550C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0036489Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364897u); } /* indirect call */
    }

loc_0036489A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003648B0
 * Original: 0x003648B0 - 0x003648CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003648B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003648B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x700);
    PUSH32(esp, 0x30);
    MEM32(esi) = 0x830314;
    PUSH32(esp, 0x003648C5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003648C5: ;
    MEM32(esi + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003648E0
 * Original: 0x003648E0 - 0x00364905 (37 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003648E0(void)
{

loc_003648E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x830314;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003648FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003648FAu); } /* indirect call */
    }

loc_003648FD: ;
    MEM32(esi) = 0x82FEA8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00364910
 * Original: 0x00364910 - 0x00364911 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364910(void)
{

loc_00364910: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00364920
 * Original: 0x00364920 - 0x0036494B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364920(void)
{

loc_00364920: ;
    PUSH32(esp, 0x00364925u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00364925: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036492Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364929u); } /* indirect call */
    }

loc_0036492C: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036493Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364937u); } /* indirect call */
    }

loc_0036493A: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00364948u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364945u); } /* indirect call */
    }

loc_00364948: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364960
 * Original: 0x00364960 - 0x00364AF1 (401 bytes, 162 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00364960: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036496Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036496C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00364973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364970u); } /* indirect call */
    }

loc_00364973: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x8631F4);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036498Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364987u); } /* indirect call */
    }

loc_0036498A: ;
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003649A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036499Eu); } /* indirect call */
    }

loc_003649A1: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003649B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003649B5u); } /* indirect call */
    }

loc_003649B8: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003649D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003649CEu); } /* indirect call */
    }

loc_003649D1: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003649EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003649E7u); } /* indirect call */
    }

loc_003649EA: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00364A03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A00u); } /* indirect call */
    }

loc_00364A03: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00364A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A19u); } /* indirect call */
    }

loc_00364A1C: ;
    esi = MEM32(esp + 0x28);
    ebp = MEM32(esi);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00364A2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A2Cu); } /* indirect call */
    }

loc_00364A2F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00364A37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A34u); } /* indirect call */
    }

loc_00364A37: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x00364A3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A3Au); } /* indirect call */
    }

loc_00364A3D: ;
    edi = MEM32(esi);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00364A48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A45u); } /* indirect call */
    }

loc_00364A48: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00364A50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A4Du); } /* indirect call */
    }

loc_00364A50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x14); PUSH32(esp, 0x00364A56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A53u); } /* indirect call */
    }

loc_00364A56: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00364A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A62u); } /* indirect call */
    }

loc_00364A65: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00364A6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A6Au); } /* indirect call */
    }

loc_00364A6D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00364A73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A70u); } /* indirect call */
    }

loc_00364A73: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00364A82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A7Fu); } /* indirect call */
    }

loc_00364A82: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00364A8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A87u); } /* indirect call */
    }

loc_00364A8A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00364A90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A8Du); } /* indirect call */
    }

loc_00364A90: ;
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00364A9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364A9Cu); } /* indirect call */
    }

loc_00364A9F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00364AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364AA4u); } /* indirect call */
    }

loc_00364AA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00364AADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364AAAu); } /* indirect call */
    }

loc_00364AAD: ;
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00364ABCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364AB9u); } /* indirect call */
    }

loc_00364ABC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00364AC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364AC1u); } /* indirect call */
    }

loc_00364AC4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00364ACAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364AC7u); } /* indirect call */
    }

loc_00364ACA: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00364AD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364AD6u); } /* indirect call */
    }

loc_00364AD9: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00364AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364ADEu); } /* indirect call */
    }

loc_00364AE1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00364AE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364AE4u); } /* indirect call */
    }

loc_00364AE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364B60
 * Original: 0x00364B60 - 0x00364BBD (93 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00364B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 1;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00364B70: ;
    ecx = MEM32(edi + 0x82E2A8);
    esi = ebp;

loc_00364B78: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364B9C; /* jne: not equal / not zero */

loc_00364B80: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00364B98; /* je: equal / zero */

loc_00364B84: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364B9C; /* jne: not equal / not zero */

loc_00364B8E: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00364B78; /* jne: not equal / not zero */

loc_00364B98: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00364BA1;

loc_00364B9C: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00364BA1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00364BAB; /* jne: not equal / not zero */

loc_00364BA5: ;
    eax = MEM32(edi + 0x82E2AC);

loc_00364BAB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00364B70; /* jb: below (unsigned <) */

loc_00364BB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364BE0
 * Original: 0x00364BE0 - 0x00364C3D (93 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00364BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x7DFC0C;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00364BF0: ;
    ecx = MEM32(edi + 0x82E2A8);
    esi = ebp;

loc_00364BF8: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364C1C; /* jne: not equal / not zero */

loc_00364C00: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00364C18; /* je: equal / zero */

loc_00364C04: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364C1C; /* jne: not equal / not zero */

loc_00364C0E: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00364BF8; /* jne: not equal / not zero */

loc_00364C18: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00364C21;

loc_00364C1C: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00364C21: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00364C2B; /* jne: not equal / not zero */

loc_00364C25: ;
    eax = MEM32(edi + 0x82E2B0);

loc_00364C2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00364BF0; /* jb: below (unsigned <) */

loc_00364C36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364C60
 * Original: 0x00364C60 - 0x00364D1F (191 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364C60: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00364C72u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00364C72: ;
    ecx = eax;
    PUSH32(esp, 0x00364C79u); RECOMP_ABI_CALL(0x0002B801u, sub_0002B801); /* call 0x0002B801 */

loc_00364C79: ;
    edi = eax;
    PUSH32(esp, 0x700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00364C86u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00364C86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x700);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00364C9Eu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00364C9E: ;
    ecx = eax;
    PUSH32(esp, 0x00364CA5u); RECOMP_ABI_CALL(0x00022913u, sub_00022913); /* call 0x00022913 */

loc_00364CA5: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00364CAEu); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_00364CAE: ;
    PUSH32(esp, 0x90067C);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00364CC2u); RECOMP_ABI_CALL(0x0059E0FEu, sub_0059E0FE); /* call 0x0059E0FE */

loc_00364CC2: ;
    ecx = MEM32(0x8FC1D0);
    eax = MEM32(0x90067C);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x830350);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00364CE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364CE0u); } /* indirect call */
    }

loc_00364CE3: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    MEM32(0x900678) = eax;
    PUSH32(esp, 0x00364CF3u); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_00364CF3: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00364D05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364D02u); } /* indirect call */
    }

loc_00364D05: ;
    esi = MEM32(0x90067C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00364D14u); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_00364D14: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364D50
 * Original: 0x00364D50 - 0x00364D8C (60 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364D50: ;
    ecx = MEM32(0x90067C);
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(0x900678);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
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
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    eax = MEM32(0x900678);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00364D87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364D84u); } /* indirect call */
    }

loc_00364D87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00364DA0
 * Original: 0x00364DA0 - 0x00364DA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00364DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364DA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00364DB0
 * Original: 0x00364DB0 - 0x00364DB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00364DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364DB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00364DC0
 * Original: 0x00364DC0 - 0x00364E04 (68 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00364DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364DC0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x100;
    edi = 0x900278;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x7E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x7E (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00364DFF; /* jne: not equal / not zero */

loc_00364DD9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x900278);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00364DE7u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00364DE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00364DF0u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00364DF0: ;
    ecx = eax;
    PUSH32(esp, 0x00364DF7u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_00364DF7: ;
    eax = 0x900278;
    esp += 8; return; /* ret 4 */

loc_00364DFF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364E20
 * Original: 0x00364E20 - 0x00364E34 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E20(void)
{

loc_00364E20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x8FA488);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00364E31u); RECOMP_ABI_CALL(0x0003575Cu, sub_0003575C); /* call 0x0003575C */

loc_00364E31: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364E40
 * Original: 0x00364E40 - 0x00364E48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E40(void)
{

loc_00364E40: ;
    MEM8(ecx + 0x210) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00364E50
 * Original: 0x00364E50 - 0x00364E58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E50(void)
{

loc_00364E50: ;
    MEM8(ecx + 0x210) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00364E60
 * Original: 0x00364E60 - 0x00364E77 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364E60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x8FA488);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00364E74u); RECOMP_ABI_CALL(0x0003575Cu, sub_0003575C); /* call 0x0003575C */

loc_00364E74: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00364E80
 * Original: 0x00364E80 - 0x00364E89 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E80(void)
{

loc_00364E80: ;
    eax = ecx;
    MEM32(eax) = 0x830364;
    esp += 4; return; /* ret */

}

/**
 * sub_00364E90
 * Original: 0x00364E90 - 0x00364E97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364E90(void)
{

loc_00364E90: ;
    MEM32(ecx) = 0x82FE5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00364EA0
 * Original: 0x00364EA0 - 0x00364EDA (58 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00364EA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00364EAEu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00364EAE: ;
    ecx = eax;
    PUSH32(esp, 0x00364EB5u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_00364EB5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00364ED6; /* je: equal / zero */

loc_00364EBA: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00364ECFu); RECOMP_ABI_CALL(0x00034E8Du, sub_00034E8D); /* call 0x00034E8D */

loc_00364ECF: ;
    ecx = eax;
    PUSH32(esp, 0x00364ED6u); RECOMP_ABI_CALL(0x0003222Du, sub_0003222D); /* call 0x0003222D */

loc_00364ED6: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00364EF0
 * Original: 0x00364EF0 - 0x00365063 (371 bytes, 153 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00364EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00364EF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x865718);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = ecx;
    eax = edi;

loc_00364F02: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364F2A; /* jne: not equal / not zero */

loc_00364F0C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00364F26; /* je: equal / zero */

loc_00364F10: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364F2A; /* jne: not equal / not zero */

loc_00364F1C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00364F02; /* jne: not equal / not zero */

loc_00364F26: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00364F2F;

loc_00364F2A: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00364F2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365042; /* je: equal / zero */

loc_00364F37: ;
    esi = MEM32(0x86571C);
    eax = edi;
    /* nop */

loc_00364F40: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364F68; /* jne: not equal / not zero */

loc_00364F4A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00364F64; /* je: equal / zero */

loc_00364F4E: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364F68; /* jne: not equal / not zero */

loc_00364F5A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00364F40; /* jne: not equal / not zero */

loc_00364F64: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00364F6D;

loc_00364F68: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00364F6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365042; /* je: equal / zero */

loc_00364F75: ;
    esi = MEM32(0x865714);
    eax = edi;
    /* nop */

loc_00364F80: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364FA8; /* jne: not equal / not zero */

loc_00364F8A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00364FA4; /* je: equal / zero */

loc_00364F8E: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00364FA8; /* jne: not equal / not zero */

loc_00364F9A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00364F80; /* jne: not equal / not zero */

loc_00364FA4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00364FAD;

loc_00364FA8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00364FAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00364FD2; /* jne: not equal / not zero */

loc_00364FB1: ;
    PUSH32(esp, 0x00364FB6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00364FB6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00364FBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00364FBAu); } /* indirect call */
    }

loc_00364FBD: ;
    edx = MEM32(eax);
    ecx = MEM32(0x8631F4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

loc_00364FD2: ;
    esi = MEM32(0x863214);
    eax = edi;
    /* nop */

loc_00364FE0: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365008; /* jne: not equal / not zero */

loc_00364FEA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365004; /* je: equal / zero */

loc_00364FEE: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365008; /* jne: not equal / not zero */

loc_00364FFA: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00364FE0; /* jne: not equal / not zero */

loc_00365004: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036500D;

loc_00365008: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036500D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00365032; /* jne: not equal / not zero */

loc_00365011: ;
    PUSH32(esp, 0x00365016u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00365016: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036501Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036501Au); } /* indirect call */
    }

loc_0036501D: ;
    edx = MEM32(eax);
    ecx = MEM32(0x863214);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

loc_00365032: ;
    edx = MEM32(ebp);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036503Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365038u); } /* indirect call */
    }

loc_0036503B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00365042: ;
    PUSH32(esp, 0x00365047u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00365047: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036504Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036504Bu); } /* indirect call */
    }

loc_0036504E: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 8) = ecx;
    POP32(esp, ebx);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_003650C0
 * Original: 0x003650C0 - 0x0036539E (734 bytes, 274 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003650C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003650C0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003650DA; /* je: equal / zero */

loc_003650CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003650DA; /* je: equal / zero */

loc_003650D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036524C; /* jne: not equal / not zero */

loc_003650DA: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8C4E84);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003650EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003650EAu); } /* indirect call */
    }

loc_003650ED: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_003650F0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365118; /* jne: not equal / not zero */

loc_003650FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365114; /* je: equal / zero */

loc_003650FE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365118; /* jne: not equal / not zero */

loc_0036510A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003650F0; /* jne: not equal / not zero */

loc_00365114: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036511D;

loc_00365118: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036511D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00365319; /* jne: not equal / not zero */

loc_00365125: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036512Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036512B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00365132u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036512Fu); } /* indirect call */
    }

loc_00365132: ;
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(0x863214);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365149u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365146u); } /* indirect call */
    }

loc_00365149: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365160u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036515Du); } /* indirect call */
    }

loc_00365160: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365177u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365174u); } /* indirect call */
    }

loc_00365177: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036518Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036518Bu); } /* indirect call */
    }

loc_0036518E: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003651A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003651A4u); } /* indirect call */
    }

loc_003651A7: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x863214);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003651C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003651BDu); } /* indirect call */
    }

loc_003651C0: ;
    ecx = MEM32(esp + 0x28);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003651CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003651C8u); } /* indirect call */
    }

loc_003651CB: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00365252; /* je: equal / zero */

loc_003651D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00365252; /* je: equal / zero */

loc_003651DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00365252; /* je: equal / zero */

loc_003651DF: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003651E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003651E4u); } /* indirect call */
    }

loc_003651E7: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003651EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003651EBu); } /* indirect call */
    }

loc_003651EE: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003651F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003651F5u); } /* indirect call */
    }

loc_003651F8: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365200u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003651FDu); } /* indirect call */
    }

loc_00365200: ;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036520Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036520Au); } /* indirect call */
    }

loc_0036520D: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365214u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365211u); } /* indirect call */
    }

loc_00365214: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00365221u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036521Eu); } /* indirect call */
    }

loc_00365221: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365228u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365225u); } /* indirect call */
    }

loc_00365228: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00365231u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036522Eu); } /* indirect call */
    }

loc_00365231: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365238u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365235u); } /* indirect call */
    }

loc_00365238: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00365241u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036523Eu); } /* indirect call */
    }

loc_00365241: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00365248u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365245u); } /* indirect call */
    }

loc_00365248: ;
    POP32(esp, ebp);

loc_00365249: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_0036524C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00365252: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003652E0; /* jne: not equal / not zero */

loc_0036525D: ;
    edx = 1;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edx;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x20) = 2;
    if (CMP_NE(_fa, _fb)) goto loc_00365297; /* jne: not equal / not zero */

loc_00365281: ;
    ecx = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;

loc_00365297: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036529Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036529Cu); } /* indirect call */
    }

loc_0036529F: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003652ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652A9u); } /* indirect call */
    }

loc_003652AC: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003652BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652B7u); } /* indirect call */
    }

loc_003652BA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003652C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652C5u); } /* indirect call */
    }

loc_003652C8: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003652D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652D1u); } /* indirect call */
    }

loc_003652D4: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003652E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652DDu); } /* indirect call */
    }

loc_003652E0: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003652E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652E4u); } /* indirect call */
    }

loc_003652E7: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003652EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652ECu); } /* indirect call */
    }

loc_003652EF: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003652F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652F5u); } /* indirect call */
    }

loc_003652F8: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00365301u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003652FEu); } /* indirect call */
    }

loc_00365301: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00365308u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365305u); } /* indirect call */
    }

loc_00365308: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036530Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036530Cu); } /* indirect call */
    }

loc_0036530F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00365319: ;
    edx = MEM32(edi);
    esi = MEM32(0x863174);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00365326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365323u); } /* indirect call */
    }

loc_00365326: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036534E; /* jne: not equal / not zero */

loc_00365330: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036534A; /* je: equal / zero */

loc_00365334: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036534E; /* jne: not equal / not zero */

loc_00365340: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00365326; /* jne: not equal / not zero */

loc_0036534A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00365353;

loc_0036534E: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00365353: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00365249; /* jne: not equal / not zero */

loc_0036535B: ;
    PUSH32(esp, 0x00365360u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00365360: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00365367u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365364u); } /* indirect call */
    }

loc_00365367: ;
    esi = eax;
    eax = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00365372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036536Fu); } /* indirect call */
    }

loc_00365372: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x10); PUSH32(esp, 0x0036537Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00365377u); } /* indirect call */
    }

loc_0036537A: ;
    PUSH32(esp, 0x0036537Fu); RECOMP_ABI_CALL(0x0002BBBCu, sub_0002BBBC); /* call 0x0002BBBC */

loc_0036537F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365249; /* je: equal / zero */

loc_00365387: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036538Eu); RECOMP_ABI_CALL(0x00011C0Du, sub_00011C0D); /* call 0x00011C0D */

loc_0036538E: ;
    ecx = eax;
    PUSH32(esp, 0x00365395u); RECOMP_ABI_CALL(0x0002CDEBu, sub_0002CDEB); /* call 0x0002CDEB */

loc_00365395: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00365460
 * Original: 0x00365460 - 0x003654C4 (100 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00365460: ;
    eax = MEM32(0x8656FC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    goto loc_00365470;

    /* nop */

loc_00365470: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365498; /* jne: not equal / not zero */

loc_0036547A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365494; /* je: equal / zero */

loc_0036547E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365498; /* jne: not equal / not zero */

loc_0036548A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00365470; /* jne: not equal / not zero */

loc_00365494: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036549D;

loc_00365498: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036549D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003654C1; /* jne: not equal / not zero */

loc_003654A3: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = 2;
    MEM32(ecx) = 0x8C5BA4;
    MEM32(edx) = 0;

loc_003654C1: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003654E0
 * Original: 0x003654E0 - 0x00365634 (340 bytes, 142 insns)
 * Category: game_network
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003654E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003654E0: ;
    eax = MEM32(0x865718);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = ecx;
    esi = edi;

loc_003654F1: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365519; /* jne: not equal / not zero */

loc_003654FB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365515; /* je: equal / zero */

loc_003654FF: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365519; /* jne: not equal / not zero */

loc_0036550B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003654F1; /* jne: not equal / not zero */

loc_00365515: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036551E;

loc_00365519: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036551E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365624; /* je: equal / zero */

loc_00365526: ;
    eax = MEM32(0x86571C);
    esi = edi;
    /* nop */

loc_00365530: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365558; /* jne: not equal / not zero */

loc_0036553A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365554; /* je: equal / zero */

loc_0036553E: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365558; /* jne: not equal / not zero */

loc_0036554A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00365530; /* jne: not equal / not zero */

loc_00365554: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036555D;

loc_00365558: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036555D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365624; /* je: equal / zero */

loc_00365565: ;
    eax = MEM32(0x8656FC);
    esi = edi;
    /* nop */

loc_00365570: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365598; /* jne: not equal / not zero */

loc_0036557A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00365594; /* je: equal / zero */

loc_0036557E: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00365598; /* jne: not equal / not zero */

loc_0036558A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00365570; /* jne: not equal / not zero */

loc_00365594: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036559D;

loc_00365598: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036559D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00365605; /* jne: not equal / not zero */

loc_003655A1: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003655DB; /* je: equal / zero */

loc_003655AA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003655CD; /* je: equal / zero */

loc_003655AD: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003655C1u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003655C1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_003655CD: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x83038C);
    goto loc_003655E7;

loc_003655DB: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x830370);

loc_003655E7: ;
    PUSH32(esp, 0x003655ECu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003655EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003655F5u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003655F5: ;
    ecx = eax;
    PUSH32(esp, 0x003655FCu); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_003655FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00365605: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0036561Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036561Au); } /* indirect call */
    }

loc_0036561D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00365624: ;
    edx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00365690
 * Original: 0x00365690 - 0x00365699 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00365690(void)
{

loc_00365690: ;
    eax = ecx;
    MEM32(eax) = 0x8303A8;
    esp += 4; return; /* ret */

}

/**
 * sub_003656A0
 * Original: 0x003656A0 - 0x003656A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003656A0(void)
{

loc_003656A0: ;
    MEM32(ecx) = 0x82F6BC;
    esp += 4; return; /* ret */

}

/**
 * sub_003656B0
 * Original: 0x003656B0 - 0x003658E3 (563 bytes, 208 insns)
 * Category: game_network
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003656B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003656B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 8) = 0;
    ecx = 0xF;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xFFFFFC16u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFC16u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003658C9; /* ja: above (unsigned >) */

loc_003656E4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3658E4); /* switch: 7 entries, 5 targets */
    if (_jt == 0x003656EBu) goto loc_003656EB;
    if (_jt == 0x00365762u) goto loc_00365762;
    if (_jt == 0x00365822u) goto loc_00365822;
    if (_jt == 0x00365872u) goto loc_00365872;
    if (_jt == 0x003658C9u) goto loc_003658C9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003656EB: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003656F4u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_003656F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365709; /* je: equal / zero */

loc_003656FB: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x830450);
    goto loc_0036572B;

loc_00365709: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036571B; /* je: equal / zero */

loc_0036570D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x830440);
    goto loc_0036572B;

loc_0036571B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365740; /* je: equal / zero */

loc_0036571F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830430);

loc_0036572B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365730u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00365730: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365739u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00365739: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00365740u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_00365740: ;
    edx = MEM32(ebp + 0x14);
    eax = esp + 8;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00365750;

    /* nop */

loc_00365750: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365750; /* jne: not equal / not zero */

loc_0036575A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_00365762: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036576Bu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0036576B: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00365806; /* jl: less (signed <) */

loc_00365778: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x6D (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00365806; /* jge: greater or equal (signed >=) */

loc_00365781: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x148) = 0;
    ecx = 0x3F;
    edi = esp + 0x149;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    MEM8(esp + 0x48) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x49;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003657B6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_003657B6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003657BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003657BAu); } /* indirect call */
    }

loc_003657BD: ;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    ecx = esp + 0x14C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003657CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003657CCu); } /* indirect call */
    }

loc_003657CF: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x150;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003657E6u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_003657E6: ;
    edx = MEM32(ebp + 0x14);
    eax = esp + 0x54;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003657F4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003657F4; /* jne: not equal / not zero */

loc_003657FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_00365806: ;
    edx = MEM32(ebp + 0x14);
    eax = 0x7E0E38;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00365810: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365810; /* jne: not equal / not zero */

loc_0036581A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_00365822: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036582Bu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0036582B: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    eax = 0x7E0E38;
    if (TEST_Z(_fa, _fb)) goto loc_00365841; /* je: equal / zero */

loc_0036583A: ;
    eax = 0x830420;
    goto loc_00365857;

loc_00365841: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036584D; /* je: equal / zero */

loc_00365846: ;
    eax = 0x830418;
    goto loc_00365857;

loc_0036584D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00365857; /* je: equal / zero */

loc_00365852: ;
    eax = 0x83040C;

loc_00365857: ;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00365860: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00365860; /* jne: not equal / not zero */

loc_0036586A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_00365872: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036587Bu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0036587B: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    eax = 0x7E0E38;
    if (TEST_Z(_fa, _fb)) goto loc_00365891; /* je: equal / zero */

loc_0036588A: ;
    eax = 0x8303FC;
    goto loc_003658B2;

loc_00365891: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036589D; /* je: equal / zero */

loc_00365896: ;
    eax = 0x8303EC;
    goto loc_003658B2;

loc_0036589D: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003658A9; /* je: equal / zero */

loc_003658A2: ;
    eax = 0x8303DC;
    goto loc_003658B2;

loc_003658A9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003658B2; /* jle: less or equal (signed <=) */

loc_003658AD: ;
    eax = 0x8303CC;

loc_003658B2: ;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003658B7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003658B7; /* jne: not equal / not zero */

loc_003658C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_003658C9: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003658D1: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003658D1; /* jne: not equal / not zero */

loc_003658DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003659B0
 * Original: 0x003659B0 - 0x003659BE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003659B0(void)
{

loc_003659B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8C4EA4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003659D0
 * Original: 0x003659D0 - 0x0036610A (1850 bytes, 441 insns)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003659D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003659D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003659DAu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_003659DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x42E (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00365DCE; /* jg: greater (signed >) */

loc_003659E8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00365DA4; /* je: equal / zero */

loc_003659EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00365C3C; /* jg: greater (signed >) */

loc_003659F9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00365C07; /* je: equal / zero */

loc_003659FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3EA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3EA (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00365B15; /* jg: greater (signed >) */

loc_00365A0A: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00365ADA; /* je: equal / zero */

loc_00365A10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00365A94; /* jg: greater (signed >) */

loc_00365A17: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00365A5B; /* je: equal / zero */

loc_00365A19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00365A41; /* je: equal / zero */

loc_00365A1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003660E2; /* jne: not equal / not zero */

loc_00365A27: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x830718);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00365A3Bu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00365A3B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00365A41: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x830704);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00365A55u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00365A55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00365A5B: ;
    eax = MEM32(0x8306E8);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8306EC);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8306F0);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8306F4);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(0x8306F8);
    MEM32(edx + 0x10) = eax;
    SET_LO8(ecx, MEM8(0x8306FC));
    MEM8(edx + 0x14) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365A94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003660E2; /* jne: not equal / not zero */

loc_00365A9F: ;
    eax = MEM32(0x8306D0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8306D4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8306D8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8306DC);
    MEM32(edx + 0xC) = ecx;
    SET_LO16(eax, MEM16(0x8306E0));
    MEM16(edx + 0x10) = LO16(eax);
    SET_LO8(ecx, MEM8(0x8306E2));
    MEM8(edx + 0x12) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365ADA: ;
    eax = MEM32(0x8306B8);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8306BC);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8306C0);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8306C4);
    MEM32(edx + 0xC) = ecx;
    SET_LO16(eax, MEM16(0x8306C8));
    MEM16(edx + 0x10) = LO16(eax);
    SET_LO8(ecx, MEM8(0x8306CA));
    MEM8(edx + 0x12) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365B15: ;
    _fb = (uint32_t)(0x3EB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x3EB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003660E2; /* ja: above (unsigned >) */

loc_00365B23: ;
    edx = ZX8(MEM8(eax + 0x366120));
    { uint32_t _jt = MEM32(edx * 4 + 0x36610C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00365B31u) goto loc_00365B31;
    if (_jt == 0x00365B6Fu) goto loc_00365B6F;
    if (_jt == 0x00365BA2u) goto loc_00365BA2;
    if (_jt == 0x00365BD4u) goto loc_00365BD4;
    if (_jt == 0x003660E2u) goto loc_003660E2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00365B31: ;
    ecx = MEM32(0x8306A0);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x8306A4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8306A8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x8306AC);
    MEM32(eax + 0xC) = edx;
    SET_LO16(ecx, MEM16(0x8306B0));
    MEM16(eax + 0x10) = LO16(ecx);
    SET_LO8(edx, MEM8(0x8306B2));
    MEM8(eax + 0x12) = LO8(edx);
    esp += 16; return; /* ret 12 */

loc_00365B6F: ;
    ecx = MEM32(0x83068C);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x830690);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x830694);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x830698);
    MEM32(eax + 0xC) = edx;
    SET_LO8(ecx, MEM8(0x83069C));
    MEM8(eax + 0x10) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365BA2: ;
    eax = MEM32(0x830678);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x83067C);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x830680);
    MEM32(edx + 8) = eax;
    SET_LO16(ecx, MEM16(0x830684));
    MEM16(edx + 0xC) = LO16(ecx);
    SET_LO8(eax, MEM8(0x830686));
    MEM8(edx + 0xE) = LO8(eax);
    esp += 16; return; /* ret 12 */

loc_00365BD4: ;
    edx = MEM32(0x830664);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x830668);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x83066C);
    MEM32(ecx + 8) = edx;
    SET_LO16(eax, MEM16(0x830670));
    MEM16(ecx + 0xC) = LO16(eax);
    SET_LO8(edx, MEM8(0x830672));
    MEM8(ecx + 0xE) = LO8(edx);
    esp += 16; return; /* ret 12 */

loc_00365C07: ;
    ecx = MEM32(0x830650);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x830654);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x830658);
    MEM32(eax + 8) = ecx;
    SET_LO16(edx, MEM16(0x83065C));
    MEM16(eax + 0xC) = LO16(edx);
    SET_LO8(ecx, MEM8(0x83065E));
    MEM8(eax + 0xE) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365C3C: ;
    _fb = (uint32_t)(0x406) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x406;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003660E2; /* ja: above (unsigned >) */

loc_00365C4A: ;
    edx = ZX8(MEM8(eax + 0x366150));
    { uint32_t _jt = MEM32(edx * 4 + 0x36612C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00365C58u) goto loc_00365C58;
    if (_jt == 0x00365C8Du) goto loc_00365C8D;
    if (_jt == 0x00365CB5u) goto loc_00365CB5;
    if (_jt == 0x00365CDDu) goto loc_00365CDD;
    if (_jt == 0x00365D07u) goto loc_00365D07;
    if (_jt == 0x00365D31u) goto loc_00365D31;
    if (_jt == 0x00365D5Bu) goto loc_00365D5B;
    if (_jt == 0x00365D85u) goto loc_00365D85;
    if (_jt == 0x003660E2u) goto loc_003660E2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00365C58: ;
    ecx = MEM32(0x830638);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x83063C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x830640);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x830644);
    MEM32(eax + 0xC) = edx;
    SET_LO16(ecx, MEM16(0x830648));
    MEM16(eax + 0x10) = LO16(ecx);
    esp += 16; return; /* ret 12 */

loc_00365C8D: ;
    eax = MEM32(0x830624);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x830628);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x83062C);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x830630);
    MEM32(edx + 0xC) = ecx;
    esp += 16; return; /* ret 12 */

loc_00365CB5: ;
    eax = MEM32(0x830610);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x830614);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x830618);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x83061C);
    MEM32(edx + 0xC) = ecx;
    esp += 16; return; /* ret 12 */

loc_00365CDD: ;
    eax = MEM32(0x830600);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x830604);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x830608);
    MEM32(edx + 8) = eax;
    SET_LO16(ecx, MEM16(0x83060C));
    MEM16(edx + 0xC) = LO16(ecx);
    esp += 16; return; /* ret 12 */

loc_00365D07: ;
    eax = MEM32(0x8305F0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8305F4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8305F8);
    MEM32(edx + 8) = eax;
    SET_LO16(ecx, MEM16(0x8305FC));
    MEM16(edx + 0xC) = LO16(ecx);
    esp += 16; return; /* ret 12 */

loc_00365D31: ;
    eax = MEM32(0x8305E0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8305E4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8305E8);
    MEM32(edx + 8) = eax;
    SET_LO16(ecx, MEM16(0x8305EC));
    MEM16(edx + 0xC) = LO16(ecx);
    esp += 16; return; /* ret 12 */

loc_00365D5B: ;
    eax = MEM32(0x8305D0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8305D4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8305D8);
    MEM32(edx + 8) = eax;
    SET_LO16(ecx, MEM16(0x8305DC));
    MEM16(edx + 0xC) = LO16(ecx);
    esp += 16; return; /* ret 12 */

loc_00365D85: ;
    eax = MEM32(0x8305C0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8305C4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8305C8);
    MEM32(edx + 8) = eax;
    esp += 16; return; /* ret 12 */

loc_00365DA4: ;
    edx = MEM32(0x8305B0);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x8305B4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x8305B8);
    MEM32(ecx + 8) = edx;
    SET_LO16(eax, MEM16(0x8305BC));
    MEM16(ecx + 0xC) = LO16(eax);
    esp += 16; return; /* ret 12 */

loc_00365DCE: ;
    _fb = (uint32_t)(0x42F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x42F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003660E2; /* ja: above (unsigned >) */

loc_00365DDE: ;
    ecx = ZX8(MEM8(eax + 0x3661B8));
    { uint32_t _jt = MEM32(ecx * 4 + 0x366170); /* switch: 18 entries, 18 targets */
    if (_jt == 0x00365DECu) goto loc_00365DEC;
    if (_jt == 0x00365E0Bu) goto loc_00365E0B;
    if (_jt == 0x00365E3Eu) goto loc_00365E3E;
    if (_jt == 0x00365E68u) goto loc_00365E68;
    if (_jt == 0x00365E92u) goto loc_00365E92;
    if (_jt == 0x00365EBCu) goto loc_00365EBC;
    if (_jt == 0x00365EF1u) goto loc_00365EF1;
    if (_jt == 0x00365F19u) goto loc_00365F19;
    if (_jt == 0x00365F41u) goto loc_00365F41;
    if (_jt == 0x00365F69u) goto loc_00365F69;
    if (_jt == 0x00365FA4u) goto loc_00365FA4;
    if (_jt == 0x00365FD4u) goto loc_00365FD4;
    if (_jt == 0x00366005u) goto loc_00366005;
    if (_jt == 0x00366038u) goto loc_00366038;
    if (_jt == 0x0036606Au) goto loc_0036606A;
    if (_jt == 0x00366092u) goto loc_00366092;
    if (_jt == 0x003660BAu) goto loc_003660BA;
    if (_jt == 0x003660E2u) goto loc_003660E2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00365DEC: ;
    eax = MEM32(0x8305A0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8305A4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8305A8);
    MEM32(edx + 8) = eax;
    esp += 16; return; /* ret 12 */

loc_00365E0B: ;
    edx = MEM32(0x830588);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x83058C);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x830590);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x830594);
    MEM32(ecx + 0xC) = eax;
    SET_LO16(edx, MEM16(0x830598));
    MEM16(ecx + 0x10) = LO16(edx);
    esp += 16; return; /* ret 12 */

loc_00365E3E: ;
    ecx = MEM32(0x830574);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x830578);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x83057C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x830580);
    MEM32(eax + 0xC) = edx;
    esp += 16; return; /* ret 12 */

loc_00365E68: ;
    ecx = MEM32(0x830560);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x830564);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x830568);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x83056C);
    MEM32(eax + 0xC) = edx;
    esp += 16; return; /* ret 12 */

loc_00365E92: ;
    ecx = MEM32(0x83054C);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x830550);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x830554);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x830558);
    MEM32(eax + 0xC) = edx;
    esp += 16; return; /* ret 12 */

loc_00365EBC: ;
    ecx = MEM32(0x830538);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x83053C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x830540);
    MEM32(eax + 8) = ecx;
    SET_LO16(edx, MEM16(0x830544));
    MEM16(eax + 0xC) = LO16(edx);
    SET_LO8(ecx, MEM8(0x830546));
    MEM8(eax + 0xE) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365EF1: ;
    eax = MEM32(0x830528);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x83052C);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x830530);
    MEM32(edx + 8) = eax;
    SET_LO8(ecx, MEM8(0x830534));
    MEM8(edx + 0xC) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365F19: ;
    eax = MEM32(0x830518);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x83051C);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x830520);
    MEM32(edx + 8) = eax;
    SET_LO8(ecx, MEM8(0x830524));
    MEM8(edx + 0xC) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365F41: ;
    eax = MEM32(0x830508);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x83050C);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x830510);
    MEM32(edx + 8) = eax;
    SET_LO8(ecx, MEM8(0x830514));
    MEM8(edx + 0xC) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365F69: ;
    eax = MEM32(0x8304F0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8304F4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8304F8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8304FC);
    MEM32(edx + 0xC) = ecx;
    SET_LO16(eax, MEM16(0x830500));
    MEM16(edx + 0x10) = LO16(eax);
    SET_LO8(ecx, MEM8(0x830502));
    MEM8(edx + 0x12) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00365FA4: ;
    eax = MEM32(0x8304DC);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8304E0);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8304E4);
    MEM32(edx + 8) = eax;
    ecx = MEM32(0x8304E8);
    MEM32(edx + 0xC) = ecx;
    SET_LO8(eax, MEM8(0x8304EC));
    MEM8(edx + 0x10) = LO8(eax);
    esp += 16; return; /* ret 12 */

loc_00365FD4: ;
    edx = MEM32(0x8304C8);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x8304CC);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x8304D0);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x8304D4);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(edx, MEM8(0x8304D8));
    MEM8(ecx + 0x10) = LO8(edx);
    esp += 16; return; /* ret 12 */

loc_00366005: ;
    ecx = MEM32(0x8304B4);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    edx = MEM32(0x8304B8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8304BC);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x8304C0);
    MEM32(eax + 0xC) = edx;
    SET_LO8(ecx, MEM8(0x8304C4));
    MEM8(eax + 0x10) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00366038: ;
    eax = MEM32(0x8304A0);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    ecx = MEM32(0x8304A4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8304A8);
    MEM32(edx + 8) = eax;
    SET_LO16(ecx, MEM16(0x8304AC));
    MEM16(edx + 0xC) = LO16(ecx);
    SET_LO8(eax, MEM8(0x8304AE));
    MEM8(edx + 0xE) = LO8(eax);
    esp += 16; return; /* ret 12 */

loc_0036606A: ;
    edx = MEM32(0x830490);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x830494);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x830498);
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, MEM8(0x83049C));
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 16; return; /* ret 12 */

loc_00366092: ;
    edx = MEM32(0x830480);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x830484);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x830488);
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, MEM8(0x83048C));
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 16; return; /* ret 12 */

loc_003660BA: ;
    edx = MEM32(0x830470);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x830474);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x830478);
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, MEM8(0x83047C));
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 16; return; /* ret 12 */

loc_003660E2: ;
    edx = MEM32(0x830460);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    eax = MEM32(0x830464);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x830468);
    MEM32(ecx + 8) = edx;
    SET_LO8(eax, MEM8(0x83046C));
    MEM8(ecx + 0xC) = LO8(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036610A
 * Original: 0x0036610A - 0x00366129 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036610A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036610A: ;
    edi = edi;
    MEM32(ebx + 0x36) = MEM32(ebx + 0x36) ^ ebx;
    _fa = (uint32_t)(MEM32(ebx + 0x36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x5B) = MEM8(edi + 0x5B) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi + 0x5B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -738183589) = MEM8(edx + -738183589) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + -738183589)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

}

/**
 * sub_003664B0
 * Original: 0x003664B0 - 0x003664B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003664B0(void)
{

loc_003664B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003664C0
 * Original: 0x003664C0 - 0x003664C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003664C0(void)
{

loc_003664C0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003664D0
 * Original: 0x003664D0 - 0x003664D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003664D0(void)
{

loc_003664D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003664E0
 * Original: 0x003664E0 - 0x003664E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003664E0(void)
{

loc_003664E0: ;
    MEM32(ecx) = 0x82FF9C;
    esp += 4; return; /* ret */

}

/**
 * sub_003664F0
 * Original: 0x003664F0 - 0x0036651C (44 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003664F0(void)
{

loc_003664F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    PUSH32(esp, 0x00366506u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00366506: ;
    edx = MEM32(esi + 4);
    MEM32(eax + 0x3EC) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 0x3F4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00366530
 * Original: 0x00366530 - 0x00366538 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366530(void)
{

loc_00366530: ;
    eax = 0x82EEAC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00366540
 * Original: 0x00366540 - 0x003665A2 (98 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366540: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    MEM32(esp) = 0x7E07F0;
    MEM32(esp + 4) = 0x7E07D0;
    MEM32(esp + 8) = 0x7E07B8;
    MEM32(esp + 0xC) = 0x7E07A0;
    MEM32(esp + 0x10) = 0x7E0788;
    MEM32(esp + 0x14) = 0x7E0770;
    MEM32(esp + 0x18) = 0x7E0758;
    ecx = MEM32(esp + eax * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00366587u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00366587: ;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366597u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00366597: ;
    ecx = eax;
    PUSH32(esp, 0x0036659Eu); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036659E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003665C0
 * Original: 0x003665C0 - 0x00366609 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003665C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003665C0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x003665CBu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_003665CB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003665D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003665CFu); } /* indirect call */
    }

loc_003665D2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003665E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003665E5u); } /* indirect call */
    }

loc_003665E8: ;
    edx = MEM32(esp + 0x110);
    eax = MEM32(esp + 0x10C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00366602u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_00366602: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00366620
 * Original: 0x00366620 - 0x0036667C (92 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366620: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(esp) = 0x7E8A8C;
    MEM32(esp + 4) = 0x830778;
    MEM32(esp + 8) = 0x830774;
    MEM32(esp + 0xC) = 0x830770;
    MEM32(esp + 0x10) = 0x7FFED0;
    MEM32(esp + 0x14) = 0x83076C;
    MEM32(esp + 0x18) = 0x830768;
    if (CMP_B(_fa, _fb)) goto loc_00366665; /* jb: below (unsigned <) */

loc_00366663: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00366665: ;
    eax = MEM32(esp + eax * 4);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x830754);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00366678u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00366678: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003666A0
 * Original: 0x003666A0 - 0x003666D9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003666A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003666A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x003666A8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_003666A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003666AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003666ACu); } /* indirect call */
    }

loc_003666AF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003666C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003666BFu); } /* indirect call */
    }

loc_003666C2: ;
    eax = MEM32(esp + 0x14);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E02D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003666D5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003666D5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003666F0
 * Original: 0x003666F0 - 0x003666F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003666F0(void)
{

loc_003666F0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00366700
 * Original: 0x00366700 - 0x00366744 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00366707u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00366707: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036670Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036670Bu); } /* indirect call */
    }

loc_0036670E: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0036671Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366719u); } /* indirect call */
    }

loc_0036671C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00366725u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366722u); } /* indirect call */
    }

loc_00366725: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0036672Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036672Bu); } /* indirect call */
    }

loc_0036672E: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036673Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036673E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00366760
 * Original: 0x00366760 - 0x003667ED (141 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366760: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00366769u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00366769: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00366770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036676Du); } /* indirect call */
    }

loc_00366770: ;
    esi = MEM32(esp + 0x58);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366787; /* jne: not equal / not zero */

loc_00366778: ;
    PUSH32(esp, 0x830798);
    PUSH32(esp, 0x00366782u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00366782: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003667D1;

loc_00366787: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036679B; /* jne: not equal / not zero */

loc_0036678C: ;
    PUSH32(esp, 0x83078C);
    PUSH32(esp, 0x00366796u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00366796: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003667D1;

loc_0036679B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003667AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003667ABu); } /* indirect call */
    }

loc_003667AE: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, 0x83077C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003667C4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003667C4: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003667CEu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003667CE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003667D1: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(ecx) = 0;
    PUSH32(esp, 0x003667E1u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003667E1: ;
    ecx = eax;
    PUSH32(esp, 0x003667E8u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_003667E8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00366810
 * Original: 0x00366810 - 0x00366851 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366810: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00366820u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00366820: ;
    ecx = MEM32(esp + 0xB8);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00366836u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00366836: ;
    esi = (uint32_t)(int32_t)SMEM8(esp + 0xA0);
    ecx = esp + 4;
    PUSH32(esp, 0x00366847u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00366847: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00366870
 * Original: 0x00366870 - 0x00366895 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366870: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036687Au); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036687A: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(ecx) = 0;
    PUSH32(esp, 0x0036688Du); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036688D: ;
    ecx = eax;
    PUSH32(esp, 0x00366894u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_00366894: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003668A0
 * Original: 0x003668A0 - 0x003668BA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003668A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003668A0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = MEM32(eax + 0x8C5434);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003668B3; /* je: equal / zero */

loc_003668B1: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(ecx); return; /* indirect tail jmp */

loc_003668B3: ;
    eax = MEM32(eax + 0x8C5438);
    esp += 4; return; /* ret */

}

/**
 * sub_003668C0
 * Original: 0x003668C0 - 0x003668D3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003668C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003668C0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = MEM32(eax + 0x8C5434);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003668E0
 * Original: 0x003668E0 - 0x003668EE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003668E0(void)
{

loc_003668E0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C542C);
    esp += 4; return; /* ret */

}

/**
 * sub_00366900
 * Original: 0x00366900 - 0x0036690E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366900(void)
{

loc_00366900: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5450);
    esp += 4; return; /* ret */

}

/**
 * sub_00366920
 * Original: 0x00366920 - 0x00366969 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366920: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = MEM32(eax + 0x8C5430);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036693C; /* je: equal / zero */

loc_00366931: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00366938u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00366936u); } /* indirect call */
    }

loc_00366938: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036693C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00366949; /* jge: greater or equal (signed >=) */

loc_00366945: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00366949: ;
    ecx = MEM32(eax + 0x8C5434);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036695C; /* je: equal / zero */

loc_00366953: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00366955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366953u); } /* indirect call */
    }

loc_00366955: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036695C: ;
    eax = MEM32(eax + 0x8C5438);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00366980
 * Original: 0x00366980 - 0x003669E9 (105 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366980: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x8C5420);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003669DA; /* je: equal / zero */

loc_00366990: ;
    eax = MEM32(esp + 0x14);
    edi = 0x8C5420;
    /* nop */

loc_003669A0: ;
    ecx = eax;

loc_003669A2: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003669C6; /* jne: not equal / not zero */

loc_003669AA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003669C2; /* je: equal / zero */

loc_003669AE: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003669C6; /* jne: not equal / not zero */

loc_003669B8: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003669A2; /* jne: not equal / not zero */

loc_003669C2: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003669CB;

loc_003669C6: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003669CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003669E2; /* je: equal / zero */

loc_003669CF: ;
    esi = MEM32(edi + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x3C)) >> 32) & 1);
    edi = edi + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003669A0; /* jne: not equal / not zero */

loc_003669DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003669E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00366A10
 * Original: 0x00366A10 - 0x00366A1E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366A10(void)
{

loc_00366A10: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5420);
    esp += 4; return; /* ret */

}

/**
 * sub_00366A30
 * Original: 0x00366A30 - 0x00366A45 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366A30(void)
{

loc_00366A30: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = MEM32(eax + 0x8C5424);
    eax = MEM32(ecx * 4 + 0x90076C);
    esp += 4; return; /* ret */

}

/**
 * sub_00366A50
 * Original: 0x00366A50 - 0x00366A6E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366A50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366A5Au); RECOMP_ABI_CALL(0x00032CAAu, sub_00032CAA); /* call 0x00032CAA */

loc_00366A5A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = MEM32(eax + 0x8C5424);
    eax = MEM32(ecx * 4 + 0x90076C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00366A80
 * Original: 0x00366A80 - 0x00366A97 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366A80: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    SET_LO8(edx, MEM8(eax + 0x8C543D));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00366AA0
 * Original: 0x00366AA0 - 0x00366AB3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366AA0: ;
    PUSH32(esp, 0x00366AA5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00366AA5: ;
    ecx = eax;
    PUSH32(esp, 0x00366AACu); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_00366AAC: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x70)); return; /* indirect tail jmp */

}

/**
 * sub_00366AC0
 * Original: 0x00366AC0 - 0x00366B4D (141 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366AC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    ecx = MEM32(eax + 0x8C4EA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax + 0x8C4EA8;
    MEM32(esp + 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00366B4A; /* jge: greater or equal (signed >=) */

loc_00366AE2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00366AEAu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00366AEA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00366AF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366AEEu); } /* indirect call */
    }

loc_00366AF1: ;
    PUSH32(esp, 0x00366AF6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00366AF6: ;
    ecx = eax;
    PUSH32(esp, 0x00366AFDu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00366AFD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00366B0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366B08u); } /* indirect call */
    }

loc_00366B0B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00366B12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366B0Fu); } /* indirect call */
    }

loc_00366B12: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00366B37; /* jle: less or equal (signed <=) */

loc_00366B1A: ;
    ebp = MEM32(esp + 0x10);
    edi = edi;

loc_00366B20: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00366B28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00366B25u); } /* indirect call */
    }

loc_00366B28: ;
    MEM32(ebp) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00366B20; /* jl: less (signed <) */

loc_00366B33: ;
    ebp = MEM32(esp + 0x18);

loc_00366B37: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x32);
    POP32(esp, edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp * 4 + 0x8C4EA8) = 0xFFFFFFFFu;
    POP32(esp, ebx);

loc_00366B4A: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00366B70
 * Original: 0x00366B70 - 0x00366B7E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366B70(void)
{

loc_00366B70: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    SET_LO8(eax, MEM8(eax + 0x8C543C));
    esp += 4; return; /* ret */

}

/**
 * sub_00366B90
 * Original: 0x00366B90 - 0x00366BF5 (101 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00366BA0: ;
    esi = MEM32(edi * 4 + 0x90076C);
    ecx = ebp;
    /* nop */

loc_00366BB0: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00366BD8; /* jne: not equal / not zero */

loc_00366BBA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00366BD4; /* je: equal / zero */

loc_00366BBE: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00366BD8; /* jne: not equal / not zero */

loc_00366BCA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00366BB0; /* jne: not equal / not zero */

loc_00366BD4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00366BDD;

loc_00366BD8: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00366BDD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00366BEE; /* je: equal / zero */

loc_00366BE1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00366BA0; /* jl: less (signed <) */

loc_00366BE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00366BEE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00366C10
 * Original: 0x00366C10 - 0x00366C1A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366C10(void)
{

loc_00366C10: ;
    eax = MEM32(esp + 4);
    eax = MEM32(0x8631FC);
    esp += 4; return; /* ret */

}

/**
 * sub_00366C20
 * Original: 0x00366C20 - 0x00366C2E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366C20(void)
{

loc_00366C20: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5420);
    esp += 4; return; /* ret */

}

/**
 * sub_00366C40
 * Original: 0x00366C40 - 0x00366C68 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366C40: ;
    ecx = MEM32(0x8C5420);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366C67; /* je: equal / zero */

loc_00366C4C: ;
    edx = MEM32(esp + 4);
    ecx = 0x8C5420;
    PUSH32(esp, esi);

loc_00366C56: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366C5C; /* jne: not equal / not zero */

loc_00366C5B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00366C5C: ;
    esi = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366C56; /* jne: not equal / not zero */

loc_00366C66: ;
    POP32(esp, esi);

loc_00366C67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00366C80
 * Original: 0x00366C80 - 0x00366CBB (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366C80: ;
    ecx = MEM32(0x8C5420);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00366CB5; /* je: equal / zero */

loc_00366C91: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = 0x8C5420;
    edi = edi;

loc_00366CA0: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366CAA; /* jne: not equal / not zero */

loc_00366CA5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366CB7; /* je: equal / zero */

loc_00366CA9: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00366CAA: ;
    ebx = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366CA0; /* jne: not equal / not zero */

loc_00366CB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00366CB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00366CD0
 * Original: 0x00366CD0 - 0x00366D10 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366CD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366CDAu); RECOMP_ABI_CALL(0x0002BBD0u, sub_0002BBD0); /* call 0x0002BBD0 */

loc_00366CDA: ;
    ecx = MEM32(0x8C5420);
    edx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366D0F; /* je: equal / zero */

loc_00366CEB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = 0x8C5428;

loc_00366CF6: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366D03; /* jne: not equal / not zero */

loc_00366CFB: ;
    edi = ZX8(MEM8(ecx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366D03; /* jne: not equal / not zero */

loc_00366D02: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00366D03: ;
    edi = MEM32(ecx + 0x34);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366CF6; /* jne: not equal / not zero */

loc_00366D0D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00366D0F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00366D20
 * Original: 0x00366D20 - 0x00366D84 (100 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366D20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366D2Eu); RECOMP_ABI_CALL(0x0002BBD0u, sub_0002BBD0); /* call 0x0002BBD0 */

loc_00366D2E: ;
    ecx = MEM32(0x8C5420);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366D6C; /* je: equal / zero */

loc_00366D3F: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    ecx = 0x8C5428;
    /* nop */

loc_00366D50: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366D61; /* jne: not equal / not zero */

loc_00366D55: ;
    ebp = ZX8(MEM8(ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366D61; /* jne: not equal / not zero */

loc_00366D5C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366D76; /* je: equal / zero */

loc_00366D60: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00366D61: ;
    ebp = MEM32(ecx + 0x34);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366D50; /* jne: not equal / not zero */

loc_00366D6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x7B891F;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00366D76: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    eax = MEM32(edx + 0x8C5420);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00366DA0
 * Original: 0x00366DA0 - 0x00366DC9 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366DA0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ecx + 0x8C5448); PUSH32(esp, 0x00366DB7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00366DB1u); } /* indirect call */
    }

loc_00366DB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366DC5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00366DC5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00366DE0
 * Original: 0x00366DE0 - 0x00366E45 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366DE0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x104);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5458);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366DFEu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00366DFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x00366E13u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00366E13: ;
    ecx = eax;
    PUSH32(esp, 0x00366E1Au); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_00366E1A: ;
    esi = MEM32(esp + 0x114);
    edi = MEM32(esp + 0x110);
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00366E34u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00366E34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + esi + -1) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00366E60
 * Original: 0x00366E60 - 0x00366E66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366E60(void)
{

loc_00366E60: ;
    eax = 0x8307A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00366E70
 * Original: 0x00366E70 - 0x00366E88 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366E70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x900FE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366E7Fu); RECOMP_ABI_CALL(0x0002251Cu, sub_0002251C); /* call 0x0002251C */

loc_00366E7F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x900FE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00366E90
 * Original: 0x00366E90 - 0x00366EE3 (83 bytes, 23 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366E90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00366EBC; /* ja: above (unsigned >) */

loc_00366E99: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x366EE4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00366EA0u) goto loc_00366EA0;
    if (_jt == 0x00366EA7u) goto loc_00366EA7;
    if (_jt == 0x00366EAEu) goto loc_00366EAE;
    if (_jt == 0x00366EB5u) goto loc_00366EB5;
    if (_jt == 0x00366EBCu) goto loc_00366EBC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00366EA0: ;
    PUSH32(esp, 0x83080C);
    goto loc_00366EC1;

loc_00366EA7: ;
    PUSH32(esp, 0x8307F8);
    goto loc_00366EC1;

loc_00366EAE: ;
    PUSH32(esp, 0x8307E0);
    goto loc_00366EC1;

loc_00366EB5: ;
    PUSH32(esp, 0x8307C8);
    goto loc_00366EC1;

loc_00366EBC: ;
    PUSH32(esp, 0x8307B4);

loc_00366EC1: ;
    PUSH32(esp, 0x00366EC6u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00366EC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x901030);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00366ED6u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00366ED6: ;
    ecx = eax;
    PUSH32(esp, 0x00366EDDu); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_00366EDD: ;
    eax = 0x901030;
    esp += 4; return; /* ret */

}

/**
 * sub_00366F2F
 * Original: 0x00366F2F - 0x00366F35 (6 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366F2F(void)
{

loc_00366F2F: ;
    eax = 0x830058;
    esp += 4; return; /* ret */

}

/**
 * sub_00366F35
 * Original: 0x00366F35 - 0x00366F3B (6 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366F35(void)
{

loc_00366F35: ;
    eax = 0x83081C;
    esp += 4; return; /* ret */

}

/**
 * sub_00366F50
 * Original: 0x00366F50 - 0x00366F7B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00366F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00366F50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00366F78; /* ja: above (unsigned >) */

loc_00366F59: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x366F7C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00366F60u) goto loc_00366F60;
    if (_jt == 0x00366F66u) goto loc_00366F66;
    if (_jt == 0x00366F6Cu) goto loc_00366F6C;
    if (_jt == 0x00366F72u) goto loc_00366F72;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00366F60: ;
    eax = 0x83083C;
    esp += 4; return; /* ret */

loc_00366F66: ;
    eax = 0x830834;
    esp += 4; return; /* ret */

loc_00366F6C: ;
    eax = 0x83082C;
    esp += 4; return; /* ret */

loc_00366F72: ;
    eax = 0x830828;
    esp += 4; return; /* ret */

loc_00366F78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00366FB6
 * Original: 0x00366FB6 - 0x00366FBC (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366FB6(void)
{

loc_00366FB6: ;
    eax = 0x83084C;
    esp += 4; return; /* ret */

}

/**
 * sub_00366FBC
 * Original: 0x00366FBC - 0x00366FC2 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366FBC(void)
{

loc_00366FBC: ;
    eax = 0x830844;
    esp += 4; return; /* ret */

}

/**
 * sub_00366FC2
 * Original: 0x00366FC2 - 0x00366FC8 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366FC2(void)
{

loc_00366FC2: ;
    eax = 0x830828;
    esp += 4; return; /* ret */

}

/**
 * sub_00367002
 * Original: 0x00367002 - 0x00367008 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367002(void)
{

loc_00367002: ;
    eax = 0x830828;
    esp += 4; return; /* ret */

}

/**
 * sub_00367008
 * Original: 0x00367008 - 0x0036700E (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367008(void)
{

loc_00367008: ;
    eax = 0x830860;
    esp += 4; return; /* ret */

}

/**
 * sub_0036700E
 * Original: 0x0036700E - 0x00367014 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036700E(void)
{

loc_0036700E: ;
    eax = 0x83085C;
    esp += 4; return; /* ret */

}

/**
 * sub_00367020
 * Original: 0x00367020 - 0x00367044 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367020: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0036703E; /* je: equal / zero */

loc_00367029: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367038; /* je: equal / zero */

loc_0036702C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367032; /* je: equal / zero */

loc_0036702F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00367032: ;
    eax = 0x830828;
    esp += 4; return; /* ret */

loc_00367038: ;
    eax = 0x830860;
    esp += 4; return; /* ret */

loc_0036703E: ;
    eax = 0x83085C;
    esp += 4; return; /* ret */

}

/**
 * sub_00367050
 * Original: 0x00367050 - 0x00367074 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367050: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0036706E; /* je: equal / zero */

loc_00367059: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367068; /* je: equal / zero */

loc_0036705C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367062; /* je: equal / zero */

loc_0036705F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00367062: ;
    eax = 0x830828;
    esp += 4; return; /* ret */

loc_00367068: ;
    eax = 0x830860;
    esp += 4; return; /* ret */

loc_0036706E: ;
    eax = 0x83085C;
    esp += 4; return; /* ret */

}

/**
 * sub_00367080
 * Original: 0x00367080 - 0x003670A4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367080: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0036709E; /* je: equal / zero */

loc_00367089: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367098; /* je: equal / zero */

loc_0036708C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367092; /* je: equal / zero */

loc_0036708F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00367092: ;
    eax = 0x830828;
    esp += 4; return; /* ret */

loc_00367098: ;
    eax = 0x830860;
    esp += 4; return; /* ret */

loc_0036709E: ;
    eax = 0x83085C;
    esp += 4; return; /* ret */

}

/**
 * sub_003670B0
 * Original: 0x003670B0 - 0x003670F4 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003670B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003670B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003670CD; /* je: equal / zero */

loc_003670B9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003670C6; /* je: equal / zero */

loc_003670BC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003670C6; /* jne: not equal / not zero */

loc_003670BF: ;
    PUSH32(esp, 0x830880);
    goto loc_003670D2;

loc_003670C6: ;
    PUSH32(esp, 0x830870);
    goto loc_003670D2;

loc_003670CD: ;
    PUSH32(esp, 0x830864);

loc_003670D2: ;
    PUSH32(esp, 0x003670D7u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003670D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x901080);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003670E7u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003670E7: ;
    ecx = eax;
    PUSH32(esp, 0x003670EEu); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_003670EE: ;
    eax = 0x901080;
    esp += 4; return; /* ret */

}

/**
 * sub_00367110
 * Original: 0x00367110 - 0x00367131 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367110: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036712C; /* je: equal / zero */

loc_00367121: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00367128u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00367126u); } /* indirect call */
    }

loc_00367128: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036712C: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00367140
 * Original: 0x00367140 - 0x00367178 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367140: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00367151; /* je: equal / zero */

loc_00367149: ;
    PUSH32(esp, 0x830870);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00367156;

loc_00367151: ;
    PUSH32(esp, 0x830880);

loc_00367156: ;
    PUSH32(esp, 0x0036715Bu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036715B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x9010D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036716Bu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036716B: ;
    ecx = eax;
    PUSH32(esp, 0x00367172u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_00367172: ;
    eax = 0x9010D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00367190
 * Original: 0x00367190 - 0x003671E3 (83 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0x8C4EA8;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx;

loc_003671A1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003671A7u); RECOMP_ABI_CALL(0x000377D7u, sub_000377D7); /* call 0x000377D7 */

loc_003671A7: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003671C0; /* jl: less (signed <) */

loc_003671B0: ;
    ecx = ebx;

loc_003671B2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003671DC; /* je: equal / zero */

loc_003671B6: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003671B2; /* jge: greater or equal (signed >=) */

loc_003671C0: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C5420) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C5420 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003671A1; /* jl: less (signed <) */

loc_003671D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003671DC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367200
 * Original: 0x00367200 - 0x00367262 (98 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x900680);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00367253; /* je: equal / zero */

loc_00367210: ;
    ebp = MEM32(esp + 0x14);

loc_00367214: ;
    ecx = ebp;

loc_00367216: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036723E; /* jne: not equal / not zero */

loc_00367220: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036723A; /* je: equal / zero */

loc_00367224: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036723E; /* jne: not equal / not zero */

loc_00367230: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00367216; /* jne: not equal / not zero */

loc_0036723A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00367243;

loc_0036723E: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00367243: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036725B; /* je: equal / zero */

loc_00367247: ;
    esi = MEM32(edi * 8 + 0x900688);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00367214; /* jne: not equal / not zero */

loc_00367253: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0036725B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367280
 * Original: 0x00367280 - 0x0036729F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367280: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx * 8 + 0x900684);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036729E; /* je: equal / zero */

loc_00367293: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367293; /* jne: not equal / not zero */

loc_0036729E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003672B0
 * Original: 0x003672B0 - 0x003672BC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003672B0(void)
{

loc_003672B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 8 + 0x8C58B0);
    esp += 4; return; /* ret */

}

/**
 * sub_003672C0
 * Original: 0x003672C0 - 0x0036733E (126 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003672C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003672C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003672CEu); RECOMP_ABI_CALL(0x0002A94Cu, sub_0002A94C); /* call 0x0002A94C */

loc_003672CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003672E3; /* jl: less (signed <) */

loc_003672D5: ;
    eax = MEM32(eax * 8 + 0x900684);
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(eax + ecx * 4);

loc_003672E3: ;
    esi = MEM32(0x8C58B0);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036732F; /* je: equal / zero */

loc_003672EF: ;
    /* nop */

loc_003672F0: ;
    ecx = ebp;

loc_003672F2: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036731A; /* jne: not equal / not zero */

loc_003672FC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00367316; /* je: equal / zero */

loc_00367300: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036731A; /* jne: not equal / not zero */

loc_0036730C: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003672F2; /* jne: not equal / not zero */

loc_00367316: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036731F;

loc_0036731A: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036731F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00367337; /* je: equal / zero */

loc_00367323: ;
    esi = MEM32(edi * 8 + 0x8C58B8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003672F0; /* jne: not equal / not zero */

loc_0036732F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00367337: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367360
 * Original: 0x00367360 - 0x0036737F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367360: ;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx * 8 + 0x8C58B4);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036737E; /* je: equal / zero */

loc_00367373: ;
    edx = MEM32(ecx + 0x34);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367373; /* jne: not equal / not zero */

loc_0036737E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00367390
 * Original: 0x00367390 - 0x003673A6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367390(void)
{

loc_00367390: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    edx = MEM32(ecx * 8 + 0x8C58B4);
    eax = MEM32(eax + edx);
    esp += 4; return; /* ret */

}

/**
 * sub_003673B0
 * Original: 0x003673B0 - 0x003673E2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003673B0: ;
    eax = MEM32(0x8C5420);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003673DE; /* je: equal / zero */

loc_003673BB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0x8C5428;

loc_003673C5: ;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003673D3; /* jne: not equal / not zero */

loc_003673CA: ;
    ecx = ZX8(MEM8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003673D3; /* jle: less or equal (signed <=) */

loc_003673D1: ;
    edx = ecx;

loc_003673D3: ;
    ecx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003673C5; /* jne: not equal / not zero */

loc_003673DD: ;
    POP32(esp, esi);

loc_003673DE: ;
    eax = edx + 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003673F0
 * Original: 0x003673F0 - 0x0036741B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003673F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003673FFu); RECOMP_ABI_CALL(0x00030342u, sub_00030342); /* call 0x00030342 */

loc_003673FF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    SET_LO8(ecx, MEM8(esp + 0x14));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367414; /* je: equal / zero */

loc_0036740D: ;
    eax = MEM32(eax + 0x8C5444);
    esp += 4; return; /* ret */

loc_00367414: ;
    eax = MEM32(eax + 0x8C5440);
    esp += 4; return; /* ret */

}

/**
 * sub_00367430
 * Original: 0x00367430 - 0x00367591 (353 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367430: ;
    eax = MEM32(0x8C58B0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036748E; /* je: equal / zero */

loc_0036743E: ;
    ebp = MEM32(esp + 0x14);

loc_00367442: ;
    esi = ebp;

loc_00367444: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00367468; /* jne: not equal / not zero */

loc_0036744C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00367464; /* je: equal / zero */

loc_00367450: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00367468; /* jne: not equal / not zero */

loc_0036745A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00367444; /* jne: not equal / not zero */

loc_00367464: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036746D;

loc_00367468: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036746D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00367483; /* je: equal / zero */

loc_00367471: ;
    eax = MEM32(edi * 8 + 0x8C58B8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00367442; /* jne: not equal / not zero */

loc_0036747D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00367483: ;
    edi = MEM32(edi * 8 + 0x8C58B4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00367494; /* jne: not equal / not zero */

loc_0036748E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00367494: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036758B; /* je: equal / zero */

loc_0036749E: ;
    ebp = MEM32(esp + 0x18);

loc_003674A2: ;
    esi = ebp;

loc_003674A4: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003674C8; /* jne: not equal / not zero */

loc_003674AC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003674C4; /* je: equal / zero */

loc_003674B0: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003674C8; /* jne: not equal / not zero */

loc_003674BA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003674A4; /* jne: not equal / not zero */

loc_003674C4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003674CD;

loc_003674C8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003674CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003674E1; /* je: equal / zero */

loc_003674D1: ;
    eax = MEM32(edi + 0x34);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x34)) >> 32) & 1);
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003674A2; /* jne: not equal / not zero */

loc_003674DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003674E1: ;
    eax = MEM32(edi);
    ebp = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    ecx = MEM32(edi + 4);
    MEM32(ebp + 4) = ecx;
    edx = MEM32(edi + 8);
    MEM32(ebp + 8) = edx;
    eax = MEM32(edi + 0xC);
    MEM32(ebp + 0xC) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(ebp + 0x10) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(ebp + 0x14) = edx;
    eax = MEM32(edi + 0x18);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036751C; /* je: equal / zero */

loc_00367515: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00367517u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00367515u); } /* indirect call */
    }

loc_00367517: ;
    MEM32(ebp + 0x1C) = eax;
    goto loc_00367522;

loc_0036751C: ;
    ecx = MEM32(edi + 0x20);
    MEM32(ebp + 0x1C) = ecx;

loc_00367522: ;
    edx = MEM32(edi + 0x24);
    MEM32(ebp + 0x20) = edx;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax * 4 + 0x8C4E3C);
    MEM32(ebp + 0x24) = ecx;
    edx = MEM32(edi + 0x2C);
    MEM32(ebp + 0x28) = edx;
    SET_LO8(eax, MEM8(edi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036754B; /* je: equal / zero */

loc_00367542: ;
    MEM32(ebp + 0x2C) = 0x7DF5A0;
    goto loc_00367552;

loc_0036754B: ;
    MEM32(ebp + 0x2C) = 0x7DF588;

loc_00367552: ;
    edi = MEM32(ebp + 0x1C);
    esi = 0x7B891F;
    ecx = 1;
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
    if ((_flags == 0)) goto loc_0036758B; /* jne: not equal / not zero */

loc_00367565: ;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036758B; /* jne: not equal / not zero */

loc_0036756B: ;
    eax = 0xFFFFEED0u;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 0x10) = 0;
    MEM32(ebp + 0x14) = 0;
    MEM32(ebp + 0x1C) = 0x830890;

loc_0036758B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003675F0
 * Original: 0x003675F0 - 0x003677B7 (455 bytes, 146 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003675F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003675F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003677B3; /* jne: not equal / not zero */

loc_003675FF: ;
    SET_LO8(eax, MEM8(esi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003677B3; /* jne: not equal / not zero */

loc_0036760D: ;
    ecx = MEM32(0x902558);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00367621u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036761Eu); } /* indirect call */
    }

loc_00367621: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036762E; /* je: equal / zero */

loc_00367625: ;
    ecx = eax;
    PUSH32(esp, 0x0036762Cu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0036762C: ;
    goto loc_00367630;

loc_0036762E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00367630: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF64C);
    ecx = eax;
    MEM32(0x90068C) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036764Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036764Bu); } /* indirect call */
    }

loc_0036764E: ;
    eax = MEM32(0x90068C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367659u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00367659: ;
    ecx = eax;
    PUSH32(esp, 0x00367660u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00367660: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00367674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00367671u); } /* indirect call */
    }

loc_00367674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367681; /* je: equal / zero */

loc_00367678: ;
    ecx = eax;
    PUSH32(esp, 0x0036767Fu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0036767F: ;
    goto loc_00367683;

loc_00367681: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00367683: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF628);
    ecx = eax;
    MEM32(0x900688) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003676A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036769Eu); } /* indirect call */
    }

loc_003676A1: ;
    eax = MEM32(0x900688);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003676ACu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003676AC: ;
    ecx = eax;
    PUSH32(esp, 0x003676B3u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_003676B3: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003676C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003676C4u); } /* indirect call */
    }

loc_003676C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003676D4; /* je: equal / zero */

loc_003676CB: ;
    ecx = eax;
    PUSH32(esp, 0x003676D2u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_003676D2: ;
    goto loc_003676D6;

loc_003676D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003676D6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x8308D0);
    ecx = eax;
    MEM32(0x900690) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003676F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003676F1u); } /* indirect call */
    }

loc_003676F4: ;
    eax = MEM32(0x900690);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003676FFu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003676FF: ;
    ecx = eax;
    PUSH32(esp, 0x00367706u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00367706: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036771Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00367717u); } /* indirect call */
    }

loc_0036771A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367727; /* je: equal / zero */

loc_0036771E: ;
    ecx = eax;
    PUSH32(esp, 0x00367725u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_00367725: ;
    goto loc_00367729;

loc_00367727: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00367729: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x8308B8);
    ecx = eax;
    MEM32(0x900698) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00367747u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00367744u); } /* indirect call */
    }

loc_00367747: ;
    eax = MEM32(0x900698);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367752u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00367752: ;
    ecx = eax;
    PUSH32(esp, 0x00367759u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00367759: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036776Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036776Au); } /* indirect call */
    }

loc_0036776D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036777A; /* je: equal / zero */

loc_00367771: ;
    ecx = eax;
    PUSH32(esp, 0x00367778u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_00367778: ;
    goto loc_0036777C;

loc_0036777A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036777C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x8308A4);
    ecx = eax;
    MEM32(0x900694) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036779Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00367797u); } /* indirect call */
    }

loc_0036779A: ;
    eax = MEM32(0x900694);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003677A5u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003677A5: ;
    ecx = eax;
    PUSH32(esp, 0x003677ACu); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_003677AC: ;
    MEM8(esi + 0x100) = 1;

loc_003677B3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367830
 * Original: 0x00367830 - 0x00367843 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367830: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00367837u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00367837: ;
    ecx = eax;
    PUSH32(esp, 0x0036783Eu); RECOMP_ABI_CALL(0x00028601u, sub_00028601); /* call 0x00028601 */

loc_0036783E: ;
    g_seh_ebp = ebp; sub_0002AA2D(); return; /* tail jmp 0x0002AA2D */

}

/**
 * sub_00367850
 * Original: 0x00367850 - 0x0036786A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0036785Au); RECOMP_ABI_CALL(0x0059CE69u, sub_0059CE69); /* call 0x0059CE69 */

loc_0036785A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400000 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_L(_fas, _fbs)) goto loc_00367868; /* jl: less (signed <) */

loc_00367866: ;
    SET_LO8(eax, LO8(ebx));

loc_00367868: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367870
 * Original: 0x00367870 - 0x0036788C (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367870: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367889; /* jne: not equal / not zero */

loc_0036787A: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367889; /* je: equal / zero */

loc_00367881: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00367888u); RECOMP_ABI_CALL(0x0059CE69u, sub_0059CE69); /* call 0x0059CE69 */

loc_00367888: ;
    POP32(esp, ecx);

loc_00367889: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003678A0
 * Original: 0x003678A0 - 0x003678AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003678A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003678A0: ;
    PUSH32(esp, 0x003678A5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003678A5: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_003678B0
 * Original: 0x003678B0 - 0x003678B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003678B0(void)
{

loc_003678B0: ;
    eax = ecx;
    MEM32(eax) = 0x8308E8;
    esp += 4; return; /* ret */

}

/**
 * sub_003678C0
 * Original: 0x003678C0 - 0x003678C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003678C0(void)
{

loc_003678C0: ;
    MEM32(ecx) = 0x82FF44;
    esp += 4; return; /* ret */

}

/**
 * sub_003678D0
 * Original: 0x003678D0 - 0x003678D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003678D0(void)
{

loc_003678D0: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_003678E0
 * Original: 0x003678E0 - 0x00367910 (48 bytes, 12 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003678E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003678E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00367908; /* ja: above (unsigned >) */

loc_003678E9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x367910); /* switch: 4 entries, 3 targets */
    if (_jt == 0x003678F0u) goto loc_003678F0;
    if (_jt == 0x003678F8u) goto loc_003678F8;
    if (_jt == 0x00367900u) goto loc_00367900;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003678F0: ;
    eax = 0x7ED98C;
    esp += 8; return; /* ret 4 */

loc_003678F8: ;
    eax = 0x7ED954;
    esp += 8; return; /* ret 4 */

loc_00367900: ;
    eax = 0x7ED92C;
    esp += 8; return; /* ret 4 */

loc_00367908: ;
    eax = 0x83090C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367B48
 * Original: 0x00367B48 - 0x00367B50 (8 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367B48(void)
{

loc_00367B48: ;
    eax = 0x830958;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367B50
 * Original: 0x00367B50 - 0x00367B58 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367B50(void)
{

loc_00367B50: ;
    eax = 0x830960;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367B58
 * Original: 0x00367B58 - 0x00367B60 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367B58(void)
{

loc_00367B58: ;
    eax = 0x830910;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367B60
 * Original: 0x00367B60 - 0x00367B68 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367B60(void)
{

loc_00367B60: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367BF0
 * Original: 0x00367BF0 - 0x00367C2C (60 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367BF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x8B22D0;
    MEM32(esi) = 0x830970;
    PUSH32(esp, 0x00367C03u); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_00367C03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367C1D; /* je: equal / zero */

loc_00367C07: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00367C11u); RECOMP_ABI_CALL(0x0001F64Bu, sub_0001F64B); /* call 0x0001F64B */

loc_00367C11: ;
    PUSH32(esp, 0);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00367C1Du); RECOMP_ABI_CALL(0x000354FFu, sub_000354FF); /* call 0x000354FF */

loc_00367C1D: ;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x82FF68;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00367C40
 * Original: 0x00367C40 - 0x00367C4E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367C40: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367C4D; /* je: equal / zero */

loc_00367C47: ;
    ecx = eax;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00367C4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00367C60
 * Original: 0x00367C60 - 0x00367C7D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367C60: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00367C6Au); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_00367C6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367C77; /* je: equal / zero */

loc_00367C6E: ;
    eax = MEM32(0x8F1908);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C7C; /* jne: not equal / not zero */

loc_00367C77: ;
    eax = 0x7B891F;

loc_00367C7C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00367C90
 * Original: 0x00367C90 - 0x00367CAE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367C90: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00367C9Au); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_00367C9A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367CA8; /* je: equal / zero */

loc_00367C9E: ;
    eax = MEM32(0x8F1908);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00367CAD; /* jne: not equal / not zero */

loc_00367CA8: ;
    eax = 0x7B891F;

loc_00367CAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00367CC0
 * Original: 0x00367CC0 - 0x00367CE0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367CC0: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00367CCAu); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_00367CCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367CDA; /* je: equal / zero */

loc_00367CCE: ;
    eax = MEM32(0x8F1908);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00367CDF; /* jne: not equal / not zero */

loc_00367CDA: ;
    eax = 0x7B891F;

loc_00367CDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00367CF0
 * Original: 0x00367CF0 - 0x00367D1E (46 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367CF0: ;
    PUSH32(esp, 0x00367CF5u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00367CF5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367CFFu); RECOMP_ABI_CALL(0x00588D5Cu, sub_00588D5C); /* call 0x00588D5C */

loc_00367CFF: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00367D09u); RECOMP_ABI_CALL(0x00588D69u, sub_00588D69); /* call 0x00588D69 */

loc_00367D09: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00367D11u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00367D11: ;
    edx = MEM32(esp + 0xC);
    MEM32(edx) = 0x1A;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00367D30
 * Original: 0x00367D30 - 0x00367D4A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367D30: ;
    PUSH32(esp, 0x00367D35u); RECOMP_ABI_CALL(0x005878F6u, sub_005878F6); /* call 0x005878F6 */

loc_00367D35: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367D3Fu); RECOMP_ABI_CALL(0x00588D4Bu, sub_00588D4B); /* call 0x00588D4B */

loc_00367D3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00367D47u); RECOMP_ABI_CALL(0x00587904u, sub_00587904); /* call 0x00587904 */

loc_00367D47: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367D50
 * Original: 0x00367D50 - 0x00367D51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D50(void)
{

loc_00367D50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00367D60
 * Original: 0x00367D60 - 0x00367D85 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D60: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367D83; /* je: equal / zero */

loc_00367D76: ;
    PUSH32(esp, 0x00367D7Bu); RECOMP_ABI_CALL(0x00561155u, sub_00561155); /* call 0x00561155 */

loc_00367D7B: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_00367D83: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00367D90
 * Original: 0x00367D90 - 0x00367D9F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D90: ;
    PUSH32(esp, 0x00367D95u); RECOMP_ABI_CALL(0x0002A93Du, sub_0002A93D); /* call 0x0002A93D */

loc_00367D95: ;
    PUSH32(esp, 0x00367D9Au); RECOMP_ABI_CALL(0x000293A3u, sub_000293A3); /* call 0x000293A3 */

loc_00367D9A: ;
    g_seh_ebp = ebp; sub_00599556(); return; /* tail jmp 0x00599556 */

}

/**
 * sub_00367DB0
 * Original: 0x00367DB0 - 0x00367F3A (394 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00367DB0(void)
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

loc_00367DB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367DC1u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00367DC1: ;
    ebx = eax;
    eax = MEM32(ebx + 0x10);
    esi = eax + 0x50;
    SET_LO8(eax, MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = 0x10;
    edi = esp + 0x20;
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
    if (CMP_NE(_fa, _fb)) goto loc_00367ED8; /* jne: not equal / not zero */

loc_00367DDF: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367DEEu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00367DEE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367DF5u); RECOMP_ABI_CALL(0x0055D4AAu, sub_0055D4AA); /* call 0x0055D4AA */

loc_00367DF5: ;
    ecx = MEM32(esp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367DFEu); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00367DFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00367E10; /* jge: greater or equal (signed >=) */

loc_00367E0A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00367E10: ;
    ecx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x83098C); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367E39u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00367E39: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00367E4B; /* jge: greater or equal (signed >=) */

loc_00367E45: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00367E4B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C3B80)); /* fmul dword ptr [0x7c3b80] */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C40B8)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA8AC)); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    goto loc_00367F21;

loc_00367ED8: ;
    SET_LO8(ecx, MEM8(0x8FC1CD));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0x82EB80)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0x82EB88)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0x82EB70)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax * 4 + 0x82EB78)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */

loc_00367F21: ;
    ecx = MEM32(ebx + 0x10);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367F33u); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_00367F33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00367FA0
 * Original: 0x00367FA0 - 0x00367FBE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00367FA8u); RECOMP_ABI_CALL(0x00022DFAu, sub_00022DFA); /* call 0x00022DFA */

loc_00367FA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367FB8; /* je: equal / zero */

loc_00367FAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00367FB5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00367FB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00367FB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367FD0
 * Original: 0x00367FD0 - 0x00367FEE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00367FD8u); RECOMP_ABI_CALL(0x0001B50Au, sub_0001B50A); /* call 0x0001B50A */

loc_00367FD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00367FE8; /* je: equal / zero */

loc_00367FDF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00367FE5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00367FE5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00367FE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00368000
 * Original: 0x00368000 - 0x00368288 (648 bytes, 205 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368000(void)
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

loc_00368000: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    eax = MEM32(edi + 0x48);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edi + 0x14);
    MEM32(esp + 0x18) = ecx;
    ecx = eax + eax * 2 + 6;
    ebp = ZX16(MEM16(edi + ecx * 4));
    edx = eax + eax * 2;
    eax = ZX8(MEM8(edi + edx * 4 + 0x1A));
    ecx = ebp;
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    MEM32(esp + 0x10) = eax;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = 0x8C5C10;
    /* nop */

loc_00368050: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    eax = ZX16(MEM16(edi + eax * 4));
    ecx = edx;
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368097; /* je: equal / zero */

loc_00368069: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00368079; /* je: equal / zero */

loc_00368070: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x10) = LO8(ebx);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    goto loc_00368083;

loc_00368079: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */

loc_00368083: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00368088; /* je: equal / zero */

loc_00368085: ;
    edx = MEM32(esi + 8);

loc_00368088: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00368094u); RECOMP_ABI_CALL(0x00505D60u, sub_00505D60); /* call 0x00505D60 */

loc_00368094: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00368097: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C5D00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C5D00 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00368050; /* jl: less (signed <) */

loc_003680A2: ;
    eax = MEM32(edi + 0x14);
    edx = eax + eax * 2;
    SET_LO8(eax, MEM8(edi + edx * 4 + 0x1B));
    ecx = edi + edx * 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xCE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xCE (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003680BA; /* jge: greater or equal (signed >=) */

loc_003680B5: ;
    ebp = 8;

loc_003680BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x32 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003680C1; /* jle: less or equal (signed <=) */

loc_003680BE: ;
    ebp = ebp | 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003680C1: ;
    SET_LO8(ecx, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xCE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xCE (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003680CC; /* jge: greater or equal (signed >=) */

loc_003680C9: ;
    ebp = ebp | 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003680CC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x32 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003680D4; /* jle: less or equal (signed <=) */

loc_003680D1: ;
    ebp = ebp | 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003680D4: ;
    ebx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ebx + 0xF4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003680E8; /* je: equal / zero */

loc_003680E2: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | ebp;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00368118;

loc_003680E8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003680F5; /* je: equal / zero */

loc_003680EC: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    goto loc_0036810B;

loc_003680F5: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx * 4 + 0x90111C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368118; /* je: equal / zero */

loc_00368104: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 1);

loc_0036810B: ;
    PUSH32(esp, 0x1F5);
    PUSH32(esp, 0x00368115u); RECOMP_ABI_CALL(0x00505D60u, sub_00505D60); /* call 0x00505D60 */

loc_00368115: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00368118: ;
    esi = 0x8C5BBC;
    /* nop */

loc_00368120: ;
    eax = MEM32(esi + -12);
    ecx = MEM32(esp + 0x10);
    edx = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00368164; /* je: equal / zero */

loc_0036812D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0036815C; /* jg: greater (signed >) */

loc_00368133: ;
    eax = MEM32(ebx + 0xF0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036814D; /* jle: less or equal (signed <=) */

loc_00368140: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xF0) = eax;
    MEM32(esi) = eax;
    goto loc_0036819D;

loc_0036814D: ;
    eax = 0xA;
    MEM32(ebx + 0xF0) = eax;
    MEM32(esi) = eax;
    goto loc_0036819D;

loc_0036815C: ;
    _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = eax;
    goto loc_003681AF;

loc_00368164: ;
    ecx = MEM32(edi + 0x14);
    ecx = ecx + ecx * 2;
    ecx = ZX8(MEM8(edi + ecx * 4 + 0x32));
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368188; /* jne: not equal / not zero */

loc_00368175: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx * 4 + 0x90111C);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003681AF; /* je: equal / zero */

loc_00368188: ;
    MEM32(esi) = 0;
    ecx = 1;
    MEM32(ebx + 0xF0) = 0x8C;

loc_0036819D: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esi + -8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003681ACu); RECOMP_ABI_CALL(0x00505D60u, sub_00505D60); /* call 0x00505D60 */

loc_003681AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003681AF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C5C0C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C5C0C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00368120; /* jl: less (signed <) */

loc_003681BE: ;
    ecx = MEM32(esp + 0x14);
    MEM32(ecx * 4 + 0x90111C) = ebp;
    eax = MEM32(edi + 0x14);
    edx = eax + eax * 2;
    SET_LO8(ecx, MEM8(edi + edx * 4 + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x1E (8-bit) */
    eax = edi + edx * 4;
    SET_LO8(eax, MEM8(eax + 0x1E));
    if (CMP_G(_fas, _fbs)) goto loc_003681EF; /* jg: greater (signed >) */

loc_003681DE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xE2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xE2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003681EF; /* jl: less (signed <) */

loc_003681E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1E (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003681EF; /* jg: greater (signed >) */

loc_003681E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xE2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xE2 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036827E; /* jge: greater or equal (signed >=) */

loc_003681EF: ;
    xmm2 = XMM_SCALAR(MEMF(0x7DADA4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = SX8(LO8(ecx));
    edx = SX8(LO8(eax));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00368227; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00368222: ;
    xmm0 = xmm2; /* movaps */
    goto loc_0036822F;

loc_00368227: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0036822F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0036822C: ;
    xmm0 = xmm3; /* movaps */

loc_0036822F: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00368239; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_00368234: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00368241;

loc_00368239: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00368241; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0036823E: ;
    xmm1 = xmm3; /* movaps */

loc_00368241: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    ecx = esp;
    MEM32(ecx) = edx;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = edx;
    MEM8(esp + 0x34) = LO8(eax);
    edx = MEM32(esp + 0x34);
    eax = 0x1F6;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x0036827Bu); RECOMP_ABI_CALL(0x00505DA0u, sub_00505DA0); /* call 0x00505DA0 */

loc_0036827B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036827E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00368330
 * Original: 0x00368330 - 0x00368331 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368330(void)
{

loc_00368330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368340
 * Original: 0x00368340 - 0x00368460 (288 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00368340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00368351u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00368351: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00368358u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_00368358: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00368379; /* je: equal / zero */

loc_00368362: ;
    ecx = MEM32(eax + 0x14);
    edx = ecx + ecx * 2;
    edx = ZX8(MEM8(eax + edx * 4 + 0x1A));
    ecx = ecx + ecx * 2 + 6;
    ebx = ZX16(MEM16(eax + ecx * 4));
    MEM32(esp + 0x1C) = edx;

loc_00368379: ;
    MEM8(esp + 0x1B) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00368383u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00368383: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    eax = MEM32(eax + 0x10);
    esi = eax + 0x50;
    ecx = 0x10;
    edi = esp + 0x20;
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
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(0x901150) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEMF(0x90114C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(0x901148) = xmm0.f[0]; /* movss */
    MEMF(0x901144) = xmm1.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00368459; /* je: equal / zero */

loc_003683D5: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    xmm2 = XMM_SCALAR(MEMF(0x7C2700)); /* movss */
    SET_LO8(edx, 1);
    if (TEST_Z(_fa, _fb)) goto loc_003683F8; /* je: equal / zero */

loc_003683E8: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x901148) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x1B) = LO8(edx);

loc_003683F8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036840D; /* je: equal / zero */

loc_003683FD: ;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x901148) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x1B) = LO8(edx);

loc_0036840D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368421; /* je: equal / zero */

loc_00368411: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x901144) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x1B) = LO8(edx);

loc_00368421: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00368434; /* je: equal / zero */

loc_00368426: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(0x901144) = xmm1.f[0]; /* movss */
    goto loc_0036843C;

loc_00368434: ;
    SET_LO8(ecx, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368459; /* je: equal / zero */

loc_0036843C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00368459u); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_00368459: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003684B0
 * Original: 0x003684B0 - 0x003684D9 (41 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003684B0: ;
    eax = MEM32(ecx + 0xEC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ecx + 0xEC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003684D6; /* jl: less (signed <) */

loc_003684C2: ;
    MEM32(ecx + 0xEC) = 0;
    MEM32(ecx + 0xC0) = 4;

loc_003684D6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003684F0
 * Original: 0x003684F0 - 0x00368509 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003684F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x003684FAu); RECOMP_ABI_CALL(0x00509990u, sub_00509990); /* call 0x00509990 */

loc_003684FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC0) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00368510
 * Original: 0x00368510 - 0x003686AA (410 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368510: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0036851Bu); RECOMP_ABI_CALL(0x00544680u, sub_00544680); /* call 0x00544680 */

loc_0036851B: ;
    PUSH32(esp, 0x00368520u); RECOMP_ABI_CALL(0x005447C0u, sub_005447C0); /* call 0x005447C0 */

loc_00368520: ;
    PUSH32(esp, 0x00368525u); RECOMP_ABI_CALL(0x000159B1u, sub_000159B1); /* call 0x000159B1 */

loc_00368525: ;
    ecx = esp + 8;
    eax = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi + 0xD8;
    MEM32(esp + 8) = 2;
    MEM32(esp + 0xC) = 0x48D8683;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0036854Du); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0036854D: ;
    MEM32(esi + 0xC0) = 5;
    eax = MEM32(0x900268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003686A6; /* je: equal / zero */

loc_00368565: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036862D; /* jne: not equal / not zero */

loc_00368571: ;
    PUSH32(esp, 0x00368576u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00368576: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036857Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036857Au); } /* indirect call */
    }

loc_0036857D: ;
    ecx = MEM32(0x900270);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_G(_fas, _fbs)) goto loc_003685CE; /* jg: greater (signed >) */

loc_0036858A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0036858Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036858Au); } /* indirect call */
    }

loc_0036858D: ;
    ecx = eax;
    PUSH32(esp, 0x00368594u); RECOMP_ABI_CALL(0x000296A0u, sub_000296A0); /* call 0x000296A0 */

loc_00368594: ;
    ecx = MEM32(0x900268);
    MEM32(ecx + 0x18) = 7;
    PUSH32(esp, 0x003685A6u); RECOMP_ABI_CALL(0x004EB8ACu, sub_004EB8AC); /* call 0x004EB8AC */

loc_003685A6: ;
    PUSH32(esp, 0x003685ABu); RECOMP_ABI_CALL(0x004EB5F0u, sub_004EB5F0); /* call 0x004EB5F0 */

loc_003685AB: ;
    PUSH32(esp, 0x003685B0u); RECOMP_ABI_CALL(0x004C0330u, sub_004C0330); /* call 0x004C0330 */

loc_003685B0: ;
    PUSH32(esp, 0x003685B5u); RECOMP_ABI_CALL(0x004EB07Eu, sub_004EB07E); /* call 0x004EB07E */

loc_003685B5: ;
    PUSH32(esp, 0x003685BAu); RECOMP_ABI_CALL(0x004EAD65u, sub_004EAD65); /* call 0x004EAD65 */

loc_003685BA: ;
    PUSH32(esp, 0x003685BFu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_003685BF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x75);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003685CAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003685C7u); } /* indirect call */
    }

loc_003685CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003685CE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x003685D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003685CEu); } /* indirect call */
    }

loc_003685D1: ;
    ecx = eax;
    PUSH32(esp, 0x003685D8u); RECOMP_ABI_CALL(0x000296A0u, sub_000296A0); /* call 0x000296A0 */

loc_003685D8: ;
    ecx = MEM32(0x900268);
    MEM32(ecx + 0x18) = 7;
    PUSH32(esp, 0x003685EAu); RECOMP_ABI_CALL(0x004EB8ACu, sub_004EB8AC); /* call 0x004EB8AC */

loc_003685EA: ;
    PUSH32(esp, 0x003685EFu); RECOMP_ABI_CALL(0x004EB5F0u, sub_004EB5F0); /* call 0x004EB5F0 */

loc_003685EF: ;
    PUSH32(esp, 0x003685F4u); RECOMP_ABI_CALL(0x004C0330u, sub_004C0330); /* call 0x004C0330 */

loc_003685F4: ;
    PUSH32(esp, 0x003685F9u); RECOMP_ABI_CALL(0x004EB07Eu, sub_004EB07E); /* call 0x004EB07E */

loc_003685F9: ;
    PUSH32(esp, 0x003685FEu); RECOMP_ABI_CALL(0x004EAD65u, sub_004EAD65); /* call 0x004EAD65 */

loc_003685FE: ;
    PUSH32(esp, 0x00368603u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00368603: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0036860Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368607u); } /* indirect call */
    }

loc_0036860A: ;
    PUSH32(esp, 0x0036860Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036860F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00368616u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368613u); } /* indirect call */
    }

loc_00368616: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036861Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036861Au); } /* indirect call */
    }

loc_0036861D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9001E8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00368629u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00368626u); } /* indirect call */
    }

loc_00368629: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036862D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003686A6; /* jne: not equal / not zero */

loc_00368632: ;
    ecx = MEM32(0x900270);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0036863Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036863Au); } /* indirect call */
    }

loc_0036863D: ;
    ecx = eax;
    PUSH32(esp, 0x00368644u); RECOMP_ABI_CALL(0x000296A0u, sub_000296A0); /* call 0x000296A0 */

loc_00368644: ;
    PUSH32(esp, 0x166EF);
    PUSH32(esp, 0x0036864Eu); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0036864E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00368656u); RECOMP_ABI_CALL(0x004EB8ACu, sub_004EB8AC); /* call 0x004EB8AC */

loc_00368656: ;
    PUSH32(esp, 0x0036865Bu); RECOMP_ABI_CALL(0x004EB5F0u, sub_004EB5F0); /* call 0x004EB5F0 */

loc_0036865B: ;
    PUSH32(esp, 0x00368660u); RECOMP_ABI_CALL(0x004C0330u, sub_004C0330); /* call 0x004C0330 */

loc_00368660: ;
    PUSH32(esp, 0x00368665u); RECOMP_ABI_CALL(0x004EB07Eu, sub_004EB07E); /* call 0x004EB07E */

loc_00368665: ;
    PUSH32(esp, 0x0036866Au); RECOMP_ABI_CALL(0x004EAD65u, sub_004EAD65); /* call 0x004EAD65 */

loc_0036866A: ;
    PUSH32(esp, 0x0036866Fu); RECOMP_ABI_CALL(0x004DBBF9u, sub_004DBBF9); /* call 0x004DBBF9 */

loc_0036866F: ;
    ecx = MEM32(0x900270);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368680; /* je: equal / zero */

loc_00368679: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00368680u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036867Du); } /* indirect call */
    }

loc_00368680: ;
    ecx = MEM32(0x9001E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x900270) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003686A2; /* jne: not equal / not zero */

loc_00368694: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036869Bu); RECOMP_ABI_CALL(0x00032421u, sub_00032421); /* call 0x00032421 */

loc_0036869B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003686A2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003686A6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003686A4u); } /* indirect call */
    }

loc_003686A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00368710
 * Original: 0x00368710 - 0x0036872F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368710: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036872D; /* je: equal / zero */

loc_0036871D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00368723u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368721u); } /* indirect call */
    }

loc_00368723: ;
    MEM32(esi + 0xC4) = 0;

loc_0036872D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00368740
 * Original: 0x00368740 - 0x0036875A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x830990);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036874Fu); RECOMP_ABI_CALL(0x00505BB0u, sub_00505BB0); /* call 0x00505BB0 */

loc_0036874F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00368757u); RECOMP_ABI_CALL(0x00505B90u, sub_00505B90); /* call 0x00505B90 */

loc_00368757: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00368760
 * Original: 0x00368760 - 0x00368766 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368760(void)
{

loc_00368760: ;
    eax = MEM32(0x9006AC);
    esp += 4; return; /* ret */

}

/**
 * sub_00368770
 * Original: 0x00368770 - 0x003687B7 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368770: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00368776u); RECOMP_ABI_CALL(0x005400B0u, sub_005400B0); /* call 0x005400B0 */

loc_00368776: ;
    esi = eax;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x218);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368793; /* jne: not equal / not zero */

loc_00368787: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x11 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036879D; /* jbe: below or equal (unsigned <=) */

loc_0036878C: ;
    esi = 0x11;
    goto loc_0036879D;

loc_00368793: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x42 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036879D; /* jbe: below or equal (unsigned <=) */

loc_00368798: ;
    esi = 0x42;

loc_0036879D: ;
    PUSH32(esp, 0x003687A2u); RECOMP_ABI_CALL(0x00540380u, sub_00540380); /* call 0x00540380 */

loc_003687A2: ;
    PUSH32(esp, 0x003687A7u); RECOMP_ABI_CALL(0x005400A0u, sub_005400A0); /* call 0x005400A0 */

loc_003687A7: ;
    PUSH32(esp, 0x003687ACu); RECOMP_ABI_CALL(0x00544130u, sub_00544130); /* call 0x00544130 */

loc_003687AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003687B2u); RECOMP_ABI_CALL(0x00509720u, sub_00509720); /* call 0x00509720 */

loc_003687B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003687D0
 * Original: 0x003687D0 - 0x003687E9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003687D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003687D6u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_003687D6: ;
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x003687DEu); RECOMP_ABI_CALL(0x00505D10u, sub_00505D10); /* call 0x00505D10 */

loc_003687DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003687E4u); RECOMP_ABI_CALL(0x00540370u, sub_00540370); /* call 0x00540370 */

loc_003687E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003687F0
 * Original: 0x003687F0 - 0x0036886E (126 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003687F0: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003687FBu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_003687FB: ;
    ecx = eax;
    PUSH32(esp, 0x00368802u); RECOMP_ABI_CALL(0x0055DB68u, sub_0055DB68); /* call 0x0055DB68 */

loc_00368802: ;
    PUSH32(esp, 0x00368807u); RECOMP_ABI_CALL(0x005400B0u, sub_005400B0); /* call 0x005400B0 */

loc_00368807: ;
    ecx = MEM32(0x8FC1D0);
    esi = eax;
    eax = MEM32(ecx + 0x218);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368825; /* jne: not equal / not zero */

loc_00368819: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x11 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036882F; /* jbe: below or equal (unsigned <=) */

loc_0036881E: ;
    esi = 0x11;
    goto loc_0036882F;

loc_00368825: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x42 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036882F; /* jbe: below or equal (unsigned <=) */

loc_0036882A: ;
    esi = 0x42;

loc_0036882F: ;
    PUSH32(esp, 0x00368834u); RECOMP_ABI_CALL(0x00540380u, sub_00540380); /* call 0x00540380 */

loc_00368834: ;
    PUSH32(esp, 0x00368839u); RECOMP_ABI_CALL(0x005400A0u, sub_005400A0); /* call 0x005400A0 */

loc_00368839: ;
    PUSH32(esp, 0x0036883Eu); RECOMP_ABI_CALL(0x00544130u, sub_00544130); /* call 0x00544130 */

loc_0036883E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00368844u); RECOMP_ABI_CALL(0x00509720u, sub_00509720); /* call 0x00509720 */

loc_00368844: ;
    PUSH32(esp, 0x00368849u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00368849: ;
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x00368851u); RECOMP_ABI_CALL(0x00505D10u, sub_00505D10); /* call 0x00505D10 */

loc_00368851: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00368857u); RECOMP_ABI_CALL(0x00540370u, sub_00540370); /* call 0x00540370 */

loc_00368857: ;
    edx = esp + 0xC;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00368864u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00368864: ;
    ecx = eax;
    PUSH32(esp, 0x0036886Bu); RECOMP_ABI_CALL(0x0055DBF5u, sub_0055DBF5); /* call 0x0055DBF5 */

loc_0036886B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368890
 * Original: 0x00368890 - 0x003688C5 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368890_nhl07_text_original(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00368896u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00368896: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003688A7u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_003688A7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003688C3; /* je: equal / zero */

loc_003688AE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003688C3; /* jle: less or equal (signed <=) */

loc_003688B4: ;
    _fa = (uint32_t)(MEM8(ecx + esi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + esi), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003688BE; /* jne: not equal / not zero */

loc_003688BA: ;
    MEM8(ecx + esi) = 0xA;

loc_003688BE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003688B4; /* jl: less (signed <) */

loc_003688C3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003688E0
 * Original: 0x003688E0 - 0x00368905 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003688E0(void)
{

loc_003688E0: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(0x9006B0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00368904u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368901u); } /* indirect call */
    }

loc_00368904: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368910
 * Original: 0x00368910 - 0x00368921 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368910(void)
{

loc_00368910: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00368920u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036891Du); } /* indirect call */
    }

loc_00368920: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368930
 * Original: 0x00368930 - 0x00368964 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368930: ;
    eax = MEM32(0x9006A4);
    SET_LO8(ecx, MEM8(eax + 0xFC));
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0036895A; /* je: equal / zero */

loc_0036894B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00368959u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368956u); } /* indirect call */
    }

loc_00368959: ;
    esp += 4; return; /* ret */

loc_0036895A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00368963u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368960u); } /* indirect call */
    }

loc_00368963: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368980
 * Original: 0x00368980 - 0x00368999 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368980: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8C58E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8C58E8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368998; /* je: equal / zero */

loc_0036898C: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00368998u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368995u); } /* indirect call */
    }

loc_00368998: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003689A0
 * Original: 0x003689A0 - 0x003689B9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003689A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8C58E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8C58E8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003689B8; /* je: equal / zero */

loc_003689AC: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003689B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003689B5u); } /* indirect call */
    }

loc_003689B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003689C0
 * Original: 0x003689C0 - 0x003689C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689C0: ;
    g_seh_ebp = ebp; sub_0002D20A(); return; /* tail jmp 0x0002D20A */

}

/**
 * sub_003689D0
 * Original: 0x003689D0 - 0x003689D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689D0: ;
    g_seh_ebp = ebp; sub_00029B8C(); return; /* tail jmp 0x00029B8C */

}

/**
 * sub_003689E0
 * Original: 0x003689E0 - 0x003689FB (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003689E0: ;
    SET_LO8(ecx, MEM8(edx));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003689FA; /* je: equal / zero */

loc_003689E8: ;
    SET_LO8(edx, MEM8(edx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003689FA; /* je: equal / zero */

loc_003689EF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003689FA; /* jne: not equal / not zero */

loc_003689F4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003689FA; /* jne: not equal / not zero */

loc_003689F8: ;
    SET_LO8(eax, 1);

loc_003689FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368A10
 * Original: 0x00368A10 - 0x00368B49 (313 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x54);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    edi = ebp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00368A2Bu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00368A2B: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0x23 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368A4F; /* jne: not equal / not zero */

loc_00368A3C: ;
    _fa = (uint32_t)(MEM8(ebp + 1)) & 0xFFu; _fb = (uint32_t)(0x23) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 1), 0x23 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368A4F; /* jne: not equal / not zero */

loc_00368A42: ;
    edi = ebp + 2;
    MEM32(ebx + 0x18) = 3;
    MEM32(ebx + 0x54) = edi;

loc_00368A4F: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368A70; /* je: equal / zero */

loc_00368A55: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = edi + 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00368A70; /* je: equal / zero */

loc_00368A5F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368B11; /* jne: not equal / not zero */

loc_00368A68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368B0E; /* je: equal / zero */

loc_00368A70: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368B11; /* jne: not equal / not zero */

loc_00368A79: ;
    PUSH32(esp, 0x00368A7Eu); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_00368A7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368B11; /* je: equal / zero */

loc_00368A87: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368A8Eu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00368A8E: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368A9Du); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_00368A9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368B11; /* je: equal / zero */

loc_00368AA1: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368AABu); RECOMP_ABI_CALL(0x0002F0C3u, sub_0002F0C3); /* call 0x0002F0C3 */

loc_00368AAB: ;
    ecx = MEM32(0x9006A4);
    SET_LO8(edx, MEM8(ecx + 0xFC));
    ecx = MEM32(0x9006B0);
    ebp = eax;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(ecx);
    eax = ebp + 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00368AD8; /* je: equal / zero */

loc_00368AC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00368AD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368AD3u); } /* indirect call */
    }

loc_00368AD6: ;
    goto loc_00368AE1;

loc_00368AD8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00368AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368ADEu); } /* indirect call */
    }

loc_00368AE1: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368AF0u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_00368AF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00368B05; /* jle: less or equal (signed <=) */

loc_00368AF6: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368B00; /* jne: not equal / not zero */

loc_00368AFC: ;
    MEM8(eax + esi) = 0xA;

loc_00368B00: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00368AF6; /* jl: less (signed <) */

loc_00368B05: ;
    ebp = MEM32(esp + 0x10);
    MEM32(ebx + 0x54) = esi;
    goto loc_00368B11;

loc_00368B0E: ;
    MEM32(ebx + 0x54) = edx;

loc_00368B11: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x9006B4); PUSH32(esp, 0x00368B18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368B12u); } /* indirect call */
    }

loc_00368B18: ;
    edi = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x54) = ebp;
    MEM32(ebx + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00368B3F; /* je: equal / zero */

loc_00368B2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8C58E8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x8C58E8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368B3F; /* je: equal / zero */

loc_00368B33: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00368B3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368B3Cu); } /* indirect call */
    }

loc_00368B3F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00368BA0
 * Original: 0x00368BA0 - 0x00368BCB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368BA0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + 5) = LO8(edx);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    edx = ecx + 0x10;
    MEM8(ecx + 4) = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00368BC0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368BC0; /* jne: not equal / not zero */

loc_00368BCA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368BE0
 * Original: 0x00368BE0 - 0x00368C64 (132 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368BE0: ;
    eax = MEM32(0x9006A8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00368C57; /* jle: less or equal (signed <=) */

loc_00368BF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ebp + 0xD;
    edi = 0x8FE158;
    goto loc_00368C00;

    /* nop */

loc_00368C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368C07u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00368C07: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368C2A; /* je: equal / zero */

loc_00368C0E: ;
    eax = MEM32(0x9006A8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x41;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00368C00; /* jl: less (signed <) */

loc_00368C1B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x8FE154); PUSH32(esp, 0x00368C24u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00368C1Eu); } /* indirect call */
    }

loc_00368C24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00368C2A: ;
    edx = MEM32(0x9006A8);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00368C4E; /* jge: greater or equal (signed >=) */

loc_00368C37: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x41);
    esi = ecx + 0x8FE158;
    ecx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x41);
    edi = esi + -65;
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

loc_00368C4E: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x9006A8) = edx;
    POP32(esp, ebx);

loc_00368C57: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x8FE154); PUSH32(esp, 0x00368C5Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00368C58u); } /* indirect call */
    }

loc_00368C5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00368C90
 * Original: 0x00368C90 - 0x00368C91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368C90(void)
{

loc_00368C90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368CA0
 * Original: 0x00368CA0 - 0x00368D16 (118 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368CA0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    edx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x83099C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x83099C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00368CC0;

    /* nop */

loc_00368CC0: ;
    SET_LO8(ecx, MEM8(edx + eax + 0x83099C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368CDE; /* je: equal / zero */

loc_00368CCB: ;
    _fa = (uint32_t)(MEM8(eax + 0x83099C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x83099C), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368D0E; /* jne: not equal / not zero */

loc_00368CD3: ;
    SET_LO8(ecx, MEM8(eax + 0x83099D));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368CC0; /* jne: not equal / not zero */

loc_00368CDE: ;
    edx = eax + esi;
    SET_LO8(eax, MEM8(edx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368D09; /* je: equal / zero */

loc_00368CE9: ;
    /* nop */

loc_00368CF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368D09; /* je: equal / zero */

loc_00368CF4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00368D09; /* jge: greater or equal (signed >=) */

loc_00368CFC: ;
    MEM8(esp + ecx + 4) = LO8(eax);
    SET_LO8(eax, MEM8(edx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368CF0; /* jne: not equal / not zero */

loc_00368D09: ;
    MEM8(esp + ecx + 3) = 0;

loc_00368D0E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00368D40
 * Original: 0x00368D40 - 0x00368D41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368D40(void)
{

loc_00368D40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368D50
 * Original: 0x00368D50 - 0x00368DF7 (167 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368D50: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368DED; /* jne: not equal / not zero */

loc_00368D65: ;
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00368D78u); RECOMP_ABI_CALL(0x000267EDu, sub_000267ED); /* call 0x000267ED */

loc_00368D78: ;
    eax = MEM32(0x9006A8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00368DE2; /* jle: less or equal (signed <=) */

loc_00368D86: ;
    PUSH32(esp, edi);
    edi = 0x8FE158;
    /* nop */

loc_00368D90: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00368D9Bu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00368D9B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368DBB; /* je: equal / zero */

loc_00368DA2: ;
    eax = MEM32(0x9006A8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x41;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00368D90; /* jl: less (signed <) */

loc_00368DAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00368DBB: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x41);
    SET_LO8(eax, MEM8(esi + 0x8FE198));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00368DAF; /* je: equal / zero */

loc_00368DC8: ;
    ecx = MEM32(0x9006AC);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368DD8u); RECOMP_ABI_CALL(0x0001F6BEu, sub_0001F6BE); /* call 0x0001F6BE */

loc_00368DD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00368DE2: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00368DED: ;
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00368E20
 * Original: 0x00368E20 - 0x00368E25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368E20: ;
    g_seh_ebp = ebp; sub_00368D50(); return; /* tail jmp 0x00368D50 */

}

/**
 * sub_00368E30
 * Original: 0x00368E30 - 0x00368E31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E30(void)
{

loc_00368E30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368E40
 * Original: 0x00368E40 - 0x00368E43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00368E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368E40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00368E50
 * Original: 0x00368E50 - 0x00368E51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E50(void)
{

loc_00368E50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368E60
 * Original: 0x00368E60 - 0x00368E61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E60(void)
{

loc_00368E60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368E70
 * Original: 0x00368E70 - 0x00368E71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E70(void)
{

loc_00368E70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368E80
 * Original: 0x00368E80 - 0x00368EA0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368E80(void)
{

loc_00368E80: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8309C8);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00368E9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368E9Cu); } /* indirect call */
    }

loc_00368E9F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368EB0
 * Original: 0x00368EB0 - 0x00368EC6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368EB0(void)
{

loc_00368EB0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00368EC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00368EC2u); } /* indirect call */
    }

loc_00368EC5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368ED0
 * Original: 0x00368ED0 - 0x00368EE9 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368ED0: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1480;
    edi = edx + 4;
    MEM32(edx) = 0x8309D8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00368EF0
 * Original: 0x00368EF0 - 0x00368EF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368EF0(void)
{

loc_00368EF0: ;
    MEM32(ecx) = 0x8309D8;
    esp += 4; return; /* ret */

}

/**
 * sub_00368F00
 * Original: 0x00368F00 - 0x00368F87 (135 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368F00: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00368F82; /* jge: greater or equal (signed >=) */

loc_00368F10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 4;
    eax = esi;
    ebx = eax + 1;
    /* nop */

loc_00368F20: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368F20; /* jne: not equal / not zero */

loc_00368F27: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00368F80; /* jae: above or equal (unsigned >=) */

loc_00368F30: ;
    edx = ecx + 0x104;
    eax = edx;
    PUSH32(esp, ebp);
    ebp = eax + 1;
    /* nop */

loc_00368F40: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368F40; /* jne: not equal / not zero */

loc_00368F47: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    POP32(esp, ebp);
    if (CMP_AE(_fa, _fb)) goto loc_00368F80; /* jae: above or equal (unsigned >=) */

loc_00368F51: ;
    ebx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi + ebx + 4;
    /* nop */

loc_00368F60: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00368F60; /* jne: not equal / not zero */

loc_00368F6A: ;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax + ebx + 0x104;

loc_00368F76: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00368F76; /* jne: not equal / not zero */

loc_00368F80: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00368F82: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00368FB0
 * Original: 0x00368FB0 - 0x003690C6 (278 bytes, 80 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368FB0: ;
    eax = 0x1410;
    PUSH32(esp, 0x00368FBAu); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_00368FBA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00368FC8u); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_00368FC8: ;
    ebx = MEM32(esp + 0x1420);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E6530);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00368FE0u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00368FE0: ;
    eax = MEM32(ebx + 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x830A3C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00368FF5u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00368FF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x830A2C);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00369005u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00369005: ;
    eax = MEM32(ebx + 0x100);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00369080; /* jle: less or equal (signed <=) */

loc_00369011: ;
    PUSH32(esp, edi);
    edi = ebx + 0x204;
    goto loc_00369020;

    /* nop */

loc_00369020: ;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x830A1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00369030u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369030: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = edi + -256;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0036904Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0036904A: ;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x830A04);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036905Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036905A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0036906Eu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0036906E: ;
    eax = MEM32(ebx + 0x100);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x200;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00369020; /* jl: less (signed <) */

loc_0036907F: ;
    POP32(esp, edi);

loc_00369080: ;
    PUSH32(esp, 0x1000);
    eax = esp + 0x420;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00369096u); RECOMP_ABI_CALL(0x00017905u, sub_00017905); /* call 0x00017905 */

loc_00369096: ;
    edx = MEM32(ebp);
    eax = esp + 0x418;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x41C) = 4;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003690B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003690AEu); } /* indirect call */
    }

loc_003690B1: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003690BAu); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_003690BA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1410;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369110
 * Original: 0x00369110 - 0x00369139 (41 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369110: ;
    eax = 0x1004;
    PUSH32(esp, 0x0036911Au); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_0036911A: ;
    eax = MEM32(ecx);
    edx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 8) = 0;
    MEM32(esp + 4) = 5;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00369130u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0036912Du); } /* indirect call */
    }

loc_00369130: ;
    _fb = (uint32_t)(0x1004) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1004;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369150
 * Original: 0x00369150 - 0x00369175 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369150(void)
{

loc_00369150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x830A54);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00369165u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_00369165: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x830A48;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369180
 * Original: 0x00369180 - 0x0036918B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369180: ;
    MEM32(ecx) = 0x830A48;
    g_seh_ebp = ebp; sub_000323C2(); return; /* tail jmp 0x000323C2 */

}

/**
 * sub_00369190
 * Original: 0x00369190 - 0x00369198 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369190: ;
    ecx = MEM32(ecx + 0x1C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_003691A0
 * Original: 0x003691A0 - 0x0036954F (943 bytes, 297 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003691A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003691A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003691C1; /* je: equal / zero */

loc_003691AB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x830A8C);
    PUSH32(esp, 0x003691B7u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_003691B7: ;
    MEM32(0x9006C4) = eax;
    goto loc_00369521;

loc_003691C1: ;
    SET_LO8(eax, MEM8(edi + 0x100));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00369524; /* jne: not equal / not zero */

loc_003691CF: ;
    eax = MEM32(0x9006C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003691ED; /* je: equal / zero */

loc_003691D8: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003691E0u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_003691E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9006C4) = 0;

loc_003691ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x824218);
    PUSH32(esp, 0x003691FAu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_003691FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00369204u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_00369204: ;
    ecx = eax;
    PUSH32(esp, 0x0036920Bu); RECOMP_ABI_CALL(0x0002BE4Bu, sub_0002BE4B); /* call 0x0002BE4B */

loc_0036920B: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00369213u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00369213: ;
    ecx = MEM32(0x90932C);
    eax = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036922Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369227u); } /* indirect call */
    }

loc_0036922A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00369238; /* je: equal / zero */

loc_0036922F: ;
    ecx = eax;
    PUSH32(esp, 0x00369236u); RECOMP_ABI_CALL(0x00028165u, sub_00028165); /* call 0x00028165 */

loc_00369236: ;
    goto loc_0036923A;

loc_00369238: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036923A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF680);
    ecx = eax;
    MEM32(0x9006C8) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00369258u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369255u); } /* indirect call */
    }

loc_00369258: ;
    eax = MEM32(0x9006C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369263u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00369263: ;
    ecx = eax;
    PUSH32(esp, 0x0036926Au); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0036926A: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036927Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036927Bu); } /* indirect call */
    }

loc_0036927E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036928B; /* je: equal / zero */

loc_00369282: ;
    ecx = eax;
    PUSH32(esp, 0x00369289u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_00369289: ;
    goto loc_0036928D;

loc_0036928B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036928D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF66C);
    ecx = eax;
    MEM32(0x9006CC) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003692ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003692A8u); } /* indirect call */
    }

loc_003692AB: ;
    eax = MEM32(0x9006CC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003692B6u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003692B6: ;
    ecx = eax;
    PUSH32(esp, 0x003692BDu); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_003692BD: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003692D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003692CEu); } /* indirect call */
    }

loc_003692D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003692DE; /* je: equal / zero */

loc_003692D5: ;
    ecx = eax;
    PUSH32(esp, 0x003692DCu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_003692DC: ;
    goto loc_003692E0;

loc_003692DE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003692E0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF65C);
    ecx = eax;
    MEM32(0x9006D0) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003692FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003692FBu); } /* indirect call */
    }

loc_003692FE: ;
    eax = MEM32(0x9006D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369309u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00369309: ;
    ecx = eax;
    PUSH32(esp, 0x00369310u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00369310: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00369324u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369321u); } /* indirect call */
    }

loc_00369324: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369331; /* je: equal / zero */

loc_00369328: ;
    ecx = eax;
    PUSH32(esp, 0x0036932Fu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0036932F: ;
    goto loc_00369333;

loc_00369331: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00369333: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF63C);
    ecx = eax;
    MEM32(0x9006D8) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00369351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036934Eu); } /* indirect call */
    }

loc_00369351: ;
    eax = MEM32(0x9006D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036935Cu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036935C: ;
    ecx = eax;
    PUSH32(esp, 0x00369363u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00369363: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00369377u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369374u); } /* indirect call */
    }

loc_00369377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369384; /* je: equal / zero */

loc_0036937B: ;
    ecx = eax;
    PUSH32(esp, 0x00369382u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_00369382: ;
    goto loc_00369386;

loc_00369384: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00369386: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF64C);
    ecx = eax;
    MEM32(0x9006D4) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003693A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003693A1u); } /* indirect call */
    }

loc_003693A4: ;
    eax = MEM32(0x9006D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003693AFu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003693AF: ;
    ecx = eax;
    PUSH32(esp, 0x003693B6u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_003693B6: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003693CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003693C7u); } /* indirect call */
    }

loc_003693CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003693D7; /* je: equal / zero */

loc_003693CE: ;
    ecx = eax;
    PUSH32(esp, 0x003693D5u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_003693D5: ;
    goto loc_003693D9;

loc_003693D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003693D9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF628);
    ecx = eax;
    MEM32(0x9006DC) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003693F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003693F4u); } /* indirect call */
    }

loc_003693F7: ;
    eax = MEM32(0x9006DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369402u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00369402: ;
    ecx = eax;
    PUSH32(esp, 0x00369409u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00369409: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036941Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036941Au); } /* indirect call */
    }

loc_0036941D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036942A; /* je: equal / zero */

loc_00369421: ;
    ecx = eax;
    PUSH32(esp, 0x00369428u); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_00369428: ;
    goto loc_0036942C;

loc_0036942A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036942C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF614);
    ecx = eax;
    MEM32(0x9006E0) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036944Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369447u); } /* indirect call */
    }

loc_0036944A: ;
    eax = MEM32(0x9006E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369455u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00369455: ;
    ecx = eax;
    PUSH32(esp, 0x0036945Cu); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0036945C: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00369470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036946Du); } /* indirect call */
    }

loc_00369470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036947D; /* je: equal / zero */

loc_00369474: ;
    ecx = eax;
    PUSH32(esp, 0x0036947Bu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_0036947B: ;
    goto loc_0036947F;

loc_0036947D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036947F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x830A78);
    ecx = eax;
    MEM32(0x9006E8) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036949Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036949Au); } /* indirect call */
    }

loc_0036949D: ;
    eax = MEM32(0x9006E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003694A8u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003694A8: ;
    ecx = eax;
    PUSH32(esp, 0x003694AFu); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_003694AF: ;
    ecx = MEM32(0x902558);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003694C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003694C0u); } /* indirect call */
    }

loc_003694C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003694D0; /* je: equal / zero */

loc_003694C7: ;
    ecx = eax;
    PUSH32(esp, 0x003694CEu); RECOMP_ABI_CALL(0x00028345u, sub_00028345); /* call 0x00028345 */

loc_003694CE: ;
    goto loc_003694D2;

loc_003694D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003694D2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x830A64);
    ecx = eax;
    MEM32(0x9006EC) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003694F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003694EDu); } /* indirect call */
    }

loc_003694F0: ;
    eax = MEM32(0x9006EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003694FBu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003694FB: ;
    ecx = eax;
    PUSH32(esp, 0x00369502u); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_00369502: ;
    ecx = MEM32(0x8FC1E4);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00369510u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00369510: ;
    MEM32(0x8FC1E4) = 0;
    MEM8(edi + 0x100) = 1;

loc_00369521: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00369524: ;
    SET_LO8(eax, MEM8(0x9006F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036954C; /* jne: not equal / not zero */

loc_0036952E: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036953Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369539u); } /* indirect call */
    }

loc_0036953C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369542u); RECOMP_ABI_CALL(0x005CC2D3u, sub_005CC2D3); /* call 0x005CC2D3 */

loc_00369542: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x9006F0) = 1;

loc_0036954C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369640
 * Original: 0x00369640 - 0x003696BD (125 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00369648u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00369648: ;
    ecx = eax;
    PUSH32(esp, 0x0036964Fu); RECOMP_ABI_CALL(0x00025E1Fu, sub_00025E1F); /* call 0x00025E1F */

loc_0036964F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00369658u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00369658: ;
    ecx = eax;
    PUSH32(esp, 0x0036965Fu); RECOMP_ABI_CALL(0x0002FB63u, sub_0002FB63); /* call 0x0002FB63 */

loc_0036965F: ;
    PUSH32(esp, 0x00369664u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00369664: ;
    ecx = eax;
    PUSH32(esp, 0x0036966Bu); RECOMP_ABI_CALL(0x00023A34u, sub_00023A34); /* call 0x00023A34 */

loc_0036966B: ;
    eax = MEM32(0x9006AC);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036967Du); RECOMP_ABI_CALL(0x0001A0ECu, sub_0001A0EC); /* call 0x0001A0EC */

loc_0036967D: ;
    PUSH32(esp, 0x830990);
    PUSH32(esp, 0x830AA4);
    PUSH32(esp, 0x0036968Cu); RECOMP_ABI_CALL(0x00505BB0u, sub_00505BB0); /* call 0x00505BB0 */

loc_0036968C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00369694u); RECOMP_ABI_CALL(0x00505B90u, sub_00505B90); /* call 0x00505B90 */

loc_00369694: ;
    PUSH32(esp, 0x00369699u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00369699: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003696A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036969Du); } /* indirect call */
    }

loc_003696A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x003696A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003696A4u); } /* indirect call */
    }

loc_003696A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003696BC; /* jne: not equal / not zero */

loc_003696AD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E0BCC);
    PUSH32(esp, 0x003696B9u); RECOMP_ABI_CALL(0x0001F47Fu, sub_0001F47F); /* call 0x0001F47F */

loc_003696B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003696BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003696E0
 * Original: 0x003696E0 - 0x003696F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003696E0(void)
{

loc_003696E0: ;
    PUSH32(esp, 0x003696E5u); RECOMP_ABI_CALL(0x0001B7CBu, sub_0001B7CB); /* call 0x0001B7CB */

loc_003696E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003696ECu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003696EC: ;
    ecx = eax;
    PUSH32(esp, 0x003696F3u); RECOMP_ABI_CALL(0x00028601u, sub_00028601); /* call 0x00028601 */

loc_003696F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00369700
 * Original: 0x00369700 - 0x0036971A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0036970Au); RECOMP_ABI_CALL(0x0059CE69u, sub_0059CE69); /* call 0x0059CE69 */

loc_0036970A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400000 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_L(_fas, _fbs)) goto loc_00369718; /* jl: less (signed <) */

loc_00369716: ;
    SET_LO8(eax, LO8(ebx));

loc_00369718: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00369720
 * Original: 0x00369720 - 0x003697F4 (212 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369720: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003697A1; /* je: equal / zero */

loc_0036972A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003697F1; /* jne: not equal / not zero */

loc_00369733: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003697F1; /* je: equal / zero */

loc_0036973E: ;
    eax = MEM32(0x9006C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003697F1; /* jne: not equal / not zero */

loc_0036974B: ;
    ecx = MEM32(0x90932C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036975Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036975Cu); } /* indirect call */
    }

loc_0036975F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036976C; /* je: equal / zero */

loc_00369763: ;
    ecx = eax;
    PUSH32(esp, 0x0036976Au); RECOMP_ABI_CALL(0x00028165u, sub_00028165); /* call 0x00028165 */

loc_0036976A: ;
    goto loc_0036976E;

loc_0036976C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036976E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x7DF680);
    ecx = eax;
    MEM32(0x9006C8) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036978Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369789u); } /* indirect call */
    }

loc_0036978C: ;
    eax = MEM32(0x9006C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369797u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00369797: ;
    ecx = eax;
    PUSH32(esp, 0x0036979Eu); RECOMP_ABI_CALL(0x0001AC59u, sub_0001AC59); /* call 0x0001AC59 */

loc_0036979E: ;
    esp += 8; return; /* ret 4 */

loc_003697A1: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003697F1; /* je: equal / zero */

loc_003697A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003697AFu); RECOMP_ABI_CALL(0x0059CE69u, sub_0059CE69); /* call 0x0059CE69 */

loc_003697AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003697F1; /* jge: greater or equal (signed >=) */

loc_003697B9: ;
    ecx = MEM32(0x9006C8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003697C5u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003697C5: ;
    ecx = eax;
    PUSH32(esp, 0x003697CCu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_003697CC: ;
    ecx = MEM32(0x9006C8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003697D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003697D4u); } /* indirect call */
    }

loc_003697D7: ;
    ecx = MEM32(0x9006C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003697E7; /* je: equal / zero */

loc_003697E1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003697E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003697E5u); } /* indirect call */
    }

loc_003697E7: ;
    MEM32(0x9006C8) = 0;

loc_003697F1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369830
 * Original: 0x00369830 - 0x00369838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369830(void)
{

loc_00369830: ;
    MEM8(ecx + 0xF8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00369840
 * Original: 0x00369840 - 0x0036984A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369840(void)
{

loc_00369840: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369850
 * Original: 0x00369850 - 0x003698B9 (105 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369850: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00369858u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00369858: ;
    ecx = eax;
    PUSH32(esp, 0x0036985Fu); RECOMP_ABI_CALL(0x00025E1Fu, sub_00025E1F); /* call 0x00025E1F */

loc_0036985F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00369868u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00369868: ;
    ecx = eax;
    PUSH32(esp, 0x0036986Fu); RECOMP_ABI_CALL(0x0002FB63u, sub_0002FB63); /* call 0x0002FB63 */

loc_0036986F: ;
    PUSH32(esp, 0x00369874u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00369874: ;
    ecx = eax;
    PUSH32(esp, 0x0036987Bu); RECOMP_ABI_CALL(0x00023A34u, sub_00023A34); /* call 0x00023A34 */

loc_0036987B: ;
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00369887u); RECOMP_ABI_CALL(0x000203BBu, sub_000203BB); /* call 0x000203BB */

loc_00369887: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0036988Fu); RECOMP_ABI_CALL(0x00023395u, sub_00023395); /* call 0x00023395 */

loc_0036988F: ;
    ecx = eax;
    PUSH32(esp, 0x00369896u); RECOMP_ABI_CALL(0x00031BA7u, sub_00031BA7); /* call 0x00031BA7 */

loc_00369896: ;
    PUSH32(esp, 0x830990);
    PUSH32(esp, 0x830AC4);
    PUSH32(esp, 0x003698A5u); RECOMP_ABI_CALL(0x00505BB0u, sub_00505BB0); /* call 0x00505BB0 */

loc_003698A5: ;
    PUSH32(esp, 0x830AB8);
    PUSH32(esp, 0x830AAC);
    PUSH32(esp, 0x003698B4u); RECOMP_ABI_CALL(0x00505BB0u, sub_00505BB0); /* call 0x00505BB0 */

loc_003698B4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003698E0
 * Original: 0x003698E0 - 0x003698F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003698E0(void)
{

loc_003698E0: ;
    PUSH32(esp, 0x003698E5u); RECOMP_ABI_CALL(0x00013706u, sub_00013706); /* call 0x00013706 */

loc_003698E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003698ECu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003698EC: ;
    ecx = eax;
    PUSH32(esp, 0x003698F3u); RECOMP_ABI_CALL(0x00028601u, sub_00028601); /* call 0x00028601 */

loc_003698F3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00369900
 * Original: 0x00369900 - 0x0036991B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369900: ;
    ecx = MEM32(0x900708);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036991A; /* je: equal / zero */

loc_0036990A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00369910u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036990Eu); } /* indirect call */
    }

loc_00369910: ;
    MEM32(0x900708) = 0;

loc_0036991A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00369930
 * Original: 0x00369930 - 0x00369936 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369930(void)
{

loc_00369930: ;
    eax = MEM32(0x900708);
    esp += 4; return; /* ret */

}

/**
 * sub_00369940
 * Original: 0x00369940 - 0x00369959 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369940: ;
    MEM8(ecx + 0x64) = 1;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0036994Cu); RECOMP_ABI_CALL(0x0001DDBEu, sub_0001DDBE); /* call 0x0001DDBE */

loc_0036994C: ;
    PUSH32(esp, 0x00369951u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00369951: ;
    MEM8(eax + 0x210) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00369960
 * Original: 0x00369960 - 0x00369B18 (440 bytes, 139 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00369960(void)
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

loc_00369960: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00369A5A; /* je: equal / zero */

loc_00369973: ;
    PUSH32(esp, edi);
    edi = esi + 0x5C;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0036997Fu); RECOMP_ABI_CALL(0x000240BFu, sub_000240BF); /* call 0x000240BF */

loc_0036997F: ;
    ecx = edi;
    PUSH32(esp, 0x00369986u); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_00369986: ;
    fp_push(MEMF(0x7AD450)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    POP32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_00369A5A; /* jb: below (unsigned <) */

loc_00369999: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003699A0u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_003699A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003699C8; /* je: equal / zero */

loc_003699A7: ;
    PUSH32(esp, 0x003699ACu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_003699AC: ;
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003699C8; /* jne: not equal / not zero */

loc_003699B3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003699C3u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_003699C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003699D8;

loc_003699C8: ;
    PUSH32(esp, 0x003699CDu); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_003699CD: ;
    MEM8(eax + 0x210) = 1;
    MEM8(esi + 0x64) = 0;

loc_003699D8: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x003699DFu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_003699DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00369A5A; /* je: equal / zero */

loc_003699E6: ;
    PUSH32(esp, 0x003699EBu); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_003699EB: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00369A00; /* jl: less (signed <) */

loc_003699F4: ;
    PUSH32(esp, 0x003699F9u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_003699F9: ;
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00369A5A; /* jne: not equal / not zero */

loc_00369A00: ;
    PUSH32(esp, 0x00369A05u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00369A05: ;
    MEM8(eax + 0x210) = 1;
    MEM8(esi + 0x64) = 0;
    PUSH32(esp, 0x00369A15u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00369A15: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00369A5A; /* je: equal / zero */

loc_00369A1B: ;
    PUSH32(esp, 0x00369A20u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00369A20: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00369A27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369A24u); } /* indirect call */
    }

loc_00369A27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00369A4A; /* jle: less or equal (signed <=) */

loc_00369A2C: ;
    MEM8(0x90070D) = 1;
    PUSH32(esp, 0x00369A38u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00369A38: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00369A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369A3Cu); } /* indirect call */
    }

loc_00369A3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00369A4A; /* je: equal / zero */

loc_00369A43: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00369A4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369A47u); } /* indirect call */
    }

loc_00369A4A: ;
    PUSH32(esp, 0x00369A4Fu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00369A4F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x75);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00369A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369A57u); } /* indirect call */
    }

loc_00369A5A: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00369B13; /* jle: less or equal (signed <=) */

loc_00369A65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00369B13; /* jg: greater (signed >) */

loc_00369A6E: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x3C)) >> 32) & 1);
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00369A79u); RECOMP_ABI_CALL(0x000240BFu, sub_000240BF); /* call 0x000240BF */

loc_00369A79: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00369A80u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00369A80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00369B00; /* je: equal / zero */

loc_00369A87: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00369A8Eu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00369A8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00369AF6; /* je: equal / zero */

loc_00369A95: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00369A9Cu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00369A9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00369AF6; /* je: equal / zero */

loc_00369AA3: ;
    ecx = esi;
    PUSH32(esp, 0x00369AAAu); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_00369AAA: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x82EB94) - fp_top()); /* fsubr dword ptr [0x82eb94] */
    PUSH32(esp, 0x00369AB5u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00369AB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369ABBu); RECOMP_ABI_CALL(0x00037D3Bu, sub_00037D3B); /* call 0x00037D3B */

loc_00369ABB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00369AC5u); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_00369AC5: ;
    fp_push(MEMF(0x82EB94)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_00369B00; /* jb: below (unsigned <) */

loc_00369AD3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00369ADAu); RECOMP_ABI_CALL(0x00037D3Bu, sub_00037D3B); /* call 0x00037D3B */

loc_00369ADA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00369AE2u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00369AE2: ;
    PUSH32(esp, 0x00369AE7u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00369AE7: ;
    PUSH32(esp, 2);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x00369AF4u); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_00369AF4: ;
    goto loc_00369B00;

loc_00369AF6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x00369AFDu); RECOMP_ABI_CALL(0x00037D3Bu, sub_00037D3B); /* call 0x00037D3B */

loc_00369AFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00369B00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x830AD0);
    PUSH32(esp, 0x00369B10u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00369B10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00369B13: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00369B90
 * Original: 0x00369B90 - 0x00369C5F (207 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369B90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    esi = ecx;
    edi = 3;
    PUSH32(esp, 0x00369BA3u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00369BA3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369C55; /* je: equal / zero */

loc_00369BAE: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00369BBAu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00369BBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00369BC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369BBEu); } /* indirect call */
    }

loc_00369BC1: ;
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0x48);
    edx = MEM32(eax);
    ebx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00369BDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369BD7u); } /* indirect call */
    }

loc_00369BDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00369C25; /* je: equal / zero */

loc_00369BDF: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4 + 0x34), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00369BF6; /* jl: less (signed <) */

loc_00369BE9: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00369BF6: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x218);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00369C4B; /* jne: not equal / not zero */

loc_00369C06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369C0Cu); RECOMP_ABI_CALL(0x00021504u, sub_00021504); /* call 0x00021504 */

loc_00369C0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00369C47; /* jne: not equal / not zero */

loc_00369C13: ;
    edx = MEM32(0x8EADA0);
    eax = MEM32(edx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369C2F; /* je: equal / zero */

loc_00369C20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369C2F; /* je: equal / zero */

loc_00369C25: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00369C2F: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x44) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00369C47: ;
    eax = MEM32(esp + 8);

loc_00369C4B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x44) = ecx;

loc_00369C55: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369CA0
 * Original: 0x00369CA0 - 0x00369D29 (137 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369CA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00369CEB; /* je: equal / zero */

loc_00369CA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00369CCE; /* je: equal / zero */

loc_00369CAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00369D26; /* jne: not equal / not zero */

loc_00369CB1: ;
    PUSH32(esp, 0x00369CB6u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00369CB6: ;
    PUSH32(esp, 0x00369CBBu); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00369CBB: ;
    MEM32(esp + 4) = 2;
    ecx = eax + 0x21C;
    g_seh_ebp = ebp; sub_0001E8A4(); return; /* tail jmp 0x0001E8A4 */

loc_00369CCE: ;
    PUSH32(esp, 0x00369CD3u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00369CD3: ;
    PUSH32(esp, 0x00369CD8u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00369CD8: ;
    MEM32(esp + 4) = 2;
    ecx = eax + 0x21C;
    g_seh_ebp = ebp; sub_00035428(); return; /* tail jmp 0x00035428 */

loc_00369CEB: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00369CF2u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00369CF2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00369D09; /* je: equal / zero */

loc_00369CF9: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00369D06u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_00369D06: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00369D09: ;
    PUSH32(esp, 0x00369D0Eu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00369D0E: ;
    PUSH32(esp, 0x00369D13u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00369D13: ;
    MEM32(esp + 4) = 6;
    ecx = eax + 0x21C;
    g_seh_ebp = ebp; sub_0001E8A4(); return; /* tail jmp 0x0001E8A4 */

loc_00369D26: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369D50
 * Original: 0x00369D50 - 0x00369D5C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369D50: ;
    PUSH32(esp, 0x00369D55u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_00369D55: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_000159D4(); return; /* tail jmp 0x000159D4 */

}

/**
 * sub_00369D60
 * Original: 0x00369D60 - 0x00369D74 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369D60: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx * 4 + 0x34);
    eax = 3;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369D80
 * Original: 0x00369D80 - 0x0036A648 (2248 bytes, 718 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369D80: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x34) = edx;
    SET_LO8(eax, 1);
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM8(esp + 3) = LO8(eax);
    MEM8(esp + 0x50) = LO8(ecx);
    MEM8(esp + 0x3C) = LO8(edx);
    MEM8(0x8FC1D4) = LO8(eax);
    PUSH32(esp, 0x00369DC2u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_00369DC2: ;
    SET_LO8(ecx, MEM8(eax + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A641; /* je: equal / zero */

loc_00369DCD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00369DD6u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00369DD6: ;
    edi = eax;
    PUSH32(esp, 0x00369DDDu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00369DDD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00369DE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369DE1u); } /* indirect call */
    }

loc_00369DE4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00369DEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369DE8u); } /* indirect call */
    }

loc_00369DEB: ;
    PUSH32(esp, 0x800);
    ebx = eax;
    PUSH32(esp, 0x00369DF7u); RECOMP_ABI_CALL(0x004DCF00u, sub_004DCF00); /* call 0x004DCF00 */

loc_00369DF7: ;
    PUSH32(esp, 0x830C7C);
    esi = eax;
    eax = esp + 0x1C;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369E0Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369E0D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x118;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00369E23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369E20u); } /* indirect call */
    }

loc_00369E23: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x830C74);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00369E34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369E31u); } /* indirect call */
    }

loc_00369E34: ;
    PUSH32(esp, 0x830C6C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00369E48u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369E48: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7E94C4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00369E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369E59u); } /* indirect call */
    }

loc_00369E5C: ;
    PUSH32(esp, 0x830C68);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00369E70u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369E70: ;
    eax = ZX8(MEM8(edi + 0x13C));
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00369E89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369E86u); } /* indirect call */
    }

loc_00369E89: ;
    PUSH32(esp, 0x830C60);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369E9Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369E9D: ;
    ecx = MEM32(edi + 0x138);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00369EB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369EB2u); } /* indirect call */
    }

loc_00369EB5: ;
    PUSH32(esp, 0x830C58);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369EC9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369EC9: ;
    ebp = MEM32(esi);
    eax = 0x88888889u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(edi + 0x3F8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x00369EE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369EE6u); } /* indirect call */
    }

loc_00369EE9: ;
    PUSH32(esp, 0x830C50);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369EFDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369EFD: ;
    ecx = MEM32(edi + 0x48);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00369F12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369F0Fu); } /* indirect call */
    }

loc_00369F12: ;
    PUSH32(esp, 0x830C48);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369F26u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369F26: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0xD8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00369F3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369F39u); } /* indirect call */
    }

loc_00369F3C: ;
    PUSH32(esp, 0x830C40);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369F50u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369F50: ;
    ecx = MEM32(edi + 0x154);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00369F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369F65u); } /* indirect call */
    }

loc_00369F68: ;
    eax = MEM32(edi + 0x154);
    PUSH32(esp, 0x830C38);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, 0x00369F86u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369F86: ;
    eax = MEM32(edi + 0x158);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00369F9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369F9Bu); } /* indirect call */
    }

loc_00369F9E: ;
    edx = MEM32(edi + 0x158);
    PUSH32(esp, 0x830C2C);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = edx;
    PUSH32(esp, 0x00369FBCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369FBC: ;
    eax = MEM32(edi + 0x12C);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00369FD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369FD1u); } /* indirect call */
    }

loc_00369FD4: ;
    PUSH32(esp, 0x830C20);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00369FE8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00369FE8: ;
    ecx = MEM32(edi + 0x130);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00369FFDu); } /* indirect call */
    }

loc_0036A000: ;
    PUSH32(esp, 0x830C18);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A014u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A014: ;
    eax = MEM32(edi + 0x194);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A02Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A029u); } /* indirect call */
    }

loc_0036A02C: ;
    eax = MEM32(edi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A03B; /* je: equal / zero */

loc_0036A036: ;
    MEM8(esp + 0x13) = 0;

loc_0036A03B: ;
    PUSH32(esp, 0x830C10);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A04Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A04F: ;
    ecx = MEM32(edi + 0x198);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A067u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A064u); } /* indirect call */
    }

loc_0036A067: ;
    eax = MEM32(edi + 0x198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A076; /* je: equal / zero */

loc_0036A071: ;
    MEM8(esp + 0x13) = 0;

loc_0036A076: ;
    PUSH32(esp, 0x830C08);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A08Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A08A: ;
    eax = ZX8(MEM8(edi + 0x13E));
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A0A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A0A0u); } /* indirect call */
    }

loc_0036A0A3: ;
    PUSH32(esp, 0x830C00);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A0B7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A0B7: ;
    ecx = ZX8(MEM8(edi + 0x13F));
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A0D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A0CDu); } /* indirect call */
    }

loc_0036A0D0: ;
    PUSH32(esp, 0x830BF8);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A0E4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A0E4: ;
    eax = MEM32(edi + 0x18C);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A0FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A0F9u); } /* indirect call */
    }

loc_0036A0FC: ;
    eax = MEM32(edi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A10B; /* je: equal / zero */

loc_0036A106: ;
    MEM8(esp + 0x13) = 0;

loc_0036A10B: ;
    PUSH32(esp, 0x830BF0);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A11Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A11F: ;
    ecx = MEM32(edi + 0x190);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A134u); } /* indirect call */
    }

loc_0036A137: ;
    eax = MEM32(edi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A146; /* je: equal / zero */

loc_0036A141: ;
    MEM8(esp + 0x13) = 0;

loc_0036A146: ;
    PUSH32(esp, 0x830BE8);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A15Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A15A: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi + 0x21C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0036A170u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A16Du); } /* indirect call */
    }

loc_0036A170: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x54;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036A17Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0036A17D: ;
    PUSH32(esp, 0x830BE0);
    edx = esp + 0x24;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A191u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A191: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = edi + 0x23C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0036A1A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A1A4u); } /* indirect call */
    }

loc_0036A1A7: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x40;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A1B4u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0036A1B4: ;
    PUSH32(esp, 0x830BD8);
    eax = esp + 0x24;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A1C8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A1C8: ;
    eax = MEM32(edi + 0x144);
    edx = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A1E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A1DDu); } /* indirect call */
    }

loc_0036A1E0: ;
    PUSH32(esp, 0x830BD0);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A1F4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A1F4: ;
    ecx = MEM32(edi + 0x148);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A20Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A209u); } /* indirect call */
    }

loc_0036A20C: ;
    PUSH32(esp, 0x830BC8);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A220u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A220: ;
    eax = ZX8(MEM8(edi + 0x134));
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A239u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A236u); } /* indirect call */
    }

loc_0036A239: ;
    PUSH32(esp, 0x830BC0);
    PUSH32(esp, 0x7E1290);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A24Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A24D: ;
    ecx = ZX8(MEM8(edi + 0x135));
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A263u); } /* indirect call */
    }

loc_0036A266: ;
    PUSH32(esp, 0x830BB4);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A27Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A27A: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A28Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A28Au); } /* indirect call */
    }

loc_0036A28D: ;
    PUSH32(esp, 0x830BA8);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036A2A1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A2A1: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A2B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A2B1u); } /* indirect call */
    }

loc_0036A2B4: ;
    PUSH32(esp, 0x830BA0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036A2C8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A2C8: ;
    eax = MEM32(edi + 0x54);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A2DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A2DAu); } /* indirect call */
    }

loc_0036A2DD: ;
    PUSH32(esp, 0x830B98);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A2F1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A2F1: ;
    ecx = MEM32(edi + 0x50);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A306u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A303u); } /* indirect call */
    }

loc_0036A306: ;
    PUSH32(esp, 0x830B90);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A31Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A31A: ;
    eax = MEM32(edi + 0x3E8);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A332u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A32Fu); } /* indirect call */
    }

loc_0036A332: ;
    PUSH32(esp, 0x7E09C0);
    PUSH32(esp, 0x7E1290);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A346u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A346: ;
    ecx = MEM32(edi + 0x3EC);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A35Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A35Bu); } /* indirect call */
    }

loc_0036A35E: ;
    PUSH32(esp, 0x7E09B8);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A372u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A372: ;
    eax = MEM32(edi + 0x3F4);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A38Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A387u); } /* indirect call */
    }

loc_0036A38A: ;
    PUSH32(esp, 0x830B8C);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A39Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A39E: ;
    ecx = ZX8(MEM8(edi + 0x13D));
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A3B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A3B4u); } /* indirect call */
    }

loc_0036A3B7: ;
    PUSH32(esp, 0x830B84);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A3CBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A3CB: ;
    eax = MEM32(edi + 0x164);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A3E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A3E0u); } /* indirect call */
    }

loc_0036A3E3: ;
    PUSH32(esp, 0x830B7C);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A3F7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A3F7: ;
    ecx = MEM32(edi + 0x168);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A40Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A40Cu); } /* indirect call */
    }

loc_0036A40F: ;
    PUSH32(esp, 0x830B74);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A423u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A423: ;
    eax = MEM32(edi + 0x15C);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    ecx = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A43Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A438u); } /* indirect call */
    }

loc_0036A43B: ;
    PUSH32(esp, 0x830B6C);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A44Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A44F: ;
    ecx = MEM32(edi + 0x160);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A464u); } /* indirect call */
    }

loc_0036A467: ;
    PUSH32(esp, 0x830B60);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A47Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A47B: ;
    ebp = MEM32(esi);
    eax = 0x88888889u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(edi + 0x16C);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x0036A49Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A498u); } /* indirect call */
    }

loc_0036A49B: ;
    PUSH32(esp, 0x830B54);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A4AFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A4AF: ;
    ebp = MEM32(esi);
    eax = 0x88888889u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(edi + 0x170);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x0036A4CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A4CCu); } /* indirect call */
    }

loc_0036A4CF: ;
    PUSH32(esp, 0x830B4C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036A4E3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A4E3: ;
    eax = MEM32(edi + 0x174);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A4FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A4F8u); } /* indirect call */
    }

loc_0036A4FB: ;
    PUSH32(esp, 0x830B44);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A50Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A50F: ;
    ecx = MEM32(edi + 0x178);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A527u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A524u); } /* indirect call */
    }

loc_0036A527: ;
    PUSH32(esp, 0x830B3C);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A53Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A53B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x184);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A550u); } /* indirect call */
    }

loc_0036A553: ;
    PUSH32(esp, 0x830B34);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A567u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A567: ;
    ecx = MEM32(edi + 0x188);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A57Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A57Cu); } /* indirect call */
    }

loc_0036A57F: ;
    PUSH32(esp, 0x830B2C);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A593u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A593: ;
    eax = MEM32(edi + 0x17C);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A5ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A5A8u); } /* indirect call */
    }

loc_0036A5AB: ;
    PUSH32(esp, 0x830B24);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A5BFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A5BF: ;
    ecx = MEM32(edi + 0x180);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036A5D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A5D4u); } /* indirect call */
    }

loc_0036A5D7: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036A5DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A5DCu); } /* indirect call */
    }

loc_0036A5DF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A63D; /* je: equal / zero */

loc_0036A5E7: ;
    edi = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0x830B0C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A60Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036A60A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0036A612u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036A612: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0036A619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A616u); } /* indirect call */
    }

loc_0036A619: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036A620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A61Du); } /* indirect call */
    }

loc_0036A620: ;
    edx = MEM32(eax);
    ecx = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036A63Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A63Au); } /* indirect call */
    }

loc_0036A63D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0036A641: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036A880
 * Original: 0x0036A880 - 0x0036A8A8 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A880(void)
{

loc_0036A880: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = edx;
    PUSH32(esp, 0x0036A893u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036A893: ;
    PUSH32(esp, 0x0036A898u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_0036A898: ;
    PUSH32(esp, 1);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x0036A8A5u); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_0036A8A5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036A8C0
 * Original: 0x0036A8C0 - 0x0036A8C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A8C0(void)
{

loc_0036A8C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A8D0
 * Original: 0x0036A8D0 - 0x0036A8D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A8D0(void)
{

loc_0036A8D0: ;
    SET_LO8(eax, MEM8(ecx + 0x72));
    esp += 4; return; /* ret */

}

/**
 * sub_0036A8E0
 * Original: 0x0036A8E0 - 0x0036A906 (38 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A8E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ecx + 0x72) = LO8(eax);
    ecx = MEM32(0x8FC1D0);
    MEM32(esp + 4) = 0x1E;
    if (CMP_NE(_fa, _fb)) goto loc_0036A901; /* jne: not equal / not zero */

loc_0036A8F9: ;
    MEM32(esp + 4) = 0xF;

loc_0036A901: ;
    g_seh_ebp = ebp; sub_00020028(); return; /* tail jmp 0x00020028 */

}

/**
 * sub_0036A910
 * Original: 0x0036A910 - 0x0036A92E (30 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A910: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A928; /* je: equal / zero */

loc_0036A91F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A925u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_0036A925: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036A928: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A940
 * Original: 0x0036A940 - 0x0036A949 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A940(void)
{

loc_0036A940: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A950
 * Original: 0x0036A950 - 0x0036A95C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A950: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A95B; /* je: equal / zero */

loc_0036A956: ;
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_0036A95B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A960
 * Original: 0x0036A960 - 0x0036A963 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A960(void)
{

loc_0036A960: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A970
 * Original: 0x0036A970 - 0x0036A98D (29 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A981u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036A981: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A9A0
 * Original: 0x0036A9A0 - 0x0036A9A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A9A0(void)
{

loc_0036A9A0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A9B0
 * Original: 0x0036A9B0 - 0x0036A9BC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A9B0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A9BB; /* je: equal / zero */

loc_0036A9B6: ;
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_0036A9BB: ;
    esp += 4; return; /* ret */

}
