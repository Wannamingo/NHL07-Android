/**
 * nhl_07_recomp - Recompiled code chunk 135
 * Functions: 250 (0x00211EC0 - 0x002182C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00211EC0
 * Original: 0x00211EC0 - 0x00211EC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211EC0(void)
{

loc_00211EC0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00211ED0
 * Original: 0x00211ED0 - 0x00211EDA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211ED0(void)
{

loc_00211ED0: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211EE0
 * Original: 0x00211EE0 - 0x00211EF7 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211EE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    edx = edx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + ecx + 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00211F00
 * Original: 0x00211F00 - 0x00211F06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211F00(void)
{

loc_00211F00: ;
    eax = MEM32(0x8FA838);
    esp += 4; return; /* ret */

}

/**
 * sub_00211F10
 * Original: 0x00211F10 - 0x00211F16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211F10(void)
{

loc_00211F10: ;
    eax = 0x8FA8D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00211F20
 * Original: 0x00211F20 - 0x00211F2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211F20(void)
{

loc_00211F20: ;
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax + 0x8FA8D0));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211F30
 * Original: 0x00211F30 - 0x00211F46 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211F30(void)
{

loc_00211F30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x31;
    esi = 0x8FA998;
    edi = 0x8FA8D0;
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
    esp += 4; return; /* ret */

}

/**
 * sub_00211F50
 * Original: 0x00211F50 - 0x00211F59 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211F50(void)
{

loc_00211F50: ;
    eax = ecx;
    MEM32(eax) = 0x7F9D38;
    esp += 4; return; /* ret */

}

/**
 * sub_00211F60
 * Original: 0x00211F60 - 0x00211FD5 (117 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi) = 0x7FA2E0;
    if (CMP_EQ(_fa, _fb)) goto loc_00211F79; /* je: equal / zero */

loc_00211F73: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00211F79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211F77u); } /* indirect call */
    }

loc_00211F79: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211F86; /* je: equal / zero */

loc_00211F80: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00211F86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211F84u); } /* indirect call */
    }

loc_00211F86: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211F93; /* je: equal / zero */

loc_00211F8D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00211F93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211F91u); } /* indirect call */
    }

loc_00211F93: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211FA0; /* je: equal / zero */

loc_00211F9A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00211FA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211F9Eu); } /* indirect call */
    }

loc_00211FA0: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00211FAD; /* je: equal / zero */

loc_00211FA7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00211FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211FABu); } /* indirect call */
    }

loc_00211FAD: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00211FCC; /* je: equal / zero */

loc_00211FC3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00211FC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00211FC7u); } /* indirect call */
    }

loc_00211FC9: ;
    MEM32(esi + 0x34) = edi;

loc_00211FCC: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7F9D38;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212000
 * Original: 0x00212000 - 0x00212050 (80 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7D5);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00212013u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_00212013: ;
    PUSH32(esp, 0x00212018u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212018: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212043; /* je: equal / zero */

loc_0021201C: ;
    ecx = eax;
    PUSH32(esp, 0x00212023u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212023: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212036; /* je: equal / zero */

loc_00212027: ;
    eax = MEM32(eax + 0x50);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00212036: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp);
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00212043: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp);
    MEM32(eax) = edx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212070
 * Original: 0x00212070 - 0x00212090 (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212070(void)
{

loc_00212070: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021207Fu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021207F: ;
    ecx = eax;
    PUSH32(esp, 0x00212086u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212086: ;
    ecx = eax;
    PUSH32(esp, 0x0021208Du); RECOMP_ABI_CALL(0x0003026Bu, sub_0003026B); /* call 0x0003026B */

loc_0021208D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00212078
 * Original: 0x00212078 - 0x00212090 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212078(void)
{

loc_00212078: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0021207Fu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021207F: ;
    ecx = eax;
    PUSH32(esp, 0x00212086u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212086: ;
    ecx = eax;
    PUSH32(esp, 0x0021208Du); RECOMP_ABI_CALL(0x0003026Bu, sub_0003026B); /* call 0x0003026B */

loc_0021208D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002120A0
 * Original: 0x002120A0 - 0x002120BD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002120A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002120A0: ;
    PUSH32(esp, 0x002120A5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002120A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002120BC; /* je: equal / zero */

loc_002120A9: ;
    ecx = eax;
    PUSH32(esp, 0x002120B0u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002120B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002120BC; /* je: equal / zero */

loc_002120B4: ;
    ecx = eax + 0x40;
    g_seh_ebp = ebp; sub_00012112(); return; /* tail jmp 0x00012112 */

loc_002120BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002120D0
 * Original: 0x002120D0 - 0x002120EC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002120D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002120D0: ;
    PUSH32(esp, 0x002120D5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002120D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002120EB; /* je: equal / zero */

loc_002120D9: ;
    ecx = eax;
    PUSH32(esp, 0x002120E0u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002120E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002120EB; /* je: equal / zero */

loc_002120E4: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00030D51(); return; /* tail jmp 0x00030D51 */

loc_002120EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212100
 * Original: 0x00212100 - 0x0021211C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212100: ;
    PUSH32(esp, 0x00212105u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021211B; /* je: equal / zero */

loc_00212109: ;
    ecx = eax;
    PUSH32(esp, 0x00212110u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212110: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021211B; /* je: equal / zero */

loc_00212114: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002CA12(); return; /* tail jmp 0x0002CA12 */

loc_0021211B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212130
 * Original: 0x00212130 - 0x00212156 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00212138u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212138: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212154; /* je: equal / zero */

loc_0021213C: ;
    ecx = eax;
    PUSH32(esp, 0x00212143u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212154; /* je: equal / zero */

loc_00212147: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212154; /* jne: not equal / not zero */

loc_0021214D: ;
    eax = MEM32(eax + 0x5C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;

loc_00212154: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212160
 * Original: 0x00212160 - 0x00212186 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212160: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00212168u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212168: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212184; /* je: equal / zero */

loc_0021216C: ;
    ecx = eax;
    PUSH32(esp, 0x00212173u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212184; /* je: equal / zero */

loc_00212177: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212184; /* jne: not equal / not zero */

loc_0021217D: ;
    MEM32(esi + 0x18) = 5;

loc_00212184: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212190
 * Original: 0x00212190 - 0x00212198 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212190: ;
    eax = MEM32(ecx + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002121A0
 * Original: 0x002121A0 - 0x002121A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002121A0(void)
{

loc_002121A0: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_002121B0
 * Original: 0x002121B0 - 0x00212215 (101 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002121B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002121B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 2;
    if ((_fa == 0)) goto loc_002121CD; /* je: equal / zero */

loc_002121BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002121C6; /* je: equal / zero */

loc_002121C1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002121D2; /* jne: not equal / not zero */

loc_002121C4: ;
    goto loc_002121D2;

loc_002121C6: ;
    ecx = 1;
    goto loc_002121D2;

loc_002121CD: ;
    ecx = 3;

loc_002121D2: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8F9CCC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212211; /* je: equal / zero */

loc_002121DD: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002121E5u); RECOMP_ABI_CALL(0x0001F277u, sub_0001F277); /* call 0x0001F277 */

loc_002121E5: ;
    PUSH32(esp, 0x002121EAu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002121EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212211; /* je: equal / zero */

loc_002121EE: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x002121F6u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002121F6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212210; /* je: equal / zero */

loc_002121FC: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00212208u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00212208: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00212210u); RECOMP_ABI_CALL(0x0001345Eu, sub_0001345E); /* call 0x0001345E */

loc_00212210: ;
    POP32(esp, edi);

loc_00212211: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00212230
 * Original: 0x00212230 - 0x00212279 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212230: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8F9CCC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212277; /* je: equal / zero */

loc_0021223B: ;
    ecx = edi;
    PUSH32(esp, 0x00212242u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00212242: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212277; /* je: equal / zero */

loc_00212246: ;
    PUSH32(esp, 0x0021224Bu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021224B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021226F; /* je: equal / zero */

loc_0021224F: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00212257u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00212257: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021226E; /* je: equal / zero */

loc_0021225D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x00212267u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00212267: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x20); PUSH32(esp, 0x0021226Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021226Au); } /* indirect call */
    }

loc_0021226D: ;
    POP32(esp, ebx);

loc_0021226E: ;
    POP32(esp, esi);

loc_0021226F: ;
    ecx = edi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0001B1F9(); return; /* tail jmp 0x0001B1F9 */

loc_00212277: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212290
 * Original: 0x00212290 - 0x002122B7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212290: ;
    PUSH32(esp, 0x00212295u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212295: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002122B4; /* je: equal / zero */

loc_00212299: ;
    ecx = eax;
    PUSH32(esp, 0x002122A0u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002122A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002122B4; /* je: equal / zero */

loc_002122A4: ;
    eax = MEM32(eax + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002122B1; /* je: equal / zero */

loc_002122AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002122B4; /* jne: not equal / not zero */

loc_002122B1: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002122B4: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002122C0
 * Original: 0x002122C0 - 0x002122E0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002122C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002122C0: ;
    PUSH32(esp, 0x002122C5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002122C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002122DD; /* je: equal / zero */

loc_002122C9: ;
    ecx = eax;
    PUSH32(esp, 0x002122D0u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002122D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002122DD; /* je: equal / zero */

loc_002122D4: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002122DD; /* jne: not equal / not zero */

loc_002122DA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002122DD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002122F0
 * Original: 0x002122F0 - 0x00212310 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002122F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002122F0: ;
    PUSH32(esp, 0x002122F5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002122F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021230D; /* je: equal / zero */

loc_002122F9: ;
    ecx = eax;
    PUSH32(esp, 0x00212300u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021230D; /* je: equal / zero */

loc_00212304: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021230D; /* jne: not equal / not zero */

loc_0021230A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0021230D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212320
 * Original: 0x00212320 - 0x00212340 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212320: ;
    PUSH32(esp, 0x00212325u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212325: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021233D; /* je: equal / zero */

loc_00212329: ;
    ecx = eax;
    PUSH32(esp, 0x00212330u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021233D; /* je: equal / zero */

loc_00212334: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021233D; /* jne: not equal / not zero */

loc_0021233A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0021233D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212350
 * Original: 0x00212350 - 0x00212370 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212350: ;
    PUSH32(esp, 0x00212355u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212355: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021236D; /* je: equal / zero */

loc_00212359: ;
    ecx = eax;
    PUSH32(esp, 0x00212360u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212360: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021236D; /* je: equal / zero */

loc_00212364: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021236D; /* jne: not equal / not zero */

loc_0021236A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0021236D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212380
 * Original: 0x00212380 - 0x002123A0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212380: ;
    PUSH32(esp, 0x00212385u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021239D; /* je: equal / zero */

loc_00212389: ;
    ecx = eax;
    PUSH32(esp, 0x00212390u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021239D; /* je: equal / zero */

loc_00212394: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021239D; /* jne: not equal / not zero */

loc_0021239A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0021239D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002123B0
 * Original: 0x002123B0 - 0x002123D0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002123B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002123B0: ;
    PUSH32(esp, 0x002123B5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002123B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002123CD; /* je: equal / zero */

loc_002123B9: ;
    ecx = eax;
    PUSH32(esp, 0x002123C0u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002123C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002123CD; /* je: equal / zero */

loc_002123C4: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002123CD; /* jne: not equal / not zero */

loc_002123CA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002123CD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002123E0
 * Original: 0x002123E0 - 0x002123F0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002123E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002123E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = 1;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00212400
 * Original: 0x00212400 - 0x00212440 (64 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212400: ;
    eax = MEM32(0x7FA48C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    ecx = MEM32(0x7FA490);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x0021241Au); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021241A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021243C; /* je: equal / zero */

loc_0021241E: ;
    ecx = eax;
    PUSH32(esp, 0x00212425u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212425: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021243C; /* je: equal / zero */

loc_00212429: ;
    eax = 0x8FA4A0;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00212432: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212432; /* jne: not equal / not zero */

loc_0021243C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212450
 * Original: 0x00212450 - 0x0021247D (45 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212450: ;
    PUSH32(esp, 0x00212455u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212455: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021247A; /* je: equal / zero */

loc_00212459: ;
    ecx = eax;
    PUSH32(esp, 0x00212460u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212460: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021247A; /* je: equal / zero */

loc_00212464: ;
    eax = MEM32(esp + 4);
    edx = 0x8FA4A0;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00212470: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212470; /* jne: not equal / not zero */

loc_0021247A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212490
 * Original: 0x00212490 - 0x002124AD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212490: ;
    PUSH32(esp, 0x00212495u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212495: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002124AA; /* je: equal / zero */

loc_00212499: ;
    ecx = eax;
    PUSH32(esp, 0x002124A0u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002124A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002124AA; /* je: equal / zero */

loc_002124A4: ;
    SET_LO8(eax, MEM8(0x8C2250));
    esp += 4; return; /* ret */

loc_002124AA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002124C0
 * Original: 0x002124C0 - 0x00212521 (97 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002124C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002124C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x002124CFu); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_002124CF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x002124E5u); RECOMP_ABI_CALL(0x00027BCFu, sub_00027BCF); /* call 0x00027BCF */

loc_002124E5: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0021250Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021250Au); } /* indirect call */
    }

loc_0021250D: ;
    ecx = esp + 8;
    esi = eax;
    PUSH32(esp, 0x00212518u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00212518: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00212540
 * Original: 0x00212540 - 0x002125A2 (98 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212540: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00212548u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212548: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021256C; /* je: equal / zero */

loc_0021254C: ;
    ecx = eax;
    PUSH32(esp, 0x00212553u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00212553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021256C; /* je: equal / zero */

loc_00212557: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021255Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021255Bu); } /* indirect call */
    }

loc_0021255E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021256C; /* jne: not equal / not zero */

loc_00212563: ;
    eax = 0x7D5;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021256C: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x00212576u); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_00212576: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0021258Eu); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_0021258E: ;
    esi = MEM32(esp + 4);
    ecx = esp + 8;
    PUSH32(esp, 0x0021259Bu); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_0021259B: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002125C0
 * Original: 0x002125C0 - 0x002125D0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002125C0(void)
{

loc_002125C0: ;
    PUSH32(esp, 0x002125C5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002125C5: ;
    ecx = eax;
    PUSH32(esp, 0x002125CCu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002125CC: ;
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_002125E0
 * Original: 0x002125E0 - 0x002125F0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002125E0(void)
{

loc_002125E0: ;
    PUSH32(esp, 0x002125E5u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002125E5: ;
    ecx = eax;
    PUSH32(esp, 0x002125ECu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002125EC: ;
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00212600
 * Original: 0x00212600 - 0x00212610 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212600(void)
{

loc_00212600: ;
    PUSH32(esp, 0x00212605u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212605: ;
    ecx = eax;
    PUSH32(esp, 0x0021260Cu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0021260C: ;
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00212620
 * Original: 0x00212620 - 0x00212630 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212620(void)
{

loc_00212620: ;
    PUSH32(esp, 0x00212625u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212625: ;
    ecx = eax;
    PUSH32(esp, 0x0021262Cu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0021262C: ;
    eax = MEM32(eax + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_00212640
 * Original: 0x00212640 - 0x00212650 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212640(void)
{

loc_00212640: ;
    PUSH32(esp, 0x00212645u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212645: ;
    ecx = eax;
    PUSH32(esp, 0x0021264Cu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_0021264C: ;
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00212660
 * Original: 0x00212660 - 0x0021267B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212660: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0021266Eu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0021266E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212677; /* je: equal / zero */

loc_00212672: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00212677: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212690
 * Original: 0x00212690 - 0x002126AB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212690: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0021269Eu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0021269E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002126A7; /* je: equal / zero */

loc_002126A2: ;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002126A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002126C0
 * Original: 0x002126C0 - 0x002126C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002126C0(void)
{

loc_002126C0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_002126D0
 * Original: 0x002126D0 - 0x00212709 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002126D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002126D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x002126DDu); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_002126DD: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x002126F5u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_002126F5: ;
    esi = MEM32(esp + 4);
    ecx = esp + 8;
    PUSH32(esp, 0x00212702u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00212702: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212720
 * Original: 0x00212720 - 0x00212749 (41 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212720: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0021272Bu); RECOMP_ABI_CALL(0x00022823u, sub_00022823); /* call 0x00022823 */

loc_0021272B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esp + 8;
    PUSH32(esp, 0x0021273Bu); RECOMP_ABI_CALL(0x000239ADu, sub_000239AD); /* call 0x000239AD */

loc_0021273B: ;
    ecx = esp;
    PUSH32(esp, 0x00212743u); RECOMP_ABI_CALL(0x00020622u, sub_00020622); /* call 0x00020622 */

loc_00212743: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212760
 * Original: 0x00212760 - 0x002127A7 (71 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212760: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ecx = esp + 4;
    PUSH32(esp, 0x00212770u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00212770: ;
    ecx = MEM32(esp + 0xB4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00212786u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00212786: ;
    eax = MEM32(esp + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = esp + 4;
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0021279Bu); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_0021279B: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002127C0
 * Original: 0x002127C0 - 0x00212871 (177 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002127C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002127C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002127CCu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002127CC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212869; /* je: equal / zero */

loc_002127D6: ;
    ecx = esi;
    PUSH32(esp, 0x002127DDu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002127DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212869; /* je: equal / zero */

loc_002127E5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002127ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002127E9u); } /* indirect call */
    }

loc_002127EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212816; /* jne: not equal / not zero */

loc_002127F1: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x002127FAu); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_002127FA: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00212803u); RECOMP_ABI_CALL(0x0001A47Fu, sub_0001A47F); /* call 0x0001A47F */

loc_00212803: ;
    ecx = esp + 0xC;
    esi = eax;
    PUSH32(esp, 0x0021280Eu); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_0021280E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00212816: ;
    ecx = esi;
    PUSH32(esp, 0x0021281Du); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021281D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212869; /* je: equal / zero */

loc_00212821: ;
    PUSH32(esp, edi);
    edi = eax + 0x64;
    ecx = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0021282Eu); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021282E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00212860; /* jle: less or equal (signed <=) */

loc_00212832: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00212847u); RECOMP_ABI_CALL(0x0001CF8Bu, sub_0001CF8B); /* call 0x0001CF8B */

loc_00212847: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212854; /* je: equal / zero */

loc_0021284B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212854; /* jne: not equal / not zero */

loc_00212853: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00212854: ;
    ecx = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0021285Cu); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_0021285C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212832; /* jl: less (signed <) */

loc_00212860: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00212869: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002128A0
 * Original: 0x002128A0 - 0x0021290F (111 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002128A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002128A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002128ACu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002128AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212907; /* je: equal / zero */

loc_002128B2: ;
    ecx = esi;
    PUSH32(esp, 0x002128B9u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_002128B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212907; /* je: equal / zero */

loc_002128BD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002128C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002128C1u); } /* indirect call */
    }

loc_002128C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002128EE; /* jne: not equal / not zero */

loc_002128C9: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002128D2u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_002128D2: ;
    ecx = esp + 8;
    PUSH32(esp, 0x002128DBu); RECOMP_ABI_CALL(0x0001A47Fu, sub_0001A47F); /* call 0x0001A47F */

loc_002128DB: ;
    ecx = esp + 8;
    esi = eax;
    PUSH32(esp, 0x002128E6u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_002128E6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002128EE: ;
    ecx = esi;
    PUSH32(esp, 0x002128F5u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002128F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212907; /* je: equal / zero */

loc_002128F9: ;
    ecx = eax + 0x64;
    PUSH32(esp, 0x00212901u); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_00212901: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00212907: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212930
 * Original: 0x00212930 - 0x00212A15 (229 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212930: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00212941u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212941: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002129F7; /* je: equal / zero */

loc_0021294B: ;
    ecx = esi;
    PUSH32(esp, 0x00212952u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00212952: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002129F7; /* je: equal / zero */

loc_0021295A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00212961u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021295Eu); } /* indirect call */
    }

loc_00212961: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002129A1; /* jne: not equal / not zero */

loc_00212966: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14C); PUSH32(esp, 0x00212970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021296Au); } /* indirect call */
    }

loc_00212970: ;
    edx = MEM32(esp + 0xB4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00212985u); RECOMP_ABI_CALL(0x000230EDu, sub_000230ED); /* call 0x000230ED */

loc_00212985: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x0021298Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212989u); } /* indirect call */
    }

loc_0021298F: ;
    eax = ZX8(MEM8(esp + 0x3C));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002129A1: ;
    ecx = esi;
    PUSH32(esp, 0x002129A8u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002129A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002129F7; /* je: equal / zero */

loc_002129AC: ;
    edi = eax + 0x64;
    ecx = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002129BAu); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_002129BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002129F7; /* jle: less or equal (signed <=) */

loc_002129BE: ;
    ebp = MEM32(esp + 0xB4);

loc_002129C5: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x002129DAu); RECOMP_ABI_CALL(0x0001CF8Bu, sub_0001CF8B); /* call 0x0001CF8B */

loc_002129DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002129EB; /* je: equal / zero */

loc_002129DE: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002129EB; /* jne: not equal / not zero */

loc_002129E6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212A06; /* je: equal / zero */

loc_002129EA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002129EB: ;
    ecx = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x002129F3u); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_002129F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002129C5; /* jl: less (signed <) */

loc_002129F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00212A06: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212A50
 * Original: 0x00212A50 - 0x00212A63 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212A50: ;
    PUSH32(esp, 0x00212A55u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212A55: ;
    ecx = eax;
    PUSH32(esp, 0x00212A5Cu); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00212A5C: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_00212A70
 * Original: 0x00212A70 - 0x00212A8F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212A70: ;
    PUSH32(esp, 0x00212A75u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212A75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212A89; /* je: equal / zero */

loc_00212A79: ;
    ecx = eax;
    PUSH32(esp, 0x00212A80u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212A80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212A89; /* je: equal / zero */

loc_00212A84: ;
    eax = MEM32(eax + 0x5C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00212A89: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00212AA0
 * Original: 0x00212AA0 - 0x00212AAE (14 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212AA0(void)
{

loc_00212AA0: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax * 4 + 0x7FA498);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00212AC0
 * Original: 0x00212AC0 - 0x00212AE7 (39 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212AC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    MEM32(esp) = 4;
    MEM32(esp + 4) = 2;
    MEM32(esp + 8) = 1;
    eax = MEM32(esp + eax * 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00212AF0
 * Original: 0x00212AF0 - 0x00212B5D (109 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212AF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00212AF9u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00212AF9: ;
    ecx = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00212B02u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00212B02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212B47; /* je: equal / zero */

loc_00212B06: ;
    _fa = (uint32_t)(MEM32(eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x5C), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212B3E; /* jl: less (signed <) */

loc_00212B0C: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00212B15u); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_00212B15: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x00212B29u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_00212B29: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    ecx = esp + 8;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00212B3Eu); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00212B3E: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00212B47: ;
    eax = MEM32(0x8B51F4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212B80
 * Original: 0x00212B80 - 0x00212B86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212B80(void)
{

loc_00212B80: ;
    eax = 0x7CA;
    esp += 4; return; /* ret */

}

/**
 * sub_00212B90
 * Original: 0x00212B90 - 0x00212D44 (436 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212B90: ;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, 0x00212BA1u); RECOMP_ABI_CALL(0x0002DFDEu, sub_0002DFDE); /* call 0x0002DFDE */

loc_00212BA1: ;
    ecx = MEM32(esp + 0x13C);
    edx = MEM32(esp + 0x140);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    MEM32(esp + 0x28) = 0x7FA120;
    PUSH32(esp, 0x00212BC7u); RECOMP_ABI_CALL(0x0001BB27u, sub_0001BB27); /* call 0x0001BB27 */

loc_00212BC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212D29; /* je: equal / zero */

loc_00212BCF: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212CEC; /* jl: less (signed <) */

loc_00212BDB: ;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00212BE5u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00212BE5: ;
    ecx = MEM32(esp + 0x24);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00212BF8u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00212BF8: ;
    edx = ZX8(MEM8(esp + 0x88));
    eax = MEM32(esp + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0x148);
    MEM32(edi) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00212CC8; /* je: equal / zero */

loc_00212C18: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x100;
    PUSH32(esp, eax);
    ecx = esp + 0xD3;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212C2Fu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00212C2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212C38u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00212C38: ;
    ecx = eax;
    PUSH32(esp, 0x00212C3Fu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00212C3F: ;
    eax = esp + 0xFC;
    edx = eax + 1;
    /* nop */

loc_00212C50: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212C50; /* jne: not equal / not zero */

loc_00212C57: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0x8E;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00212C66: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212C66; /* jne: not equal / not zero */

loc_00212C6D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + edx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    POP32(esp, esi);
    eax = esp + 0x8E;
    if (CMP_AE(_fa, _fb)) goto loc_00212CA6; /* jae: above or equal (unsigned >=) */

loc_00212C80: ;
    PUSH32(esp, eax);
    ecx = esp + 0x100;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0380);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00212C97u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00212C97: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x00212CA3u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00212CA3: ;
    POP32(esp, edi);
    goto loc_00212D0E;

loc_00212CA6: ;
    edx = edi + 4;
    ecx = esp + 0x8E;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00212CB2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212CB2; /* jne: not equal / not zero */

loc_00212CBC: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00212CC5u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00212CC5: ;
    POP32(esp, edi);
    goto loc_00212D0E;

loc_00212CC8: ;
    eax = esp + 0x8E;
    edx = edi + 4;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00212CD6: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212CD6; /* jne: not equal / not zero */

loc_00212CE0: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00212CE9u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00212CE9: ;
    POP32(esp, edi);
    goto loc_00212D0E;

loc_00212CEC: ;
    ecx = MEM32(esp + 0x144);
    eax = esp + 0x24;
    edx = ecx + 4;
    MEM32(ecx) = 0xFFFFFFFFu;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00212D04: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212D04; /* jne: not equal / not zero */

loc_00212D0E: ;
    ecx = esp;
    MEM32(esp + 0x1C) = 0x7FA120;
    PUSH32(esp, 0x00212D1Eu); RECOMP_ABI_CALL(0x0002C995u, sub_0002C995); /* call 0x0002C995 */

loc_00212D1E: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00212D29: ;
    ecx = esp;
    MEM32(esp + 0x1C) = 0x7FA120;
    PUSH32(esp, 0x00212D39u); RECOMP_ABI_CALL(0x0002C995u, sub_0002C995); /* call 0x0002C995 */

loc_00212D39: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x138;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00212DC0
 * Original: 0x00212DC0 - 0x00212FED (557 bytes, 183 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212DC0: ;
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x16C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00212DD9u); RECOMP_ABI_CALL(0x0002DFDEu, sub_0002DFDE); /* call 0x0002DFDE */

loc_00212DD9: ;
    ebx = MEM32(esp + 0x18C);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212DF3u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00212DF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212E23; /* je: equal / zero */

loc_00212DFA: ;
    edi = eax + 4;
    MEM32(eax) = ebx;
    eax = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00212E1D; /* jl: less (signed <) */

loc_00212E08: ;
    ebp = eax + 1;
    goto loc_00212E10;

    /* nop */

loc_00212E10: ;
    ecx = esi;
    PUSH32(esp, 0x00212E17u); RECOMP_ABI_CALL(0x0001799Bu, sub_0001799B); /* call 0x0001799B */

loc_00212E17: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00212E10; /* jne: not equal / not zero */

loc_00212E1D: ;
    MEM32(esp + 0x10) = edi;
    goto loc_00212E2F;

loc_00212E23: ;
    MEM32(esp + 0x10) = 0;
    edi = MEM32(esp + 0x10);

loc_00212E2F: ;
    ecx = MEM32(esp + 0x180);
    edx = MEM32(esp + 0x184);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00212E4Du); RECOMP_ABI_CALL(0x0002FDE8u, sub_0002FDE8); /* call 0x0002FDE8 */

loc_00212E4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212FB2; /* je: equal / zero */

loc_00212E55: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00212FAE; /* jle: less or equal (signed <=) */

loc_00212E5D: ;
    eax = MEM32(esp + 0x188);
    esi = eax + 4;
    ecx = esp + 0x72;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;

loc_00212E75: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212EB5; /* jl: less (signed <) */

loc_00212E7A: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00212E83u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00212E83: ;
    eax = MEM32(edi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00212E94u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00212E94: ;
    ecx = ZX8(MEM8(esp + 0x6C));
    MEM32(esi + -4) = ecx;
    eax = esp + 0x72;

loc_00212EA0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212EA0; /* jne: not equal / not zero */

loc_00212EAA: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00212EB3u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00212EB3: ;
    goto loc_00212ED0;

loc_00212EB5: ;
    eax = edi + 4;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + -4) = 0xFFFFFFFFu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00212EC6: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212EC6; /* jne: not equal / not zero */

loc_00212ED0: ;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212F7C; /* jl: less (signed <) */

loc_00212EDB: ;
    _fa = (uint32_t)(MEM32(esp + 0x184)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x184), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212F5C; /* jne: not equal / not zero */

loc_00212EE5: ;
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00212EF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212EEEu); } /* indirect call */
    }

loc_00212EF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212F3A; /* je: equal / zero */

loc_00212EF8: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00212F01u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00212F01: ;
    ecx = MEM32(edi);
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00212F15u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00212F15: ;
    edx = esp + 0x10E;
    PUSH32(esp, edx);
    eax = esi + 0x36;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212F26u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00212F26: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x34;
    MEM32(esi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00212F38u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00212F38: ;
    goto loc_00212F9A;

loc_00212F3A: ;
    ecx = edi + -4;
    PUSH32(esp, 0x00212F42u); RECOMP_ABI_CALL(0x0001C55Eu, sub_0001C55E); /* call 0x0001C55E */

loc_00212F42: ;
    PUSH32(esp, eax);
    ecx = esi + 0x36;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00212F51u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00212F51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0xFFFFFFFFu;
    goto loc_00212F9A;

loc_00212F5C: ;
    ecx = edi + -4;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00212F66u); RECOMP_ABI_CALL(0x0001C55Eu, sub_0001C55E); /* call 0x0001C55E */

loc_00212F66: ;
    edx = esi + 0x36;
    /* nop */

loc_00212F70: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00212F70; /* jne: not equal / not zero */

loc_00212F7A: ;
    goto loc_00212F9A;

loc_00212F7C: ;
    ecx = edi + -4;
    MEM32(esi) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00212F8Au); RECOMP_ABI_CALL(0x0001C55Eu, sub_0001C55E); /* call 0x0001C55E */

loc_00212F8A: ;
    edx = esi + 0x36;
    /* nop */

loc_00212F90: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00212F90; /* jne: not equal / not zero */

loc_00212F9A: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x6C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00212E75; /* jne: not equal / not zero */

loc_00212FAA: ;
    edi = MEM32(esp + 0x10);

loc_00212FAE: ;
    SET_LO8(ebx, 1);
    goto loc_00212FB4;

loc_00212FB2: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00212FB4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212FD5; /* je: equal / zero */

loc_00212FB8: ;
    ecx = MEM32(edi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_00212FCC; /* je: equal / zero */

loc_00212FC2: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00212FCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212FC8u); } /* indirect call */
    }

loc_00212FCA: ;
    goto loc_00212FD5;

loc_00212FCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212FD2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00212FD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00212FD5: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00212FDEu); RECOMP_ABI_CALL(0x0002C995u, sub_0002C995); /* call 0x0002C995 */

loc_00212FDE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x16C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00213080
 * Original: 0x00213080 - 0x002130E2 (98 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213080: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002130C6; /* je: equal / zero */

loc_0021308D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x7C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002130AF; /* js: sign (negative) */

loc_0021309F: ;
    edi = eax + 1;

loc_002130A2: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x7C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x002130ACu); RECOMP_ABI_CALL(0x00030FE0u, sub_00030FE0); /* call 0x00030FE0 */

loc_002130AC: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002130A2; /* jne: not equal / not zero */

loc_002130AF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002130BD; /* je: equal / zero */

loc_002130B4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002130BAu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002130BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002130BD: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002130C6: ;
    ecx = edi;
    PUSH32(esp, 0x002130CDu); RECOMP_ABI_CALL(0x00030FE0u, sub_00030FE0); /* call 0x00030FE0 */

loc_002130CD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002130DB; /* je: equal / zero */

loc_002130D2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002130D8u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002130D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002130DB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213100
 * Original: 0x00213100 - 0x0021313E (62 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213100: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 8;
    PUSH32(esp, 0x0021310Fu); RECOMP_ABI_CALL(0x0002DFDEu, sub_0002DFDE); /* call 0x0002DFDE */

loc_0021310F: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0021312Au); RECOMP_ABI_CALL(0x0002C625u, sub_0002C625); /* call 0x0002C625 */

loc_0021312A: ;
    ecx = esp + 4;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00213135u); RECOMP_ABI_CALL(0x0002C995u, sub_0002C995); /* call 0x0002C995 */

loc_00213135: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00213150
 * Original: 0x00213150 - 0x002131AF (95 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213150: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0021315Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213156u); } /* indirect call */
    }

loc_0021315C: ;
    ebp = eax;
    PUSH32(esp, 0x00213163u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00213163: ;
    ecx = eax;
    PUSH32(esp, 0x0021316Au); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021316A: ;
    ecx = MEM32(eax + 0x5C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00213178u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213172u); } /* indirect call */
    }

loc_00213178: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x00213181u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_00213181: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002131A1; /* jle: less or equal (signed <=) */

loc_00213189: ;
    /* nop */

loc_00213190: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00213198u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_00213198: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002131A8; /* je: equal / zero */

loc_0021319C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213190; /* jl: less (signed <) */

loc_002131A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002131A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002131D0
 * Original: 0x002131D0 - 0x002131D5 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002131D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002131D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002131E0
 * Original: 0x002131E0 - 0x00213451 (625 bytes, 188 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002131E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002131E0: ;
    _fb = (uint32_t)(0xF58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002131F1u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002131F1: ;
    ecx = eax;
    PUSH32(esp, 0x002131F8u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002131F8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021320D; /* jne: not equal / not zero */

loc_002131FE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021320D: ;
    MEM32(esp + 0x18) = 0;
    eax = MEM32(edi + 0x50);
    MEM32(esp + 0x18) = eax;
    ebx = MEM32(edi + 0x58);
    MEM8(esi + 0x2D) = 1;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021322Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021322Bu); } /* indirect call */
    }

loc_0021322E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021333C; /* jne: not equal / not zero */

loc_00213239: ;
    MEM8(esi + 0x28) = 1;

loc_0021323D: ;
    MEM8(esi + 0x29) = 0;

loc_00213241: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0021324Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213245u); } /* indirect call */
    }

loc_0021324B: ;
    ecx = MEM32(esp + 0x10);
    ebx = esi + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00213260u); RECOMP_ABI_CALL(0x000315EEu, sub_000315EE); /* call 0x000315EE */

loc_00213260: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    MEM8(esi + 0x2A) = 0;
    MEM8(esi + 0x2B) = 0;
    MEM8(ebx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0021328B; /* je: equal / zero */

loc_00213273: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021328B; /* je: equal / zero */

loc_00213278: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021328B; /* je: equal / zero */

loc_0021327D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021328B; /* je: equal / zero */

loc_00213282: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213439; /* jne: not equal / not zero */

loc_0021328B: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00213294u); RECOMP_ABI_CALL(0x0001862Au, sub_0001862A); /* call 0x0001862A */

loc_00213294: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x15);
    ecx = esp + 0x34;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = edi;
    PUSH32(esp, 0x002132B3u); RECOMP_ABI_CALL(0x0002507Du, sub_0002507D); /* call 0x0002507D */

loc_002132B3: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    MEM8(esi + 0x2A) = 0;
    MEM8(esi + 0x2B) = 0;
    MEM8(ebx) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_002133C7; /* jne: not equal / not zero */

loc_002132CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002132DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002132D6u); } /* indirect call */
    }

loc_002132DC: ;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x002132E6u); RECOMP_ABI_CALL(0x0002F9C4u, sub_0002F9C4); /* call 0x0002F9C4 */

loc_002132E6: ;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x002132F4u); RECOMP_ABI_CALL(0x00028994u, sub_00028994); /* call 0x00028994 */

loc_002132F4: ;
    ecx = MEM32(esp + 0x40);
    ebp = MEM32(ecx + 0x82BC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_002133B8; /* jle: less or equal (signed <=) */

loc_0021330E: ;
    edi = edi;

loc_00213310: ;
    PUSH32(esp, 2);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00213321u); RECOMP_ABI_CALL(0x00017342u, sub_00017342); /* call 0x00017342 */

loc_00213321: ;
    SET_LO8(eax, MEM8(esp + 0x355));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0021339D; /* jbe: below or equal (unsigned <=) */

loc_0021332C: ;
    _fa = (uint32_t)(MEM8(esp + 0x2C0)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x2C0), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213397; /* jne: not equal / not zero */

loc_00213336: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002133A1;

loc_0021333C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213363; /* je: equal / zero */

loc_00213341: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213367; /* jle: less or equal (signed <=) */

loc_00213346: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00213367; /* jg: greater (signed >) */

loc_0021334B: ;
    ecx = esp + 0x18;
    MEM8(esi + 0x28) = 1;
    PUSH32(esp, 0x00213358u); RECOMP_ABI_CALL(0x00012A09u, sub_00012A09); /* call 0x00012A09 */

loc_00213358: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021336B; /* je: equal / zero */

loc_0021335D: ;
    MEM8(esi + 0x2D) = 0;
    goto loc_0021336B;

loc_00213363: ;
    MEM8(esi + 0x2D) = 0;

loc_00213367: ;
    MEM8(esi + 0x28) = 0;

loc_0021336B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021323D; /* je: equal / zero */

loc_00213374: ;
    edi = MEM32(edi + 0x58);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021338E; /* je: equal / zero */

loc_0021337C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021323D; /* jle: less or equal (signed <=) */

loc_00213385: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021323D; /* jg: greater (signed >) */

loc_0021338E: ;
    MEM8(esi + 0x29) = 1;
    goto loc_00213241;

loc_00213397: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002133A1;

loc_0021339D: ;
    MEM8(esi + 0x2A) = 1;

loc_002133A1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213310; /* jl: less (signed <) */

loc_002133AA: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002133B8; /* jl: less (signed <) */

loc_002133B1: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002133BC; /* jge: greater or equal (signed >=) */

loc_002133B8: ;
    MEM8(esi + 0x2B) = 1;

loc_002133BC: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x002133C5u); RECOMP_ABI_CALL(0x00032A07u, sub_00032A07); /* call 0x00032A07 */

loc_002133C5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002133C7: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213430; /* jne: not equal / not zero */

loc_002133CE: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    ecx = esp + 0x34;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x002133EBu); RECOMP_ABI_CALL(0x0002507Du, sub_0002507D); /* call 0x0002507D */

loc_002133EB: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213430; /* jne: not equal / not zero */

loc_002133F5: ;
    ecx = esp + 0x358;
    PUSH32(esp, 0x00213401u); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_00213401: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0021340Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213405u); } /* indirect call */
    }

loc_0021340B: ;
    PUSH32(esp, eax);
    ecx = esp + 0x35C;
    PUSH32(esp, 0x00213418u); RECOMP_ABI_CALL(0x0002566Du, sub_0002566D); /* call 0x0002566D */

loc_00213418: ;
    _fa = (uint32_t)(MEM32(esp + 0x364)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x364), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213424; /* je: equal / zero */

loc_00213421: ;
    MEM8(ebx) = 1;

loc_00213424: ;
    ecx = esp + 0x358;
    PUSH32(esp, 0x00213430u); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00213430: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00213439u); RECOMP_ABI_CALL(0x0001B9B5u, sub_0001B9B5); /* call 0x0001B9B5 */

loc_00213439: ;
    ecx = MEM32(esp + 0xF6C);
    SET_LO8(eax, MEM8(ecx + esi + 0x28));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xF58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002134F0
 * Original: 0x002134F0 - 0x0021352A (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002134F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002134F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x31;
    esi = 0x8FA998;
    edi = 0x8FA8D0;
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
    if ((_fa == 0)) goto loc_00213520; /* je: equal / zero */

loc_0021350E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00213516; /* je: equal / zero */

loc_00213511: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00213516: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8FA8D1);
    esp += 8; return; /* ret 4 */

loc_00213520: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8FA8D0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213540
 * Original: 0x00213540 - 0x0021367D (317 bytes, 100 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213540: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213558; /* jne: not equal / not zero */

loc_00213553: ;
    edi = 1;

loc_00213558: ;
    esi = MEM32(esp + 0xC2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00213670; /* jge: greater or equal (signed >=) */

loc_00213568: ;
    esi = esi + edi * 2;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x8FA8D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x8FA8D4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0021357Du); RECOMP_ABI_CALL(0x0002A384u, sub_0002A384); /* call 0x0002A384 */

loc_0021357D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002135A5; /* je: equal / zero */

loc_00213581: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0xC30);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax + 4) = edx;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_002135A5: ;
    ecx = esi;
    PUSH32(esp, 0x002135ACu); RECOMP_ABI_CALL(0x00016CC6u, sub_00016CC6); /* call 0x00016CC6 */

loc_002135AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213670; /* je: equal / zero */

loc_002135B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002135BFu); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_002135BF: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002135CBu); RECOMP_ABI_CALL(0x0002C2F1u, sub_0002C2F1); /* call 0x0002C2F1 */

loc_002135CB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002135D3u); RECOMP_ABI_CALL(0x000275DAu, sub_000275DA); /* call 0x000275DA */

loc_002135D3: ;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x002135DDu); RECOMP_ABI_CALL(0x0001B7C6u, sub_0001B7C6); /* call 0x0001B7C6 */

loc_002135DD: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x11);
    ebp = MEM32(esp + 0xC38);
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = 0;
    ebx = (uint32_t)(int32_t)SMEM8(edi + 0x8FA8D0);
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00213604u); RECOMP_ABI_CALL(0x0002566Du, sub_0002566D); /* call 0x0002566D */

loc_00213604: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0021364C; /* je: equal / zero */

loc_00213610: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021364C; /* jle: less or equal (signed <=) */

loc_00213616: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00213625u); RECOMP_ABI_CALL(0x0002637Eu, sub_0002637E); /* call 0x0002637E */

loc_00213625: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021363E; /* jne: not equal / not zero */

loc_0021362E: ;
    ecx = esi;
    PUSH32(esp, 0x00213635u); RECOMP_ABI_CALL(0x0002C2F1u, sub_0002C2F1); /* call 0x0002C2F1 */

loc_00213635: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x13);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213649; /* je: equal / zero */

loc_0021363E: ;
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213616; /* jl: less (signed <) */

loc_00213647: ;
    goto loc_0021364C;

loc_00213649: ;
    MEM32(ebp + 4) = edi;

loc_0021364C: ;
    ecx = esi;
    PUSH32(esp, 0x00213653u); RECOMP_ABI_CALL(0x0002C2F1u, sub_0002C2F1); /* call 0x0002C2F1 */

loc_00213653: ;
    esi = eax;
    ecx = esp + 0x1C;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00213661u); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00213661: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00213670: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002136D0
 * Original: 0x002136D0 - 0x002136F0 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002136D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002136D0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x002136D8u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002136D8: ;
    ecx = eax;
    PUSH32(esp, 0x002136DFu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002136DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002136EC; /* je: equal / zero */

loc_002136E3: ;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 9 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002136EC: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00213700
 * Original: 0x00213700 - 0x00213774 (116 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00213709u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00213709: ;
    ecx = eax;
    PUSH32(esp, 0x00213710u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00213710: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021376F; /* je: equal / zero */

loc_00213716: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021376F; /* jne: not equal / not zero */

loc_0021371C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00213723u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213720u); } /* indirect call */
    }

loc_00213723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213758; /* je: equal / zero */

loc_00213728: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0021372Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021372Cu); } /* indirect call */
    }

loc_0021372F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213758; /* je: equal / zero */

loc_00213734: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0021373Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213738u); } /* indirect call */
    }

loc_0021373B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213758; /* je: equal / zero */

loc_00213740: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213747u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213744u); } /* indirect call */
    }

loc_00213747: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213758; /* je: equal / zero */

loc_0021374C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00213753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213750u); } /* indirect call */
    }

loc_00213753: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021376F; /* jne: not equal / not zero */

loc_00213758: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0021375Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021375Cu); } /* indirect call */
    }

loc_0021375F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021376F; /* je: equal / zero */

loc_00213763: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    ecx = eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xF8)); return; /* indirect tail jmp */

loc_0021376F: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002137A0
 * Original: 0x002137A0 - 0x002137E9 (73 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002137A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002137A0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    esi = 8;
    PUSH32(esp, 0x002137B2u); RECOMP_ABI_CALL(0x00024902u, sub_00024902); /* call 0x00024902 */

loc_002137B2: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    MEM32(esp + 0x1C) = 0x7F77E0;
    PUSH32(esp, 0x002137CAu); RECOMP_ABI_CALL(0x0001104Bu, sub_0001104B); /* call 0x0001104B */

loc_002137CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) esi = MEM32(esp + 0x1C); /* cmovne */
    ecx = esp + 4;
    MEM32(esp + 0x14) = 0x7F77E0;
    PUSH32(esp, 0x002137E2u); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_002137E2: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00213800
 * Original: 0x00213800 - 0x002138AD (173 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213800: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0021380Cu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_0021380C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021385B; /* je: equal / zero */

loc_00213810: ;
    ecx = eax;
    PUSH32(esp, 0x00213817u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00213817: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021385B; /* je: equal / zero */

loc_0021381D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00213824u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213821u); } /* indirect call */
    }

loc_00213824: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213859; /* je: equal / zero */

loc_00213829: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021382Du); } /* indirect call */
    }

loc_00213830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213859; /* je: equal / zero */

loc_00213835: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0021383Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213839u); } /* indirect call */
    }

loc_0021383C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213859; /* je: equal / zero */

loc_00213841: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213848u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213845u); } /* indirect call */
    }

loc_00213848: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213859; /* je: equal / zero */

loc_0021384D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00213854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213851u); } /* indirect call */
    }

loc_00213854: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021385B; /* jne: not equal / not zero */

loc_00213859: ;
    SET_LO8(ebx, 1);

loc_0021385B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021386C; /* je: equal / zero */

loc_00213861: ;
    POP32(esp, esi);
    eax = 5;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021386C: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00213875u); RECOMP_ABI_CALL(0x00024902u, sub_00024902); /* call 0x00024902 */

loc_00213875: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEM32(esp + 0x20) = 0x7F77E0;
    PUSH32(esp, 0x0021388Du); RECOMP_ABI_CALL(0x0001104Bu, sub_0001104B); /* call 0x0001104B */

loc_0021388D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) esi = MEM32(esp + 0x24); /* cmovne */
    ecx = esp + 8;
    MEM32(esp + 0x18) = 0x7F77E0;
    PUSH32(esp, 0x002138A5u); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_002138A5: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002138E0
 * Original: 0x002138E0 - 0x002138E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002138E0(void)
{

loc_002138E0: ;
    eax = 0x7D6;
    esp += 4; return; /* ret */

}

/**
 * sub_002138F0
 * Original: 0x002138F0 - 0x00213939 (73 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002138F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002138F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002138F6u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002138F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213930; /* je: equal / zero */

loc_002138FA: ;
    ecx = eax;
    PUSH32(esp, 0x00213901u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00213901: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213930; /* je: equal / zero */

loc_00213905: ;
    edx = MEM32(esp + 8);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax + 0x64;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0021391Eu); RECOMP_ABI_CALL(0x0001CF8Bu, sub_0001CF8B); /* call 0x0001CF8B */

loc_0021391E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213930; /* je: equal / zero */

loc_00213922: ;
    ecx = MEM32(esp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00213930: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213950
 * Original: 0x00213950 - 0x0021397D (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213950: ;
    PUSH32(esp, 0x00213955u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00213955: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021397A; /* je: equal / zero */

loc_00213959: ;
    ecx = eax;
    PUSH32(esp, 0x00213960u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00213960: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021397A; /* je: equal / zero */

loc_00213964: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 8) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_000374D5(); return; /* tail jmp 0x000374D5 */

loc_0021397A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00213990
 * Original: 0x00213990 - 0x00213998 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213990(void)
{

loc_00213990: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002139A0
 * Original: 0x002139A0 - 0x002139A8 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002139A0(void)
{

loc_002139A0: ;
    eax = 0x7B891F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002139B0
 * Original: 0x002139B0 - 0x002139B3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002139B0(void)
{

loc_002139B0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002139C0
 * Original: 0x002139C0 - 0x002139C3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002139C0(void)
{

loc_002139C0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002139D0
 * Original: 0x002139D0 - 0x00213B27 (343 bytes, 116 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002139D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002139D0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x002139E1u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002139E1: ;
    ecx = eax;
    PUSH32(esp, 0x002139E8u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002139E8: ;
    edi = MEM32(esp + 0x120);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00213A06u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00213A06: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00213A19u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00213A19: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00213A2Bu); RECOMP_ABI_CALL(0x0001D21Au, sub_0001D21A); /* call 0x0001D21A */

loc_00213A2B: ;
    ebx = esi + 0x64;
    ecx = ebx;
    MEM32(esp + 0x1C) = 0x7F77E0;
    PUSH32(esp, 0x00213A3Du); RECOMP_ABI_CALL(0x00017AB3u, sub_00017AB3); /* call 0x00017AB3 */

loc_00213A3D: ;
    ecx = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + 0xC);
    edi = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00213B1A; /* jle: less or equal (signed <=) */

loc_00213A5B: ;
    goto loc_00213A60;

    /* nop */

loc_00213A60: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x10);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00213A72u); RECOMP_ABI_CALL(0x00037674u, sub_00037674); /* call 0x00037674 */

loc_00213A72: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213AAA; /* jle: less or equal (signed <=) */

loc_00213A78: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213A84; /* je: equal / zero */

loc_00213A7E: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213AA5; /* jne: not equal / not zero */

loc_00213A84: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00213A99u); RECOMP_ABI_CALL(0x0001CF8Bu, sub_0001CF8B); /* call 0x0001CF8B */

loc_00213A99: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213AA5; /* je: equal / zero */

loc_00213A9D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213AAA; /* je: equal / zero */

loc_00213AA5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213A78; /* jl: less (signed <) */

loc_00213AAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213AC5; /* jne: not equal / not zero */

loc_00213AAE: ;
    ecx = MEM32(esp + 0x30);
    eax = 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213AC1; /* je: equal / zero */

loc_00213ABB: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213AEB; /* jne: not equal / not zero */

loc_00213AC1: ;
    esi = MEM32(esp + 0x2C);

loc_00213AC5: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebp + 0x14);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = 0x7F9EE8;
    PUSH32(esp, 0x00213ADFu); RECOMP_ABI_CALL(0x00036FD5u, sub_00036FD5); /* call 0x00036FD5 */

loc_00213ADF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213B0F; /* je: equal / zero */

loc_00213AE3: ;
    MEM32(esp + 0x40) = 0x7F9EE8;

loc_00213AEB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00213A60; /* jl: less (signed <) */

loc_00213B00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00213B0F: ;
    ecx = MEM32(esp + 0x124);
    MEM32(ecx) = esi;
    SET_LO8(eax, 1);

loc_00213B1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00213B80
 * Original: 0x00213B80 - 0x00213B83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213B80: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00213B90
 * Original: 0x00213B90 - 0x00213B93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213B90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00213BA0
 * Original: 0x00213BA0 - 0x00213BA5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213BA0(void)
{

loc_00213BA0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213BB0
 * Original: 0x00213BB0 - 0x00213BB5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213BB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213BC0
 * Original: 0x00213BC0 - 0x00213BC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213BC0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00213BD0
 * Original: 0x00213BD0 - 0x00213C0F (63 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213BD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00213BDFu); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_00213BDF: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213C01; /* jle: less or equal (signed <=) */

loc_00213BE7: ;
    ebp = MEM32(esp + 0x14);
    goto loc_00213BF0;

    /* nop */

loc_00213BF0: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00213BF8u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_00213BF8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213C08; /* je: equal / zero */

loc_00213BFC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213BF0; /* jl: less (signed <) */

loc_00213C01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00213C08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00213C20
 * Original: 0x00213C20 - 0x00213DD7 (439 bytes, 152 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213C20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00213C2Au); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00213C2A: ;
    ecx = eax;
    PUSH32(esp, 0x00213C31u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00213C31: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00213C43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213C3Du); } /* indirect call */
    }

loc_00213C43: ;
    ebx = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM8(esp + 0xB) = 0;
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00213C64; /* je: equal / zero */

loc_00213C5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213C75; /* jne: not equal / not zero */

loc_00213C64: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, esi);
    MEM8(ecx) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00213C75: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00213D1D; /* je: equal / zero */

loc_00213C7F: ;
    /* nop */

loc_00213C80: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00213D7F; /* je: equal / zero */

loc_00213C8F: ;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00213D11; /* jle: less or equal (signed <=) */

loc_00213C99: ;
    /* nop */

loc_00213CA0: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(esp + 0x14);
    edi = MEM32(edx + eax * 4);
    ecx = edi;
    PUSH32(esp, 0x00213CB1u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_00213CB1: ;
    ebp = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213CD3; /* jle: less or equal (signed <=) */

loc_00213CB9: ;
    /* nop */

loc_00213CC0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00213CC8u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_00213CC8: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213CEC; /* je: equal / zero */

loc_00213CCE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213CC0; /* jl: less (signed <) */

loc_00213CD3: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213D0D; /* jne: not equal / not zero */

loc_00213CD9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00213CA0; /* jl: less (signed <) */

loc_00213CEA: ;
    goto loc_00213D11;

loc_00213CEC: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x30) (32-bit) */
    edx = MEM32(ebx + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00213D88; /* je: equal / zero */

loc_00213CFD: ;
    eax = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(edx + eax * 4);
    goto loc_00213D11;

loc_00213D0D: ;
    MEM32(esp + 0x1C) = ebx;

loc_00213D11: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_00213C80; /* jne: not equal / not zero */

loc_00213D1D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213D24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213D21u); } /* indirect call */
    }

loc_00213D24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213DC9; /* jl: less (signed <) */

loc_00213D2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00213DC9; /* jg: greater (signed >) */

loc_00213D36: ;
    eax = MEM32(ebx + 0xC);
    ebp = 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00213DC9; /* jle: less or equal (signed <=) */

loc_00213D4A: ;
    /* nop */

loc_00213D50: ;
    eax = MEM32(ebx + 0x10);
    esi = MEM32(eax + ebp * 4);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00213D5Fu); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_00213D5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213DC0; /* jle: less or equal (signed <=) */

loc_00213D63: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00213D6Bu); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_00213D6B: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213DAB; /* je: equal / zero */

loc_00213D71: ;
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00213D79u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_00213D79: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213D63; /* jl: less (signed <) */

loc_00213D7D: ;
    goto loc_00213DC0;

loc_00213D7F: ;
    ecx = MEM32(esp + 0x34);
    MEM8(ecx) = 0;
    goto loc_00213D1D;

loc_00213D88: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edx + eax * 4);
    ecx = MEM32(ecx);
    edx = MEM32(esp + 0x34);

loc_00213D95: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00213D95; /* jne: not equal / not zero */

loc_00213D9F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_00213DAB: ;
    esi = MEM32(esi);
    ecx = MEM32(esp + 0x34);
    MEM8(esp + 0x13) = 1;

loc_00213DB6: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213DB6; /* jne: not equal / not zero */

loc_00213DC0: ;
    eax = MEM32(esp + 0x30);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213D50; /* jl: less (signed <) */

loc_00213DC9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00213E50
 * Original: 0x00213E50 - 0x00213EB8 (104 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00213E58u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00213E58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213E79; /* je: equal / zero */

loc_00213E5C: ;
    ecx = eax;
    PUSH32(esp, 0x00213E63u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00213E63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213E79; /* je: equal / zero */

loc_00213E67: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213E6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213E6Bu); } /* indirect call */
    }

loc_00213E6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213E79; /* jne: not equal / not zero */

loc_00213E73: ;
    SET_LO8(eax, LO8(eax));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00213E79: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x00213E86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213E80u); } /* indirect call */
    }

loc_00213E86: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213EA6; /* jle: less or equal (signed <=) */

loc_00213E8E: ;
    ebp = MEM32(esp + 0x14);

loc_00213E92: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00213E9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213E97u); } /* indirect call */
    }

loc_00213E9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213EAF; /* je: equal / zero */

loc_00213EA1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213E92; /* jl: less (signed <) */

loc_00213EA6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00213EAF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213EE0
 * Original: 0x00213EE0 - 0x00213F4F (111 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00213EE8u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00213EE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213F4D; /* je: equal / zero */

loc_00213EEC: ;
    ecx = eax;
    PUSH32(esp, 0x00213EF3u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00213EF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213F4D; /* je: equal / zero */

loc_00213EF7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213EFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213EFBu); } /* indirect call */
    }

loc_00213EFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213F4D; /* jne: not equal / not zero */

loc_00213F03: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213F4A; /* jne: not equal / not zero */

loc_00213F0A: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213F4A; /* jne: not equal / not zero */

loc_00213F11: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00213F1Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00213F1D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213F2D; /* je: equal / zero */

loc_00213F24: ;
    ecx = eax;
    PUSH32(esp, 0x00213F2Bu); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00213F2B: ;
    goto loc_00213F2F;

loc_00213F2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00213F2F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = eax;
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0x00213F3Du); RECOMP_ABI_CALL(0x000327A0u, sub_000327A0); /* call 0x000327A0 */

loc_00213F3D: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x25302);
    PUSH32(esp, 0x00213F4Au); RECOMP_ABI_CALL(0x00024DB2u, sub_00024DB2); /* call 0x00024DB2 */

loc_00213F4A: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00213F4D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213F70
 * Original: 0x00213F70 - 0x00213FB2 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00213F78u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00213F78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213FB0; /* je: equal / zero */

loc_00213F7C: ;
    ecx = eax;
    PUSH32(esp, 0x00213F83u); RECOMP_ABI_CALL(0x000292A4u, sub_000292A4); /* call 0x000292A4 */

loc_00213F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213FB0; /* je: equal / zero */

loc_00213F87: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00213F8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213F8Bu); } /* indirect call */
    }

loc_00213F8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213FB0; /* jne: not equal / not zero */

loc_00213F93: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213FAD; /* jne: not equal / not zero */

loc_00213F99: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213FAD; /* je: equal / zero */

loc_00213FA0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00213FA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213FA4u); } /* indirect call */
    }

loc_00213FA6: ;
    MEM32(esi + 0x34) = 0;

loc_00213FAD: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00213FB0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00213FD0
 * Original: 0x00213FD0 - 0x00213FD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213FD0(void)
{

loc_00213FD0: ;
    SET_LO8(eax, MEM8(ecx + 0x2E));
    esp += 4; return; /* ret */

}

/**
 * sub_00213FE0
 * Original: 0x00213FE0 - 0x00213FE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213FE0: ;
    g_seh_ebp = ebp; sub_000278DC(); return; /* tail jmp 0x000278DC */

}

/**
 * sub_00213FF0
 * Original: 0x00213FF0 - 0x0021402A (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213FF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x00213FFDu); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_00213FFD: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00214015u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_00214015: ;
    esi = MEM32(esp + 4);
    ecx = esp + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00214023u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00214023: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00214040
 * Original: 0x00214040 - 0x00214053 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214040: ;
    PUSH32(esp, 0x00214045u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00214045: ;
    ecx = eax;
    PUSH32(esp, 0x0021404Cu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021404C: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00017E73(); return; /* tail jmp 0x00017E73 */

}

/**
 * sub_00214060
 * Original: 0x00214060 - 0x00214119 (185 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214060: ;
    _fb = (uint32_t)(0xC28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00214071u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00214071: ;
    ecx = eax;
    PUSH32(esp, 0x00214078u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00214078: ;
    esi = eax;
    eax = MEM32(esi);
    ebp = MEM32(esi + 0x50);
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00214086u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214083u); } /* indirect call */
    }

loc_00214086: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    esi = MEM32(esi + 0x58);
    if (CMP_EQ(_fa, _fb)) goto loc_002140A2; /* je: equal / zero */

loc_0021408E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002140A2; /* je: equal / zero */

loc_00214093: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002140A2; /* je: equal / zero */

loc_00214098: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002140A2; /* je: equal / zero */

loc_0021409D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021410C; /* jne: not equal / not zero */

loc_002140A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021410C; /* jne: not equal / not zero */

loc_002140A7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x18;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x002140BAu); RECOMP_ABI_CALL(0x0001862Au, sub_0001862A); /* call 0x0001862A */

loc_002140BA: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x15);
    ecx = esp + 0x24;
    PUSH32(esp, 0x002140CFu); RECOMP_ABI_CALL(0x0002507Du, sub_0002507D); /* call 0x0002507D */

loc_002140CF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00214103; /* jne: not equal / not zero */

loc_002140D5: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x002140DEu); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_002140DE: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x002140E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002140E2u); } /* indirect call */
    }

loc_002140E8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x002140F2u); RECOMP_ABI_CALL(0x0002566Du, sub_0002566D); /* call 0x0002566D */

loc_002140F2: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x34), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002140FA; /* jle: less or equal (signed <=) */

loc_002140F8: ;
    SET_LO8(ebx, 1);

loc_002140FA: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00214103u); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00214103: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0021410Cu); RECOMP_ABI_CALL(0x0001B9B5u, sub_0001B9B5); /* call 0x0001B9B5 */

loc_0021410C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00214150
 * Original: 0x00214150 - 0x002142CC (380 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214150: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x11C);
    PUSH32(esp, edi);
    ebp = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x39;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x124);
    eax = MEM32(edi + 0x14);
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 0x10);
    MEM32(esi) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0xE0) = edx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = ebx;
    eax = MEM32(edi + 4);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = 0x7F9EE8;
    PUSH32(esp, 0x002141A7u); RECOMP_ABI_CALL(0x00036FD5u, sub_00036FD5); /* call 0x00036FD5 */

loc_002141A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0021426F; /* je: equal / zero */

loc_002141B4: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_002141D2; /* jae: above or equal (unsigned >=) */

loc_002141C9: ;
    MEM32(esi + 8) = 2;
    goto loc_002141E4;

loc_002141D2: ;
    if (CMP_BE(_fa, _fb)) goto loc_002141D9; /* jbe: below or equal (unsigned <=) */

loc_002141D4: ;
    MEM32(esi + 8) = edx;
    goto loc_002141E4;

loc_002141D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002141E4; /* jne: not equal / not zero */

loc_002141DD: ;
    MEM32(esi + 8) = 3;

loc_002141E4: ;
    eax = 0x8B5094;
    ecx = esi + 0x78;
    /* nop */

loc_002141F0: ;
    ebx = MEM32(eax + -4);
    ebx = MEM32(esp + ebx * 4 + 0x4C);
    MEM32(ecx + -100) = ebx;
    ebx = MEM32(eax + -4);
    ebx = MEM32(esp + ebx * 4 + 0xB4);
    MEM32(ecx) = ebx;
    ebx = MEM32(eax);
    ebx = MEM32(esp + ebx * 4 + 0x4C);
    MEM32(ecx + -96) = ebx;
    ebx = MEM32(eax);
    ebx = MEM32(esp + ebx * 4 + 0xB4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 4);
    ebx = MEM32(esp + ebx * 4 + 0x4C);
    MEM32(ecx + -92) = ebx;
    ebx = MEM32(eax + 4);
    ebx = MEM32(esp + ebx * 4 + 0xB4);
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(eax + 8);
    ebx = MEM32(esp + ebx * 4 + 0x4C);
    MEM32(ecx + -88) = ebx;
    ebx = MEM32(eax + 8);
    ebx = MEM32(esp + ebx * 4 + 0xB4);
    MEM32(ecx + 0xC) = ebx;
    ebx = MEM32(eax + 0xC);
    ebx = MEM32(esp + ebx * 4 + 0x4C);
    MEM32(ecx + -84) = ebx;
    ebx = MEM32(eax + 0xC);
    ebx = MEM32(esp + ebx * 4 + 0xB4);
    MEM32(ecx + 0x10) = ebx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B50F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8B50F8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002141F0; /* jl: less (signed <) */

loc_0021426D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021426F: ;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ebp);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002142AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002142ACu); } /* indirect call */
    }

loc_002142AF: ;
    _fb = (uint32_t)(MEM32(esp + ebx * 4 + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + ebx * 4 + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0xDC;
    PUSH32(esp, 0x002142BFu); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_002142BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214330
 * Original: 0x00214330 - 0x00214392 (98 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214330: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ebp = MEM32(eax + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00214387; /* je: equal / zero */

loc_00214346: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) ebp = eax; /* cmovle */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = 0x7F77E0;
    if (CMP_LE(_fas, _fbs)) goto loc_00214386; /* jle: less or equal (signed <=) */

loc_0021435E: ;
    edi = edi;

loc_00214360: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021436Eu); RECOMP_ABI_CALL(0x00037674u, sub_00037674); /* call 0x00037674 */

loc_0021436E: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0021437Bu); RECOMP_ABI_CALL(0x0003234Au, sub_0003234A); /* call 0x0003234A */

loc_0021437B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xE4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214360; /* jl: less (signed <) */

loc_00214386: ;
    POP32(esp, esi);

loc_00214387: ;
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002143B0
 * Original: 0x002143B0 - 0x002144D8 (296 bytes, 84 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002143B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002143B0: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x128);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x138);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x134);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x10;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi) = edi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x002143E5u); RECOMP_ABI_CALL(0x00024902u, sub_00024902); /* call 0x00024902 */

loc_002143E5: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x002143EEu); RECOMP_ABI_CALL(0x0002334Fu, sub_0002334F); /* call 0x0002334F */

loc_002143EE: ;
    ecx = MEM32(esp + 0x140);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    MEM32(esp + 0x38) = 0x7F77E0;
    MEM32(esp + 0x5C) = 0x7F9EE8;
    PUSH32(esp, 0x00214410u); RECOMP_ABI_CALL(0x000314B3u, sub_000314B3); /* call 0x000314B3 */

loc_00214410: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebp = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002144A9; /* jle: less or equal (signed <=) */

loc_0021441E: ;
    edi = edi;

loc_00214420: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0021442Fu); RECOMP_ABI_CALL(0x00037674u, sub_00037674); /* call 0x00037674 */

loc_0021442F: ;
    ecx = MEM32(esp + 0x34);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00214442u); RECOMP_ABI_CALL(0x00036FD5u, sub_00036FD5); /* call 0x00036FD5 */

loc_00214442: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002144A0; /* je: equal / zero */

loc_00214446: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    eax = MEM32(esp + 0x40);
    if (CMP_NE(_fa, _fb)) goto loc_00214475; /* jne: not equal / not zero */

loc_0021444F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    edx = MEM32(esp + 0x60);
    if (CMP_NE(_fa, _fb)) goto loc_00214466; /* jne: not equal / not zero */

loc_00214457: ;
    eax = MEM32(esp + 0xC8);
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = eax;
    goto loc_002144A0;

loc_00214466: ;
    ecx = MEM32(esp + 0xC8);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    goto loc_002144A0;

loc_00214475: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021448B; /* jne: not equal / not zero */

loc_00214479: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0021449D; /* jg: greater (signed >) */

loc_00214486: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002144A0;

loc_0021448B: ;
    ecx = MEM32(esp + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0xC8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021449D; /* jle: less or equal (signed <=) */

loc_00214498: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002144A0;

loc_0021449D: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002144A0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214420; /* jl: less (signed <) */

loc_002144A9: ;
    ecx = esp + 0x20;
    MEM32(esp + 0x54) = 0x7F9EE8;
    MEM32(esp + 0x30) = 0x7F77E0;
    PUSH32(esp, 0x002144C2u); RECOMP_ABI_CALL(0x00031B16u, sub_00031B16); /* call 0x00031B16 */

loc_002144C2: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002144CBu); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_002144CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00214530
 * Original: 0x00214530 - 0x0021459E (110 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214530: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x0021453Bu); RECOMP_ABI_CALL(0x0002138Du, sub_0002138D); /* call 0x0002138D */

loc_0021453B: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    ecx = esp + 8;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00214553u); RECOMP_ABI_CALL(0x00036FE9u, sub_00036FE9); /* call 0x00036FE9 */

loc_00214553: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ecx = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_00214590; /* je: equal / zero */

loc_0021455F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214582; /* je: equal / zero */

loc_00214564: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214574; /* je: equal / zero */

loc_00214569: ;
    PUSH32(esp, 0x0021456Eu); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_0021456E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00214574: ;
    PUSH32(esp, 0x00214579u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00214579: ;
    eax = 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00214582: ;
    PUSH32(esp, 0x00214587u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00214587: ;
    eax = 3;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00214590: ;
    PUSH32(esp, 0x00214595u); RECOMP_ABI_CALL(0x0002181Au, sub_0002181A); /* call 0x0002181A */

loc_00214595: ;
    eax = 2;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002145C0
 * Original: 0x002145C0 - 0x002145C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002145C0(void)
{

loc_002145C0: ;
    SET_LO8(eax, MEM8(ecx + 0xA8));
    esp += 4; return; /* ret */

}

/**
 * sub_002145D0
 * Original: 0x002145D0 - 0x002145E0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002145D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002145D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002145D8u); RECOMP_ABI_CALL(0x00023561u, sub_00023561); /* call 0x00023561 */

loc_002145D8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002C13E(); return; /* tail jmp 0x0002C13E */

}

/**
 * sub_002145F0
 * Original: 0x002145F0 - 0x002145F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002145F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002145F0: ;
    g_seh_ebp = ebp; sub_0002DDB8(); return; /* tail jmp 0x0002DDB8 */

}

/**
 * sub_00214600
 * Original: 0x00214600 - 0x0021460D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214600(void)
{

loc_00214600: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1A0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214610
 * Original: 0x00214610 - 0x00214625 (21 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214610(void)
{

loc_00214610: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0xAC);
    eax = MEM32(ecx + edx * 4 + 0x124);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214630
 * Original: 0x00214630 - 0x00214637 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214630(void)
{

loc_00214630: ;
    eax = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00214640
 * Original: 0x00214640 - 0x00214655 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214640(void)
{

loc_00214640: ;
    eax = MEM32(ecx + 0x94);
    edx = MEM32(ecx + eax * 4 + 0xAC);
    eax = MEM32(ecx + edx * 4 + 0x124);
    esp += 4; return; /* ret */

}

/**
 * sub_00214660
 * Original: 0x00214660 - 0x00214679 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214660(void)
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

loc_00214660: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0xC);
    eax = 0x4B0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C0B1C)); /* fmul dword ptr [0x7c0b1c] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00214680
 * Original: 0x00214680 - 0x00214684 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214680(void)
{

loc_00214680: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00214690
 * Original: 0x00214690 - 0x002146B8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214690: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 0x20) = LO8(ecx);
    MEM8(eax + 0x21) = LO8(ecx);
    MEM8(eax + 0x22) = LO8(ecx);
    MEM8(eax + 0x23) = LO8(ecx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002146D0
 * Original: 0x002146D0 - 0x002146D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002146D0(void)
{

loc_002146D0: ;
    MEM32(ecx) = 0x7FA4AC;
    esp += 4; return; /* ret */

}

/**
 * sub_002146E0
 * Original: 0x002146E0 - 0x002146FF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002146E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002146E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA4AC;
    if (TEST_Z(_fa, _fb)) goto loc_002146F9; /* je: equal / zero */

loc_002146F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002146F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002146F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002146F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214710
 * Original: 0x00214710 - 0x00214747 (55 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00214710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214710: ;
    PUSH32(esp, 0x00214715u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00214715: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0021471Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214719u); } /* indirect call */
    }

loc_0021471C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00214723u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214720u); } /* indirect call */
    }

loc_00214723: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00214744; /* ja: above (unsigned >) */

loc_0021472B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x214748); /* switch: 10 entries, 4 targets */
    if (_jt == 0x00214732u) goto loc_00214732;
    if (_jt == 0x00214738u) goto loc_00214738;
    if (_jt == 0x0021473Eu) goto loc_0021473E;
    if (_jt == 0x00214744u) goto loc_00214744;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00214732: ;
    eax = 0x1E;
    esp += 4; return; /* ret */

loc_00214738: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_0021473E: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_00214744: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002147C0
 * Original: 0x002147C0 - 0x002147D7 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002147C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002147C0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002147D0; /* jne: not equal / not zero */

loc_002147CD: ;
    eax = eax + eax * 4;

loc_002147D0: ;
    MEM32(ecx + edx * 4 + 4) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002147E0
 * Original: 0x002147E0 - 0x002147EB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002147E0(void)
{

loc_002147E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x40);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002147F0
 * Original: 0x002147F0 - 0x00214803 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002147F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002147F0: ;
    _fb = (uint32_t)(0x368) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x368;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00214800u); RECOMP_ABI_CALL(0x000333E9u, sub_000333E9); /* call 0x000333E9 */

loc_00214800: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214810
 * Original: 0x00214810 - 0x00214817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214810(void)
{

loc_00214810: ;
    eax = MEM32(ecx + 0x174);
    esp += 4; return; /* ret */

}

/**
 * sub_00214820
 * Original: 0x00214820 - 0x00214842 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00214820: ;
    edx = MEM32(esp + 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x274) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x274)) >> 32) & 1);
    ecx = ecx + 0x274;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00214835u); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_00214835: ;
    ecx = MEM32(esp + 4);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214850
 * Original: 0x00214850 - 0x0021486A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214850: ;
    eax = MEM32(ecx + 0x374);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021485D; /* jne: not equal / not zero */

loc_0021485A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0021485D: ;
    eax = MEM32(ecx + 0x378);
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_00031251(); return; /* tail jmp 0x00031251 */

}

/**
 * sub_00214870
 * Original: 0x00214870 - 0x002148A7 (55 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214870: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    MEM32(esp) = 0x7F9BC8;
    MEM32(esp + 4) = 0x7F9BB0;
    edx = MEM32(esp + eax * 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x368) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x368;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00214895u); RECOMP_ABI_CALL(0x0002959Cu, sub_0002959C); /* call 0x0002959C */

loc_00214895: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002148A1u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_002148A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002148C0
 * Original: 0x002148C0 - 0x00214917 (87 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002148C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002148C0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    MEM32(esp) = 0x7F9B98;
    MEM32(esp + 4) = 0x7F9B84;
    MEM32(esp + 8) = 0x7F9B70;
    MEM32(esp + 0xC) = 0x7F9B58;
    MEM32(esp + 0x10) = 0x7F9B40;
    MEM32(esp + 0x14) = 0x7F9B28;
    edx = MEM32(esp + eax * 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x368) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x368;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00214905u); RECOMP_ABI_CALL(0x0002959Cu, sub_0002959C); /* call 0x0002959C */

loc_00214905: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00214911u); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_00214911: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214930
 * Original: 0x00214930 - 0x002149DE (174 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214930: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x84);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0x7F9BC8;
    MEM32(esp + 0x14) = 0x7F9BB0;
    edx = MEM32(esp + eax * 4 + 0x10);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x368) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x368;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00214961u); RECOMP_ABI_CALL(0x0002959Cu, sub_0002959C); /* call 0x0002959C */

loc_00214961: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00214965: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0021496Du); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_0021496D: ;
    MEM32(esp + esi * 4 + 0x54) = eax;
    MEM32(esp + esi * 4 + 0x18) = esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214965; /* jl: less (signed <) */

loc_0021497B: ;
    ebp = 4;
    eax = esp + 0x54;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00214988: ;
    ebx = edi + 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002149BF; /* jge: greater or equal (signed >=) */

loc_00214990: ;
    esi = esp + edi * 4 + 0x54;
    eax = esi + ebp;

loc_00214997: ;
    ecx = MEM32(esp + eax + 0x54);
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002149B7; /* jle: less or equal (signed <=) */

loc_002149A1: ;
    MEM32(esi) = ecx;
    ecx = MEM32(esp + edi * 4 + 0x18);
    MEM32(esp + eax + 0x54) = edx;
    edx = MEM32(esp + eax + 0x18);
    MEM32(esp + edi * 4 + 0x18) = edx;
    MEM32(esp + eax + 0x18) = ecx;

loc_002149B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214997; /* jl: less (signed <) */

loc_002149BF: ;
    edi = ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214988; /* jl: less (signed <) */

loc_002149C6: ;
    eax = MEM32(esp + 0x98);
    eax = MEM32(esp + eax * 4 + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214A10
 * Original: 0x00214A10 - 0x00214A2E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00214A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214A10: ;
    eax = MEM32(ecx + 0x378);
    ecx = MEM32(esp + 4);
    ecx = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214A29; /* je: equal / zero */

loc_00214A21: ;
    PUSH32(esp, 0x00214A26u); RECOMP_ABI_CALL(0x00031251u, sub_00031251); /* call 0x00031251 */

loc_00214A26: ;
    esp += 8; return; /* ret 4 */

loc_00214A29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214A40
 * Original: 0x00214A40 - 0x00214A63 (35 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00214A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214A40: ;
    eax = MEM32(ecx + 0x378);
    ecx = MEM32(esp + 4);
    ecx = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214A5E; /* je: equal / zero */

loc_00214A51: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00214A5Bu); RECOMP_ABI_CALL(0x0002D237u, sub_0002D237); /* call 0x0002D237 */

loc_00214A5B: ;
    esp += 12; return; /* ret 8 */

loc_00214A5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214A70
 * Original: 0x00214A70 - 0x00214A77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214A70(void)
{

loc_00214A70: ;
    eax = MEM32(ecx + 0x178);
    esp += 4; return; /* ret */

}

/**
 * sub_00214A80
 * Original: 0x00214A80 - 0x00214A90 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214A80(void)
{

loc_00214A80: ;
    eax = MEM32(ecx + 0x384);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214AA0
 * Original: 0x00214AA0 - 0x00214AB4 (20 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214AA0(void)
{

loc_00214AA0: ;
    eax = MEM32(ecx + 0x384);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + edx * 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214AC0
 * Original: 0x00214AC0 - 0x00214AEB (43 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214AC0(void)
{

loc_00214AC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00214AC8u); RECOMP_ABI_CALL(0x0002E79Fu, sub_0002E79F); /* call 0x0002E79F */

loc_00214AC8: ;
    ecx = esi + 0xF4;
    PUSH32(esp, 0x00214AD3u); RECOMP_ABI_CALL(0x0002DA16u, sub_0002DA16); /* call 0x0002DA16 */

loc_00214AD3: ;
    MEM32(esi + 0x108) = 0x7F7A10;
    MEM32(esi + 0x148) = 0x7F9EE4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00214B00
 * Original: 0x00214B00 - 0x00214B2A (42 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xF4;
    MEM32(esi + 0x148) = 0x7F9EE4;
    MEM32(esi + 0x108) = 0x7F7A10;
    PUSH32(esp, 0x00214B22u); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_00214B22: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002F7D5(); return; /* tail jmp 0x0002F7D5 */

}

/**
 * sub_00214B40
 * Original: 0x00214B40 - 0x00214B74 (52 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214B40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx + 0x389;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00214B50: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00214B50; /* jne: not equal / not zero */

loc_00214B5A: ;
    edx = MEM32(esp + 0xC);
    eax = ecx + 0x396;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_00214B67: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00214B67; /* jne: not equal / not zero */

loc_00214B71: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214B90
 * Original: 0x00214B90 - 0x00214B97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214B90(void)
{

loc_00214B90: ;
    eax = MEM32(ecx + 0x3A4);
    esp += 4; return; /* ret */

}

/**
 * sub_00214BA0
 * Original: 0x00214BA0 - 0x00214C60 (192 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214BA0: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x7F8BB0);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(eax + 0x7F8BD8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x110);
    MEM32(esi + 0x108) = edx;
    edx = MEM32(eax + 0x7F8BD0);
    MEM32(esi + 0x104) = edx;
    eax = MEM32(eax + 0x7F8BD4);
    MEM32(esi + 0x100) = eax;
    eax = MEM32(ecx + 0x17C);
    ecx = MEM32(esp + 0x108);
    edx = MEM32(ecx * 4 + 0x7F89C8);
    PUSH32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edx);
    eax = esp + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_00214C09; /* jne: not equal / not zero */

loc_00214C02: ;
    PUSH32(esp, 0x7FA4F8);
    goto loc_00214C0E;

loc_00214C09: ;
    PUSH32(esp, 0x7FA4E8);

loc_00214C0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214C14u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00214C14: ;
    ecx = esp + 0x14;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214C21u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00214C21: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214C2Cu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00214C2C: ;
    ecx = eax;
    PUSH32(esp, 0x00214C33u); RECOMP_ABI_CALL(0x0002B3D8u, sub_0002B3D8); /* call 0x0002B3D8 */

loc_00214C33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214C47; /* je: equal / zero */

loc_00214C37: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214C40u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00214C40: ;
    ecx = eax;
    PUSH32(esp, 0x00214C47u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00214C47: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM8(esi + 0x80) = LO8(eax);
    MEM8(esi + 0xC0) = LO8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00214C90
 * Original: 0x00214C90 - 0x00214C9E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C90(void)
{

loc_00214C90: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0;
    MEM8(eax + 0xC) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214CB0
 * Original: 0x00214CB0 - 0x00214D07 (87 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214CB0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6FE0);
    esi = ecx;
    PUSH32(esp, 0x00214CCAu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00214CCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214CD3u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00214CD3: ;
    ecx = eax;
    PUSH32(esp, 0x00214CDAu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00214CDA: ;
    eax = MEM32(esp + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214CEA; /* je: equal / zero */

loc_00214CE5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00214CEE; /* jne: not equal / not zero */

loc_00214CEA: ;
    eax = esp + 4;

loc_00214CEE: ;
    edx = esi + 0x74;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_00214CF4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00214CF4; /* jne: not equal / not zero */

loc_00214CFE: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214D20
 * Original: 0x00214D20 - 0x00214D4A (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D20: ;
    edx = MEM32(ecx + 0x37C);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00214D43; /* jbe: below or equal (unsigned <=) */

loc_00214D2D: ;
    ecx = MEM32(ecx + 0x380);
    esi = MEM32(esp + 8);

loc_00214D37: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214D46; /* je: equal / zero */

loc_00214D3B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00214D37; /* jb: below (unsigned <) */

loc_00214D43: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00214D46: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214D60
 * Original: 0x00214D60 - 0x00214DB7 (87 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x17C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214DB0; /* je: equal / zero */

loc_00214D6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214DB0; /* je: equal / zero */

loc_00214D74: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x180;
    PUSH32(esp, 0x00214D8Au); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_00214D8A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi + 0x274;
    PUSH32(esp, 0x00214D9Bu); RECOMP_ABI_CALL(0x0002154Au, sub_0002154A); /* call 0x0002154A */

loc_00214D9B: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00214DB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214DD0
 * Original: 0x00214DD0 - 0x00214E27 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x368;
    PUSH32(esp, 0x00214DDFu); RECOMP_ABI_CALL(0x000333E4u, sub_000333E4); /* call 0x000333E4 */

loc_00214DDF: ;
    ecx = esi + 0x274;
    PUSH32(esp, 0x00214DEAu); RECOMP_ABI_CALL(0x00034834u, sub_00034834); /* call 0x00034834 */

loc_00214DEA: ;
    eax = MEM32(esi + 0x384);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214E05; /* je: equal / zero */

loc_00214DF6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214DFCu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00214DFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x384) = edi;

loc_00214E05: ;
    eax = MEM32(esi + 0x380);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214E1E; /* je: equal / zero */

loc_00214E0F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00214E15u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00214E15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x380) = edi;

loc_00214E1E: ;
    MEM32(esi + 0x37C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00214E40
 * Original: 0x00214E40 - 0x00214E5B (27 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214E40(void)
{

loc_00214E40: ;
    eax = MEM32(ecx + 0x3A8);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + ecx * 4 + 0xAC);
    eax = MEM32(eax + edx * 4 + 0x124);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214E70
 * Original: 0x00214E70 - 0x00214E7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214E70(void)
{

loc_00214E70: ;
    MEM32(ecx + 0x3A8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00214E80
 * Original: 0x00214E80 - 0x00214E93 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214E80(void)
{

loc_00214E80: ;
    eax = MEM32(ecx + 0x3A8);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x1A0) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214EA0
 * Original: 0x00214EA0 - 0x00214ECF (47 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214EA0(void)
{

loc_00214EA0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00214EAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214EA8u); } /* indirect call */
    }

loc_00214EAE: ;
    esi = eax;
    PUSH32(esp, 0x00214EB5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00214EB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00214EBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214EB9u); } /* indirect call */
    }

loc_00214EBC: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00214ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214EC8u); } /* indirect call */
    }

loc_00214ECB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214EE0
 * Original: 0x00214EE0 - 0x00214F0F (47 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214EE0(void)
{

loc_00214EE0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00214EEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214EE8u); } /* indirect call */
    }

loc_00214EEE: ;
    esi = eax;
    PUSH32(esp, 0x00214EF5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00214EF5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00214EFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214EF9u); } /* indirect call */
    }

loc_00214EFC: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00214F0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214F08u); } /* indirect call */
    }

loc_00214F0B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214F20
 * Original: 0x00214F20 - 0x00214F4F (47 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214F20(void)
{

loc_00214F20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00214F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214F28u); } /* indirect call */
    }

loc_00214F2E: ;
    esi = eax;
    PUSH32(esp, 0x00214F35u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00214F35: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00214F3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214F39u); } /* indirect call */
    }

loc_00214F3C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00214F4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214F48u); } /* indirect call */
    }

loc_00214F4B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214F60
 * Original: 0x00214F60 - 0x00214F8F (47 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214F60(void)
{

loc_00214F60: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00214F6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214F68u); } /* indirect call */
    }

loc_00214F6E: ;
    esi = eax;
    PUSH32(esp, 0x00214F75u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00214F75: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00214F7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214F79u); } /* indirect call */
    }

loc_00214F7C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00214F8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214F88u); } /* indirect call */
    }

loc_00214F8B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00214FA0
 * Original: 0x00214FA0 - 0x00214FAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214FA0: ;
    ecx = MEM32(ecx + 0x3A8);
    g_seh_ebp = ebp; sub_00013F53(); return; /* tail jmp 0x00013F53 */

}

/**
 * sub_00214FB0
 * Original: 0x00214FB0 - 0x00214FBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214FB0: ;
    ecx = MEM32(ecx + 0x3A8);
    g_seh_ebp = ebp; sub_0002DDB8(); return; /* tail jmp 0x0002DDB8 */

}

/**
 * sub_00214FC0
 * Original: 0x00214FC0 - 0x00214FCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214FC0: ;
    ecx = MEM32(ecx + 0x3A8);
    g_seh_ebp = ebp; sub_0002AF2D(); return; /* tail jmp 0x0002AF2D */

}

/**
 * sub_00214FD0
 * Original: 0x00214FD0 - 0x00215003 (51 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214FD0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x3A8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00214FEBu); RECOMP_ABI_CALL(0x000311F7u, sub_000311F7); /* call 0x000311F7 */

loc_00214FEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00214FF8; /* je: equal / zero */

loc_00214FEF: ;
    eax = 3;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00214FF8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215010
 * Original: 0x00215010 - 0x00215026 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215010: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3A8);
    ecx = esi;
    PUSH32(esp, 0x0021501Eu); RECOMP_ABI_CALL(0x00023561u, sub_00023561); /* call 0x00023561 */

loc_0021501E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002C13E(); return; /* tail jmp 0x0002C13E */

}

/**
 * sub_00215030
 * Original: 0x00215030 - 0x0021503D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215030(void)
{

loc_00215030: ;
    eax = MEM32(ecx + 0x3A8);
    eax = MEM32(eax + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00215040
 * Original: 0x00215040 - 0x0021504B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215040: ;
    ecx = MEM32(ecx + 0x3A8);
    g_seh_ebp = ebp; sub_000136BB(); return; /* tail jmp 0x000136BB */

}

/**
 * sub_00215050
 * Original: 0x00215050 - 0x0021505D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215050(void)
{

loc_00215050: ;
    eax = MEM32(ecx + 0x3A8);
    SET_LO8(eax, MEM8(eax + 0xA8));
    esp += 4; return; /* ret */

}

/**
 * sub_00215060
 * Original: 0x00215060 - 0x00215081 (33 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215060: ;
    ecx = MEM32(ecx + 0x3A8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215080; /* je: equal / zero */

loc_0021506C: ;
    eax = MEM32(ecx + 0x94);
    edx = MEM32(ecx + eax * 4 + 0xAC);
    eax = MEM32(ecx + edx * 4 + 0x124);

loc_00215080: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00215090
 * Original: 0x00215090 - 0x00215357 (711 bytes, 236 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215090: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x94));
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x3A8);
    ecx = MEM32(eax + 0x94);
    edx = MEM32(eax + ecx * 4 + 0xAC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002150EF; /* jne: not equal / not zero */

loc_002150CF: ;
    eax = MEM32(eax + edx * 4 + 0x124);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x002150E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002150DCu); } /* indirect call */
    }

loc_002150E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x94)) >> 32) & 1);
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002150EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021513A; /* jne: not equal / not zero */

loc_002150F4: ;
    ecx = MEM32(eax + 0x94);
    edi = MEM32(eax + edx * 4 + 0x124);
    edx = MEM32(eax + ecx * 4 + 0xAC);
    eax = MEM32(eax + edx * 4 + 0x124);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0021511Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215115u); } /* indirect call */
    }

loc_0021511B: ;
    esi = eax;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x00215129u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215123u); } /* indirect call */
    }

loc_00215129: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x94)) >> 32) & 1);
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0021513A: ;
    eax = MEM32(eax + edx * 4 + 0x124);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0021514Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215147u); } /* indirect call */
    }

loc_0021514D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00215348; /* jle: less or equal (signed <=) */

loc_00215159: ;
    goto loc_00215162;

loc_0021515B: ;
    esi = MEM32(esp + 0xA8);

loc_00215162: ;
    eax = MEM32(ebp + 0x3A8);
    edx = MEM32(ebp);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x94);
    ecx = MEM32(eax + ecx * 4 + 0xAC);
    eax = MEM32(eax + ecx * 4 + 0x124);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00215192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021518Cu); } /* indirect call */
    }

loc_00215192: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00215339; /* ja: above (unsigned >) */

loc_0021519B: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x215358); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002151A2u) goto loc_002151A2;
    if (_jt == 0x0021520Fu) goto loc_0021520F;
    if (_jt == 0x00215277u) goto loc_00215277;
    if (_jt == 0x002152D8u) goto loc_002152D8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002151A2: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA544);
    PUSH32(esp, 0x002151B3u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002151B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002151BCu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002151BC: ;
    ecx = eax;
    PUSH32(esp, 0x002151C3u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002151C3: ;
    esi = esp + 0x24;
    eax = esp + 0x64;
    goto loc_002151D0;

    /* nop */

loc_002151D0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002151F4; /* jne: not equal / not zero */

loc_002151D8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002151F0; /* je: equal / zero */

loc_002151DC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002151F4; /* jne: not equal / not zero */

loc_002151E6: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002151D0; /* jne: not equal / not zero */

loc_002151F0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002151F9;

loc_002151F4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_002151F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0021533B; /* jne: not equal / not zero */

loc_00215201: ;
    ebx = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebx;
    goto loc_0021533B;

loc_0021520F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA530);
    PUSH32(esp, 0x00215220u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00215220: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215229u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00215229: ;
    ecx = eax;
    PUSH32(esp, 0x00215230u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00215230: ;
    esi = esp + 0x24;
    eax = esp + 0x64;

loc_00215238: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021525C; /* jne: not equal / not zero */

loc_00215240: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00215258; /* je: equal / zero */

loc_00215244: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0021525C; /* jne: not equal / not zero */

loc_0021524E: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00215238; /* jne: not equal / not zero */

loc_00215258: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00215261;

loc_0021525C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00215261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0021533B; /* jne: not equal / not zero */

loc_00215269: ;
    ebx = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ebx;
    goto loc_0021533B;

loc_00215277: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA51C);
    PUSH32(esp, 0x00215288u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00215288: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215291u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00215291: ;
    ecx = eax;
    PUSH32(esp, 0x00215298u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00215298: ;
    esi = esp + 0x24;
    eax = esp + 0x64;

loc_002152A0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002152C4; /* jne: not equal / not zero */

loc_002152A8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002152C0; /* je: equal / zero */

loc_002152AC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002152C4; /* jne: not equal / not zero */

loc_002152B6: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_002152A0; /* jne: not equal / not zero */

loc_002152C0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002152C9;

loc_002152C4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_002152C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0021533B; /* jne: not equal / not zero */

loc_002152CD: ;
    ebx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebx;
    goto loc_0021533B;

loc_002152D8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA508);
    PUSH32(esp, 0x002152E9u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002152E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002152F2u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002152F2: ;
    ecx = eax;
    PUSH32(esp, 0x002152F9u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002152F9: ;
    esi = esp + 0x24;
    eax = esp + 0x64;

loc_00215301: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00215325; /* jne: not equal / not zero */

loc_00215309: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00215321; /* je: equal / zero */

loc_0021530D: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00215325; /* jne: not equal / not zero */

loc_00215317: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00215301; /* jne: not equal / not zero */

loc_00215321: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0021532A;

loc_00215325: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0021532A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0021533B; /* jne: not equal / not zero */

loc_0021532E: ;
    ebx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebx;
    goto loc_0021533B;

loc_00215339: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021533B: ;
    eax = MEM32(esp + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0021515B; /* jl: less (signed <) */

loc_00215348: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x94)) >> 32) & 1);
    esp = esp + 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215430
 * Original: 0x00215430 - 0x0021543B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215430: ;
    ecx = MEM32(ecx + 0x3A8);
    g_seh_ebp = ebp; sub_00030202(); return; /* tail jmp 0x00030202 */

}

/**
 * sub_00215440
 * Original: 0x00215440 - 0x00215485 (69 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215440: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00215482; /* ja: above (unsigned >) */

loc_0021544B: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x215488); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00215452u) goto loc_00215452;
    if (_jt == 0x0021545Au) goto loc_0021545A;
    if (_jt == 0x0021547Du) goto loc_0021547D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00215452: ;
    eax = 0x4B;
    esp += 8; return; /* ret 4 */

loc_0021545A: ;
    eax = MEM32(ecx + 0x3A8);
    edx = MEM32(eax + 0xC);
    ecx = 0x4B0;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C0B1C); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    esp += 8; return; /* ret 4 */

loc_0021547D: ;
    eax = 0x64;

loc_00215482: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002154B0
 * Original: 0x002154B0 - 0x002155EE (318 bytes, 79 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002154B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002154B0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    eax = 0x2E;
    if (CMP_A(_fa, _fb)) goto loc_002155EB; /* ja: above (unsigned >) */

loc_002154C2: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2155F0); /* switch: 49 entries, 38 targets */
    if (_jt == 0x002154C9u) goto loc_002154C9;
    if (_jt == 0x002154D1u) goto loc_002154D1;
    if (_jt == 0x002154D9u) goto loc_002154D9;
    if (_jt == 0x002154E1u) goto loc_002154E1;
    if (_jt == 0x002154E9u) goto loc_002154E9;
    if (_jt == 0x002154F1u) goto loc_002154F1;
    if (_jt == 0x002154F9u) goto loc_002154F9;
    if (_jt == 0x00215501u) goto loc_00215501;
    if (_jt == 0x00215509u) goto loc_00215509;
    if (_jt == 0x00215511u) goto loc_00215511;
    if (_jt == 0x00215519u) goto loc_00215519;
    if (_jt == 0x00215521u) goto loc_00215521;
    if (_jt == 0x00215529u) goto loc_00215529;
    if (_jt == 0x00215531u) goto loc_00215531;
    if (_jt == 0x00215539u) goto loc_00215539;
    if (_jt == 0x00215541u) goto loc_00215541;
    if (_jt == 0x00215549u) goto loc_00215549;
    if (_jt == 0x00215551u) goto loc_00215551;
    if (_jt == 0x00215559u) goto loc_00215559;
    if (_jt == 0x00215561u) goto loc_00215561;
    if (_jt == 0x00215569u) goto loc_00215569;
    if (_jt == 0x00215571u) goto loc_00215571;
    if (_jt == 0x00215579u) goto loc_00215579;
    if (_jt == 0x00215581u) goto loc_00215581;
    if (_jt == 0x00215589u) goto loc_00215589;
    if (_jt == 0x00215591u) goto loc_00215591;
    if (_jt == 0x00215599u) goto loc_00215599;
    if (_jt == 0x002155A1u) goto loc_002155A1;
    if (_jt == 0x002155A9u) goto loc_002155A9;
    if (_jt == 0x002155B1u) goto loc_002155B1;
    if (_jt == 0x002155B9u) goto loc_002155B9;
    if (_jt == 0x002155C1u) goto loc_002155C1;
    if (_jt == 0x002155C9u) goto loc_002155C9;
    if (_jt == 0x002155D1u) goto loc_002155D1;
    if (_jt == 0x002155D9u) goto loc_002155D9;
    if (_jt == 0x002155DEu) goto loc_002155DE;
    if (_jt == 0x002155E6u) goto loc_002155E6;
    if (_jt == 0x002155EBu) goto loc_002155EB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002154C9: ;
    eax = 0x2E;
    esp += 8; return; /* ret 4 */

loc_002154D1: ;
    eax = 0x27;
    esp += 8; return; /* ret 4 */

loc_002154D9: ;
    eax = 0x28;
    esp += 8; return; /* ret 4 */

loc_002154E1: ;
    eax = 0x29;
    esp += 8; return; /* ret 4 */

loc_002154E9: ;
    eax = 0x2A;
    esp += 8; return; /* ret 4 */

loc_002154F1: ;
    eax = 0x2B;
    esp += 8; return; /* ret 4 */

loc_002154F9: ;
    eax = 0x2C;
    esp += 8; return; /* ret 4 */

loc_00215501: ;
    eax = 0x2F;
    esp += 8; return; /* ret 4 */

loc_00215509: ;
    eax = 0x2D;
    esp += 8; return; /* ret 4 */

loc_00215511: ;
    eax = 0xD;
    esp += 8; return; /* ret 4 */

loc_00215519: ;
    eax = 0xE;
    esp += 8; return; /* ret 4 */

loc_00215521: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

loc_00215529: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

loc_00215531: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

loc_00215539: ;
    eax = 0x21;
    esp += 8; return; /* ret 4 */

loc_00215541: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

loc_00215549: ;
    eax = 0x22;
    esp += 8; return; /* ret 4 */

loc_00215551: ;
    eax = 0x17;
    esp += 8; return; /* ret 4 */

loc_00215559: ;
    eax = 0x18;
    esp += 8; return; /* ret 4 */

loc_00215561: ;
    eax = 0x19;
    esp += 8; return; /* ret 4 */

loc_00215569: ;
    eax = 0x1A;
    esp += 8; return; /* ret 4 */

loc_00215571: ;
    eax = 0x1B;
    esp += 8; return; /* ret 4 */

loc_00215579: ;
    eax = 0x1C;
    esp += 8; return; /* ret 4 */

loc_00215581: ;
    eax = 0x1D;
    esp += 8; return; /* ret 4 */

loc_00215589: ;
    eax = 0x1E;
    esp += 8; return; /* ret 4 */

loc_00215591: ;
    eax = 0x1F;
    esp += 8; return; /* ret 4 */

loc_00215599: ;
    eax = 0x20;
    esp += 8; return; /* ret 4 */

loc_002155A1: ;
    eax = 0x23;
    esp += 8; return; /* ret 4 */

loc_002155A9: ;
    eax = 0x24;
    esp += 8; return; /* ret 4 */

loc_002155B1: ;
    eax = 0x25;
    esp += 8; return; /* ret 4 */

loc_002155B9: ;
    eax = 0x26;
    esp += 8; return; /* ret 4 */

loc_002155C1: ;
    eax = 0x30;
    esp += 8; return; /* ret 4 */

loc_002155C9: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_002155D1: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_002155D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002155DE: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_002155E6: ;
    eax = 0x31;

loc_002155EB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002155EE
 * Original: 0x002155EE - 0x0021574B (349 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155EE(void)
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

loc_002155EE: ;
    edi = edi;
    MEMF(ebp + 0x21) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_00215653 - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_00215657 - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* FPU: ficom word ptr [ebp + 0x21] */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_00215663 - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_00215667 - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0021566B;

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_0021566F - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_00215673 - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00215677;

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("out 0x55, al", 0x00215624u); /* TODO: out 0x55, al */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_0021567F - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_00215683 - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    (void)0; /* goto loc_00215687 - dead code, label not in function */

    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + 0x21)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + 0x21) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + 0x21)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x21) = MEM32(ebp + 0x21) & edx;
    _fa = (uint32_t)(MEM32(ebp + 0x21)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x21) = MEM32(ebp + 0x21) ^ edx;
    _fa = (uint32_t)(MEM32(ebp + 0x21)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x55)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx + 0x55) = MEM8(ecx + 0x55) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x55)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)MEM32(ebp + 0x21) * (int32_t)0x21557100);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x55)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ecx + 0x55) = MEM8(ecx + 0x55) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx + 0x55)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + 0x21)) + (uint64_t)(0x21558900) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + 0x21) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + 0x21)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_0021566B: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + -1728044715)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx + -1728044715) = MEM8(ecx + -1728044715) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + -1728044715)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x21)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x21), edx (32-bit) */
    _cf = (int)(_fa < _fb);

loc_00215677: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x55)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x55) = MEM8(ecx + 0x55) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0x55)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0xA9002155u);
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, 0x55);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0xD1002155u;
    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(ecx) = (float)fp_top(); /* fst */
    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && ((_fa == 0))) goto loc_002156EA; /* loope: ecx is non-zero and zero flag set */

loc_00215696: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_F12177F1(); return; /* tail jmp 0xF12177F1 */

    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 1; /* stc */
    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x21) = MEM32(ebp + 0x21) | edx;
    _fa = (uint32_t)(MEM32(ebp + 0x21)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x21)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ebp + 0x21) = MEM32(ebp + 0x21) + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x21)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_002156EA: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    ecx = MEM32(ecx + 0x3A8);
    g_seh_ebp = ebp; sub_00012180(); return; /* tail jmp 0x00012180 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00215750
 * Original: 0x00215750 - 0x002157D7 (135 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215750: ;
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x104);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002157CD; /* je: equal / zero */

loc_00215762: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0021576Bu); RECOMP_ABI_CALL(0x0001E0C5u, sub_0001E0C5); /* call 0x0001E0C5 */

loc_0021576B: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00215774u); RECOMP_ABI_CALL(0x000341C7u, sub_000341C7); /* call 0x000341C7 */

loc_00215774: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0021577Du); RECOMP_ABI_CALL(0x0002A16Du, sub_0002A16D); /* call 0x0002A16D */

loc_0021577D: ;
    ecx = MEM32(esp + 0x100);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7D5);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0021579Au); RECOMP_ABI_CALL(0x00018A7Bu, sub_00018A7B); /* call 0x00018A7B */

loc_0021579A: ;
    ecx = esp + 4;
    PUSH32(esp, 0x002157A3u); RECOMP_ABI_CALL(0x0002AA6Eu, sub_0002AA6E); /* call 0x0002AA6E */

loc_002157A3: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x40);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esi + 4) = ecx;
    ecx = esp + 4;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x002157CDu); RECOMP_ABI_CALL(0x0002FA78u, sub_0002FA78); /* call 0x0002FA78 */

loc_002157CD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00215800
 * Original: 0x00215800 - 0x0021580D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215800(void)
{

loc_00215800: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x13A0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215810
 * Original: 0x00215810 - 0x00215817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215810(void)
{

loc_00215810: ;
    eax = MEM32(ecx + 0x13A0);
    esp += 4; return; /* ret */

}

/**
 * sub_00215820
 * Original: 0x00215820 - 0x0021582E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215820(void)
{

loc_00215820: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7F8B7C);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215840
 * Original: 0x00215840 - 0x0021586D (45 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00215840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215840: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 3 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0021586A; /* jne: not equal / not zero */

loc_0021584B: ;
    ecx = eax;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00215868; /* je: equal / zero */

loc_00215852: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00215860; /* je: equal / zero */

loc_00215855: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0021586A; /* jne: not equal / not zero */

loc_00215858: ;
    eax = 2;
    esp += 12; return; /* ret 8 */

loc_00215860: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_00215868: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021586A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00215880
 * Original: 0x00215880 - 0x00215889 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215880(void)
{

loc_00215880: ;
    eax = ecx;
    MEM32(eax) = 0x7F9C28;
    esp += 4; return; /* ret */

}

/**
 * sub_00215890
 * Original: 0x00215890 - 0x002158C7 (55 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215890(void)
{

loc_00215890: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FA558;
    PUSH32(esp, 0x0021589Eu); RECOMP_ABI_CALL(0x0003247Bu, sub_0003247B); /* call 0x0003247B */

loc_0021589E: ;
    ecx = esi + 0x368;
    PUSH32(esp, 0x002158A9u); RECOMP_ABI_CALL(0x00025DD9u, sub_00025DD9); /* call 0x00025DD9 */

loc_002158A9: ;
    ecx = esi + 0x274;
    PUSH32(esp, 0x002158B4u); RECOMP_ABI_CALL(0x0002F7D5u, sub_0002F7D5); /* call 0x0002F7D5 */

loc_002158B4: ;
    ecx = esi + 0x180;
    PUSH32(esp, 0x002158BFu); RECOMP_ABI_CALL(0x0002F7D5u, sub_0002F7D5); /* call 0x0002F7D5 */

loc_002158BF: ;
    MEM32(esi) = 0x7F9C28;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002158E0
 * Original: 0x002158E0 - 0x002158E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002158E0(void)
{

loc_002158E0: ;
    eax = MEM32(ecx + 0x17C);
    esp += 4; return; /* ret */

}

/**
 * sub_002158F0
 * Original: 0x002158F0 - 0x002158F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002158F0(void)
{

loc_002158F0: ;
    eax = ecx + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_00215900
 * Original: 0x00215900 - 0x00215904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215900(void)
{

loc_00215900: ;
    SET_LO8(eax, MEM8(ecx + 5));
    esp += 4; return; /* ret */

}

/**
 * sub_00215910
 * Original: 0x00215910 - 0x00215919 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215910(void)
{

loc_00215910: ;
    eax = ecx;
    MEM32(eax) = 0x7FA128;
    esp += 4; return; /* ret */

}

/**
 * sub_00215920
 * Original: 0x00215920 - 0x0021593D (29 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215920: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    ecx = MEM32(0x8F5AD0);
    if (CMP_NE(_fa, _fb)) goto loc_00215935; /* jne: not equal / not zero */

loc_0021592D: ;
    PUSH32(esp, 0x00215932u); RECOMP_ABI_CALL(0x00035D97u, sub_00035D97); /* call 0x00035D97 */

loc_00215932: ;
    esp += 8; return; /* ret 4 */

loc_00215935: ;
    PUSH32(esp, 0x0021593Au); RECOMP_ABI_CALL(0x0001FC3Bu, sub_0001FC3B); /* call 0x0001FC3B */

loc_0021593A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215950
 * Original: 0x00215950 - 0x0021596E (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215950: ;
    PUSH32(esp, 0x00215955u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00215955: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021596B; /* je: equal / zero */

loc_00215959: ;
    ecx = eax;
    PUSH32(esp, 0x00215960u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00215960: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021596B; /* je: equal / zero */

loc_00215964: ;
    MEM8(0x8C2250) = 0;

loc_0021596B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215980
 * Original: 0x00215980 - 0x002159A5 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215980: ;
    PUSH32(esp, 0x00215985u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00215985: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002159A2; /* je: equal / zero */

loc_00215989: ;
    ecx = eax;
    PUSH32(esp, 0x00215990u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00215990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002159A2; /* je: equal / zero */

loc_00215994: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0021599Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215998u); } /* indirect call */
    }

loc_0021599B: ;
    MEM8(0x8C2250) = 0;

loc_002159A2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002159B0
 * Original: 0x002159B0 - 0x00215A7F (207 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002159B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002159B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002159C6; /* je: equal / zero */

loc_002159BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002159C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002159C1u); } /* indirect call */
    }

loc_002159C3: ;
    MEM32(esi + 0x30) = edi;

loc_002159C6: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002159D6; /* je: equal / zero */

loc_002159CD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002159D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002159D1u); } /* indirect call */
    }

loc_002159D3: ;
    MEM32(esi + 0x24) = edi;

loc_002159D6: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002159E6; /* je: equal / zero */

loc_002159DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002159E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002159E1u); } /* indirect call */
    }

loc_002159E3: ;
    MEM32(esi + 0x34) = edi;

loc_002159E6: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002159F9; /* je: equal / zero */

loc_002159ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002159F3u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002159F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edi;

loc_002159F9: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A09; /* je: equal / zero */

loc_00215A00: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00215A06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215A04u); } /* indirect call */
    }

loc_00215A06: ;
    MEM32(esi + 0x28) = edi;

loc_00215A09: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A19; /* je: equal / zero */

loc_00215A10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00215A16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215A14u); } /* indirect call */
    }

loc_00215A16: ;
    MEM32(esi + 0x20) = edi;

loc_00215A19: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A29; /* je: equal / zero */

loc_00215A20: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00215A26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215A24u); } /* indirect call */
    }

loc_00215A26: ;
    MEM32(esi + 0x18) = edi;

loc_00215A29: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A39; /* je: equal / zero */

loc_00215A30: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00215A36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215A34u); } /* indirect call */
    }

loc_00215A36: ;
    MEM32(esi + 0x10) = edi;

loc_00215A39: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A49; /* je: equal / zero */

loc_00215A40: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00215A46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215A44u); } /* indirect call */
    }

loc_00215A46: ;
    MEM32(esi + 8) = edi;

loc_00215A49: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A59; /* je: equal / zero */

loc_00215A50: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00215A56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215A54u); } /* indirect call */
    }

loc_00215A56: ;
    MEM32(esi + 4) = edi;

loc_00215A59: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A69; /* je: equal / zero */

loc_00215A60: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00215A66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215A64u); } /* indirect call */
    }

loc_00215A66: ;
    MEM32(esi + 0x1C) = edi;

loc_00215A69: ;
    PUSH32(esp, 0x00215A6Eu); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00215A6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215A79; /* je: equal / zero */

loc_00215A72: ;
    ecx = eax;
    PUSH32(esp, 0x00215A79u); RECOMP_ABI_CALL(0x0001FE7Au, sub_0001FE7A); /* call 0x0001FE7A */

loc_00215A79: ;
    MEM32(esi + 0x38) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215AC0
 * Original: 0x00215AC0 - 0x00215ADA (26 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215AC0(void)
{

loc_00215AC0: ;
    PUSH32(esp, 0x00215AC5u); RECOMP_ABI_CALL(0x0001E11Au, sub_0001E11A); /* call 0x0001E11A */

loc_00215AC5: ;
    MEM32(0x8B51F8) = 1;
    MEM32(0x8F958C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00215AE0
 * Original: 0x00215AE0 - 0x00215AE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215AE0(void)
{

loc_00215AE0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00215AF0
 * Original: 0x00215AF0 - 0x00215AF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215AF0(void)
{

loc_00215AF0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B00
 * Original: 0x00215B00 - 0x00215B04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B00(void)
{

loc_00215B00: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B10
 * Original: 0x00215B10 - 0x00215B14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B10(void)
{

loc_00215B10: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B20
 * Original: 0x00215B20 - 0x00215B24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B20(void)
{

loc_00215B20: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B30
 * Original: 0x00215B30 - 0x00215B34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B30(void)
{

loc_00215B30: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B40
 * Original: 0x00215B40 - 0x00215B44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B40(void)
{

loc_00215B40: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B50
 * Original: 0x00215B50 - 0x00215B54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B50(void)
{

loc_00215B50: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B60
 * Original: 0x00215B60 - 0x00215B64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B60(void)
{

loc_00215B60: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B70
 * Original: 0x00215B70 - 0x00215B74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B70(void)
{

loc_00215B70: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B80
 * Original: 0x00215B80 - 0x00215B84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B80(void)
{

loc_00215B80: ;
    eax = MEM32(ecx + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B90
 * Original: 0x00215B90 - 0x00215B94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B90(void)
{

loc_00215B90: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00215BA0
 * Original: 0x00215BA0 - 0x00215BB9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215BB7; /* je: equal / zero */

loc_00215BAA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00215BB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215BAEu); } /* indirect call */
    }

loc_00215BB0: ;
    MEM32(esi + 0x14) = 0;

loc_00215BB7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215BC0
 * Original: 0x00215BC0 - 0x00215BC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215BC0(void)
{

loc_00215BC0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00215BD0
 * Original: 0x00215BD0 - 0x00215BD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215BD0(void)
{

loc_00215BD0: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_00215BE0
 * Original: 0x00215BE0 - 0x00215C22 (66 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215BE0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00215BE8u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00215BE8: ;
    ecx = eax;
    PUSH32(esp, 0x00215BEFu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00215BEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215C1E; /* je: equal / zero */

loc_00215BF3: ;
    eax = MEM32(eax + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00215C1E; /* ja: above (unsigned >) */

loc_00215BFC: ;
    eax = ZX8(MEM8(eax + 0x215C30));
    { uint32_t _jt = MEM32(eax * 4 + 0x215C24); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00215C0Au) goto loc_00215C0A;
    if (_jt == 0x00215C10u) goto loc_00215C10;
    if (_jt == 0x00215C19u) goto loc_00215C19;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00215C0A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00215C10: ;
    esi = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00215C19: ;
    esi = 2;

loc_00215C1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215C22
 * Original: 0x00215C22 - 0x00215C75 (83 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215C22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215C22: ;
    edi = edi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) | MEM8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM32(ecx)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, 0x00215C55u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00215C55: ;
    ecx = eax;
    PUSH32(esp, 0x00215C5Cu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00215C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00215C75(); return; } /* je: equal / zero */

loc_00215C60: ;
    eax = MEM32(eax + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00215C72; /* je: equal / zero */

loc_00215C68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00215C75(); return; } /* jle: less or equal (signed <=) */

loc_00215C6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00215C75(); return; } /* jg: greater (signed >) */

loc_00215C72: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00215C75
 * Original: 0x00215C75 - 0x00215C78 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215C75(void)
{

loc_00215C75: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00215C90
 * Original: 0x00215C90 - 0x00215CC1 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215C90: ;
    eax = MEM32(0x8B51F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8F958C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, eax);
    ecx = esi;
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00215CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215CADu); } /* indirect call */
    }

loc_00215CB0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215CBE; /* je: equal / zero */

loc_00215CB4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x54)); return; /* indirect tail jmp */

loc_00215CBE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00215CD0
 * Original: 0x00215CD0 - 0x00215D04 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(0x8B51F8) = 1;
    PUSH32(esp, 0x00215CE2u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00215CE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215D02; /* je: equal / zero */

loc_00215CE6: ;
    ecx = eax;
    PUSH32(esp, 0x00215CEDu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00215CED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215D02; /* je: equal / zero */

loc_00215CF1: ;
    ecx = MEM32(esi + 0x38);
    MEM32(0x8B51F8) = ecx;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00215D02: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215D20
 * Original: 0x00215D20 - 0x00215D3F (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215D20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00215D2Fu); RECOMP_ABI_CALL(0x0001A1E6u, sub_0001A1E6); /* call 0x0001A1E6 */

loc_00215D2F: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x1A0) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215D50
 * Original: 0x00215D50 - 0x00215D55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215D50: ;
    g_seh_ebp = ebp; sub_00029F15(); return; /* tail jmp 0x00029F15 */

}

/**
 * sub_00215D60
 * Original: 0x00215D60 - 0x00215D94 (52 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00215D6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215D6Au); } /* indirect call */
    }

loc_00215D6D: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00215D88; /* jle: less or equal (signed <=) */

loc_00215D75: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00215D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215D7Bu); } /* indirect call */
    }

loc_00215D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215D8E; /* je: equal / zero */

loc_00215D83: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215D75; /* jl: less (signed <) */

loc_00215D88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00215D8E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00215DB0
 * Original: 0x00215DB0 - 0x00215DD7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215DB0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215DD6; /* je: equal / zero */

loc_00215DB9: ;
    /* nop */

loc_00215DC0: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215DCE; /* jl: less (signed <) */

loc_00215DC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00215DCE; /* jg: greater (signed >) */

loc_00215DCA: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(ecx) = LO8(eax);

loc_00215DCE: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215DC0; /* jne: not equal / not zero */

loc_00215DD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00215DE0
 * Original: 0x00215DE0 - 0x0021621C (1084 bytes, 324 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215DE0: ;
    _fb = (uint32_t)(0x638) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x638;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x00215DF9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00215DF9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00215E00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215DFDu); } /* indirect call */
    }

loc_00215E00: ;
    ebp = MEM32(esp + 0x650);
    PUSH32(esp, ebx);
    ecx = esp + 0x154;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00215E1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215E17u); } /* indirect call */
    }

loc_00215E1A: ;
    ecx = MEM32(esp + 0x660);
    edi = MEM32(esp + 0x654);
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    eax = esp + 0x254;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edi + ecx * 2);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00215E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215E3Au); } /* indirect call */
    }

loc_00215E3D: ;
    edx = MEM32(esp + 0x658);
    eax = MEM32(esp + 0x65C);
    MEM8(esp + 0x13) = LO8(ebx);
    ebx = edi + edx * 2;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edi + eax * 2;

loc_00215E57: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215E97; /* jne: not equal / not zero */

loc_00215E5F: ;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00215E7B; /* je: equal / zero */

loc_00215E67: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00215E74; /* jle: less or equal (signed <=) */

loc_00215E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00215E74; /* jg: greater (signed >) */

loc_00215E6E: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00215E8B;

loc_00215E74: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00215E8B;

loc_00215E7B: ;
    edi = (uint32_t)(int32_t)SMEM16(ebx);
    eax = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x1C) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_00215E8B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215E57; /* jl: less (signed <) */

loc_00215E97: ;
    PUSH32(esp, 0x00215E9Cu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00215E9C: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = eax;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_0021602C; /* jne: not equal / not zero */

loc_00215EAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00215F3B; /* je: equal / zero */

loc_00215EB5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00215EFD; /* je: equal / zero */

loc_00215EB8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00216211; /* jne: not equal / not zero */

loc_00215EBF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA748);
    PUSH32(esp, 0x00215ED0u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00215ED0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00215EDBu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00215EDB: ;
    ecx = MEM32(esp + 0x64C);
    edx = esp + 0x150;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00215EF5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00215EF5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002161F6;

loc_00215EFD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA728);
    PUSH32(esp, 0x00215F0Eu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00215F0E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00215F19u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00215F19: ;
    eax = MEM32(esp + 0x64C);
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00215F33u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00215F33: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002161F6;

loc_00215F3B: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00215F44u); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_00215F44: ;
    ecx = MEM32(esp + 0x1C);
    eax = esp + 0x350;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00215F5Au); RECOMP_ABI_CALL(0x00015D3Fu, sub_00015D3F); /* call 0x00015D3F */

loc_00215F5A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA70C);
    PUSH32(esp, 0x00215F6Bu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00215F6B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00215F76u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00215F76: ;
    _fa = (uint32_t)(MEM32(esp + 0x660)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x660), 1 (32-bit) */
    edx = esp + 0x150;
    if (CMP_NE(_fa, _fb)) goto loc_00215FA7; /* jne: not equal / not zero */

loc_00215F87: ;
    eax = esp + 0x250;
    PUSH32(esp, eax);
    ecx = esp + 0x454;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x654);
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_00215FC5;

loc_00215FA7: ;
    PUSH32(esp, edx);
    eax = esp + 0x454;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x654);
    ecx = esp + 0x258;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_00215FC5: ;
    PUSH32(esp, 0x00215FCAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00215FCA: ;
    esi = MEM32(esp + 0x678);
    edx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    MEM32(esi) = 1;
    ecx = 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x5B4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x00215FFDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00215FFD: ;
    SET_LO8(eax, MEM8(esp + 0x5BD));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x108) = LO8(ecx);
    ecx = esp + 0x28;
    MEM32(esi + 0x104) = edi;
    PUSH32(esp, 0x00216021u); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_00216021: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x638) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x638;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0021602C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002160AF; /* jne: not equal / not zero */

loc_00216030: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_LE(_fas, _fbs)) goto loc_00216073; /* jle: less or equal (signed <=) */

loc_00216037: ;
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA6EC);
    PUSH32(esp, 0x00216046u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216046: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00216051u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216051: ;
    edx = MEM32(esp + 0x64C);
    eax = esp + 0x150;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0021606Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021606B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002161F6;

loc_00216073: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA6CC);
    PUSH32(esp, 0x00216082u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216082: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0021608Du); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0021608D: ;
    eax = MEM32(esp + 0x64C);
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002160A7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002160A7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002161F6;

loc_002160AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002161B5; /* jne: not equal / not zero */

loc_002160B8: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x002160C1u); RECOMP_ABI_CALL(0x000157D6u, sub_000157D6); /* call 0x000157D6 */

loc_002160C1: ;
    ecx = MEM32(esp + 0x1C);
    eax = esp + 0x350;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x002160D7u); RECOMP_ABI_CALL(0x00015D3Fu, sub_00015D3F); /* call 0x00015D3F */

loc_002160D7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_NE(_fa, _fb)) goto loc_00216117; /* jne: not equal / not zero */

loc_002160DE: ;
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA6A8);
    PUSH32(esp, 0x002160EDu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002160ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002160F8u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002160F8: ;
    eax = esp + 0x450;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x650);
    ecx = esp + 0x154;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_0021614E;

loc_00216117: ;
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA680);
    PUSH32(esp, 0x00216126u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216126: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00216131u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216131: ;
    edx = esp + 0x450;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x650);
    eax = esp + 0x154;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_0021614E: ;
    PUSH32(esp, 0x00216153u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00216153: ;
    esi = MEM32(esp + 0x674);
    edx = esi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    MEM32(esi) = 1;
    ecx = 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x5B0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 0x00216186u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00216186: ;
    SET_LO8(eax, MEM8(esp + 0x5BD));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = esp + 0x28;
    MEM32(esi + 0x104) = edi;
    MEM8(esi + 0x108) = LO8(eax);
    PUSH32(esp, 0x002161AAu); RECOMP_ABI_CALL(0x000220C1u, sub_000220C1); /* call 0x000220C1 */

loc_002161AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x638) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x638;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002161B5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA664);
    PUSH32(esp, 0x002161C6u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002161C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002161D1u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002161D1: ;
    edx = esp + 0x250;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x650);
    eax = esp + 0x154;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002161F3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002161F3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002161F6: ;
    eax = MEM32(esp + 0x664);
    MEM32(eax) = 2;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00216211u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021620Eu); } /* indirect call */
    }

loc_00216211: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x638) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x638;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00216330
 * Original: 0x00216330 - 0x00216344 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216330: ;
    PUSH32(esp, 0x00216335u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00216335: ;
    ecx = eax;
    PUSH32(esp, 0x0021633Cu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_0021633C: ;
    ecx = MEM32(eax + 0x60);
    g_seh_ebp = ebp; sub_00029FA1(); return; /* tail jmp 0x00029FA1 */

}

/**
 * sub_00216350
 * Original: 0x00216350 - 0x00216353 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216350(void)
{

loc_00216350: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216360
 * Original: 0x00216360 - 0x00216368 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216360: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00012AA4(); return; /* tail jmp 0x00012AA4 */

}

/**
 * sub_00216370
 * Original: 0x00216370 - 0x00216374 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216370(void)
{

loc_00216370: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00216380
 * Original: 0x00216380 - 0x00216388 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216380: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002700D(); return; /* tail jmp 0x0002700D */

}

/**
 * sub_00216390
 * Original: 0x00216390 - 0x0021641D (141 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0021639Bu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0021639B: ;
    ecx = eax;
    PUSH32(esp, 0x002163A2u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_002163A2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002163ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002163A6u); } /* indirect call */
    }

loc_002163AC: ;
    ebx = eax;
    PUSH32(esp, 0x002163B3u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002163B3: ;
    ecx = eax;
    PUSH32(esp, 0x002163BAu); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002163BA: ;
    esi = MEM32(eax + 0x60);
    edi = MEM32(eax + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(eax) = 0;
    PUSH32(esp, 0x002163D8u); RECOMP_ABI_CALL(0x00019F61u, sub_00019F61); /* call 0x00019F61 */

loc_002163D8: ;
    ecx = esi;
    PUSH32(esp, 0x002163DFu); RECOMP_ABI_CALL(0x00029FA1u, sub_00029FA1); /* call 0x00029FA1 */

loc_002163DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00216416; /* jle: less or equal (signed <=) */

loc_002163E3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002163ECu); RECOMP_ABI_CALL(0x000137BAu, sub_000137BA); /* call 0x000137BA */

loc_002163EC: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216416; /* jne: not equal / not zero */

loc_002163F1: ;
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216416; /* jne: not equal / not zero */

loc_002163F7: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216402; /* je: equal / zero */

loc_002163FC: ;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 2), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216416; /* jne: not equal / not zero */

loc_00216402: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0021640Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021640Cu); } /* indirect call */
    }

loc_0021640F: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00216416: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00216440
 * Original: 0x00216440 - 0x0021644A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216440(void)
{

loc_00216440: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x78) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216450
 * Original: 0x00216450 - 0x0021647C (44 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216450: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00216458u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00216458: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216476; /* je: equal / zero */

loc_0021645C: ;
    ecx = eax;
    PUSH32(esp, 0x00216463u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00216463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216476; /* je: equal / zero */

loc_00216467: ;
    eax = MEM32(eax + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216476; /* je: equal / zero */

loc_0021646E: ;
    POP32(esp, esi);
    ecx = eax;
    g_seh_ebp = ebp; sub_000346D1(); return; /* tail jmp 0x000346D1 */

loc_00216476: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216490
 * Original: 0x00216490 - 0x0021699B (1291 bytes, 428 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00216490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x51C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x51C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002164A9u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_002164A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021698E; /* je: equal / zero */

loc_002164B1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002164B8u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_002164B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021698E; /* je: equal / zero */

loc_002164C0: ;
    ecx = MEM32(eax + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021698E; /* je: equal / zero */

loc_002164CB: ;
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002164DDu); RECOMP_ABI_CALL(0x0002BA36u, sub_0002BA36); /* call 0x0002BA36 */

loc_002164DD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002164E2u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002164E2: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x128) = 0x202E20;
    ecx = 0x1F;
    edi = esp + 0x12C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216504u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216504: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021650Bu); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_0021650B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    ecx = esp + 0x1AC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00216524u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216521u); } /* indirect call */
    }

loc_00216524: ;
    SET_LO8(edx, MEM8(esp + 0x1A8));
    MEM8(esp + 0x128) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216537u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216537: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021653Eu); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_0021653E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7FFFFFFF);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00216554u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216551u); } /* indirect call */
    }

loc_00216554: ;
    edi = esp + 0x1A8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00216560: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216560; /* jne: not equal / not zero */

loc_00216568: ;
    SET_LO16(edx, MEM16(0x7E0960));
    eax = esp + 0x28;
    MEM16(edi) = LO16(edx);
    edx = eax;

loc_00216578: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216578; /* jne: not equal / not zero */

loc_0021657F: ;
    edi = esp + 0x1A8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00216590: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216590; /* jne: not equal / not zero */

loc_00216598: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = edx;
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
    eax = esp + 0x28;
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
    ecx = eax;
    edi = edi;

loc_002165B0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002165B0; /* jne: not equal / not zero */

loc_002165B7: ;
    edi = esp + 0x128;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002165C3: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002165C3; /* jne: not equal / not zero */

loc_002165CB: ;
    ecx = eax;
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
    eax = MEM32(esp + 0x1C);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
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
    if (CMP_A(_fa, _fb)) goto loc_0021698E; /* ja: above (unsigned >) */

loc_002165E7: ;
    eax = ZX8(MEM8(eax + 0x2169B4));
    { uint32_t _jt = MEM32(eax * 4 + 0x21699C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002165F5u) goto loc_002165F5;
    if (_jt == 0x00216657u) goto loc_00216657;
    if (_jt == 0x002166B9u) goto loc_002166B9;
    if (_jt == 0x00216713u) goto loc_00216713;
    if (_jt == 0x002167C6u) goto loc_002167C6;
    if (_jt == 0x0021691Au) goto loc_0021691A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002165F5: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216610; /* je: equal / zero */

loc_002165FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216610; /* je: equal / zero */

loc_00216602: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA864);
    goto loc_0021667E;

loc_00216610: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA854);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216621u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216621: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021662Cu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0021662C: ;
    edx = MEM32(ebp + 0x10);
    eax = esp + 0x1A8;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216642u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00216642: ;
    MEM8(esp + 0x1F) = 1;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00216657: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216672; /* je: equal / zero */

loc_0021665F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216672; /* je: equal / zero */

loc_00216664: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA840);
    goto loc_0021667E;

loc_00216672: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA82C);

loc_0021667E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216683u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216683: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021668Eu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0021668E: ;
    ecx = MEM32(ebp + 0x10);
    edx = esp + 0x1A8;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002166A4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002166A4: ;
    MEM8(esp + 0x1F) = 1;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_002166B9: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 2 (32-bit) */
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_NE(_fa, _fb)) goto loc_002166CE; /* jne: not equal / not zero */

loc_002166C2: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA814);
    goto loc_002166D8;

loc_002166CE: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA804);

loc_002166D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002166DDu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002166DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002166E8u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002166E8: ;
    eax = MEM32(ebp + 0x10);
    ecx = esp + 0x1A8;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002166FEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002166FE: ;
    MEM8(esp + 0x1F) = 1;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00216713: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021672E; /* je: equal / zero */

loc_0021671B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021672E; /* je: equal / zero */

loc_00216720: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA7EC);
    goto loc_0021678B;

loc_0021672E: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 1 (32-bit) */
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_LE(_fas, _fbs)) goto loc_00216781; /* jle: less or equal (signed <=) */

loc_00216737: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA7D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216746u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216746: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216751u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216751: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    ecx = esp + 0x12C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021676Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0021676C: ;
    MEM8(esp + 0x23) = 1;
    SET_LO8(eax, MEM8(esp + 0x23));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00216781: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA7B4);

loc_0021678B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216790u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216790: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021679Bu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0021679B: ;
    ecx = MEM32(ebp + 0x10);
    edx = esp + 0x128;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002167B1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002167B1: ;
    MEM8(esp + 0x1F) = 1;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_002167C6: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216824; /* je: equal / zero */

loc_002167CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216824; /* je: equal / zero */

loc_002167D3: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA7A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002167E4u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002167E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002167EFu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002167EF: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x330;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216806u); RECOMP_ABI_CALL(0x00017239u, sub_00017239); /* call 0x00017239 */

loc_00216806: ;
    eax = esp + 0x334;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    ecx = esp + 0x1B8;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00216981;

loc_00216824: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA794);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216835u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216835: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216840u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216840: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x330;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216857u); RECOMP_ABI_CALL(0x00017239u, sub_00017239); /* call 0x00017239 */

loc_00216857: ;
    esi = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    PUSH32(esp, 0xFFFFFFFFu);
    if (CMP_G(_fas, _fbs)) goto loc_00216874; /* jg: greater (signed >) */

loc_00216865: ;
    edx = esp + 0x2AC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA78C);
    goto loc_002168B4;

loc_00216874: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00216894; /* jg: greater (signed >) */

loc_00216879: ;
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = esp + 0x2AC;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x7FA784);
    goto loc_002168AD;

loc_00216894: ;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = esp + 0x2AC;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x7FA77C);

loc_002168AD: ;
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002168B4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002168B9u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002168B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002168C4u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002168C4: ;
    edx = esp + 0x2A8;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x430;
    PUSH32(esp, 0x7E0378);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002168DFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002168DF: ;
    ecx = esp + 0x438;
    PUSH32(esp, ecx);
    edx = esp + 0x33C;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    eax = esp + 0x1C0;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216905u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00216905: ;
    MEM8(esp + 0x37) = 1;
    SET_LO8(eax, MEM8(esp + 0x37));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0021691A: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216935; /* je: equal / zero */

loc_00216922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216935; /* je: equal / zero */

loc_00216927: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA7A0);
    goto loc_00216941;

loc_00216935: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA768);

loc_00216941: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216946u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216946: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216951u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216951: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x430;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216968u); RECOMP_ABI_CALL(0x00017239u, sub_00017239); /* call 0x00017239 */

loc_00216968: ;
    edx = esp + 0x434;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    eax = esp + 0x1B8;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00216981: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00216986u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00216986: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0x13) = 1;

loc_0021698E: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00216B50
 * Original: 0x00216B50 - 0x00216B7F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216B56u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00216B56: ;
    ecx = eax;
    PUSH32(esp, 0x00216B5Du); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00216B5D: ;
    esi = MEM32(eax + 0x60);
    ecx = esi;
    PUSH32(esp, 0x00216B67u); RECOMP_ABI_CALL(0x00029FA1u, sub_00029FA1); /* call 0x00029FA1 */

loc_00216B67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00216B7D; /* jle: less or equal (signed <=) */

loc_00216B6B: ;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi;

loc_00216B70: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00216B79u); RECOMP_ABI_CALL(0x0001D4AEu, sub_0001D4AE); /* call 0x0001D4AE */

loc_00216B79: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00216B70; /* jne: not equal / not zero */

loc_00216B7C: ;
    POP32(esp, edi);

loc_00216B7D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00216B90
 * Original: 0x00216B90 - 0x00216BB3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216B90: ;
    PUSH32(esp, 0x00216B95u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00216B95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216BB2; /* je: equal / zero */

loc_00216B99: ;
    ecx = eax;
    PUSH32(esp, 0x00216BA0u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00216BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216BB2; /* je: equal / zero */

loc_00216BA4: ;
    eax = MEM32(eax + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216BB2; /* je: equal / zero */

loc_00216BAB: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_000241BE(); return; /* tail jmp 0x000241BE */

loc_00216BB2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00216BC0
 * Original: 0x00216BC0 - 0x00216C54 (148 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216BC0: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216BCDu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216BCD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00216BD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216BD1u); } /* indirect call */
    }

loc_00216BD4: ;
    edi = MEM32(esp + 0x218);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00216BECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216BE9u); } /* indirect call */
    }

loc_00216BEC: ;
    eax = MEM32(esp + 0x210);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216C03u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216C03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216C0Cu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00216C0C: ;
    ecx = eax;
    PUSH32(esp, 0x00216C13u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216C13: ;
    eax = MEM32(esp + 0x20C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216C2Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00216C2D: ;
    eax = MEM32(esp + 0x220);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 2;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00216C4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216C48u); } /* indirect call */
    }

loc_00216C4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00216C80
 * Original: 0x00216C80 - 0x00216CAF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216C80: ;
    PUSH32(esp, 0x00216C85u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216C85: ;
    ecx = eax;
    PUSH32(esp, 0x00216C8Cu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00216C8C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00216C96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216C90u); } /* indirect call */
    }

loc_00216C96: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00216CABu); RECOMP_ABI_CALL(0x0002C265u, sub_0002C265); /* call 0x0002C265 */

loc_00216CAB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00216CC0
 * Original: 0x00216CC0 - 0x00216DC8 (264 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216CC0: ;
    _fb = (uint32_t)(0x340) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x340;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00216CCEu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_00216CCE: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00216CDA; /* jns: not sign (positive) */

loc_00216CD5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00216CDA: ;
    if ((eax == 0)) goto loc_00216D09; /* je: equal / zero */

loc_00216CDC: ;
    eax = MEM32(edi + 0x78);
    ecx = MEM32(esp + 0x34C);
    edx = MEM32(esp + 0x348);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA898);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00216CFAu); RECOMP_ABI_CALL(0x0002C265u, sub_0002C265); /* call 0x0002C265 */

loc_00216CFA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(0x340) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x340;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00216D09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00216D0Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216D0F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00216D16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216D13u); } /* indirect call */
    }

loc_00216D16: ;
    edx = MEM32(edi + 0x78);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00216D2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216D27u); } /* indirect call */
    }

loc_00216D2A: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00216D33u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00216D33: ;
    ecx = MEM32(edi + 0x78);
    eax = esp + 0x21C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00216D48u); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00216D48: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x120;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FA878);
    PUSH32(esp, 0x00216D5Fu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216D5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216D68u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00216D68: ;
    ecx = eax;
    PUSH32(esp, 0x00216D6Fu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216D6F: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x350);
    ecx = esp + 0x292;
    PUSH32(esp, ecx);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00216D91u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00216D91: ;
    eax = MEM32(esp + 0x360);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 2;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x78);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00216DB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216DAFu); } /* indirect call */
    }

loc_00216DB2: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00216DBBu); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00216DBB: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(0x340) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x340;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216E10
 * Original: 0x00216E10 - 0x00216E30 (32 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216E10: ;
    eax = MEM32(ecx + 0x78);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA8B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00216E28u); RECOMP_ABI_CALL(0x0002C265u, sub_0002C265); /* call 0x0002C265 */

loc_00216E28: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216E40
 * Original: 0x00216E40 - 0x00216E73 (51 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216E40: ;
    PUSH32(esp, 0x00216E45u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216E45: ;
    ecx = eax;
    PUSH32(esp, 0x00216E4Cu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00216E4C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00216E56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216E50u); } /* indirect call */
    }

loc_00216E56: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA8E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00216E6Bu); RECOMP_ABI_CALL(0x0002C265u, sub_0002C265); /* call 0x0002C265 */

loc_00216E6B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216E80
 * Original: 0x00216E80 - 0x00216EB3 (51 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216E80: ;
    PUSH32(esp, 0x00216E85u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216E85: ;
    ecx = eax;
    PUSH32(esp, 0x00216E8Cu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00216E8C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00216E96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216E90u); } /* indirect call */
    }

loc_00216E96: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA908);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00216EABu); RECOMP_ABI_CALL(0x0002C265u, sub_0002C265); /* call 0x0002C265 */

loc_00216EAB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216EC0
 * Original: 0x00216EC0 - 0x00216EF3 (51 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216EC0: ;
    PUSH32(esp, 0x00216EC5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216EC5: ;
    ecx = eax;
    PUSH32(esp, 0x00216ECCu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00216ECC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00216ED6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216ED0u); } /* indirect call */
    }

loc_00216ED6: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FA924);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00216EEBu); RECOMP_ABI_CALL(0x0002C265u, sub_0002C265); /* call 0x0002C265 */

loc_00216EEB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216F00
 * Original: 0x00216F00 - 0x00217458 (1368 bytes, 229 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00216F00: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00216F0Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00216F0F: ;
    ecx = eax;
    PUSH32(esp, 0x00216F16u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00216F16: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00216F20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216F1Au); } /* indirect call */
    }

loc_00216F20: ;
    ecx = esp + 0x14;
    ebp = eax;
    edi = 0x10;
    PUSH32(esp, 0x00216F30u); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00216F30: ;
    PUSH32(esp, 3);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00216F3Bu); RECOMP_ABI_CALL(0x0003153Au, sub_0003153A); /* call 0x0003153A */

loc_00216F3B: ;
    eax = MEM32(esp + 0x1C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00216F78; /* jle: less or equal (signed <=) */

loc_00216F4B: ;
    goto loc_00216F50;

    /* nop */

loc_00216F50: ;
    eax = esp + 0x1E8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00216F62u); RECOMP_ABI_CALL(0x00035329u, sub_00035329); /* call 0x00035329 */

loc_00216F62: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x224)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x224) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00216F76; /* je: equal / zero */

loc_00216F6B: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216F50; /* jl: less (signed <) */

loc_00216F74: ;
    goto loc_00216F78;

loc_00216F76: ;
    edi = ebx;

loc_00216F78: ;
    ecx = esp + 0x1E8;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00216F8Au); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00216F8A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216FA7; /* jl: less (signed <) */

loc_00216F8F: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00216F98u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00216F98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00216FA7: ;
    PUSH32(esp, 0x00216FACu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00216FAC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x318;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FAAB8);
    ebx = eax;
    PUSH32(esp, 0x00216FC2u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00216FC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00216FCDu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00216FCD: ;
    eax = 0x7E94C8;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = 0x7FAAB4;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    eax = 0x7FAAB0;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = eax;
    eax = 0x7FAAAC;
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x88) = eax;
    eax = 0x7FAAA8;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA4) = eax;
    eax = 0x7FAAA4;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xC0) = eax;
    eax = 0x7FAAA0;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0xDC) = eax;
    eax = 0x7FAA9C;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xF8) = eax;
    eax = 0x7FAA98;
    MEM32(esp + 0x28) = 0x7FAA94;
    MEM32(esp + 0x2C) = 0x7FAA90;
    MEM32(esp + 0x38) = 0x7FAA8C;
    MEM32(esp + 0x3C) = 0x7FAA88;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = 0x7FAA84;
    MEM32(esp + 0x48) = 0x7FAA80;
    MEM32(esp + 0x54) = 0x7FAA7C;
    MEM32(esp + 0x58) = 0x7FAA78;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x60) = 0x7FAA74;
    MEM32(esp + 0x64) = 0x7FAA70;
    MEM32(esp + 0x70) = 0x7FAA6C;
    MEM32(esp + 0x74) = 0x7FAA68;
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x7C) = 0x7FAA64;
    MEM32(esp + 0x80) = 0x7FAA60;
    MEM32(esp + 0x8C) = 0x7FAA5C;
    MEM32(esp + 0x90) = 0x7FAA58;
    MEM32(esp + 0x94) = esi;
    MEM32(esp + 0x98) = 0x7FAA54;
    MEM32(esp + 0x9C) = 0x7FAA50;
    MEM32(esp + 0xA8) = 0x7FAA4C;
    MEM32(esp + 0xAC) = 0x7FAA48;
    MEM32(esp + 0xB0) = esi;
    MEM32(esp + 0xB4) = 0x7FAA44;
    MEM32(esp + 0xB8) = 0x7FAA40;
    MEM32(esp + 0xC4) = 0x7FAA3C;
    MEM32(esp + 0xC8) = 0x7FAA38;
    MEM32(esp + 0xCC) = esi;
    MEM32(esp + 0xD0) = 0x7FAA34;
    MEM32(esp + 0xD4) = 0x7FAA30;
    MEM32(esp + 0xE0) = 0x7FAA2C;
    MEM32(esp + 0xE4) = 0x7FAA28;
    MEM32(esp + 0xE8) = esi;
    MEM32(esp + 0xEC) = 0x7FAA24;
    MEM32(esp + 0xF0) = 0x7FAA20;
    MEM32(esp + 0xFC) = 0x7FAA1C;
    MEM32(esp + 0x100) = 0x7FAA18;
    MEM32(esp + 0x104) = esi;
    MEM32(esp + 0x108) = 0x7FAA14;
    MEM32(esp + 0x10C) = 0x7FAA10;
    MEM32(esp + 0x110) = eax;
    MEM32(esp + 0x114) = eax;
    MEM32(esp + 0x118) = 0x7FAA0C;
    eax = 0x7FAA08;
    MEM32(esp + 0x12C) = eax;
    MEM32(esp + 0x130) = eax;
    eax = 0x7FAA04;
    MEM32(esp + 0x148) = eax;
    MEM32(esp + 0x14C) = eax;
    eax = 0x7FAA00;
    MEM32(esp + 0x164) = eax;
    MEM32(esp + 0x168) = eax;
    eax = 0x7FA9FC;
    MEM32(esp + 0x180) = eax;
    MEM32(esp + 0x184) = eax;
    eax = 0x7FA9F8;
    MEM32(esp + 0x19C) = eax;
    MEM32(esp + 0x1A0) = eax;
    eax = 0x7FA9F4;
    MEM32(esp + 0x1B8) = eax;
    MEM32(esp + 0x1BC) = eax;
    eax = 0x7FA9F0;
    MEM32(esp + 0x11C) = 0x7FA9EC;
    MEM32(esp + 0x120) = esi;
    MEM32(esp + 0x124) = 0x7FA9E4;
    MEM32(esp + 0x128) = 0x7FA9DC;
    MEM32(esp + 0x134) = 0x7FA9D8;
    MEM32(esp + 0x138) = 0x7FA9D4;
    MEM32(esp + 0x13C) = esi;
    MEM32(esp + 0x140) = 0x7FA9CC;
    MEM32(esp + 0x144) = 0x7FA9C4;
    MEM32(esp + 0x150) = 0x7FA9C0;
    MEM32(esp + 0x154) = 0x7FA9BC;
    MEM32(esp + 0x158) = esi;
    MEM32(esp + 0x15C) = 0x7FA9B4;
    MEM32(esp + 0x160) = 0x7FA9AC;
    MEM32(esp + 0x16C) = 0x7FA9A8;
    MEM32(esp + 0x170) = 0x7FA9A4;
    MEM32(esp + 0x174) = esi;
    MEM32(esp + 0x178) = 0x7FA99C;
    MEM32(esp + 0x17C) = 0x7FA994;
    MEM32(esp + 0x188) = 0x7FA990;
    MEM32(esp + 0x18C) = 0x7FA98C;
    MEM32(esp + 0x190) = esi;
    MEM32(esp + 0x194) = 0x7FA984;
    MEM32(esp + 0x198) = 0x7FA97C;
    MEM32(esp + 0x1A4) = 0x7FA978;
    MEM32(esp + 0x1A8) = 0x7FA974;
    MEM32(esp + 0x1AC) = esi;
    MEM32(esp + 0x1B0) = 0x7FA96C;
    MEM32(esp + 0x1B4) = 0x7FA964;
    MEM32(esp + 0x1C0) = 0x7FA960;
    MEM32(esp + 0x1C4) = 0x7FA95C;
    MEM32(esp + 0x1C8) = esi;
    MEM32(esp + 0x1CC) = 0x7FA954;
    MEM32(esp + 0x1D0) = 0x7FA94C;
    MEM32(esp + 0x1D4) = eax;
    MEM32(esp + 0x1D8) = eax;
    MEM32(esp + 0x1DC) = 0x7FA948;
    MEM32(esp + 0x1E0) = 0x7FA944;
    MEM32(esp + 0x1E4) = esi;
    PUSH32(esp, 0x002173F0u); RECOMP_ABI_CALL(0x0001B339u, sub_0001B339); /* call 0x0001B339 */

loc_002173F0: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)7);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + edi * 4 + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x41C);
    ecx = esp + 0x25E;
    PUSH32(esp, ecx);
    edx = esp + 0x31C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217417u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00217417: ;
    edi = MEM32(esp + 0x42C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = 2;
    PUSH32(esp, 0x0021742Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0021742C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00217433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217430u); } /* indirect call */
    }

loc_00217433: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00217440u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021743Du); } /* indirect call */
    }

loc_00217440: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00217449u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00217449: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002175B0
 * Original: 0x002175B0 - 0x0021774D (413 bytes, 124 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002175B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002175B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x112C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002175C0u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_002175C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002175C8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002175C8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002175CFu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_002175CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002175D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002175D3u); } /* indirect call */
    }

loc_002175D9: ;
    ecx = esp + 0x528;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002175E9u); RECOMP_ABI_CALL(0x000195F2u, sub_000195F2); /* call 0x000195F2 */

loc_002175E9: ;
    ecx = esp + 0x528;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002175F5u); RECOMP_ABI_CALL(0x00034EDDu, sub_00034EDD); /* call 0x00034EDD */

loc_002175F5: ;
    ebx = MEM32(esp + 0x534);
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00217605u); RECOMP_ABI_CALL(0x0002D156u, sub_0002D156); /* call 0x0002D156 */

loc_00217605: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021760Eu); RECOMP_ABI_CALL(0x0002EC4Au, sub_0002EC4A); /* call 0x0002EC4A */

loc_0021760E: ;
    ecx = MEM32(esp + 0x28);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
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
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0xF) = 0;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0021772B; /* jle: less or equal (signed <=) */

loc_00217637: ;
    goto loc_00217640;

    /* nop */

loc_00217640: ;
    ecx = MEM32(esp + 0x10);
    eax = esp + 0x230;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00217656u); RECOMP_ABI_CALL(0x00014863u, sub_00014863); /* call 0x00014863 */

loc_00217656: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00217684; /* jle: less or equal (signed <=) */

loc_0021765C: ;
    /* nop */

loc_00217660: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x530;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00217672u); RECOMP_ABI_CALL(0x0002637Eu, sub_0002637E); /* call 0x0002637E */

loc_00217672: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x47C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x47C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217684; /* je: equal / zero */

loc_0021767F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217660; /* jl: less (signed <) */

loc_00217684: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x1A);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002176A3; /* je: equal / zero */

loc_00217691: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00217640; /* jl: less (signed <) */

loc_0021769E: ;
    goto loc_0021772B;

loc_002176A3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002176A8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002176A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002176AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002176ACu); } /* indirect call */
    }

loc_002176AF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x134;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002176C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002176BEu); } /* indirect call */
    }

loc_002176C1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FAAD4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002176D2u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_002176D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002176DBu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002176DB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002176E2u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_002176E2: ;
    eax = esp + 0x330;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x134;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00217700u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00217700: ;
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00217711u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00217711: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00217718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217715u); } /* indirect call */
    }

loc_00217718: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00217726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217723u); } /* indirect call */
    }

loc_00217726: ;
    MEM8(esp + 0xF) = 1;

loc_0021772B: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00217734u); RECOMP_ABI_CALL(0x0001FA29u, sub_0001FA29); /* call 0x0001FA29 */

loc_00217734: ;
    ecx = esp + 0x528;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00217740u); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00217740: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002177C0
 * Original: 0x002177C0 - 0x002177E0 (32 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002177C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002177C0: ;
    eax = MEM32(ecx + 0x78);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FA898);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002177D8u); RECOMP_ABI_CALL(0x0002C265u, sub_0002C265); /* call 0x0002C265 */

loc_002177D8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002177F0
 * Original: 0x002177F0 - 0x002178C4 (212 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002177F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002177F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x002177FAu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002177FA: ;
    ecx = eax;
    PUSH32(esp, 0x00217801u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00217801: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0021780Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217805u); } /* indirect call */
    }

loc_0021780B: ;
    edi = eax;
    PUSH32(esp, 0x00217812u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00217812: ;
    ecx = eax;
    PUSH32(esp, 0x00217819u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00217819: ;
    esi = MEM32(eax + 0x60);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00217825u); RECOMP_ABI_CALL(0x0002A5D2u, sub_0002A5D2); /* call 0x0002A5D2 */

loc_00217825: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0021782Eu); RECOMP_ABI_CALL(0x000137BAu, sub_000137BA); /* call 0x000137BA */

loc_0021782E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217873; /* je: equal / zero */

loc_00217832: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217847; /* jne: not equal / not zero */

loc_0021783A: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    goto loc_00217859;

loc_00217847: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021786A; /* jne: not equal / not zero */

loc_0021784E: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, 8);

loc_00217859: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217865u); RECOMP_ABI_CALL(0x000287A5u, sub_000287A5); /* call 0x000287A5 */

loc_00217865: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);

loc_0021786A: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00217873u); RECOMP_ABI_CALL(0x0001D4AEu, sub_0001D4AE); /* call 0x0001D4AE */

loc_00217873: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0021788Bu); RECOMP_ABI_CALL(0x00019F61u, sub_00019F61); /* call 0x00019F61 */

loc_0021788B: ;
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00217894u); RECOMP_ABI_CALL(0x00029FA1u, sub_00029FA1); /* call 0x00029FA1 */

loc_00217894: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002178BC; /* jle: less or equal (signed <=) */

loc_00217898: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002178A0u); RECOMP_ABI_CALL(0x000137BAu, sub_000137BA); /* call 0x000137BA */

loc_002178A0: ;
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), 7 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002178B0; /* je: equal / zero */

loc_002178A6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002178AEu); RECOMP_ABI_CALL(0x0001D4AEu, sub_0001D4AE); /* call 0x0001D4AE */

loc_002178AE: ;
    goto loc_002178B1;

loc_002178B0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002178B1: ;
    ecx = esi;
    PUSH32(esp, 0x002178B8u); RECOMP_ABI_CALL(0x00029FA1u, sub_00029FA1); /* call 0x00029FA1 */

loc_002178B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217898; /* jl: less (signed <) */

loc_002178BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00217900
 * Original: 0x00217900 - 0x00217C60 (864 bytes, 249 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00217900: ;
    _fb = (uint32_t)(0x564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x564;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x74), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021791B; /* jne: not equal / not zero */

loc_0021790F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x564;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0021791B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00217926u); RECOMP_ABI_CALL(0x00024902u, sub_00024902); /* call 0x00024902 */

loc_00217926: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0021792Fu); RECOMP_ABI_CALL(0x0002334Fu, sub_0002334F); /* call 0x0002334F */

loc_0021792F: ;
    ecx = MEM32(esi + 0x74);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = 0x7F77E0;
    edi = 0x7F9EE8;
    ecx = esp + 0x28;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x70) = edi;
    PUSH32(esp, 0x00217953u); RECOMP_ABI_CALL(0x0001104Bu, sub_0001104B); /* call 0x0001104B */

loc_00217953: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esp + 0x10;
    if (CMP_NE(_fa, _fb)) goto loc_0021797F; /* jne: not equal / not zero */

loc_0021795B: ;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x44) = ebx;
    PUSH32(esp, 0x00217968u); RECOMP_ABI_CALL(0x00031B16u, sub_00031B16); /* call 0x00031B16 */

loc_00217968: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00217971u); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_00217971: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x564;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0021797F: ;
    eax = MEM32(esi + 0x74);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021798Du); RECOMP_ABI_CALL(0x00036FD5u, sub_00036FD5); /* call 0x00036FD5 */

loc_0021798D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002179B9; /* jne: not equal / not zero */

loc_00217991: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x44) = ebx;
    PUSH32(esp, 0x002179A2u); RECOMP_ABI_CALL(0x00031B16u, sub_00031B16); /* call 0x00031B16 */

loc_002179A2: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x002179ABu); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_002179AB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x564;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002179B9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002179BFu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002179BF: ;
    ecx = eax;
    PUSH32(esp, 0x002179C6u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_002179C6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002179D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002179CAu); } /* indirect call */
    }

loc_002179D0: ;
    ebp = eax;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002179EB; /* jne: not equal / not zero */

loc_002179DA: ;
    edi = MEM32(esp + 0x78);
    ebx = MEM32(esp + 0xE0);
    eax = MEM32(esp + 0x5C);
    goto loc_00217A00;

loc_002179EB: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217C37; /* jne: not equal / not zero */

loc_002179F5: ;
    edi = MEM32(esp + 0xE0);
    ebx = MEM32(esp + 0x78);

loc_00217A00: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00217A09u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00217A09: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00217A10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217A0Du); } /* indirect call */
    }

loc_00217A10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x378;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00217A24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217A21u); } /* indirect call */
    }

loc_00217A24: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x478;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00217A3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217A37u); } /* indirect call */
    }

loc_00217A3A: ;
    eax = MEM32(esp + 0x57C);
    MEM32(eax) = 2;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00217A55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217A52u); } /* indirect call */
    }

loc_00217A55: ;
    PUSH32(esp, 0x00217A5Au); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00217A5A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00217B18; /* jle: less or equal (signed <=) */

loc_00217A64: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217AB6; /* jne: not equal / not zero */

loc_00217A68: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x14C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FAB48);
    PUSH32(esp, 0x00217A7Cu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00217A7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00217A87u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00217A87: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0x47C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x584);
    edx = esp + 0x380;
    PUSH32(esp, edx);
    eax = esp + 0x158;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00217AAEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00217AAE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00217BF4;

loc_00217AB6: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217C25; /* jl: less (signed <) */

loc_00217AC1: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00217ACAu); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00217ACA: ;
    edx = esp + 0x248;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00217ADCu); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00217ADC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x14C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FAB2C);
    PUSH32(esp, 0x00217AF0u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00217AF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00217AFBu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00217AFB: ;
    eax = MEM32(esp + 0x578);
    ecx = esp + 0x2BA;
    PUSH32(esp, ecx);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00217BE3;

loc_00217B18: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00217C25; /* jge: greater or equal (signed >=) */

loc_00217B1E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217B86; /* jne: not equal / not zero */

loc_00217B22: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00217B2Bu); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00217B2B: ;
    ecx = esp + 0x248;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00217B3Du); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00217B3D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FAB0C);
    PUSH32(esp, 0x00217B51u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00217B51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00217B5Cu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00217B5C: ;
    eax = esp + 0x374;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x57C);
    ecx = esp + 0x2BE;
    PUSH32(esp, ecx);
    edx = esp + 0x150;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217B81u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00217B81: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00217BEB;

loc_00217B86: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217C25; /* jl: less (signed <) */

loc_00217B91: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00217B9Au); RECOMP_ABI_CALL(0x000264EBu, sub_000264EB); /* call 0x000264EB */

loc_00217B9A: ;
    ecx = esp + 0x248;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00217BACu); RECOMP_ABI_CALL(0x00017856u, sub_00017856); /* call 0x00017856 */

loc_00217BAC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FAAF0);
    PUSH32(esp, 0x00217BC0u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00217BC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00217BCBu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00217BCB: ;
    edx = MEM32(esp + 0x578);
    eax = esp + 0x2BA;
    PUSH32(esp, eax);
    ecx = esp + 0x14C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00217BE3: ;
    PUSH32(esp, 0x00217BE8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00217BE8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00217BEB: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00217BF4u); RECOMP_ABI_CALL(0x00029AFBu, sub_00029AFB); /* call 0x00029AFB */

loc_00217BF4: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x6C) = 0x7F9EE8;
    MEM32(esp + 0x48) = 0x7F77E0;
    PUSH32(esp, 0x00217C0Du); RECOMP_ABI_CALL(0x00031B16u, sub_00031B16); /* call 0x00031B16 */

loc_00217C0D: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00217C16u); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_00217C16: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x564;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00217C25: ;
    MEM32(esp + 0x6C) = 0x7F9EE8;
    MEM32(esp + 0x48) = 0x7F77E0;
    goto loc_00217C3F;

loc_00217C37: ;
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x48) = ebx;

loc_00217C3F: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00217C48u); RECOMP_ABI_CALL(0x00031B16u, sub_00031B16); /* call 0x00031B16 */

loc_00217C48: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00217C51u); RECOMP_ABI_CALL(0x0001F0FBu, sub_0001F0FB); /* call 0x0001F0FB */

loc_00217C51: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x564) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x564;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00217D40
 * Original: 0x00217D40 - 0x00217F1A (474 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00217D40: ;
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x278;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00217D51u); RECOMP_ABI_CALL(0x0001325Bu, sub_0001325B); /* call 0x0001325B */

loc_00217D51: ;
    ecx = eax;
    PUSH32(esp, 0x00217D58u); RECOMP_ABI_CALL(0x00015D0Du, sub_00015D0D); /* call 0x00015D0D */

loc_00217D58: ;
    edi = MEM32(eax + 0x60);
    PUSH32(esp, 3);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00217D68u); RECOMP_ABI_CALL(0x0002A5D2u, sub_0002A5D2); /* call 0x0002A5D2 */

loc_00217D68: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esp + 0x3C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00217D7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217D7Bu); } /* indirect call */
    }

loc_00217D7E: ;
    eax = MEM32(esp + 0x30);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217EF3; /* jne: not equal / not zero */

loc_00217D8D: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00217EF3; /* jne: not equal / not zero */

loc_00217D99: ;
    PUSH32(esp, 0x00217D9Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00217D9E: ;
    ecx = eax;
    PUSH32(esp, 0x00217DA5u); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_00217DA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esp + 0x40);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00217DB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217DB6u); } /* indirect call */
    }

loc_00217DB9: ;
    edx = MEM32(esi);
    eax = esp + 0x88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00217DCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217DC7u); } /* indirect call */
    }

loc_00217DCA: ;
    _fa = (uint32_t)(MEM32(esp + 0x88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x55) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x88), 0x55 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00217EF3; /* jle: less or equal (signed <=) */

loc_00217DD8: ;
    PUSH32(esp, 0x00217DDDu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00217DDD: ;
    ebx = eax;
    eax = MEM32(esp + 0x44);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, 0x100);
    if (CMP_NE(_fa, _fb)) goto loc_00217E00; /* jne: not equal / not zero */

loc_00217DF1: ;
    ecx = esp + 0x18C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FAB84);
    goto loc_00217E0D;

loc_00217E00: ;
    edx = esp + 0x18C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FAB68);

loc_00217E0D: ;
    PUSH32(esp, 0x00217E12u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00217E12: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00217E1Du); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00217E1D: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x294);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    ecx = esp + 0x194;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 3);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x4C) = edi;
    PUSH32(esp, 0x00217E6Bu); RECOMP_ABI_CALL(0x00015A3Du, sub_00015A3D); /* call 0x00015A3D */

loc_00217E6B: ;
    ebp = MEM32(esp + 0x2B0);
    MEM32(ebp) = edi;
    ebx = ebp + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00217E97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217E94u); } /* indirect call */
    }

loc_00217E97: ;
    ecx = MEM32(esp + 0x88);
    MEM32(ebp + 0x104) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00217EABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217EA8u); } /* indirect call */
    }

loc_00217EAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEM8(ebp + 0x108) = LO8(eax);
    eax = esp;
    PUSH32(esp, 0);
    MEM32(eax) = 0;
    PUSH32(esp, 0x00217ECBu); RECOMP_ABI_CALL(0x00019F61u, sub_00019F61); /* call 0x00019F61 */

loc_00217ECB: ;
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0x00217ED5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00217ED5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00217EDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217ED9u); } /* indirect call */
    }

loc_00217EDC: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00217EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00217EE8u); } /* indirect call */
    }

loc_00217EEB: ;
    edi = MEM32(esp + 0x14);
    SET_LO8(ebx, MEM8(esp + 0x13));

loc_00217EF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(eax) = 0;
    PUSH32(esp, 0x00217F0Bu); RECOMP_ABI_CALL(0x00019F61u, sub_00019F61); /* call 0x00019F61 */

loc_00217F0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x278) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x278;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00217F90
 * Original: 0x00217F90 - 0x00217F99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217F90(void)
{

loc_00217F90: ;
    eax = ecx;
    MEM32(eax) = 0x7FA288;
    esp += 4; return; /* ret */

}

/**
 * sub_00217FA0
 * Original: 0x00217FA0 - 0x00217FAC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217FA0(void)
{

loc_00217FA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7F8FC0);
    esp += 4; return; /* ret */

}

/**
 * sub_00217FB0
 * Original: 0x00217FB0 - 0x00217FC8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00217FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00217FB0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00217FB6: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x7F8FC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x7F8FC0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00217FC7; /* je: equal / zero */

loc_00217FBF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00217FB6; /* jl: less (signed <) */

loc_00217FC5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00217FC7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00217FD0
 * Original: 0x00217FD0 - 0x00217FDC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217FD0(void)
{

loc_00217FD0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7F8FF8);
    esp += 4; return; /* ret */

}

/**
 * sub_00217FE0
 * Original: 0x00217FE0 - 0x00217FEC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217FE0(void)
{

loc_00217FE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7F9004);
    esp += 4; return; /* ret */

}

/**
 * sub_00217FF0
 * Original: 0x00217FF0 - 0x00217FFC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00217FF0(void)
{

loc_00217FF0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x7F9040);
    esp += 4; return; /* ret */

}

/**
 * sub_00218000
 * Original: 0x00218000 - 0x00218023 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218000: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 8 + 0x8B5200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021801E; /* jle: less or equal (signed <=) */

loc_0021800F: ;
    eax = MEM32(eax * 8 + 0x8B5204);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4);
    esp += 4; return; /* ret */

loc_0021801E: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00218030
 * Original: 0x00218030 - 0x0021806A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218030: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx * 8 + 0x8B5200);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218065; /* jle: less or equal (signed <=) */

loc_0021803F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00218063; /* jge: greater or equal (signed >=) */

loc_0021804A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00218061; /* jle: less or equal (signed <=) */

loc_0021804E: ;
    edx = MEM32(edx * 8 + 0x8B5204);

loc_00218055: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218063; /* je: equal / zero */

loc_00218059: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218055; /* jl: less (signed <) */

loc_00218061: ;
    eax = esi;

loc_00218063: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00218065: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00218080
 * Original: 0x00218080 - 0x00218097 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00218080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218080: ;
    SET_LO8(ecx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00218086: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x7F916C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x7F916C) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218096; /* je: equal / zero */

loc_0021808E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218086; /* jl: less (signed <) */

loc_00218094: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00218096: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002180A0
 * Original: 0x002180A0 - 0x002180B2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002180A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002180AB; /* jl: less (signed <) */

loc_002180A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002180AB: ;
    SET_LO8(eax, MEM8(eax + 0x7F916C));
    esp += 4; return; /* ret */

}

/**
 * sub_002180C0
 * Original: 0x002180C0 - 0x002180D3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002180C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002180CB; /* jl: less (signed <) */

loc_002180C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002180CB: ;
    eax = MEM32(eax * 4 + 0x7F9170);
    esp += 4; return; /* ret */

}

/**
 * sub_002180E0
 * Original: 0x002180E0 - 0x002180F3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002180E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002180E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002180EB; /* jl: less (signed <) */

loc_002180E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002180EB: ;
    eax = MEM32(eax * 4 + 0x7F9180);
    esp += 4; return; /* ret */

}

/**
 * sub_00218100
 * Original: 0x00218100 - 0x00218118 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00218100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218100: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00218106: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x7F9180)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x7F9180), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00218117; /* je: equal / zero */

loc_0021810F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00218106; /* jl: less (signed <) */

loc_00218115: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00218117: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00218120
 * Original: 0x00218120 - 0x00218137 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218120: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021812F; /* jl: less (signed <) */

loc_00218129: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0021812F: ;
    eax = MEM32(eax * 4 + 0x7F91A4);
    esp += 4; return; /* ret */

}

/**
 * sub_00218140
 * Original: 0x00218140 - 0x00218144 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218140(void)
{

loc_00218140: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00218150
 * Original: 0x00218150 - 0x00218157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218150(void)
{

loc_00218150: ;
    eax = MEM32(ecx + 0x14C);
    esp += 4; return; /* ret */

}

/**
 * sub_00218160
 * Original: 0x00218160 - 0x00218166 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218160(void)
{

loc_00218160: ;
    eax = MEM32(0x8C6C18);
    esp += 4; return; /* ret */

}

/**
 * sub_00218170
 * Original: 0x00218170 - 0x00218177 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218170(void)
{

loc_00218170: ;
    eax = ecx + 0x150;
    esp += 4; return; /* ret */

}

/**
 * sub_00218180
 * Original: 0x00218180 - 0x00218196 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218180(void)
{

loc_00218180: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + eax * 4 + 0x5C);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00218193u); RECOMP_ABI_CALL(0x005C18AEu, sub_005C18AE); /* call 0x005C18AE */

loc_00218193: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002181A0
 * Original: 0x002181A0 - 0x002181A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181A0(void)
{

loc_002181A0: ;
    MEM8(ecx + 0x330) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002181B0
 * Original: 0x002181B0 - 0x002181B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181B0(void)
{

loc_002181B0: ;
    MEM8(ecx + 0x330) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002181C0
 * Original: 0x002181C0 - 0x002181C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181C0(void)
{

loc_002181C0: ;
    eax = ecx;
    MEM32(eax) = 0x7FABA8;
    esp += 4; return; /* ret */

}

/**
 * sub_002181D0
 * Original: 0x002181D0 - 0x002181DD (13 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181D0(void)
{

loc_002181D0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x002181DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002181D7u); } /* indirect call */
    }

loc_002181DA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002181E0
 * Original: 0x002181E0 - 0x002181E9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181E0(void)
{

loc_002181E0: ;
    eax = ecx;
    MEM32(eax) = 0x7FAC08;
    esp += 4; return; /* ret */

}

/**
 * sub_002181F0
 * Original: 0x002181F0 - 0x002181F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002181F0(void)
{

loc_002181F0: ;
    MEM32(ecx) = 0x7FAC08;
    esp += 4; return; /* ret */

}

/**
 * sub_00218200
 * Original: 0x00218200 - 0x0021821F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218200: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FAC08;
    if (TEST_Z(_fa, _fb)) goto loc_00218219; /* je: equal / zero */

loc_00218210: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00218216u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00218216: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00218219: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00218230
 * Original: 0x00218230 - 0x00218240 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218230(void)
{

loc_00218230: ;
    eax = ecx;
    MEM32(eax) = 0x7FAC90;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00218250
 * Original: 0x00218250 - 0x0021825A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218250(void)
{

loc_00218250: ;
    eax = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(eax + 0x12C));
    esp += 4; return; /* ret */

}

/**
 * sub_00218260
 * Original: 0x00218260 - 0x00218272 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00218260: ;
    ecx = MEM32(ecx + 4);
    MEM32(ecx + 0x14C) = 0;
    g_seh_ebp = ebp; sub_0001506F(); return; /* tail jmp 0x0001506F */

}

/**
 * sub_00218280
 * Original: 0x00218280 - 0x00218290 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00218280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00218280: ;
    ecx = MEM32(ecx + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021828F; /* je: equal / zero */

loc_00218289: ;
    SET_LO8(eax, MEM8(ecx + 0x330));

loc_0021828F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002182A0
 * Original: 0x002182A0 - 0x002182AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002182A0(void)
{

loc_002182A0: ;
    eax = MEM32(ecx + 4);
    MEM8(eax + 0x338) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002182B0
 * Original: 0x002182B0 - 0x002182BB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002182B0(void)
{

loc_002182B0: ;
    eax = MEM32(ecx + 4);
    MEM8(eax + 0x338) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002182C0
 * Original: 0x002182C0 - 0x002182EA (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002182C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002182C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002182E8; /* je: equal / zero */

loc_002182CA: ;
    MEM8(eax + 0x330) = 0;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002182E1; /* je: equal / zero */

loc_002182D8: ;
    ecx = eax + 4;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002182E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002182DFu); } /* indirect call */
    }

loc_002182E1: ;
    MEM32(esi + 4) = 0;

loc_002182E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
