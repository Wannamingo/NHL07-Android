/**
 * nhl_07_recomp - Recompiled code chunk 138
 * Functions: 250 (0x00229AD0 - 0x00235DC0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00229AD0
 * Original: 0x00229AD0 - 0x00229AEA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229AD0: ;
    SET_LO8(eax, MEM8(ecx + 0x84));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229AE7; /* je: equal / zero */

loc_00229ADA: ;
    SET_LO8(eax, MEM8(ecx + 0x85));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229AE7; /* je: equal / zero */

loc_00229AE4: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00229AE7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00229AF0
 * Original: 0x00229AF0 - 0x00229B6B (123 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229AF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00229AF8u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_00229AF8: ;
    edx = MEM32(eax + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(esp + 8);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(edx + esi + 0x84) = 1;
    eax = ecx;
    SET_LO8(ecx, MEM8(esi + 0x84));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229B49; /* je: equal / zero */

loc_00229B1A: ;
    SET_LO8(ecx, MEM8(esi + 0x85));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229B49; /* je: equal / zero */

loc_00229B24: ;
    MEM8(esi + 0x85) = 0;
    MEM8(esi + 0x84) = 0;
    PUSH32(esp, 0x00229B37u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00229B37: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00229B45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229B42u); } /* indirect call */
    }

loc_00229B45: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00229B49: ;
    SET_LO8(ecx, MEM8(eax + esi + 0x84));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229B67; /* je: equal / zero */

loc_00229B54: ;
    PUSH32(esp, 0x00229B59u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00229B59: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00229B67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229B64u); } /* indirect call */
    }

loc_00229B67: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229B90
 * Original: 0x00229B90 - 0x00229BE8 (88 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229B90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00229B98u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_00229B98: ;
    edx = MEM32(eax + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + esi + 0x84));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229BD8; /* je: equal / zero */

loc_00229BAF: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00229BCB; /* jne: not equal / not zero */

loc_00229BB8: ;
    PUSH32(esp, 0x00229BBDu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00229BBD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xAF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00229BCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229BC8u); } /* indirect call */
    }

loc_00229BCB: ;
    MEM8(edi + esi + 0x84) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00229BD8: ;
    eax = MEM32(esp + 8);
    MEM8(eax + esi + 0x84) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229C00
 * Original: 0x00229C00 - 0x00229C24 (36 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229C00: ;
    eax = ZX8(MEM8(esp + 4));
    edx = MEM32(ecx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x1D);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00229C21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229C1Eu); } /* indirect call */
    }

loc_00229C21: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229C30
 * Original: 0x00229C30 - 0x00229C4B (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229C30: ;
    eax = MEM32(ecx + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x1E);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00229C48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229C45u); } /* indirect call */
    }

loc_00229C48: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229C60
 * Original: 0x00229C60 - 0x00229C7B (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229C60: ;
    eax = MEM32(ecx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00229C78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229C75u); } /* indirect call */
    }

loc_00229C78: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229C90
 * Original: 0x00229C90 - 0x00229C97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229C90(void)
{

loc_00229C90: ;
    eax = MEM32(ecx + 0x88);
    esp += 4; return; /* ret */

}

/**
 * sub_00229CA0
 * Original: 0x00229CA0 - 0x00229CC8 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229CA0: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(ecx + 0x88) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, 0x21);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00229CC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00229CC2u); } /* indirect call */
    }

loc_00229CC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229CE0
 * Original: 0x00229CE0 - 0x00229CE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229CE0(void)
{

loc_00229CE0: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229CF0
 * Original: 0x00229CF0 - 0x00229E44 (340 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229CF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00229E41; /* ja: above (unsigned >) */

loc_00229CFD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x229E44); /* switch: 28 entries, 28 targets */
    if (_jt == 0x00229D04u) goto loc_00229D04;
    if (_jt == 0x00229D10u) goto loc_00229D10;
    if (_jt == 0x00229D1Du) goto loc_00229D1D;
    if (_jt == 0x00229D32u) goto loc_00229D32;
    if (_jt == 0x00229D3Cu) goto loc_00229D3C;
    if (_jt == 0x00229D46u) goto loc_00229D46;
    if (_jt == 0x00229D50u) goto loc_00229D50;
    if (_jt == 0x00229D5Au) goto loc_00229D5A;
    if (_jt == 0x00229D64u) goto loc_00229D64;
    if (_jt == 0x00229D6Eu) goto loc_00229D6E;
    if (_jt == 0x00229D78u) goto loc_00229D78;
    if (_jt == 0x00229D85u) goto loc_00229D85;
    if (_jt == 0x00229D91u) goto loc_00229D91;
    if (_jt == 0x00229DA6u) goto loc_00229DA6;
    if (_jt == 0x00229DB0u) goto loc_00229DB0;
    if (_jt == 0x00229DBAu) goto loc_00229DBA;
    if (_jt == 0x00229DC4u) goto loc_00229DC4;
    if (_jt == 0x00229DCEu) goto loc_00229DCE;
    if (_jt == 0x00229DD8u) goto loc_00229DD8;
    if (_jt == 0x00229DE2u) goto loc_00229DE2;
    if (_jt == 0x00229DECu) goto loc_00229DEC;
    if (_jt == 0x00229DF6u) goto loc_00229DF6;
    if (_jt == 0x00229E00u) goto loc_00229E00;
    if (_jt == 0x00229E0Au) goto loc_00229E0A;
    if (_jt == 0x00229E14u) goto loc_00229E14;
    if (_jt == 0x00229E1Eu) goto loc_00229E1E;
    if (_jt == 0x00229E2Bu) goto loc_00229E2B;
    if (_jt == 0x00229E38u) goto loc_00229E38;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00229D04: ;
    eax = MEM32(esp + 8);
    MEM32(0x8F6A20) = eax;
    esp += 12; return; /* ret 8 */

loc_00229D10: ;
    ecx = MEM32(esp + 8);
    MEM32(0x8F6A28) = ecx;
    esp += 12; return; /* ret 8 */

loc_00229D1D: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00229E41; /* ja: above (unsigned >) */

loc_00229D2B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x229E68); /* switch: 19 entries, 19 targets */
    if (_jt == 0x00229D32u) goto loc_00229D32;
    if (_jt == 0x00229D3Cu) goto loc_00229D3C;
    if (_jt == 0x00229D46u) goto loc_00229D46;
    if (_jt == 0x00229D50u) goto loc_00229D50;
    if (_jt == 0x00229D5Au) goto loc_00229D5A;
    if (_jt == 0x00229D64u) goto loc_00229D64;
    if (_jt == 0x00229D6Eu) goto loc_00229D6E;
    if (_jt == 0x00229DA6u) goto loc_00229DA6;
    if (_jt == 0x00229DB0u) goto loc_00229DB0;
    if (_jt == 0x00229DBAu) goto loc_00229DBA;
    if (_jt == 0x00229DC4u) goto loc_00229DC4;
    if (_jt == 0x00229DCEu) goto loc_00229DCE;
    if (_jt == 0x00229DD8u) goto loc_00229DD8;
    if (_jt == 0x00229DE2u) goto loc_00229DE2;
    if (_jt == 0x00229DECu) goto loc_00229DEC;
    if (_jt == 0x00229DF6u) goto loc_00229DF6;
    if (_jt == 0x00229E00u) goto loc_00229E00;
    if (_jt == 0x00229E0Au) goto loc_00229E0A;
    if (_jt == 0x00229E14u) goto loc_00229E14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00229D32: ;
    MEM8(0x8F6A24) = 0;
    esp += 12; return; /* ret 8 */

loc_00229D3C: ;
    MEM8(0x8F6A24) = 1;
    esp += 12; return; /* ret 8 */

loc_00229D46: ;
    MEM8(0x8F6A24) = 2;
    esp += 12; return; /* ret 8 */

loc_00229D50: ;
    MEM8(0x8F6A24) = 3;
    esp += 12; return; /* ret 8 */

loc_00229D5A: ;
    MEM8(0x8F6A24) = 4;
    esp += 12; return; /* ret 8 */

loc_00229D64: ;
    MEM8(0x8F6A24) = 5;
    esp += 12; return; /* ret 8 */

loc_00229D6E: ;
    MEM8(0x8F6A24) = 6;
    esp += 12; return; /* ret 8 */

loc_00229D78: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(0x8F6A25) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_00229D85: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(0x8F6A26) = LO8(eax);
    esp += 12; return; /* ret 8 */

loc_00229D91: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00229E41; /* ja: above (unsigned >) */

loc_00229D9F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x229E84); /* switch: 12 entries, 12 targets */
    if (_jt == 0x00229DA6u) goto loc_00229DA6;
    if (_jt == 0x00229DB0u) goto loc_00229DB0;
    if (_jt == 0x00229DBAu) goto loc_00229DBA;
    if (_jt == 0x00229DC4u) goto loc_00229DC4;
    if (_jt == 0x00229DCEu) goto loc_00229DCE;
    if (_jt == 0x00229DD8u) goto loc_00229DD8;
    if (_jt == 0x00229DE2u) goto loc_00229DE2;
    if (_jt == 0x00229DECu) goto loc_00229DEC;
    if (_jt == 0x00229DF6u) goto loc_00229DF6;
    if (_jt == 0x00229E00u) goto loc_00229E00;
    if (_jt == 0x00229E0Au) goto loc_00229E0A;
    if (_jt == 0x00229E14u) goto loc_00229E14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00229DA6: ;
    MEM8(0x8F6A27) = 0;
    esp += 12; return; /* ret 8 */

loc_00229DB0: ;
    MEM8(0x8F6A27) = 1;
    esp += 12; return; /* ret 8 */

loc_00229DBA: ;
    MEM8(0x8F6A27) = 2;
    esp += 12; return; /* ret 8 */

loc_00229DC4: ;
    MEM8(0x8F6A27) = 3;
    esp += 12; return; /* ret 8 */

loc_00229DCE: ;
    MEM8(0x8F6A27) = 4;
    esp += 12; return; /* ret 8 */

loc_00229DD8: ;
    MEM8(0x8F6A27) = 5;
    esp += 12; return; /* ret 8 */

loc_00229DE2: ;
    MEM8(0x8F6A27) = 6;
    esp += 12; return; /* ret 8 */

loc_00229DEC: ;
    MEM8(0x8F6A27) = 7;
    esp += 12; return; /* ret 8 */

loc_00229DF6: ;
    MEM8(0x8F6A27) = 8;
    esp += 12; return; /* ret 8 */

loc_00229E00: ;
    MEM8(0x8F6A27) = 9;
    esp += 12; return; /* ret 8 */

loc_00229E0A: ;
    MEM8(0x8F6A27) = 0xA;
    esp += 12; return; /* ret 8 */

loc_00229E14: ;
    MEM8(0x8F6A27) = 0xB;
    esp += 12; return; /* ret 8 */

loc_00229E1E: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(0x8F6A66) = LO8(ecx);
    esp += 12; return; /* ret 8 */

loc_00229E2B: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(0x8F6A30) = LO8(edx);
    esp += 12; return; /* ret 8 */

loc_00229E38: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(0x8F6A67) = LO8(eax);

loc_00229E41: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00229FA4
 * Original: 0x00229FA4 - 0x00229FAC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FA4(void)
{

loc_00229FA4: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FAC
 * Original: 0x00229FAC - 0x00229FB4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FAC(void)
{

loc_00229FAC: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FB4
 * Original: 0x00229FB4 - 0x00229FBC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FB4(void)
{

loc_00229FB4: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FBC
 * Original: 0x00229FBC - 0x00229FC4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FBC(void)
{

loc_00229FBC: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FC4
 * Original: 0x00229FC4 - 0x00229FCC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FC4(void)
{

loc_00229FC4: ;
    eax = 7;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FCC
 * Original: 0x00229FCC - 0x00229FD4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FCC(void)
{

loc_00229FCC: ;
    eax = 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FD4
 * Original: 0x00229FD4 - 0x00229FDC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FD4(void)
{

loc_00229FD4: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FDC
 * Original: 0x00229FDC - 0x00229FE4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FDC(void)
{

loc_00229FDC: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FE4
 * Original: 0x00229FE4 - 0x00229FEC (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FE4(void)
{

loc_00229FE4: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00229FEC
 * Original: 0x00229FEC - 0x00229FF4 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229FEC(void)
{

loc_00229FEC: ;
    eax = 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A0F0
 * Original: 0x0022A0F0 - 0x0022A0F5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A0F0(void)
{

loc_0022A0F0: ;
    MEM8(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A100
 * Original: 0x0022A100 - 0x0022A1E6 (230 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022A100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A100: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022A1E1; /* ja: above (unsigned >) */

loc_0022A10D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x22A1E8); /* switch: 15 entries, 15 targets */
    if (_jt == 0x0022A114u) goto loc_0022A114;
    if (_jt == 0x0022A11Fu) goto loc_0022A11F;
    if (_jt == 0x0022A12Du) goto loc_0022A12D;
    if (_jt == 0x0022A13Bu) goto loc_0022A13B;
    if (_jt == 0x0022A148u) goto loc_0022A148;
    if (_jt == 0x0022A156u) goto loc_0022A156;
    if (_jt == 0x0022A164u) goto loc_0022A164;
    if (_jt == 0x0022A172u) goto loc_0022A172;
    if (_jt == 0x0022A17Fu) goto loc_0022A17F;
    if (_jt == 0x0022A18Du) goto loc_0022A18D;
    if (_jt == 0x0022A19Bu) goto loc_0022A19B;
    if (_jt == 0x0022A1A9u) goto loc_0022A1A9;
    if (_jt == 0x0022A1B7u) goto loc_0022A1B7;
    if (_jt == 0x0022A1C5u) goto loc_0022A1C5;
    if (_jt == 0x0022A1D3u) goto loc_0022A1D3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022A114: ;
    eax = MEM32(0x8F6A68);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A11F: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A12D: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A13B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x8F6A6B));
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A148: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A156: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A164: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A172: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x8F6A6A));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A17F: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A18D: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A19B: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A1A9: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A1B7: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A1C5: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A1D3: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1D) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_0022A1E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022A1E6
 * Original: 0x0022A1E6 - 0x0022A443 (605 bytes, 219 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A1E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A1E6: ;
    edi = edi;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xA1) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    eax = MEM32(0xA12D0022u);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + -1589116894)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esp, MEM32(ecx + -1589116894) (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = MEM32(0xA1640022u);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (0) { g_seh_ebp = ebp; sub_0022A1A7(); return; } /* jb: below (unsigned <) */

loc_0022A206: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fas > 0)) { g_seh_ebp = ebp; sub_0022A1AB(); return; } /* jg: greater (signed >) */

loc_0022A20A: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp = ecx + -1583677406;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB70022A1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xB70022A1u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0xA1C50022u);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(MEM32(ecx + -859045854)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        MEM32(ecx + -859045854) = _sv << _sc;
        _fa = (uint32_t)(MEM32(ecx + -859045854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0022A440; /* ja: above (unsigned >) */

loc_0022A27D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x22A444); /* switch: 15 entries, 15 targets */
    if (_jt == 0x0022A284u) goto loc_0022A284;
    if (_jt == 0x0022A29Eu) goto loc_0022A29E;
    if (_jt == 0x0022A2BDu) goto loc_0022A2BD;
    if (_jt == 0x0022A2DBu) goto loc_0022A2DB;
    if (_jt == 0x0022A2F9u) goto loc_0022A2F9;
    if (_jt == 0x0022A317u) goto loc_0022A317;
    if (_jt == 0x0022A335u) goto loc_0022A335;
    if (_jt == 0x0022A353u) goto loc_0022A353;
    if (_jt == 0x0022A371u) goto loc_0022A371;
    if (_jt == 0x0022A38Fu) goto loc_0022A38F;
    if (_jt == 0x0022A3ADu) goto loc_0022A3AD;
    if (_jt == 0x0022A3CBu) goto loc_0022A3CB;
    if (_jt == 0x0022A3E9u) goto loc_0022A3E9;
    if (_jt == 0x0022A407u) goto loc_0022A407;
    if (_jt == 0x0022A425u) goto loc_0022A425;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022A284: ;
    eax = MEM32(0x8F6A68);
    edx = MEM32(esp + 8);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A29E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    ecx = edx * 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A2BD: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A2DB: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A2F9: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x600;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A317: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A335: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x2000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A353: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A371: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xC000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A38F: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A3AD: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x700000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A3CB: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x17) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x800000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A3E9: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xC000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A407: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x10000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;
    esp += 12; return; /* ret 8 */

loc_0022A425: ;
    edx = MEM32(esp + 8);
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1D) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x60000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F6A68) = eax;

loc_0022A440: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022AE40
 * Original: 0x0022AE40 - 0x0022AE41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE40(void)
{

loc_0022AE40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AE50
 * Original: 0x0022AE50 - 0x0022AE53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE50(void)
{

loc_0022AE50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022AE60
 * Original: 0x0022AE60 - 0x0022AE7D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AE60: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022AE75; /* je: equal / zero */

loc_0022AE6A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022AE7A; /* jne: not equal / not zero */

loc_0022AE6D: ;
    eax = 0x8F6A96;
    esp += 8; return; /* ret 4 */

loc_0022AE75: ;
    eax = 0x8F6A74;

loc_0022AE7A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022AE90
 * Original: 0x0022AE90 - 0x0022AED8 (72 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AE90: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022AEBA; /* je: equal / zero */

loc_0022AE99: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022AED5; /* jne: not equal / not zero */

loc_0022AE9C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F6A96);
    PUSH32(esp, 0x0022AEADu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0022AEAD: ;
    MEM8(0x8F6AB5) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022AEBA: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F6A74);
    PUSH32(esp, 0x0022AECBu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0022AECB: ;
    MEM8(0x8F6A95) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022AED5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022AEF0
 * Original: 0x0022AEF0 - 0x0022AFB1 (193 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022AEF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022AFAC; /* ja: above (unsigned >) */

loc_0022AEFD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x22AFB4); /* switch: 21 entries, 21 targets */
    if (_jt == 0x0022AF04u) goto loc_0022AF04;
    if (_jt == 0x0022AF0Cu) goto loc_0022AF0C;
    if (_jt == 0x0022AF14u) goto loc_0022AF14;
    if (_jt == 0x0022AF1Cu) goto loc_0022AF1C;
    if (_jt == 0x0022AF24u) goto loc_0022AF24;
    if (_jt == 0x0022AF2Cu) goto loc_0022AF2C;
    if (_jt == 0x0022AF34u) goto loc_0022AF34;
    if (_jt == 0x0022AF3Cu) goto loc_0022AF3C;
    if (_jt == 0x0022AF44u) goto loc_0022AF44;
    if (_jt == 0x0022AF4Cu) goto loc_0022AF4C;
    if (_jt == 0x0022AF54u) goto loc_0022AF54;
    if (_jt == 0x0022AF5Cu) goto loc_0022AF5C;
    if (_jt == 0x0022AF64u) goto loc_0022AF64;
    if (_jt == 0x0022AF6Cu) goto loc_0022AF6C;
    if (_jt == 0x0022AF74u) goto loc_0022AF74;
    if (_jt == 0x0022AF7Cu) goto loc_0022AF7C;
    if (_jt == 0x0022AF84u) goto loc_0022AF84;
    if (_jt == 0x0022AF8Cu) goto loc_0022AF8C;
    if (_jt == 0x0022AF94u) goto loc_0022AF94;
    if (_jt == 0x0022AF9Cu) goto loc_0022AF9C;
    if (_jt == 0x0022AFA4u) goto loc_0022AFA4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022AF04: ;
    SET_LO8(eax, MEM8(0x8F6AC2));
    esp += 8; return; /* ret 4 */

loc_0022AF0C: ;
    SET_LO8(eax, MEM8(0x8F6AC3));
    esp += 8; return; /* ret 4 */

loc_0022AF14: ;
    SET_LO8(eax, MEM8(0x8F6AC4));
    esp += 8; return; /* ret 4 */

loc_0022AF1C: ;
    SET_LO8(eax, MEM8(0x8F6AC5));
    esp += 8; return; /* ret 4 */

loc_0022AF24: ;
    SET_LO8(eax, MEM8(0x8F6AC6));
    esp += 8; return; /* ret 4 */

loc_0022AF2C: ;
    SET_LO8(eax, MEM8(0x8F6AC7));
    esp += 8; return; /* ret 4 */

loc_0022AF34: ;
    SET_LO8(eax, MEM8(0x8F6AC8));
    esp += 8; return; /* ret 4 */

loc_0022AF3C: ;
    SET_LO8(eax, MEM8(0x8F6AC9));
    esp += 8; return; /* ret 4 */

loc_0022AF44: ;
    SET_LO8(eax, MEM8(0x8F6ACA));
    esp += 8; return; /* ret 4 */

loc_0022AF4C: ;
    SET_LO8(eax, MEM8(0x8F6ACB));
    esp += 8; return; /* ret 4 */

loc_0022AF54: ;
    SET_LO8(eax, MEM8(0x8F6ACC));
    esp += 8; return; /* ret 4 */

loc_0022AF5C: ;
    SET_LO8(eax, MEM8(0x8F6ACD));
    esp += 8; return; /* ret 4 */

loc_0022AF64: ;
    SET_LO8(eax, MEM8(0x8F6ACE));
    esp += 8; return; /* ret 4 */

loc_0022AF6C: ;
    SET_LO8(eax, MEM8(0x8F6ACF));
    esp += 8; return; /* ret 4 */

loc_0022AF74: ;
    SET_LO8(eax, MEM8(0x8F6AD0));
    esp += 8; return; /* ret 4 */

loc_0022AF7C: ;
    SET_LO8(eax, MEM8(0x8F6AD1));
    esp += 8; return; /* ret 4 */

loc_0022AF84: ;
    SET_LO8(eax, MEM8(0x8F6AD2));
    esp += 8; return; /* ret 4 */

loc_0022AF8C: ;
    SET_LO8(eax, MEM8(0x8F6AD3));
    esp += 8; return; /* ret 4 */

loc_0022AF94: ;
    SET_LO8(eax, MEM8(0x8F6AD4));
    esp += 8; return; /* ret 4 */

loc_0022AF9C: ;
    SET_LO8(eax, MEM8(0x8F6AD5));
    esp += 8; return; /* ret 4 */

loc_0022AFA4: ;
    SET_LO8(eax, MEM8(0x8F6AD6));
    esp += 8; return; /* ret 4 */

loc_0022AFAC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B16E
 * Original: 0x0022B16E - 0x0022B237 (201 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B16E(void)
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

loc_0022B16E: ;
    edi = edi;
    SET_LO8(eax, 0x22);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -80) = MEM8(eax + -80) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + -80)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_0022B12A(); return; } /* jge: greater or equal (signed >=) */

loc_0022B17A: ;
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_HI8(edx, MEM8(eax + -1332346846));
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(0xB00022B0u) = eax;
    SET_LO8(eax, 0x22);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + esi * 4 + -1329004510) = MEM8(eax + esi * 4 + -1329004510) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + esi * 4 + -1329004510)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("salc", 0x0022B194u); /* TODO: salc */
    SET_LO8(eax, 0x22);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, 0x22);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, 0x22);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, 0x22);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, 0x22);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x220022B1) = MEM8(0x220022B1) + LO8(edx);
    _fa = (uint32_t)(MEM8(0x220022B1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, 0x22);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, 0x22);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, 0x22);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -79) = MEM8(eax + -79) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + -79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, esp);
    SET_LO8(ecx, 0x22);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -79) = MEM8(ecx + -79) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -79)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    fp_push(MEMF(0x8F6AB8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0022B240
 * Original: 0x0022B240 - 0x0022B251 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B240(void)
{

loc_0022B240: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(0x8F6AB8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B260
 * Original: 0x0022B260 - 0x0022B267 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B260(void)
{

loc_0022B260: ;
    SET_LO16(eax, MEM16(0x8F6ABC));
    esp += 4; return; /* ret */

}

/**
 * sub_0022B270
 * Original: 0x0022B270 - 0x0022B27E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B270(void)
{

loc_0022B270: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x8F6ABC) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B290
 * Original: 0x0022B290 - 0x0022B297 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B290(void)
{

loc_0022B290: ;
    SET_LO16(eax, MEM16(0x8F6ABE));
    esp += 4; return; /* ret */

}

/**
 * sub_0022B2A0
 * Original: 0x0022B2A0 - 0x0022B2AE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B2A0(void)
{

loc_0022B2A0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x8F6ABE) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B2C0
 * Original: 0x0022B2C0 - 0x0022B2CF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B2C0: ;
    SET_LO16(eax, MEM16(0x8F6AC0));
    { uint32_t _sv=(uint32_t)(LO16(eax)), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        SET_LO16(eax, _sv << _sc);
        _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
      } }
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((0xD) & 31u)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022B2E0
 * Original: 0x0022B2E0 - 0x0022B2FA (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B2E0: ;
    SET_LO8(ecx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x8F6AC0));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(0x8F6AC0) = MEM16(0x8F6AC0) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(0x8F6AC0)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B300
 * Original: 0x0022B300 - 0x0022B307 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B300(void)
{

loc_0022B300: ;
    SET_LO16(eax, MEM16(0x8F6AD8));
    esp += 4; return; /* ret */

}

/**
 * sub_0022B310
 * Original: 0x0022B310 - 0x0022B31E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B310(void)
{

loc_0022B310: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x8F6AD8) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B330
 * Original: 0x0022B330 - 0x0022B337 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B330(void)
{

loc_0022B330: ;
    SET_LO16(eax, MEM16(0x8F6ADA));
    esp += 4; return; /* ret */

}

/**
 * sub_0022B340
 * Original: 0x0022B340 - 0x0022B34E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B340(void)
{

loc_0022B340: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x8F6ADA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B360
 * Original: 0x0022B360 - 0x0022B37A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022B360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B360: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022B375; /* je: equal / zero */

loc_0022B36A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022B377; /* jne: not equal / not zero */

loc_0022B36D: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0022B375: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022B377: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B380
 * Original: 0x0022B380 - 0x0022B387 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B380(void)
{

loc_0022B380: ;
    eax = MEM32(ecx + 0x18FC);
    esp += 4; return; /* ret */

}

/**
 * sub_0022B390
 * Original: 0x0022B390 - 0x0022B39D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B390(void)
{

loc_0022B390: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18FC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B3A0
 * Original: 0x0022B3A0 - 0x0022B3A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B3A0(void)
{

loc_0022B3A0: ;
    eax = ecx;
    MEM32(eax) = 0x7FCF34;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B3B0
 * Original: 0x0022B3B0 - 0x0022B3B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B3B0(void)
{

loc_0022B3B0: ;
    MEM32(ecx) = 0x7FCF70;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B3C0
 * Original: 0x0022B3C0 - 0x0022B3CE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B3C0(void)
{

loc_0022B3C0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    eax = eax + ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B3E0
 * Original: 0x0022B3E0 - 0x0022B3EE (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B3E0(void)
{

loc_0022B3E0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = ecx + eax * 4 + 0x12;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B400
 * Original: 0x0022B400 - 0x0022B415 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B400: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = edx + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x3A;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022B420
 * Original: 0x0022B420 - 0x0022B43B (27 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B420(void)
{

loc_0022B420: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + 0xBA;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022B450
 * Original: 0x0022B450 - 0x0022B472 (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B450(void)
{

loc_0022B450: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    eax = edx + eax * 2;
    edx = MEM32(esp + 8);
    eax = eax + eax * 8;
    eax = edx + eax * 2;
    eax = eax + eax * 8;
    eax = ecx + eax * 4 + 0x29C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022B480
 * Original: 0x0022B480 - 0x0022B49F (31 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B480: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 0xC);
    eax = edx + eax * 2;
    edx = MEM32(esp + 8);
    eax = edx + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x149C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022B4B0
 * Original: 0x0022B4B0 - 0x0022B4B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B4B0(void)
{

loc_0022B4B0: ;
    eax = ecx;
    MEM32(eax) = 0x7FCFB0;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B4C0
 * Original: 0x0022B4C0 - 0x0022B4C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B4C0(void)
{

loc_0022B4C0: ;
    MEM32(ecx) = 0x7FCFE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B4D0
 * Original: 0x0022B4D0 - 0x0022B4D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B4D0(void)
{

loc_0022B4D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0022B4E0
 * Original: 0x0022B4E0 - 0x0022B4EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B4E0(void)
{

loc_0022B4E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B4F0
 * Original: 0x0022B4F0 - 0x0022B534 (68 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B4F0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022B531; /* ja: above (unsigned >) */

loc_0022B4FB: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x22B534); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0022B502u) goto loc_0022B502;
    if (_jt == 0x0022B50Cu) goto loc_0022B50C;
    if (_jt == 0x0022B516u) goto loc_0022B516;
    if (_jt == 0x0022B520u) goto loc_0022B520;
    if (_jt == 0x0022B52Au) goto loc_0022B52A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022B502: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6F4C);
    esp += 8; return; /* ret 4 */

loc_0022B50C: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6F4D);
    esp += 8; return; /* ret 4 */

loc_0022B516: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6F4E);
    esp += 8; return; /* ret 4 */

loc_0022B520: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6F50);
    esp += 8; return; /* ret 4 */

loc_0022B52A: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6F51);

loc_0022B531: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022B600
 * Original: 0x0022B600 - 0x0022B610 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B600(void)
{

loc_0022B600: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B620
 * Original: 0x0022B620 - 0x0022B621 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B620(void)
{

loc_0022B620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B630
 * Original: 0x0022B630 - 0x0022B67B (75 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0022B64F; /* je: equal / zero */

loc_0022B638: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0022B665; /* je: equal / zero */

loc_0022B63B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022B65D; /* jne: not equal / not zero */

loc_0022B63E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B64F; /* je: equal / zero */

loc_0022B645: ;
    ecx = eax + 0x14;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0022B64Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B64Cu); } /* indirect call */
    }

loc_0022B64F: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B65D; /* je: equal / zero */

loc_0022B656: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0022B65Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B65Au); } /* indirect call */
    }

loc_0022B65D: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0022B665: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022B65D; /* je: equal / zero */

loc_0022B66C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0022B673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B670u); } /* indirect call */
    }

loc_0022B673: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022B690
 * Original: 0x0022B690 - 0x0022B6A6 (22 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022B690: ;
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0022B6A2; /* je: equal / zero */

loc_0022B695: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0022B6A2; /* je: equal / zero */

loc_0022B698: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0022B69E; /* je: equal / zero */

loc_0022B69B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0022B69E: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

loc_0022B6A2: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0022B6B0
 * Original: 0x0022B6B0 - 0x0022B6C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6B0(void)
{

loc_0022B6B0: ;
    MEM8(ecx + 0x14) = 1;
    PUSH32(esp, 0x0022B6B9u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022B6B9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022B6C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B6C1u); } /* indirect call */
    }

loc_0022B6C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B6D0
 * Original: 0x0022B6D0 - 0x0022B6E5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6D0(void)
{

loc_0022B6D0: ;
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, 0x0022B6D9u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022B6D9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1E);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022B6E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B6E1u); } /* indirect call */
    }

loc_0022B6E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B6F0
 * Original: 0x0022B6F0 - 0x0022B6F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B6F0(void)
{

loc_0022B6F0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B700
 * Original: 0x0022B700 - 0x0022B701 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B700(void)
{

loc_0022B700: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022B710
 * Original: 0x0022B710 - 0x0022B97C (620 bytes, 215 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022B710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022B710: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022B720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B71Du); } /* indirect call */
    }

loc_0022B720: ;
    ebx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x32);
    PUSH32(esp, ebx);
    esi = eax;
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0022B737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B734u); } /* indirect call */
    }

loc_0022B737: ;
    edi = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022B742u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0022B742: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0022B750u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B74Du); } /* indirect call */
    }

loc_0022B750: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x11);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0022B75Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B75Cu); } /* indirect call */
    }

loc_0022B75F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1B);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0022B76Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B76Bu); } /* indirect call */
    }

loc_0022B76E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x38) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0022B77Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B77Au); } /* indirect call */
    }

loc_0022B77D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0022B78Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B789u); } /* indirect call */
    }

loc_0022B78C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x34) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0022B79Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B798u); } /* indirect call */
    }

loc_0022B79B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0022B7AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B7A7u); } /* indirect call */
    }

loc_0022B7AA: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = eax;
    eax = 7;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0022B7BD; /* jns: not sign (positive) */

loc_0022B7BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022B7BD: ;
    edx = MEM32(esp + 0x2C);
    ecx = edx + ecx + 0xB;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022B7DD; /* jge: greater or equal (signed >=) */

loc_0022B7D2: ;
    edx = 8;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + edx;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022B7DD: ;
    edx = MEM32(esp + 0x28);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1D);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x24);
    ecx = ecx + edx + 0x32;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = ecx;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    MEM32(edi + 0x34) = ecx;
    ecx = MEM32(esp + 0x14);
    ecx = edx + ecx * 2;
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7FD018); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM32(edi + 0x38) = ecx;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7B1D9C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7D5490); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    ecx = (int32_t)xmm3.f[0]; /* cvttss2si */
    xmm3 = XMM_SCALAR(MEMF(0x7B9D60)); /* movss */
    MEM32(edi + 0x3C) = ecx;
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    ecx = (int32_t)xmm4.f[0]; /* cvttss2si */
    xmm4 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEM32(edi + 0x40) = ecx;
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = eax + eax * 4 + 5;
    MEM32(edi + 0x44) = ecx;
    ecx = edx + eax * 4;
    edx = MEM32(esp + 0x24);
    eax = ecx + edx;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7FD014); /* mulss */
    MEM32(edi + 0x58) = eax;
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(edi + 0x5C) = eax;
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0 = xmm1; /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEM32(edi + 0x64) = ecx;
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    PUSH32(esp, 0x1C);
    MEM32(edi + 0x60) = eax;
    MEM32(edi + 0x68) = edx;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0022B8CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B8C8u); } /* indirect call */
    }

loc_0022B8CB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x13);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0022B8DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B8D7u); } /* indirect call */
    }

loc_0022B8DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x12);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0022B8E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B8E6u); } /* indirect call */
    }

loc_0022B8E9: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0022B8F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B8F5u); } /* indirect call */
    }

loc_0022B8F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0022B907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B904u); } /* indirect call */
    }

loc_0022B907: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x16);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0022B916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022B913u); } /* indirect call */
    }

loc_0022B916: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx + 0xA;
    MEM32(edi + 0x6C) = ecx;
    MEM32(edi + 0x48) = ecx;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0x2C);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD450); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(edi + 0x70) = ecx;
    MEM32(edi + 0x4C) = ecx;
    ecx = 0x64;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + edx + 0x14;
    MEM32(edi + 0x74) = ecx;
    MEM32(edi + 0x50) = ecx;
    MEM32(edi + 0x78) = eax;
    MEM32(edi + 0x54) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0022BA20
 * Original: 0x0022BA20 - 0x0022BD90 (880 bytes, 241 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022BA20(void)
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

loc_0022BA20: ;
    _fb = (uint32_t)(0x954) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x954;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 0x68) = eax;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x2C) = ecx;
    ebx = MEM32(esp + 0x968);
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, edi);
    edi = esp + 0xAC;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0x60) = ecx;
    edi = edi;

loc_0022BAF0: ;
    edx = MEM32(esp + 0x968);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0022BB02u); RECOMP_ABI_CALL(0x00022797u, sub_00022797); /* call 0x00022797 */

loc_0022BB02: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x7C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022BAF0; /* jl: less (signed <) */

loc_0022BB0B: ;
    ecx = MEM32(esp + 0x968);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022BB17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022BB14u); } /* indirect call */
    }

loc_0022BB17: ;
    esi = eax;
    MEM32(esp + 0x10) = 0;
    ebp = 0x7FC8F8;

loc_0022BB26: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022BB28: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0022BB36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022BB33u); } /* indirect call */
    }

loc_0022BB36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    eax = esp + eax * 4 + 0x1C;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0022BB28; /* jl: less (signed <) */

loc_0022BB4F: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FC908) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FC908 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0022BB26; /* jl: less (signed <) */

loc_0022BB63: ;
    MEM32(esp + 0x10) = 0;
    ebp = 0x7FC908;

loc_0022BB70: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022BB72: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0022BB80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022BB7Du); } /* indirect call */
    }

loc_0022BB80: ;
    xmm0 = XMM_SCALAR(MEMF(esp + eax * 4 + 0x64)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    eax = esp + eax * 4 + 0x64;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEMF(eax) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0022BB72; /* jl: less (signed <) */

loc_0022BB99: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FC914) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FC914 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0022BB70; /* jl: less (signed <) */

loc_0022BBAD: ;
    ebx = MEM32(esp + 0x970);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x104;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = eax;
    goto loc_0022BBD2;

loc_0022BBCA: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);

loc_0022BBD2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + eax + 0x64); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7FC914)); /* movss */
    ecx = esp + eax + 0x1C;
    eax = esp + eax + 0x64;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022BC00; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + eax + 0x64)) */

loc_0022BBEF: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0022BBFB; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0022BBF8: ;
    xmm0 = xmm1; /* movaps */

loc_0022BBFB: ;
    _fb = (uint32_t)(0xFFFFFFDCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFDCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0022BC0C;

loc_0022BC00: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0022BC0C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0022BC09: ;
    xmm0 = xmm1; /* movaps */

loc_0022BC0C: ;
    ebp = ebx + -8;
    edi = ebp;
    ecx = 9;
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
    ecx = MEM32(esp + 0x968);
    edx = MEM32(ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0022BC2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022BC27u); } /* indirect call */
    }

loc_0022BC2A: ;
    edx = MEM32(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0022BC33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022BC31u); } /* indirect call */
    }

loc_0022BC33: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax * 4 + 0x7FC918); /* mulss */
    edi = MEM32(ebx + 0x18);
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)MEM32(ebx + -4); /* cvtsi2ss */
    MEM32(ebp) = ecx;
    xmm0.f[0] = xmm0.f[0] * MEMF(eax * 4 + 0x7FC958); /* mulss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)MEM32(ebx); /* cvtsi2ss */
    eax = eax * 4 + 0x7FC958;
    MEM32(ebx + -4) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)MEM32(ebx + 4); /* cvtsi2ss */
    MEM32(ebx) = ecx;
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    ecx = MEM32(ebx + 0x10);
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0.f[0] = (float)(int32_t)MEM32(ebx + 8); /* cvtsi2ss */
    MEM32(ebx + 4) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    edx = MEM32(ebx + 0x14);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEM32(ebx + 8) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022BD47; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0022BCAE: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ebp); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022BCC5; /* jge: greater or equal (signed >=) */

loc_0022BCC0: ;
    eax = 1;

loc_0022BCC5: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ebx + -4); /* cvtsi2ss */
    MEM32(ebp) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022BCDF; /* jge: greater or equal (signed >=) */

loc_0022BCDA: ;
    eax = 1;

loc_0022BCDF: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ebx); /* cvtsi2ss */
    MEM32(ebx + -4) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022BCF8; /* jge: greater or equal (signed >=) */

loc_0022BCF3: ;
    eax = 1;

loc_0022BCF8: ;
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEM32(ebx) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022BD10; /* jge: greater or equal (signed >=) */

loc_0022BD0B: ;
    eax = 1;

loc_0022BD10: ;
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEM32(ebx + 0x10) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022BD29; /* jge: greater or equal (signed >=) */

loc_0022BD24: ;
    eax = 1;

loc_0022BD29: ;
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEM32(ebx + 0x14) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022BD42; /* jge: greater or equal (signed >=) */

loc_0022BD3D: ;
    eax = 1;

loc_0022BD42: ;
    MEM32(ebx + 0x18) = eax;
    goto loc_0022BD61;

loc_0022BD47: ;
    MEM32(ebp) = esi;
    MEM32(ebx + -4) = esi;
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0x14) = esi;
    MEM32(ebx + 0x18) = esi;

loc_0022BD61: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x48 (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0022BBCA; /* jl: less (signed <) */

loc_0022BD83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x954) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x954;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022BE70
 * Original: 0x0022BE70 - 0x0022BED6 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022BE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022BE70: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx + ecx * 8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(eax + 0x8F9C8C);
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2710;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edx = MEM32(esp + 0xC);
    ecx = edx + ecx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(ecx + 0x8F9804);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3FFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_0022BEBB; /* jns: not sign (positive) */

loc_0022BEB6: ;
    esi = 0xA;

loc_0022BEBB: ;
    PUSH32(esp, 0x0022BEC0u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0022BEC0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022BED3; /* jl: less (signed <) */

loc_0022BED1: ;
    eax = edi;

loc_0022BED3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022BEF0
 * Original: 0x0022BEF0 - 0x0022BF14 (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022BEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022BEF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022BF0F; /* jle: less or equal (signed <=) */

loc_0022BEFA: ;
    /* nop */

loc_0022BF00: ;
    PUSH32(esp, 0x0022BF05u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0022BF05: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + edx + 1;
    if ((_fa != 0)) goto loc_0022BF00; /* jne: not equal / not zero */

loc_0022BF0F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022BF20
 * Original: 0x0022BF20 - 0x0022BF57 (55 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022BF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022BF20: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0022BF2F; /* jne: not equal / not zero */

loc_0022BF2C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0022BF2F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022BF4F; /* jle: less or equal (signed <=) */

loc_0022BF33: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax;
    esi = ebp;
    /* nop */

loc_0022BF40: ;
    PUSH32(esp, 0x0022BF45u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0022BF45: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022BF40; /* jne: not equal / not zero */

loc_0022BF4D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0022BF4F: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022BF70
 * Original: 0x0022BF70 - 0x0022C1ED (637 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022BF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022BF70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0xF50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x64;
    esi = edi;
    ecx = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0022BF95; /* jne: not equal / not zero */

loc_0022BF90: ;
    edi = 0x6C;

loc_0022BF95: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022BF9F; /* jne: not equal / not zero */

loc_0022BF9A: ;
    esi = 0x6C;

loc_0022BF9F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022BFA9; /* jne: not equal / not zero */

loc_0022BFA4: ;
    ecx = 0x6C;

loc_0022BFA9: ;
    eax = MEM32(0x8F9CAC);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    edx = MEM32(0x8F97DC);
    eax = edx + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x8F9C8C);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 4;
    eax = MEM32(0x8F97E0);
    eax = eax + edx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);

loc_0022C067: ;
    eax = MEM32(esp + esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C098; /* je: equal / zero */

loc_0022C071: ;
    ebp = eax + eax;
    ebx = 2;
    /* nop */

loc_0022C080: ;
    PUSH32(esp, 0x0022C085u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0022C085: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022C080; /* jne: not equal / not zero */

loc_0022C08D: ;
    ebx = MEM32(esp + 0x1C);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0022C098: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F4 (32-bit) */
    MEM32(esi + 0x8F97D4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0022C0B5; /* jl: less (signed <) */

loc_0022C0AE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x8F97D4) = eax;

loc_0022C0B5: ;
    eax = MEM32(esi + 0x8F97D4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    MEM32(esi + 0x8F97D0) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0022C067; /* jl: less (signed <) */

loc_0022C0D3: ;
    ecx = MEM32(0x8F97D4);
    edx = MEM32(0x8F97D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    esi = 1;
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0022C106; /* jne: not equal / not zero */

loc_0022C0E9: ;
    eax = MEM32(ebx + 0xF50);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C106; /* je: equal / zero */

loc_0022C0F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C106; /* je: equal / zero */

loc_0022C0FE: ;
    MEM32(0x8F97B8) = esi;
    goto loc_0022C10F;

loc_0022C106: ;
    eax = MEM32(0x8F97B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C11B; /* je: equal / zero */

loc_0022C10F: ;
    _fa = (uint32_t)(MEM32(ebx + 0xF50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x700000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0xF50), 0x700000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022C136; /* je: equal / zero */

loc_0022C11B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C180; /* jne: not equal / not zero */

loc_0022C11F: ;
    PUSH32(esp, 0x0022C124u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0022C124: ;
    eax = eax & 0x80000003u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0022C130; /* jns: not sign (positive) */

loc_0022C12B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0022C130: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022C157; /* jge: greater or equal (signed >=) */

loc_0022C136: ;
    PUSH32(esp, 0x0022C13Bu); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_0022C13B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022C151; /* jge: greater or equal (signed >=) */

loc_0022C149: ;
    MEM32(0x8F97D8) = MEM32(0x8F97D8) + 1;
    _fa = (uint32_t)(MEM32(0x8F97D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0022C157;

loc_0022C151: ;
    MEM32(0x8F97D4) = MEM32(0x8F97D4) + 1;
    _fa = (uint32_t)(MEM32(0x8F97D4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0022C157: ;
    edx = MEM32(0x8F97D8);
    _fa = (uint32_t)(MEM32(0x8F97D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F97D4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C180; /* jne: not equal / not zero */

loc_0022C165: ;
    eax = MEM32(ebx + 0xF50);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C17A; /* je: equal / zero */

loc_0022C175: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C180; /* jne: not equal / not zero */

loc_0022C17A: ;
    MEM32(0x8F97BC) = esi;

loc_0022C180: ;
    SET_LO16(eax, MEM16(ebx + 0x143A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x100 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022C1E6; /* jge: greater or equal (signed >=) */

loc_0022C18D: ;
    edx = MEM32(0x8F97B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, 0x40);
    if (CMP_EQ(_fa, _fb)) goto loc_0022C1B9; /* je: equal / zero */

loc_0022C199: ;
    eax = SX16(LO16(eax));
    MEM8(ebx + eax * 8 + 0x143F) = LO8(ecx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x143A);
    MEM8(ebx + edx * 8 + 0x143E) = 3;
    MEM16(ebx + 0x143A) = MEM16(ebx + 0x143A) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x143A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0022C1B9: ;
    eax = MEM32(0x8F97BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C1E6; /* je: equal / zero */

loc_0022C1C2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x143A);
    MEM8(ebx + eax * 8 + 0x143F) = LO8(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x143A);
    MEM8(ebx + ecx * 8 + 0x143E) = 0xFF;
    MEM16(ebx + 0x143A) = MEM16(ebx + 0x143A) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x143A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0022C1E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022C290
 * Original: 0x0022C290 - 0x0022C2AA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C290: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0022C2A6u); RECOMP_ABI_CALL(0x0003531Fu, sub_0003531F); /* call 0x0003531F */

loc_0022C2A6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022C2B0
 * Original: 0x0022C2B0 - 0x0022C303 (83 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C2B0: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x143A);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0022C2E4; /* jle: less or equal (signed <=) */

loc_0022C2BE: ;
    _fb = (uint32_t)(0x1443) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1443;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022C2C3: ;
    _fa = (uint32_t)(MEM8(eax + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -4), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C2DC; /* jne: not equal / not zero */

loc_0022C2C9: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + -3);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C2DC; /* jne: not equal / not zero */

loc_0022C2D1: ;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x14 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C2E8; /* je: equal / zero */

loc_0022C2D7: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x14 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022C2F6; /* je: equal / zero */

loc_0022C2DC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C2C3; /* jl: less (signed <) */

loc_0022C2E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0022C2E8: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + -1) = LO8(ecx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0022C2F6: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax) = LO8(edx);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0022C320
 * Original: 0x0022C320 - 0x0022C371 (81 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C320(void)
{

loc_0022C320: ;
    SET_LO16(ecx, MEM16(0x8F97D4));
    MEM16(eax + 0x105E) = LO16(ecx);
    SET_LO16(edx, MEM16(0x8F97D8));
    MEM16(eax + 0x1060) = LO16(edx);
    SET_LO16(ecx, MEM16(0x8F97D8));
    MEM16(eax + 0x10BA) = LO16(ecx);
    SET_LO16(edx, MEM16(0x8F97D4));
    MEM16(eax + 0x10BC) = LO16(edx);
    SET_LO8(ecx, MEM8(0x8F97B8));
    MEM8(eax + 0x1438) = LO8(ecx);
    SET_LO8(edx, MEM8(0x8F97BC));
    MEM8(eax + 0x1439) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022C390
 * Original: 0x0022C390 - 0x0022C3E8 (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022C390: ;
    edx = MEM32(0x8F97D4);
    ecx = MEM32(0x8F97D8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = (uint32_t)(int32_t)SMEM16(edi + 0x143A);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022C3B8; /* jle: less or equal (signed <=) */

loc_0022C3B1: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 1;
    goto loc_0022C3BE;

loc_0022C3B8: ;
    ebp = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0022C3BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022C3E3; /* jle: less or equal (signed <=) */

loc_0022C3C2: ;
    ecx = edi + 0x1440;

loc_0022C3C8: ;
    _fa = (uint32_t)(MEM8(ecx + -1)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + -1), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022C3DD; /* je: equal / zero */

loc_0022C3CE: ;
    edi = (uint32_t)(int32_t)SMEM8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C3DD; /* jne: not equal / not zero */

loc_0022C3D5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C3DD; /* jne: not equal / not zero */

loc_0022C3DA: ;
    eax = ecx + -4;

loc_0022C3DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022C3C8; /* jne: not equal / not zero */

loc_0022C3E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022C400
 * Original: 0x0022C400 - 0x0022C421 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C400: ;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x143A);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022C420; /* jle: less or equal (signed <=) */

loc_0022C40D: ;
    _fb = (uint32_t)(0x143C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x143C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022C413: ;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 3), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) eax = ecx; /* cmovne */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022C413; /* jne: not equal / not zero */

loc_0022C420: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022C430
 * Original: 0x0022C430 - 0x0022C44D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0022C430: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(eax + 2));
    SET_LO8(ecx, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0022C448; /* jbe: below or equal (unsigned <=) */

loc_0022C442: ;
    eax = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0022C448: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022C460
 * Original: 0x0022C460 - 0x0022C5C6 (358 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022C460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C460: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;

loc_0022C468: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C48D; /* jne: not equal / not zero */

loc_0022C46C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0022C470: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C484; /* jne: not equal / not zero */

loc_0022C474: ;
    ebp = ZX8(MEM8(edx + ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C47E; /* jne: not equal / not zero */

loc_0022C47C: ;
    SET_LO8(eax, 1);

loc_0022C47E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C470; /* jl: less (signed <) */

loc_0022C484: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C468; /* jl: less (signed <) */

loc_0022C48D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0xC;

loc_0022C492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C4B5; /* jne: not equal / not zero */

loc_0022C496: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022C498: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C4AC; /* jne: not equal / not zero */

loc_0022C49C: ;
    ebp = ZX8(MEM8(edx + ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C4A6; /* jne: not equal / not zero */

loc_0022C4A4: ;
    SET_LO8(eax, 1);

loc_0022C4A6: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C498; /* jl: less (signed <) */

loc_0022C4AC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C492; /* jl: less (signed <) */

loc_0022C4B5: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0x12;
    /* nop */

loc_0022C4C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C4E3; /* jne: not equal / not zero */

loc_0022C4C4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022C4C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C4DA; /* jne: not equal / not zero */

loc_0022C4CA: ;
    ebp = ZX8(MEM8(edx + ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C4D4; /* jne: not equal / not zero */

loc_0022C4D2: ;
    SET_LO8(eax, 1);

loc_0022C4D4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C4C6; /* jl: less (signed <) */

loc_0022C4DA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C4C0; /* jl: less (signed <) */

loc_0022C4E3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0x1C;

loc_0022C4E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C50D; /* jne: not equal / not zero */

loc_0022C4EC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0022C4F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C504; /* jne: not equal / not zero */

loc_0022C4F4: ;
    ebp = ZX8(MEM8(edx + ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C4FE; /* jne: not equal / not zero */

loc_0022C4FC: ;
    SET_LO8(eax, 1);

loc_0022C4FE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C4F0; /* jl: less (signed <) */

loc_0022C504: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C4E8; /* jl: less (signed <) */

loc_0022C50D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0022C510: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C525; /* jne: not equal / not zero */

loc_0022C514: ;
    edx = ZX8(MEM8(ecx + ebx + 0x24));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C51F; /* jne: not equal / not zero */

loc_0022C51D: ;
    SET_LO8(eax, 1);

loc_0022C51F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C510; /* jl: less (signed <) */

loc_0022C525: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0x26;
    /* nop */

loc_0022C530: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C553; /* jne: not equal / not zero */

loc_0022C534: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022C536: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C54A; /* jne: not equal / not zero */

loc_0022C53A: ;
    ebp = ZX8(MEM8(edx + ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C544; /* jne: not equal / not zero */

loc_0022C542: ;
    SET_LO8(eax, 1);

loc_0022C544: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C536; /* jl: less (signed <) */

loc_0022C54A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C530; /* jl: less (signed <) */

loc_0022C553: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0x2E;

loc_0022C558: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C57D; /* jne: not equal / not zero */

loc_0022C55C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_0022C560: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C574; /* jne: not equal / not zero */

loc_0022C564: ;
    ebp = ZX8(MEM8(edx + ecx));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C56E; /* jne: not equal / not zero */

loc_0022C56C: ;
    SET_LO8(eax, 1);

loc_0022C56E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C560; /* jl: less (signed <) */

loc_0022C574: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C558; /* jl: less (signed <) */

loc_0022C57D: ;
    POP32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);

loc_0022C581: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C596; /* jne: not equal / not zero */

loc_0022C585: ;
    edx = ZX8(MEM8(ecx + ebx + 0x34));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C590; /* jne: not equal / not zero */

loc_0022C58E: ;
    SET_LO8(eax, 1);

loc_0022C590: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C581; /* jl: less (signed <) */

loc_0022C596: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022C598: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C5AD; /* jne: not equal / not zero */

loc_0022C59C: ;
    edx = ZX8(MEM8(ecx + ebx + 0x36));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C5A7; /* jne: not equal / not zero */

loc_0022C5A5: ;
    SET_LO8(eax, 1);

loc_0022C5A7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C598; /* jl: less (signed <) */

loc_0022C5AD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0022C5B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C5C5; /* jne: not equal / not zero */

loc_0022C5B4: ;
    edx = ZX8(MEM8(ecx + ebx + 0x3B));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022C5BF; /* jne: not equal / not zero */

loc_0022C5BD: ;
    SET_LO8(eax, 1);

loc_0022C5BF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022C5B0; /* jl: less (signed <) */

loc_0022C5C5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022C620
 * Original: 0x0022C620 - 0x0022C67C (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022C620: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB0);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0022C639u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0022C639: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xB4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 2;
    goto loc_0022C650;

    /* nop */

loc_0022C650: ;
    edi = 0x14;

loc_0022C655: ;
    PUSH32(esp, 0x2E);
    eax = esi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(esi + -4) = LO8(ebx);
    MEM32(esi) = ebx;
    PUSH32(esp, 0x0022C666u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0022C666: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022C655; /* jne: not equal / not zero */

loc_0022C66F: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022C650; /* jne: not equal / not zero */

loc_0022C672: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022C6A0
 * Original: 0x0022C6A0 - 0x0022C6A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C6A0(void)
{

loc_0022C6A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022C6B0
 * Original: 0x0022C6B0 - 0x0022C6C7 (23 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C6B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + eax * 4) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022C6D0
 * Original: 0x0022C6D0 - 0x0022C6E3 (19 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C6D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + eax * 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022C6F0
 * Original: 0x0022C6F0 - 0x0022C70C (28 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C6F0(void)
{

loc_0022C6F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    MEM8(eax + ecx + 0xB0) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022C720
 * Original: 0x0022C720 - 0x0022C73B (27 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C720(void)
{

loc_0022C720: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    SET_LO8(eax, MEM8(eax + ecx + 0xB0));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022C750
 * Original: 0x0022C750 - 0x0022C76F (31 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C750(void)
{

loc_0022C750: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    MEM32(eax + ecx + 0xB4) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022C780
 * Original: 0x0022C780 - 0x0022C79B (27 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C780(void)
{

loc_0022C780: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = MEM32(eax + ecx + 0xB4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022C7B0
 * Original: 0x0022C7B0 - 0x0022C7D7 (39 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C7B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(ecx + eax * 2 + 0xB8) = LO16(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0022C7E0
 * Original: 0x0022C7E0 - 0x0022C802 (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C7E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0xB8));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022C7FF
 * Original: 0x0022C7FF - 0x0022C802 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C7FF(void)
{

loc_0022C7FF: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022C810
 * Original: 0x0022C810 - 0x0022C837 (39 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C810: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(ecx + eax * 2 + 0xB8) = LO16(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0022C840
 * Original: 0x0022C840 - 0x0022C862 (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C840: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0xB8));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022C870
 * Original: 0x0022C870 - 0x0022C8D8 (104 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4 + 0x9E8);
    esi = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + edi * 2;
    MEM8(edi + edx + 0x970) = LO8(ebx);
    edi = MEM32(ecx + eax * 4 + 0x9E8);
    SET_LO8(ebx, MEM8(esp + 0x18));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ecx + edi * 2;
    MEM8(edi + edx + 0x971) = LO8(ebx);
    edx = MEM32(ecx + eax * 4 + 0x9E8);
    SET_LO8(ebx, MEM8(esp + 0x1C));
    esi = edx + esi + 0x326;
    edx = ecx + esi * 2;
    MEM8(esi + edx) = LO8(ebx);
    edx = MEM32(ecx + eax * 4 + 0x9E8);
    POP32(esp, edi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ecx + eax * 4 + 0x9E8) = edx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0022C900
 * Original: 0x0022C900 - 0x0022C90E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C900(void)
{

loc_0022C900: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x9E8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022C920
 * Original: 0x0022C920 - 0x0022C93B (27 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C920(void)
{

loc_0022C920: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    ecx = ecx + eax * 2;
    SET_LO8(eax, MEM8(eax + ecx + 0x970));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022C950
 * Original: 0x0022C950 - 0x0022C96B (27 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C950(void)
{

loc_0022C950: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4;
    ecx = ecx + eax * 2;
    SET_LO8(eax, MEM8(eax + ecx + 0x971));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022C980
 * Original: 0x0022C980 - 0x0022C99B (27 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C980(void)
{

loc_0022C980: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = edx + eax * 4 + 0x326;
    ecx = ecx + eax * 2;
    SET_LO8(eax, MEM8(eax + ecx));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022C9B0
 * Original: 0x0022C9B0 - 0x0022C9E7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022C9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022C9B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ecx + 0x971;
    esi = 2;
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0022C9C0: ;
    edx = 0x14;

loc_0022C9C5: ;
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022C9C5; /* jne: not equal / not zero */

loc_0022C9D3: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022C9C0; /* jne: not equal / not zero */

loc_0022C9D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ecx + 0x9E8) = eax;
    MEM32(ecx + 0x9EC) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CA00
 * Original: 0x0022CA00 - 0x0022CAFB (251 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022CA00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xC;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    ebp = edi;
    MEM32(esp + 0x10) = 5;

loc_0022CA21: ;
    ecx = ebp;
    PUSH32(esp, 0x0022CA28u); RECOMP_ABI_CALL(0x000175A4u, sub_000175A4); /* call 0x000175A4 */

loc_0022CA28: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x9F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x9F0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0022CA21; /* jne: not equal / not zero */

loc_0022CA39: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x31B0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM8(esi + 0x31BC) = 0;
    MEM32(esi + 0x31CC) = ebx;
    MEM32(esi + 0x31D0) = ebx;
    MEM8(esi + 0x31D4) = 0;
    MEM32(esi + 0x3200) = ebp;
    MEM32(esi + 0x3204) = ebp;
    MEM8(esi + 0x3208) = 0;
    PUSH32(esp, 0x0022CA74u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0022CA74: ;
    PUSH32(esp, 0xC);
    eax = esi + 0x31C0;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022CA83u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0022CA83: ;
    PUSH32(esp, 0x14);
    ecx = esi + 0x31D8;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0022CA92u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0022CA92: ;
    PUSH32(esp, 0x14);
    edx = esi + 0x31EC;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0022CAA1u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0022CAA1: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 5;
    /* nop */

loc_0022CAB0: ;
    eax = edi + 0x971;
    edx = 2;
    goto loc_0022CAC0;

    /* nop */

loc_0022CAC0: ;
    ecx = 0x14;

loc_0022CAC5: ;
    MEM8(eax + -1) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022CAC5; /* jne: not equal / not zero */

loc_0022CAD3: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022CAC0; /* jne: not equal / not zero */

loc_0022CAD6: ;
    eax = MEM32(esp + 0x10);
    MEM32(edi + 0x9E8) = ebp;
    MEM32(edi + 0x9EC) = ebp;
    _fb = (uint32_t)(0x9F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x9F0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0022CAB0; /* jne: not equal / not zero */

loc_0022CAF3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CB40
 * Original: 0x0022CB40 - 0x0022CB41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CB40(void)
{

loc_0022CB40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022CB50
 * Original: 0x0022CB50 - 0x0022CB84 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022CB50: ;
    eax = MEM32(0x8F9CD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022CB83; /* jne: not equal / not zero */

loc_0022CB59: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x320C);
    PUSH32(esp, 0x0022CB65u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0022CB65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022CB79; /* je: equal / zero */

loc_0022CB6C: ;
    ecx = eax;
    PUSH32(esp, 0x0022CB73u); RECOMP_ABI_CALL(0x00026EB9u, sub_00026EB9); /* call 0x00026EB9 */

loc_0022CB73: ;
    MEM32(0x8F9CD0) = eax;
    esp += 4; return; /* ret */

loc_0022CB79: ;
    MEM32(0x8F9CD0) = 0;

loc_0022CB83: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022CBA0
 * Original: 0x0022CBA0 - 0x0022CBA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CBA0(void)
{

loc_0022CBA0: ;
    eax = MEM32(0x8F9CD0);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CBB0
 * Original: 0x0022CBB0 - 0x0022CBC9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022CBB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0022CBC3; /* je: equal / zero */

loc_0022CBBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0022CBC0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0022CBC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022CBC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CBD0
 * Original: 0x0022CBD0 - 0x0022CBDE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022CBD0: ;
    ecx = MEM32(0x8F9CD0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0022CBF0
 * Original: 0x0022CBF0 - 0x0022CBF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CBF0(void)
{

loc_0022CBF0: ;
    SET_LO8(eax, MEM8(ecx + 0x31D4));
    esp += 4; return; /* ret */

}

/**
 * sub_0022CC00
 * Original: 0x0022CC00 - 0x0022CC08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC00(void)
{

loc_0022CC00: ;
    MEM8(ecx + 0x31D4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0022CC10
 * Original: 0x0022CC10 - 0x0022CC17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC10(void)
{

loc_0022CC10: ;
    SET_LO8(eax, MEM8(ecx + 0x3208));
    esp += 4; return; /* ret */

}

/**
 * sub_0022CC20
 * Original: 0x0022CC20 - 0x0022CC28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC20(void)
{

loc_0022CC20: ;
    MEM8(ecx + 0x3208) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0022CC30
 * Original: 0x0022CC30 - 0x0022CC41 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC30(void)
{

loc_0022CC30: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9F0);
    eax = eax + ecx + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CC50
 * Original: 0x0022CC50 - 0x0022CC54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC50(void)
{

loc_0022CC50: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CC60
 * Original: 0x0022CC60 - 0x0022CC6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC60(void)
{

loc_0022CC60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CC70
 * Original: 0x0022CC70 - 0x0022CC74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC70(void)
{

loc_0022CC70: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CC80
 * Original: 0x0022CC80 - 0x0022CC8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC80(void)
{

loc_0022CC80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CC90
 * Original: 0x0022CC90 - 0x0022CC99 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CC90(void)
{

loc_0022CC90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CCA0
 * Original: 0x0022CCA0 - 0x0022CCA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CCA0(void)
{

loc_0022CCA0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CCB0
 * Original: 0x0022CCB0 - 0x0022CCB8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022CCB0: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 4 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_0022CCC0
 * Original: 0x0022CCC0 - 0x0022CCCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CCC0(void)
{

loc_0022CCC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x31BC) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CCD0
 * Original: 0x0022CCD0 - 0x0022CCD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CCD0(void)
{

loc_0022CCD0: ;
    SET_LO8(eax, MEM8(ecx + 0x31BC));
    esp += 4; return; /* ret */

}

/**
 * sub_0022CCE0
 * Original: 0x0022CCE0 - 0x0022CCF2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CCE0(void)
{

loc_0022CCE0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x31C0) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022CD00
 * Original: 0x0022CD00 - 0x0022CD0E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CD00(void)
{

loc_0022CD00: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x31C0);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CD20
 * Original: 0x0022CD20 - 0x0022CD2D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CD20(void)
{

loc_0022CD20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x31CC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CD30
 * Original: 0x0022CD30 - 0x0022CD37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CD30(void)
{

loc_0022CD30: ;
    eax = MEM32(ecx + 0x31CC);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CD40
 * Original: 0x0022CD40 - 0x0022CD4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CD40(void)
{

loc_0022CD40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x31D0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CD50
 * Original: 0x0022CD50 - 0x0022CD57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CD50(void)
{

loc_0022CD50: ;
    eax = MEM32(ecx + 0x31D0);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CD60
 * Original: 0x0022CD60 - 0x0022CD6E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CD60(void)
{

loc_0022CD60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x31D8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CD80
 * Original: 0x0022CD80 - 0x0022CD8E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CD80(void)
{

loc_0022CD80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x31EC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CDA0
 * Original: 0x0022CDA0 - 0x0022CDB2 (18 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CDA0(void)
{

loc_0022CDA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3200) = eax;
    MEM32(0x8C20C0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CDC0
 * Original: 0x0022CDC0 - 0x0022CDC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CDC0(void)
{

loc_0022CDC0: ;
    eax = MEM32(ecx + 0x3200);
    esp += 4; return; /* ret */

}

/**
 * sub_0022CDD0
 * Original: 0x0022CDD0 - 0x0022CDDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CDD0(void)
{

loc_0022CDD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3204) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022CDE0
 * Original: 0x0022CDE0 - 0x0022D09E (702 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022CDE0(void)
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

loc_0022CDE0: ;
    _fb = (uint32_t)(0x37C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x37C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ebp = ecx;
    PUSH32(esp, 0x0022CDF3u); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_0022CDF3: ;
    PUSH32(esp, 1);
    edi = SX16(LO16(eax));
    PUSH32(esp, 0x0022CDFDu); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_0022CDFD: ;
    esi = SX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022CE0D; /* jl: less (signed <) */

loc_0022CE07: ;
    MEM32(esp + 0x1C) = edi;
    goto loc_0022CE32;

loc_0022CE0D: ;
    PUSH32(esp, 0x0022CE12u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0022CE12: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = 0x51EB851F;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM32(esp + 0x1C) = eax;

loc_0022CE32: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0022CE39u); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_0022CE39: ;
    PUSH32(esp, 9);
    edi = SX16(LO16(eax));
    PUSH32(esp, 0x0022CE43u); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_0022CE43: ;
    esi = SX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022CE53; /* jl: less (signed <) */

loc_0022CE4D: ;
    MEM32(esp + 0x18) = edi;
    goto loc_0022CE7A;

loc_0022CE53: ;
    PUSH32(esp, 0x0022CE58u); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_0022CE58: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = 0x51EB851F;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM32(esp + 0x18) = eax;

loc_0022CE7A: ;
    edx = MEM32(ebp + 0x3204);
    esi = MEM32(ebp + 0x31CC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 3);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, 0x0022CEA3u); RECOMP_ABI_CALL(0x000292A9u, sub_000292A9); /* call 0x000292A9 */

loc_0022CEA3: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp + 0x3204);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x1EC;
    PUSH32(esp, 0x0022CEBDu); RECOMP_ABI_CALL(0x00030EE6u, sub_00030EE6); /* call 0x00030EE6 */

loc_0022CEBD: ;
    eax = MEM32(ebp + 0x31CC);
    _fa = (uint32_t)(MEM32(ebp + 0x3204)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3204), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022CED1; /* jne: not equal / not zero */

loc_0022CECB: ;
    eax = MEM32(ebp + 0x31D0);

loc_0022CED1: ;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x0022CEDBu); RECOMP_ABI_CALL(0x00030EE6u, sub_00030EE6); /* call 0x00030EE6 */

loc_0022CEDB: ;
    eax = MEM32(esp + 0x1D8);
    _fb = (uint32_t)(MEM32(esp + 0x37C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x37C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022CEF7; /* jle: less or equal (signed <=) */

loc_0022CEEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022CEFC; /* jge: greater or equal (signed >=) */

loc_0022CEF3: ;
    PUSH32(esp, 4);
    goto loc_0022CF1A;

loc_0022CEF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022CF05; /* jl: less (signed <) */

loc_0022CEFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022CF0A; /* jge: greater or equal (signed >=) */

loc_0022CF01: ;
    PUSH32(esp, 5);
    goto loc_0022CF1A;

loc_0022CF05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022CF13; /* jl: less (signed <) */

loc_0022CF0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022CF18; /* jge: greater or equal (signed >=) */

loc_0022CF0F: ;
    PUSH32(esp, 6);
    goto loc_0022CF1A;

loc_0022CF13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022CF26; /* jl: less (signed <) */

loc_0022CF18: ;
    PUSH32(esp, 7);

loc_0022CF1A: ;
    PUSH32(esp, 0x0022CF1Fu); RECOMP_ABI_CALL(0x000292A9u, sub_000292A9); /* call 0x000292A9 */

loc_0022CF1F: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022CF26: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0022CF2Du); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_0022CF2D: ;
    eax = SX16(LO16(eax));
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0022D07E; /* jle: less or equal (signed <=) */

loc_0022CF4E: ;
    edi = edi;

loc_0022CF50: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022CFB5; /* jne: not equal / not zero */

loc_0022CF55: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x10); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x3C); /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022CF7F; /* jle: less or equal (signed <=) */

loc_0022CF71: ;
    MEM32(ebp + 0x31FC) = eax;
    MEM32(esp + 0x14) = eax;
    ebx = eax;
    goto loc_0022CF85;

loc_0022CF7F: ;
    MEM32(ebp + 0x31FC) = ebx;

loc_0022CF85: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0022CF8Cu); RECOMP_ABI_CALL(0x00013602u, sub_00013602); /* call 0x00013602 */

loc_0022CF8C: ;
    ecx = SX16(LO16(eax));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x2C); /* cvttss2si */
    ecx = MEM32(ebp + 0x31FC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0022D058;

loc_0022CFB5: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x1C); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x28) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0022CFEA; /* jle: less or equal (signed <=) */

loc_0022CFDB: ;
    MEM32(ebp + edi * 4 + 0x31EC) = esi;
    MEM32(esp + 0x14) = esi;
    ebx = eax;
    goto loc_0022CFF1;

loc_0022CFEA: ;
    MEM32(ebp + edi * 4 + 0x31EC) = ebx;

loc_0022CFF1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D02B; /* jle: less or equal (signed <=) */

loc_0022CFFA: ;
    esi = MEM32(esp + 0x34);
    ebx = MEM32(esp + 0x40);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + ebp + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi;

loc_0022D016: ;
    _fb = (uint32_t)(MEM32(ebx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x9F0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x9F0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022D016; /* jne: not equal / not zero */

loc_0022D023: ;
    ebx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x28);

loc_0022D02B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D03A; /* jle: less or equal (signed <=) */

loc_0022D033: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x30));
    eax = ecx;

loc_0022D03A: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    xmm1.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x38); /* cvttss2si */
    edi = MEM32(esp + 0x20);
    ecx = eax + esi;

loc_0022D058: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) ecx = ebx; /* cmovl */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + edi * 4 + 0x31D8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0022D06E; /* jle: less or equal (signed <=) */

loc_0022D068: ;
    MEM32(esp + 0x14) = ecx;
    ebx = ecx;

loc_0022D06E: ;
    eax = MEM32(ebp + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0022CF50; /* jl: less (signed <) */

loc_0022D07E: ;
    ecx = esp + 0x44;
    PUSH32(esp, 0x0022D087u); RECOMP_ABI_CALL(0x0001527Cu, sub_0001527C); /* call 0x0001527C */

loc_0022D087: ;
    ecx = esp + 0x1E8;
    PUSH32(esp, 0x0022D093u); RECOMP_ABI_CALL(0x0001527Cu, sub_0001527C); /* call 0x0001527C */

loc_0022D093: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x37C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x37C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0022D150
 * Original: 0x0022D150 - 0x0022D183 (51 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D150(void)
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

loc_0022D150: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022D178; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0022D15E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD474); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7C8DD4); /* mulss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */

loc_0022D178: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0022D190
 * Original: 0x0022D190 - 0x0022D1EF (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D190(void)
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

loc_0022D190: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0022D1C4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0022D1A4: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0022D1D1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0022D1B5: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

loc_0022D1C4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0022D1D1; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_0022D1C9: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D1DC; /* jne: not equal / not zero */

loc_0022D1D1: ;
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

loc_0022D1DC: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0022D210
 * Original: 0x0022D210 - 0x0022D23F (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D210(void)
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

loc_0022D210: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D231; /* jle: less or equal (signed <=) */

loc_0022D218: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

loc_0022D231: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0022D250
 * Original: 0x0022D250 - 0x0022D28F (63 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D250(void)
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

loc_0022D250: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D271; /* jle: less or equal (signed <=) */

loc_0022D258: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

loc_0022D271: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_0022D284; /* jg: greater (signed >) */

loc_0022D281: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0022D284: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0022D2A0
 * Original: 0x0022D2A0 - 0x0022D2AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D2A0(void)
{

loc_0022D2A0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D2B0
 * Original: 0x0022D2B0 - 0x0022D2BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D2B0(void)
{

loc_0022D2B0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 8;
    eax = ecx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D2C0
 * Original: 0x0022D2C0 - 0x0022D2CD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D2C0(void)
{

loc_0022D2C0: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D2D0
 * Original: 0x0022D2D0 - 0x0022D2D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D2D0(void)
{

loc_0022D2D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0022D2E0
 * Original: 0x0022D2E0 - 0x0022D2F2 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D2E0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(edx));
    MEM8(ecx + eax) = LO8(edx);
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D300
 * Original: 0x0022D300 - 0x0022D308 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D300(void)
{

loc_0022D300: ;
    eax = MEM32(ecx + 4);
    eax = eax + ecx + -1;
    esp += 4; return; /* ret */

}

/**
 * sub_0022D310
 * Original: 0x0022D310 - 0x0022D314 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D310: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0022D320
 * Original: 0x0022D320 - 0x0022D328 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D320(void)
{

loc_0022D320: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0022D330
 * Original: 0x0022D330 - 0x0022D338 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D330: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00035D15(); return; /* tail jmp 0x00035D15 */

}

/**
 * sub_0022D340
 * Original: 0x0022D340 - 0x0022D356 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D340: ;
    eax = MEM32(0x8F9CD8);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x8F9CD4) = LO8(ecx);
    MEM32(0x8F9CD8) = MEM32(0x8F9CD8) + 1;
    _fa = (uint32_t)(MEM32(0x8F9CD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0022D360
 * Original: 0x0022D360 - 0x0022D367 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D360: ;
    MEM32(0x8F9CD8) = MEM32(0x8F9CD8) - 1;
    _fa = (uint32_t)(MEM32(0x8F9CD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0022D370
 * Original: 0x0022D370 - 0x0022D383 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D370: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D380; /* jle: less or equal (signed <=) */

loc_0022D379: ;
    SET_LO8(eax, MEM8(eax + 0x8F9CD3));
    esp += 4; return; /* ret */

loc_0022D380: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0022D390
 * Original: 0x0022D390 - 0x0022D475 (229 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D390: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FCBDC;
    MEM32(esi + 4) = 0x7FCC18;
    MEM32(esi + 8) = 0x7FCC44;
    MEM32(esi + 0xC) = 0x7FCC70;
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = 0x7FCD30;
    PUSH32(esp, 0x0022D3BCu); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_0022D3BC: ;
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    edi = esi + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0022D3D1u); RECOMP_ABI_CALL(0x0002DFC5u, sub_0002DFC5); /* call 0x0002DFC5 */

loc_0022D3D1: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x70) = 0x7FCD7C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x7FCEF8;
    MEM32(esi + 4) = 0x7FCECC;
    MEM32(esi + 8) = 0x7FCEA4;
    MEM32(esi + 0xC) = 0x7FCDE8;
    MEM32(esi + 0x10) = 0x7FCD98;
    MEM32(edi) = 0x7FCD84;
    MEM32(esi + 0x70) = 0x7FCD80;
    MEM32(esi + 0x80) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM8(0x8C20BC) = 1;
    ecx = edi;
    MEM32(esi + 0x7C) = edx;
    PUSH32(esp, 0x0022D42Au); RECOMP_ABI_CALL(0x00021130u, sub_00021130); /* call 0x00021130 */

loc_0022D42A: ;
    PUSH32(esp, 0x0022D42Fu); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_0022D42F: ;
    edx = MEM32(eax + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x74) = ecx;
    PUSH32(esp, 0x0022D441u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_0022D441: ;
    edx = MEM32(eax + 0x2C);
    eax = MEM32(edx + 0x28);
    SET_LO8(ecx, MEM8(eax + 0x44));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM8(esi + 0x84) = LO8(ebx);
    MEM8(esi + 0x85) = LO8(ebx);
    MEM8(esi + 0x86) = LO8(ebx);
    MEM8(esi + 0x87) = LO8(ebx);
    MEM32(esi + 0x88) = ebx;
    MEM8(esi + 0x78) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D4B0
 * Original: 0x0022D4B0 - 0x0022D500 (80 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D4B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x7FCEF8;
    MEM32(esi + 4) = 0x7FCECC;
    MEM32(esi + 8) = 0x7FCEA4;
    MEM32(esi + 0xC) = 0x7FCDE8;
    MEM32(esi + 0x10) = 0x7FCD98;
    MEM32(ecx) = 0x7FCD84;
    MEM32(esi + 0x70) = 0x7FCD80;
    PUSH32(esp, 0x0022D4EAu); RECOMP_ABI_CALL(0x0001EB60u, sub_0001EB60); /* call 0x0001EB60 */

loc_0022D4EA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022D4FA; /* je: equal / zero */

loc_0022D4F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0022D4F7u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0022D4F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022D4FA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D520
 * Original: 0x0022D520 - 0x0022D58F (111 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D520: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D55B; /* je: equal / zero */

loc_0022D548: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D585; /* jle: less or equal (signed <=) */

loc_0022D551: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D585; /* jne: not equal / not zero */

loc_0022D55B: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022D563u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D560u); } /* indirect call */
    }

loc_0022D563: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0022D56Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D56Au); } /* indirect call */
    }

loc_0022D56D: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022D585u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D582u); } /* indirect call */
    }

loc_0022D585: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022D5B0
 * Original: 0x0022D5B0 - 0x0022D600 (80 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D5B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 8) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D5E2; /* je: equal / zero */

loc_0022D5CF: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D5FA; /* jle: less or equal (signed <=) */

loc_0022D5D8: ;
    SET_LO8(edx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D5FA; /* jne: not equal / not zero */

loc_0022D5E2: ;
    eax = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022D5FAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0022D5F7u); } /* indirect call */
    }

loc_0022D5FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022D620
 * Original: 0x0022D620 - 0x0022D65B (59 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D640; /* je: equal / zero */

loc_0022D62D: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D658; /* jle: less or equal (signed <=) */

loc_0022D636: ;
    SET_LO8(edx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D658; /* jne: not equal / not zero */

loc_0022D640: ;
    eax = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022D658u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D655u); } /* indirect call */
    }

loc_0022D658: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022D670
 * Original: 0x0022D670 - 0x0022D6DC (108 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022D670: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D6A2; /* je: equal / zero */

loc_0022D68F: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D6D3; /* jle: less or equal (signed <=) */

loc_0022D698: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D6D3; /* jne: not equal / not zero */

loc_0022D6A2: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022D6AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D6A7u); } /* indirect call */
    }

loc_0022D6AA: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0022D6B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D6B5u); } /* indirect call */
    }

loc_0022D6B8: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022D6D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D6D0u); } /* indirect call */
    }

loc_0022D6D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022D700
 * Original: 0x0022D700 - 0x0022D77A (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D700: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D741; /* je: equal / zero */

loc_0022D72E: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D770; /* jle: less or equal (signed <=) */

loc_0022D737: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D770; /* jne: not equal / not zero */

loc_0022D741: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022D749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D746u); } /* indirect call */
    }

loc_0022D749: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0022D758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D755u); } /* indirect call */
    }

loc_0022D758: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022D770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D76Du); } /* indirect call */
    }

loc_0022D770: ;
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
 * sub_0022D7A0
 * Original: 0x0022D7A0 - 0x0022D817 (119 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D7A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D7DB; /* je: equal / zero */

loc_0022D7C8: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D80D; /* jle: less or equal (signed <=) */

loc_0022D7D1: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D80D; /* jne: not equal / not zero */

loc_0022D7DB: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022D7E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D7E0u); } /* indirect call */
    }

loc_0022D7E3: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0022D7F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D7EFu); } /* indirect call */
    }

loc_0022D7F2: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 3);
    PUSH32(esp, 7);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022D80Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D80Au); } /* indirect call */
    }

loc_0022D80D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0022D840
 * Original: 0x0022D840 - 0x0022D8BA (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D840: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D881; /* je: equal / zero */

loc_0022D86E: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D8B0; /* jle: less or equal (signed <=) */

loc_0022D877: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D8B0; /* jne: not equal / not zero */

loc_0022D881: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022D889u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D886u); } /* indirect call */
    }

loc_0022D889: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0022D898u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D895u); } /* indirect call */
    }

loc_0022D898: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022D8B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D8ADu); } /* indirect call */
    }

loc_0022D8B0: ;
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
 * sub_0022D8E0
 * Original: 0x0022D8E0 - 0x0022D95A (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D8E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D921; /* je: equal / zero */

loc_0022D90E: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D950; /* jle: less or equal (signed <=) */

loc_0022D917: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D950; /* jne: not equal / not zero */

loc_0022D921: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022D929u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D926u); } /* indirect call */
    }

loc_0022D929: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0022D938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D935u); } /* indirect call */
    }

loc_0022D938: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 9);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022D950u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D94Du); } /* indirect call */
    }

loc_0022D950: ;
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
 * sub_0022D980
 * Original: 0x0022D980 - 0x0022D9FA (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022D980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022D980: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022D9C1; /* je: equal / zero */

loc_0022D9AE: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022D9F0; /* jle: less or equal (signed <=) */

loc_0022D9B7: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022D9F0; /* jne: not equal / not zero */

loc_0022D9C1: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022D9C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D9C6u); } /* indirect call */
    }

loc_0022D9C9: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0022D9D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D9D5u); } /* indirect call */
    }

loc_0022D9D8: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022D9F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022D9EDu); } /* indirect call */
    }

loc_0022D9F0: ;
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
 * sub_0022DA20
 * Original: 0x0022DA20 - 0x0022DA5B (59 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022DA20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DA40; /* je: equal / zero */

loc_0022DA2D: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DA58; /* jle: less or equal (signed <=) */

loc_0022DA36: ;
    SET_LO8(edx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DA58; /* jne: not equal / not zero */

loc_0022DA40: ;
    eax = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x1B);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022DA58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DA55u); } /* indirect call */
    }

loc_0022DA58: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022DA70
 * Original: 0x0022DA70 - 0x0022DAEA (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DA70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DAB1; /* je: equal / zero */

loc_0022DA9E: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DAE0; /* jle: less or equal (signed <=) */

loc_0022DAA7: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DAE0; /* jne: not equal / not zero */

loc_0022DAB1: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022DAB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DAB6u); } /* indirect call */
    }

loc_0022DAB9: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0022DAC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DAC5u); } /* indirect call */
    }

loc_0022DAC8: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 0xB);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022DAE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DADDu); } /* indirect call */
    }

loc_0022DAE0: ;
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
 * sub_0022DB10
 * Original: 0x0022DB10 - 0x0022DB8A (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DB10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DB51; /* je: equal / zero */

loc_0022DB3E: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DB80; /* jle: less or equal (signed <=) */

loc_0022DB47: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DB80; /* jne: not equal / not zero */

loc_0022DB51: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022DB59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DB56u); } /* indirect call */
    }

loc_0022DB59: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0022DB68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DB65u); } /* indirect call */
    }

loc_0022DB68: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022DB80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DB7Du); } /* indirect call */
    }

loc_0022DB80: ;
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
 * sub_0022DBB0
 * Original: 0x0022DBB0 - 0x0022DC2A (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DBB0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DBF1; /* je: equal / zero */

loc_0022DBDE: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DC20; /* jle: less or equal (signed <=) */

loc_0022DBE7: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DC20; /* jne: not equal / not zero */

loc_0022DBF1: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022DBF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DBF6u); } /* indirect call */
    }

loc_0022DBF9: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0022DC08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DC05u); } /* indirect call */
    }

loc_0022DC08: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 0xD);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022DC20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DC1Du); } /* indirect call */
    }

loc_0022DC20: ;
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
 * sub_0022DC50
 * Original: 0x0022DC50 - 0x0022DCCA (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DC50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DC91; /* je: equal / zero */

loc_0022DC7E: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DCC0; /* jle: less or equal (signed <=) */

loc_0022DC87: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DCC0; /* jne: not equal / not zero */

loc_0022DC91: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022DC99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DC96u); } /* indirect call */
    }

loc_0022DC99: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0022DCA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DCA5u); } /* indirect call */
    }

loc_0022DCA8: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022DCC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DCBDu); } /* indirect call */
    }

loc_0022DCC0: ;
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
 * sub_0022DCF0
 * Original: 0x0022DCF0 - 0x0022DD6A (122 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DCF0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x68) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DD31; /* je: equal / zero */

loc_0022DD1E: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DD60; /* jle: less or equal (signed <=) */

loc_0022DD27: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DD60; /* jne: not equal / not zero */

loc_0022DD31: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022DD39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DD36u); } /* indirect call */
    }

loc_0022DD39: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0022DD48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DD45u); } /* indirect call */
    }

loc_0022DD48: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 4);
    PUSH32(esp, 0xF);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022DD60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DD5Du); } /* indirect call */
    }

loc_0022DD60: ;
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
 * sub_0022DD90
 * Original: 0x0022DD90 - 0x0022DDFF (111 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DD90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DDCB; /* je: equal / zero */

loc_0022DDB8: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DDF5; /* jle: less or equal (signed <=) */

loc_0022DDC1: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DDF5; /* jne: not equal / not zero */

loc_0022DDCB: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022DDD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DDD0u); } /* indirect call */
    }

loc_0022DDD3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0022DDDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DDDAu); } /* indirect call */
    }

loc_0022DDDD: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 3);
    PUSH32(esp, 0x10);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022DDF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DDF2u); } /* indirect call */
    }

loc_0022DDF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022DE20
 * Original: 0x0022DE20 - 0x0022DE8F (111 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DE20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DE5B; /* je: equal / zero */

loc_0022DE48: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DE85; /* jle: less or equal (signed <=) */

loc_0022DE51: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DE85; /* jne: not equal / not zero */

loc_0022DE5B: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022DE63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DE60u); } /* indirect call */
    }

loc_0022DE63: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0022DE6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DE6Au); } /* indirect call */
    }

loc_0022DE6D: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 3);
    PUSH32(esp, 0x11);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022DE85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DE82u); } /* indirect call */
    }

loc_0022DE85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022DEB0
 * Original: 0x0022DEB0 - 0x0022DF22 (114 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DEB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DEEB; /* je: equal / zero */

loc_0022DED8: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DF18; /* jle: less or equal (signed <=) */

loc_0022DEE1: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DF18; /* jne: not equal / not zero */

loc_0022DEEB: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022DEF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DEF0u); } /* indirect call */
    }

loc_0022DEF3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0022DF00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DEFAu); } /* indirect call */
    }

loc_0022DF00: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 3);
    PUSH32(esp, 0x12);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022DF18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DF15u); } /* indirect call */
    }

loc_0022DF18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022DF40
 * Original: 0x0022DF40 - 0x0022DFB2 (114 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022DF40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022DF7B; /* je: equal / zero */

loc_0022DF68: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022DFA8; /* jle: less or equal (signed <=) */

loc_0022DF71: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022DFA8; /* jne: not equal / not zero */

loc_0022DF7B: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022DF83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DF80u); } /* indirect call */
    }

loc_0022DF83: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0022DF90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DF8Au); } /* indirect call */
    }

loc_0022DF90: ;
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 8;
    PUSH32(esp, 3);
    PUSH32(esp, 0x13);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022DFA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022DFA5u); } /* indirect call */
    }

loc_0022DFA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022DFD0
 * Original: 0x0022DFD0 - 0x0022E038 (104 bytes, 33 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022DFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022DFD0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x14) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x68) (32-bit) */
    MEM32(esp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0022E01A; /* je: equal / zero */

loc_0022E007: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022E032; /* jle: less or equal (signed <=) */

loc_0022E010: ;
    SET_LO8(edx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E032; /* jne: not equal / not zero */

loc_0022E01A: ;
    eax = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 6);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022E032u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0022E02Fu); } /* indirect call */
    }

loc_0022E032: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0022E060
 * Original: 0x0022E060 - 0x0022E082 (34 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022E060: ;
    eax = MEM32(0x8F9CD8);
    MEM8(eax + 0x8F9CD4) = 0;
    eax = MEM32(0x8F9CD8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F9CD8) = eax;
    PUSH32(esp, 0x0022E07Fu); RECOMP_ABI_CALL(0x00021130u, sub_00021130); /* call 0x00021130 */

loc_0022E07F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022E090
 * Original: 0x0022E090 - 0x0022E0F9 (105 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022E090: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 8;
    ecx = esi;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0022E0A7u); RECOMP_ABI_CALL(0x0001EB92u, sub_0001EB92); /* call 0x0001EB92 */

loc_0022E0A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x68) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022E0BF; /* je: equal / zero */

loc_0022E0AC: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022E0ED; /* jle: less or equal (signed <=) */

loc_0022E0B5: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E0ED; /* jne: not equal / not zero */

loc_0022E0BF: ;
    ecx = MEM32(edi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E0C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E0C4u); } /* indirect call */
    }

loc_0022E0C7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0022E0D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E0CCu); } /* indirect call */
    }

loc_0022E0D2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x15);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022E0E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E0E5u); } /* indirect call */
    }

loc_0022E0E8: ;
    eax = MEM32(0x8F9CD8);

loc_0022E0ED: ;
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x8F9CD8) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022E120
 * Original: 0x0022E120 - 0x0022E193 (115 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022E120: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_HI8(eax, MEM8(esi + 0x70));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebp;
    SET_LO8(eax, LO8(ebx));
    MEM32(esp + 0x18) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x6C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022E160; /* je: equal / zero */

loc_0022E14D: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022E189; /* jle: less or equal (signed <=) */

loc_0022E156: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E189; /* jne: not equal / not zero */

loc_0022E160: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0022E168u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E165u); } /* indirect call */
    }

loc_0022E168: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0022E171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E16Fu); } /* indirect call */
    }

loc_0022E171: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    PUSH32(esp, 3);
    PUSH32(esp, 0x16);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022E189u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E186u); } /* indirect call */
    }

loc_0022E189: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022E1B0
 * Original: 0x0022E1B0 - 0x0022E21F (111 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022E1B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022E1EB; /* je: equal / zero */

loc_0022E1D8: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022E215; /* jle: less or equal (signed <=) */

loc_0022E1E1: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E215; /* jne: not equal / not zero */

loc_0022E1EB: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0022E1F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E1F0u); } /* indirect call */
    }

loc_0022E1F3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0022E1FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E1FAu); } /* indirect call */
    }

loc_0022E1FD: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    PUSH32(esp, 3);
    PUSH32(esp, 0x17);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022E215u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E212u); } /* indirect call */
    }

loc_0022E215: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022E240
 * Original: 0x0022E240 - 0x0022E2B0 (112 bytes, 46 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022E240: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x6C) (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0022E27C; /* je: equal / zero */

loc_0022E269: ;
    eax = MEM32(0x8F9CD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022E2A6; /* jle: less or equal (signed <=) */

loc_0022E272: ;
    SET_LO8(ecx, MEM8(eax + 0x8F9CD3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E2A6; /* jne: not equal / not zero */

loc_0022E27C: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0022E284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E281u); } /* indirect call */
    }

loc_0022E284: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0022E28Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E28Bu); } /* indirect call */
    }

loc_0022E28E: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022E2A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E2A3u); } /* indirect call */
    }

loc_0022E2A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022E2D0
 * Original: 0x0022E2D0 - 0x0022E8F7 (1575 bytes, 543 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022E2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022E2D0: ;
    SET_LO8(eax, MEM8(0x8C20BC));
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0022E8ED; /* je: equal / zero */

loc_0022E2E6: ;
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022E890; /* ja: above (unsigned >) */

loc_0022E2F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x22E8F8); /* switch: 34 entries, 34 targets */
    if (_jt == 0x0022E300u) goto loc_0022E300;
    if (_jt == 0x0022E322u) goto loc_0022E322;
    if (_jt == 0x0022E3B1u) goto loc_0022E3B1;
    if (_jt == 0x0022E3D3u) goto loc_0022E3D3;
    if (_jt == 0x0022E3E4u) goto loc_0022E3E4;
    if (_jt == 0x0022E40Au) goto loc_0022E40A;
    if (_jt == 0x0022E430u) goto loc_0022E430;
    if (_jt == 0x0022E44Eu) goto loc_0022E44E;
    if (_jt == 0x0022E47Au) goto loc_0022E47A;
    if (_jt == 0x0022E4A4u) goto loc_0022E4A4;
    if (_jt == 0x0022E4D4u) goto loc_0022E4D4;
    if (_jt == 0x0022E4FEu) goto loc_0022E4FE;
    if (_jt == 0x0022E528u) goto loc_0022E528;
    if (_jt == 0x0022E552u) goto loc_0022E552;
    if (_jt == 0x0022E573u) goto loc_0022E573;
    if (_jt == 0x0022E59Du) goto loc_0022E59D;
    if (_jt == 0x0022E5C7u) goto loc_0022E5C7;
    if (_jt == 0x0022E5F1u) goto loc_0022E5F1;
    if (_jt == 0x0022E61Bu) goto loc_0022E61B;
    if (_jt == 0x0022E645u) goto loc_0022E645;
    if (_jt == 0x0022E66Bu) goto loc_0022E66B;
    if (_jt == 0x0022E691u) goto loc_0022E691;
    if (_jt == 0x0022E6BAu) goto loc_0022E6BA;
    if (_jt == 0x0022E6E3u) goto loc_0022E6E3;
    if (_jt == 0x0022E718u) goto loc_0022E718;
    if (_jt == 0x0022E740u) goto loc_0022E740;
    if (_jt == 0x0022E775u) goto loc_0022E775;
    if (_jt == 0x0022E782u) goto loc_0022E782;
    if (_jt == 0x0022E7ADu) goto loc_0022E7AD;
    if (_jt == 0x0022E7C4u) goto loc_0022E7C4;
    if (_jt == 0x0022E7DBu) goto loc_0022E7DB;
    if (_jt == 0x0022E80Eu) goto loc_0022E80E;
    if (_jt == 0x0022E856u) goto loc_0022E856;
    if (_jt == 0x0022E88Du) goto loc_0022E88D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022E300: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0022E308u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E305u); } /* indirect call */
    }

loc_0022E308: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0022E31Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E31Au); } /* indirect call */
    }

loc_0022E31D: ;
    goto loc_0022E88D;

loc_0022E322: ;
    edx = MEM32(0x8F9CD8);
    MEM8(edx + 0x8F9CD4) = 0;
    MEM32(0x8F9CD8) = MEM32(0x8F9CD8) + 1;
    _fa = (uint32_t)(MEM32(0x8F9CD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0022E33Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E33Au); } /* indirect call */
    }

loc_0022E33D: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx);
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, 0x0022E351u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_0022E351: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    MEM32(esp + 0x20) = 0x7F7A14;
    PUSH32(esp, 0x0022E368u); RECOMP_ABI_CALL(0x00016280u, sub_00016280); /* call 0x00016280 */

loc_0022E368: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0022E370: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0022E376u); RECOMP_ABI_CALL(0x00012BD5u, sub_00012BD5); /* call 0x00012BD5 */

loc_0022E376: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0022E37Eu); RECOMP_ABI_CALL(0x0002984Eu, sub_0002984E); /* call 0x0002984E */

loc_0022E37E: ;
    ecx = MEM32(esp + ebx * 4 + 0x24);
    edx = MEM32(ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0022E38Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E38Cu); } /* indirect call */
    }

loc_0022E38F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022E370; /* jl: less (signed <) */

loc_0022E395: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x18) = 0x7F7A14;
    PUSH32(esp, 0x0022E3A6u); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_0022E3A6: ;
    MEM32(0x8F9CD8) = MEM32(0x8F9CD8) - 1;
    _fa = (uint32_t)(MEM32(0x8F9CD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0022E88D;

loc_0022E3B1: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0022E3B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E3B6u); } /* indirect call */
    }

loc_0022E3B9: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0022E3CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E3CBu); } /* indirect call */
    }

loc_0022E3CE: ;
    goto loc_0022E88D;

loc_0022E3D3: ;
    edx = MEM32(esp + 0xC0);
    eax = MEM32(edx);
    MEM32(esi + 0x78) = eax;
    goto loc_0022E88D;

loc_0022E3E4: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E3ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E3E9u); } /* indirect call */
    }

loc_0022E3EC: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0022E405u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E402u); } /* indirect call */
    }

loc_0022E405: ;
    goto loc_0022E88D;

loc_0022E40A: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E40Fu); } /* indirect call */
    }

loc_0022E412: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0022E42Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E428u); } /* indirect call */
    }

loc_0022E42B: ;
    goto loc_0022E88D;

loc_0022E430: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E438u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E435u); } /* indirect call */
    }

loc_0022E438: ;
    ecx = MEM32(esp + 0xC0);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0022E449u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E446u); } /* indirect call */
    }

loc_0022E449: ;
    goto loc_0022E88D;

loc_0022E44E: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E456u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E453u); } /* indirect call */
    }

loc_0022E456: ;
    ecx = MEM32(esp + 0xC8);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC4);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0022E475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E472u); } /* indirect call */
    }

loc_0022E475: ;
    goto loc_0022E88D;

loc_0022E47A: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E482u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E47Fu); } /* indirect call */
    }

loc_0022E482: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0022E49Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E49Cu); } /* indirect call */
    }

loc_0022E49F: ;
    goto loc_0022E88D;

loc_0022E4A4: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E4ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E4A9u); } /* indirect call */
    }

loc_0022E4AC: ;
    ecx = MEM32(esp + 0xC8);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC4);
    edi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0022E4CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E4CCu); } /* indirect call */
    }

loc_0022E4CF: ;
    goto loc_0022E88D;

loc_0022E4D4: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E4DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E4D9u); } /* indirect call */
    }

loc_0022E4DC: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x30); PUSH32(esp, 0x0022E4F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E4F6u); } /* indirect call */
    }

loc_0022E4F9: ;
    goto loc_0022E88D;

loc_0022E4FE: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E503u); } /* indirect call */
    }

loc_0022E506: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x38); PUSH32(esp, 0x0022E523u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E520u); } /* indirect call */
    }

loc_0022E523: ;
    goto loc_0022E88D;

loc_0022E528: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E52Du); } /* indirect call */
    }

loc_0022E530: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x40); PUSH32(esp, 0x0022E54Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E54Au); } /* indirect call */
    }

loc_0022E54D: ;
    goto loc_0022E88D;

loc_0022E552: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E55Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E557u); } /* indirect call */
    }

loc_0022E55A: ;
    ecx = MEM32(esp + 0xC0);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0022E56Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E568u); } /* indirect call */
    }

loc_0022E56E: ;
    goto loc_0022E88D;

loc_0022E573: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E57Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E578u); } /* indirect call */
    }

loc_0022E57B: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x48); PUSH32(esp, 0x0022E598u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E595u); } /* indirect call */
    }

loc_0022E598: ;
    goto loc_0022E88D;

loc_0022E59D: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E5A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E5A2u); } /* indirect call */
    }

loc_0022E5A5: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x50); PUSH32(esp, 0x0022E5C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E5BFu); } /* indirect call */
    }

loc_0022E5C2: ;
    goto loc_0022E88D;

loc_0022E5C7: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E5CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E5CCu); } /* indirect call */
    }

loc_0022E5CF: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x58); PUSH32(esp, 0x0022E5ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E5E9u); } /* indirect call */
    }

loc_0022E5EC: ;
    goto loc_0022E88D;

loc_0022E5F1: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E5F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E5F6u); } /* indirect call */
    }

loc_0022E5F9: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x0022E616u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E613u); } /* indirect call */
    }

loc_0022E616: ;
    goto loc_0022E88D;

loc_0022E61B: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E623u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E620u); } /* indirect call */
    }

loc_0022E623: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0xC);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x68); PUSH32(esp, 0x0022E640u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E63Du); } /* indirect call */
    }

loc_0022E640: ;
    goto loc_0022E88D;

loc_0022E645: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E64Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E64Au); } /* indirect call */
    }

loc_0022E64D: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0022E666u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E663u); } /* indirect call */
    }

loc_0022E666: ;
    goto loc_0022E88D;

loc_0022E66B: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E670u); } /* indirect call */
    }

loc_0022E673: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0022E68Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E689u); } /* indirect call */
    }

loc_0022E68C: ;
    goto loc_0022E88D;

loc_0022E691: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E699u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E696u); } /* indirect call */
    }

loc_0022E699: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0022E6B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E6AFu); } /* indirect call */
    }

loc_0022E6B5: ;
    goto loc_0022E88D;

loc_0022E6BA: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E6C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E6BFu); } /* indirect call */
    }

loc_0022E6C2: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0022E6DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E6D8u); } /* indirect call */
    }

loc_0022E6DE: ;
    goto loc_0022E88D;

loc_0022E6E3: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0022E6EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E6E8u); } /* indirect call */
    }

loc_0022E6EB: ;
    edx = MEM32(esp + 0xC0);
    ecx = MEM32(edx + 0x14);
    edi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x8C); PUSH32(esp, 0x0022E713u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E70Du); } /* indirect call */
    }

loc_0022E713: ;
    goto loc_0022E88D;

loc_0022E718: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022E720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E71Du); } /* indirect call */
    }

loc_0022E720: ;
    edi = MEM32(esp + 0xC0);
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0022E734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E72Eu); } /* indirect call */
    }

loc_0022E734: ;
    edx = MEM32(edi);
    MEM8(edx + esi + 0x72) = 1;
    goto loc_0022E88D;

loc_0022E740: ;
    edi = MEM32(esp + 0xC0);
    ebx = MEM32(edi + 8);
    eax = ZX8(MEM8(esi + 0x64));
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E75A; /* jne: not equal / not zero */

loc_0022E757: ;
    ebx = ZX8(LO8(ebx));

loc_0022E75A: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0022E762u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E75Fu); } /* indirect call */
    }

loc_0022E762: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0022E770u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E76Eu); } /* indirect call */
    }

loc_0022E770: ;
    goto loc_0022E88D;

loc_0022E775: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0022E77Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E77Au); } /* indirect call */
    }

loc_0022E77D: ;
    goto loc_0022E412;

loc_0022E782: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0022E78Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E787u); } /* indirect call */
    }

loc_0022E78A: ;
    ecx = MEM32(esp + 0xC0);
    edi = MEM32(ecx + 8);
    edx = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0022E7A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E7A5u); } /* indirect call */
    }

loc_0022E7A8: ;
    goto loc_0022E88D;

loc_0022E7AD: ;
    edx = MEM32(esp + 0xC0);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esi + -20;
    PUSH32(esp, 0x0022E7BFu); RECOMP_ABI_CALL(0x0001ED0Eu, sub_0001ED0E); /* call 0x0001ED0E */

loc_0022E7BF: ;
    goto loc_0022E88D;

loc_0022E7C4: ;
    ecx = MEM32(esp + 0xC0);
    edx = MEM32(ecx);
    PUSH32(esp, edx);
    ecx = esi + -20;
    PUSH32(esp, 0x0022E7D6u); RECOMP_ABI_CALL(0x0002F735u, sub_0002F735); /* call 0x0002F735 */

loc_0022E7D6: ;
    goto loc_0022E88D;

loc_0022E7DB: ;
    eax = MEM32(esp + 0xC0);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022E7FC; /* je: equal / zero */

loc_0022E7E7: ;
    PUSH32(esp, 0x0022E7ECu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022E7EC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022E7F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E7F4u); } /* indirect call */
    }

loc_0022E7F7: ;
    goto loc_0022E88D;

loc_0022E7FC: ;
    PUSH32(esp, 0x0022E801u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022E801: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x25);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022E80Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E809u); } /* indirect call */
    }

loc_0022E80C: ;
    goto loc_0022E88D;

loc_0022E80E: ;
    eax = MEM32(esp + 0xC0);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E82D; /* jne: not equal / not zero */

loc_0022E81B: ;
    PUSH32(esp, 0x0022E820u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022E820: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x26);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022E82Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E828u); } /* indirect call */
    }

loc_0022E82B: ;
    goto loc_0022E88D;

loc_0022E82D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E844; /* jne: not equal / not zero */

loc_0022E832: ;
    PUSH32(esp, 0x0022E837u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022E837: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x27);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022E842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E83Fu); } /* indirect call */
    }

loc_0022E842: ;
    goto loc_0022E88D;

loc_0022E844: ;
    PUSH32(esp, 0x0022E849u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022E849: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022E854u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E851u); } /* indirect call */
    }

loc_0022E854: ;
    goto loc_0022E88D;

loc_0022E856: ;
    ebp = MEM32(esp + 0xC0);
    eax = MEM32(ebp);
    ecx = ZX8(MEM8(esi + 0x64));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((8) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022E88D; /* je: equal / zero */

loc_0022E86B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022E871: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebp + edi * 2 + 4));
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0022E880u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0022E880: ;
    ecx = eax;
    PUSH32(esp, 0x0022E887u); RECOMP_ABI_CALL(0x000217BBu, sub_000217BB); /* call 0x000217BB */

loc_0022E887: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x15 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022E871; /* jl: less (signed <) */

loc_0022E88D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0022E890: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E8ED; /* jne: not equal / not zero */

loc_0022E897: ;
    eax = MEM32(esp + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022E8C9; /* jle: less or equal (signed <=) */

loc_0022E8A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0022E8C9; /* jg: greater (signed >) */

loc_0022E8A7: ;
    PUSH32(esp, 4);
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x81);
    PUSH32(esp, 0x0022E8BBu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022E8BB: ;
    ecx = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0022E8C5u); RECOMP_ABI_CALL(0x000315DFu, sub_000315DF); /* call 0x000315DF */

loc_0022E8C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022E8ED; /* jne: not equal / not zero */

loc_0022E8C9: ;
    PUSH32(esp, 0x0022E8CEu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0022E8CE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x81);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0022E8DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022E8D9u); } /* indirect call */
    }

loc_0022E8DC: ;
    PUSH32(esp, 4);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0022E8EDu); RECOMP_ABI_CALL(0x0002307Fu, sub_0002307F); /* call 0x0002307F */

loc_0022E8ED: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0022EB60
 * Original: 0x0022EB60 - 0x0022EC24 (196 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022EB60: ;
    eax = MEM32(0x8F9CD8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(eax + 0x8F9CD4) = 1;
    edi = MEM32(0x8F9CD8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    MEM32(0x8F9CD8) = edi;
    PUSH32(esp, 0x0022EB87u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_0022EB87: ;
    edx = MEM32(eax + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 8;
    ebp = ecx;

loc_0022EB98: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0022EBA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022EBA3u); } /* indirect call */
    }

loc_0022EBA6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022EC0B; /* je: equal / zero */

loc_0022EBAF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022EBB5u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0022EBB5: ;
    ecx = eax;
    PUSH32(esp, 0x0022EBBCu); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_0022EBBC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esi + 0x78));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(esp + 0x14) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0022EBE0;

    /* nop */
    /* nop */

loc_0022EBE0: ;
    edx = eax + ecx * 2;
    SET_LO16(edx, MEM16(esp + edx + 0x18));
    MEM16(esp + ecx * 2 + 0x18) = LO16(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022EBE0; /* jl: less (signed <) */

loc_0022EBF3: ;
    eax = MEM32(esi + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi + 0x14;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x1F);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0022EC0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022EC08u); } /* indirect call */
    }

loc_0022EC0B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022EB98; /* jl: less (signed <) */

loc_0022EC11: ;
    eax = MEM32(0x8F9CD8);
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x8F9CD8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022EC60
 * Original: 0x0022EC60 - 0x0022EC91 (49 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022EC60(void)
{

loc_0022EC60: ;
    MEM32(ecx) = 0x7FD180;
    MEM32(ecx + 4) = 0x7FD154;
    MEM32(ecx + 8) = 0x7FD12C;
    MEM32(ecx + 0xC) = 0x7FD0E0;
    MEM32(ecx + 0x10) = 0x7FD020;
    MEM32(ecx + 0x24) = 0x7FCF70;
    MEM32(ecx + 0x1C) = 0x7FCFE0;
    esp += 4; return; /* ret */

}

/**
 * sub_0022ECA0
 * Original: 0x0022ECA0 - 0x0022ECAB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022ECA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ECA0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022ECA8; /* je: equal / zero */

loc_0022ECA4: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

loc_0022ECA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022ECB0
 * Original: 0x0022ECB0 - 0x0022ECBB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022ECB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ECB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022ECB8; /* je: equal / zero */

loc_0022ECB4: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

loc_0022ECB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022ECC0
 * Original: 0x0022ECC0 - 0x0022ECCB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022ECC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ECC0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022ECC8; /* je: equal / zero */

loc_0022ECC4: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

loc_0022ECC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022ECD0
 * Original: 0x0022ECD0 - 0x0022ECDB (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ECD0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022ECD8; /* je: equal / zero */

loc_0022ECD4: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

loc_0022ECD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0022ECE0
 * Original: 0x0022ECE0 - 0x0022ECE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022ECE0(void)
{

loc_0022ECE0: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0022ECF0
 * Original: 0x0022ECF0 - 0x0022EDAC (188 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022ECF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ECF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2990);
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8F5B18);
    MEM8(esi + 0x14) = LO8(ebx);
    PUSH32(esp, 0x0022ED09u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0022ED09: ;
    ecx = esi + 8;
    MEM8(0x8F6A24) = LO8(ebx);
    MEM8(0x8F6A27) = LO8(ebx);
    MEM16(0x8F6A1C) = 1;
    MEM8(0x8F6A2E) = LO8(ebx);
    MEM16(0x8F6A2C) = LO16(ebx);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0022ED36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0022ED33u); } /* indirect call */
    }

loc_0022ED36: ;
    eax = 0xFF666666u;
    POP32(esp, esi);
    MEM32(0x8F6A34) = 0xFFCC3333u;
    MEM32(0x8F6A38) = 0xFF33FF33u;
    MEM32(0x8F6A3C) = 0xFF33FFFFu;
    MEM32(0x8F6A40) = 0xFFCC33FFu;
    MEM32(0x8F6A44) = 0xFFFFCC99u;
    MEM32(0x8F6A4C) = 0xFF0066FFu;
    MEM32(0x8F6A50) = 0xFFFFFF00u;
    MEM32(0x8F6A54) = 0xFFFF6600u;
    MEM32(0x8F6A58) = 0xFFFF66CCu;
    MEM32(0x8F6A5C) = 0xFF669900u;
    MEM32(0x8F6A60) = eax;
    MEM32(0x8F6A48) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022EDE0
 * Original: 0x0022EDE0 - 0x0022EF17 (311 bytes, 119 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0022EDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0022EDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x8F62D0;
    eax = 0x8F5B58;

loc_0022EDF6: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0022EE1A; /* jne: not equal / not zero */

loc_0022EDFE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022EE16; /* je: equal / zero */

loc_0022EE02: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0022EE1A; /* jne: not equal / not zero */

loc_0022EE0C: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0022EDF6; /* jne: not equal / not zero */

loc_0022EE16: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0022EE1F;

loc_0022EE1A: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0022EE1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0xF) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0022EE30;

    /* nop */

loc_0022EE30: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    esi = ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8F5B18)) >> 32) & 1);
    esi = esi + 0x8F5B18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022EF06; /* je: equal / zero */

loc_0022EE4A: ;
    eax = ebp;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp + 0x10) = 0;
    if ((_fa == 0)) goto loc_0022EE6B; /* je: equal / zero */

loc_0022EE56: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022EF06; /* jne: not equal / not zero */

loc_0022EE5D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FD1D8);
    goto loc_0022EE77;

loc_0022EE6B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FD1C0);

loc_0022EE77: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022EE7Cu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0022EE7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022EE85u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0022EE85: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022EE8Cu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0022EE8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0022EF06; /* je: equal / zero */

loc_0022EE90: ;
    ecx = esi + 0x14;
    eax = ecx;
    edi = eax + 1;

loc_0022EE98: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0022EE98; /* jne: not equal / not zero */

loc_0022EE9F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022EEB4u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_0022EEB4: ;
    ecx = esi + 0x34;
    eax = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 1;
    /* nop */

loc_0022EEC0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0022EEC0; /* jne: not equal / not zero */

loc_0022EEC7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022EEDCu); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_0022EEDC: ;
    ecx = esi + 0x40;
    eax = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 1;

loc_0022EEE7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0022EEE7; /* jne: not equal / not zero */

loc_0022EEEE: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0x16;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0022EF03u); RECOMP_ABI_CALL(0x005CCCE0u, sub_005CCCE0); /* call 0x005CCCE0 */

loc_0022EF03: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0022EF06: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0022EE30; /* jl: less (signed <) */

loc_0022EF10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0022EF70
 * Original: 0x0022EF70 - 0x0022F142 (466 bytes, 106 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0022EF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022EF70: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022EF84; /* je: equal / zero */

loc_0022EF7A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022EF86; /* jne: not equal / not zero */

loc_0022EF7D: ;
    eax = 1;
    goto loc_0022EF86;

loc_0022EF84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022EF86: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022F13D; /* ja: above (unsigned >) */

loc_0022EF93: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x22F144); /* switch: 27 entries, 27 targets */
    if (_jt == 0x0022EF9Au) goto loc_0022EF9A;
    if (_jt == 0x0022EFA4u) goto loc_0022EFA4;
    if (_jt == 0x0022EFB3u) goto loc_0022EFB3;
    if (_jt == 0x0022EFC2u) goto loc_0022EFC2;
    if (_jt == 0x0022EFD2u) goto loc_0022EFD2;
    if (_jt == 0x0022EFE4u) goto loc_0022EFE4;
    if (_jt == 0x0022EFF4u) goto loc_0022EFF4;
    if (_jt == 0x0022F009u) goto loc_0022F009;
    if (_jt == 0x0022F01Eu) goto loc_0022F01E;
    if (_jt == 0x0022F02Eu) goto loc_0022F02E;
    if (_jt == 0x0022F03Bu) goto loc_0022F03B;
    if (_jt == 0x0022F04Bu) goto loc_0022F04B;
    if (_jt == 0x0022F05Bu) goto loc_0022F05B;
    if (_jt == 0x0022F06Au) goto loc_0022F06A;
    if (_jt == 0x0022F079u) goto loc_0022F079;
    if (_jt == 0x0022F07Fu) goto loc_0022F07F;
    if (_jt == 0x0022F08Eu) goto loc_0022F08E;
    if (_jt == 0x0022F09Eu) goto loc_0022F09E;
    if (_jt == 0x0022F0ADu) goto loc_0022F0AD;
    if (_jt == 0x0022F0BCu) goto loc_0022F0BC;
    if (_jt == 0x0022F0CCu) goto loc_0022F0CC;
    if (_jt == 0x0022F0DCu) goto loc_0022F0DC;
    if (_jt == 0x0022F0ECu) goto loc_0022F0EC;
    if (_jt == 0x0022F0FBu) goto loc_0022F0FB;
    if (_jt == 0x0022F10Bu) goto loc_0022F10B;
    if (_jt == 0x0022F11Bu) goto loc_0022F11B;
    if (_jt == 0x0022F12Du) goto loc_0022F12D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022EF9A: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x8F6A31);
    esp += 12; return; /* ret 8 */

loc_0022EFA4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B1C);
    esp += 12; return; /* ret 8 */

loc_0022EFB3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B20);
    esp += 12; return; /* ret 8 */

loc_0022EFC2: ;
    eax = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022EFD2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B18);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022EFE4: ;
    eax = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022EFF4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022F009: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022F01E: ;
    eax = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022F02E: ;
    eax = MEM32(eax * 4 + 0x8F6A6C);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022F03B: ;
    eax = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022F04B: ;
    eax = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022F05B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B24);
    esp += 12; return; /* ret 8 */

loc_0022F06A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B28);
    esp += 12; return; /* ret 8 */

loc_0022F079: ;
    eax = MEM32(ecx + 8);
    esp += 12; return; /* ret 8 */

loc_0022F07F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B90);
    esp += 12; return; /* ret 8 */

loc_0022F08E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x8F5B94);
    esp += 12; return; /* ret 8 */

loc_0022F09E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F6278);
    esp += 12; return; /* ret 8 */

loc_0022F0AD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F6280);
    esp += 12; return; /* ret 8 */

loc_0022F0BC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x8F627E);
    esp += 12; return; /* ret 8 */

loc_0022F0CC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x8F627C);
    esp += 12; return; /* ret 8 */

loc_0022F0DC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + 0x8F6284));
    esp += 12; return; /* ret 8 */

loc_0022F0EC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F6288);
    esp += 12; return; /* ret 8 */

loc_0022F0FB: ;
    eax = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

loc_0022F10B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x8F5B96);
    esp += 12; return; /* ret 8 */

loc_0022F11B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = MEM32(eax + 0x8F5B18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 12; return; /* ret 8 */

loc_0022F12D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x8F628C);
    esp += 12; return; /* ret 8 */

loc_0022F13D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022F142
 * Original: 0x0022F142 - 0x0022F240 (254 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F142(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F142: ;
    edi = edi;
    RECOMP_UNIMPL("lcall 0x22ef, 0xb30022ef", 0x0022F144u); /* TODO: lcall 0x22ef, 0xb30022ef */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + ebp * 8 + -272498654) = MEM8(edi + ebp * 8 + -272498654) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi + ebp * 8 + -272498654)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(HI8(ebx)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        SET_HI8(ebx, _sv >> _sc);
        _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("in al, 0xef", 0x0022F158u); /* TODO: in al, 0xef */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("hlt", 0x0022F15Cu); /* TODO: hlt */
    RECOMP_UNIMPL("out dx, eax", 0x0022F15Du); /* TODO: out dx, eax */

loc_0022F15E: ;
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, ebx);
    RECOMP_UNIMPL("lock and al, byte ptr [eax]", 0x0022F165u); /* TODO: lock and al, byte ptr [eax] */
    PUSH32(esp, 0xFFFFFFF0u);
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0022F15E; /* jns: not sign (positive) */

loc_0022F16E: ;
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0 /* seg:ds */);
    RECOMP_UNIMPL("lock and al, byte ptr [eax]", 0x0022F171u); /* TODO: lock and al, byte ptr [eax] */
    RECOMP_UNIMPL("lock and al, byte ptr cs:[eax]", 0x0022F174u); /* TODO: lock and al, byte ptr cs:[eax] */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("lock and al, byte ptr [eax]", 0x0022F17Du); /* TODO: lock and al, byte ptr [eax] */
    if (_flags /* jg: greater (signed >) */) (void)0; /* goto loc_0022F172 - dead code, label not in function */

loc_0022F182: ;
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0022F240(); return; /* fallthrough 0x0022F240 */

}

/**
 * sub_0022F240
 * Original: 0x0022F240 - 0x0022F4F8 (696 bytes, 160 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022F240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022F240: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022F254; /* je: equal / zero */

loc_0022F24A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022F256; /* jne: not equal / not zero */

loc_0022F24D: ;
    eax = 1;
    goto loc_0022F256;

loc_0022F254: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022F256: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0022F4F5; /* ja: above (unsigned >) */

loc_0022F263: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x22F4F8); /* switch: 28 entries, 28 targets */
    if (_jt == 0x0022F26Au) goto loc_0022F26A;
    if (_jt == 0x0022F277u) goto loc_0022F277;
    if (_jt == 0x0022F28Au) goto loc_0022F28A;
    if (_jt == 0x0022F29Du) goto loc_0022F29D;
    if (_jt == 0x0022F2B8u) goto loc_0022F2B8;
    if (_jt == 0x0022F2DCu) goto loc_0022F2DC;
    if (_jt == 0x0022F2F7u) goto loc_0022F2F7;
    if (_jt == 0x0022F31Fu) goto loc_0022F31F;
    if (_jt == 0x0022F347u) goto loc_0022F347;
    if (_jt == 0x0022F362u) goto loc_0022F362;
    if (_jt == 0x0022F372u) goto loc_0022F372;
    if (_jt == 0x0022F38Du) goto loc_0022F38D;
    if (_jt == 0x0022F3ADu) goto loc_0022F3AD;
    if (_jt == 0x0022F3C0u) goto loc_0022F3C0;
    if (_jt == 0x0022F3D3u) goto loc_0022F3D3;
    if (_jt == 0x0022F3DDu) goto loc_0022F3DD;
    if (_jt == 0x0022F3F0u) goto loc_0022F3F0;
    if (_jt == 0x0022F403u) goto loc_0022F403;
    if (_jt == 0x0022F416u) goto loc_0022F416;
    if (_jt == 0x0022F429u) goto loc_0022F429;
    if (_jt == 0x0022F43Eu) goto loc_0022F43E;
    if (_jt == 0x0022F453u) goto loc_0022F453;
    if (_jt == 0x0022F466u) goto loc_0022F466;
    if (_jt == 0x0022F479u) goto loc_0022F479;
    if (_jt == 0x0022F48Cu) goto loc_0022F48C;
    if (_jt == 0x0022F49Fu) goto loc_0022F49F;
    if (_jt == 0x0022F4BFu) goto loc_0022F4BF;
    if (_jt == 0x0022F4E5u) goto loc_0022F4E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022F26A: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 0x8F6A31) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_0022F277: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F5B1C) = edx;
    esp += 16; return; /* ret 12 */

loc_0022F28A: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F5B20) = ecx;
    esp += 16; return; /* ret 12 */

loc_0022F29D: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x300;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0022F3A3;

loc_0022F2B8: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(eax + 0x8F5B18);
    eax = eax + 0x8F5B18;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax);
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_0022F2DC: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0022F3A3;

loc_0022F2F7: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(eax + 0x8F5B18);
    eax = eax + 0x8F5B18;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_0022F31F: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(eax + 0x8F5B18);
    eax = eax + 0x8F5B18;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_0022F347: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0022F4B5;

loc_0022F362: ;
    edx = MEM32(eax * 4 + 0x8F6A6C);
    edx = edx ^ MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0022F3A3;

loc_0022F372: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0022F4B5;

loc_0022F38D: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xE0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0022F3A3: ;
    MEM32(eax * 4 + 0x8F6A6C) = MEM32(eax * 4 + 0x8F6A6C) ^ edx;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8F6A6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0022F3AD: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F5B24) = ecx;
    esp += 16; return; /* ret 12 */

loc_0022F3C0: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F5B28) = edx;
    esp += 16; return; /* ret 12 */

loc_0022F3D3: ;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

loc_0022F3DD: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F5B90) = ecx;
    esp += 16; return; /* ret 12 */

loc_0022F3F0: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B94) = LO8(edx);
    esp += 16; return; /* ret 12 */

loc_0022F403: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F6278) = ecx;
    esp += 16; return; /* ret 12 */

loc_0022F416: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F6280) = edx;
    esp += 16; return; /* ret 12 */

loc_0022F429: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM16(eax + 0x8F627E) = LO16(ecx);
    esp += 16; return; /* ret 12 */

loc_0022F43E: ;
    SET_LO16(edx, MEM16(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM16(eax + 0x8F627C) = LO16(edx);
    esp += 16; return; /* ret 12 */

loc_0022F453: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F6284) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_0022F466: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(eax + 0x8F6288) = edx;
    esp += 16; return; /* ret 12 */

loc_0022F479: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B96) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_0022F48C: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B95) = LO8(edx);
    esp += 16; return; /* ret 12 */

loc_0022F49F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax * 4 + 0x8F6A6C);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0022F4B5: ;
    MEM32(eax * 4 + 0x8F6A6C) = MEM32(eax * 4 + 0x8F6A6C) ^ ecx;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8F6A6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

loc_0022F4BF: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(eax + 0x8F5B18);
    eax = eax + 0x8F5B18;
    edx = edx & 0x7FFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1B) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_0022F4E5: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F628C) = LO8(edx);

loc_0022F4F5: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0022FD4E
 * Original: 0x0022FD4E - 0x0022FEE3 (405 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FD4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022FD4E: ;
    edi = edi;
    SET_LO8(eax, LO8(eax) & 0xFA);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0022FD54: ;
    PUSH32(esp, ebp);
    RECOMP_UNIMPL("cli", 0x0022FD55u); /* TODO: cli */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (1) goto loc_0022FD54; /* jae: above or equal (unsigned >=) */

loc_0022FD5A: ;
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    RECOMP_UNIMPL("cli", 0x0022FD5Du); /* TODO: cli */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (eax == MEM32(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasd */
    ecx = _rc; }
    RECOMP_UNIMPL("cli", 0x0022FD61u); /* TODO: cli */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0022FD64: ;
    RECOMP_UNIMPL("int 0xfa", 0x0022FD64u); /* TODO: int 0xfa */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_0022FD64;

    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = ebx | edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("daa", 0x0022FD70u); /* TODO: daa */
    RECOMP_UNIMPL("sti", 0x0022FD71u); /* TODO: sti */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("sti", 0x0022FD75u); /* TODO: sti */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("arpl bx, di", 0x0022FD78u); /* TODO: arpl bx, di */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    RECOMP_UNIMPL("sti", 0x0022FD7Du); /* TODO: sti */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

}

/**
 * sub_0022FDFF
 * Original: 0x0022FDFF - 0x0022FEE3 (228 bytes, 172 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FDFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022FDFF: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022FEA6; /* je: equal / zero */

loc_0022FE9C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FEA8; /* jne: not equal / not zero */

loc_0022FE9F: ;
    ecx = 1;
    goto loc_0022FEA8;

loc_0022FEA6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FEA8: ;
    eax = MEM32(ecx * 4 + 0x8F0040);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022FEE0; /* je: equal / zero */

loc_0022FEB3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022FED2; /* je: equal / zero */

loc_0022FEBB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FED4; /* jne: not equal / not zero */

loc_0022FEBE: ;
    ecx = 1;
    ecx = MEM32(ecx * 4 + 0x8F0040);
    PUSH32(esp, 0x0022FECFu); RECOMP_ABI_CALL(0x0002BDBFu, sub_0002BDBF); /* call 0x0002BDBF */

loc_0022FECF: ;
    esp += 8; return; /* ret 4 */

loc_0022FED2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FED4: ;
    ecx = MEM32(ecx * 4 + 0x8F0040);
    PUSH32(esp, 0x0022FEE0u); RECOMP_ABI_CALL(0x0002BDBFu, sub_0002BDBF); /* call 0x0002BDBF */

loc_0022FEE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022FF00
 * Original: 0x0022FF00 - 0x00230006 (262 bytes, 75 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022FF00: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230003; /* ja: above (unsigned >) */

loc_0022FF0F: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x230008); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0022FF16u) goto loc_0022FF16;
    if (_jt == 0x0022FF46u) goto loc_0022FF46;
    if (_jt == 0x0022FF76u) goto loc_0022FF76;
    if (_jt == 0x0022FFA6u) goto loc_0022FFA6;
    if (_jt == 0x0022FFD6u) goto loc_0022FFD6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0022FF16: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022FF36; /* je: equal / zero */

loc_0022FF20: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FF38; /* jne: not equal / not zero */

loc_0022FF23: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF36: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FF38: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF46: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022FF66; /* je: equal / zero */

loc_0022FF50: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FF68; /* jne: not equal / not zero */

loc_0022FF53: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF66: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FF68: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF76: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022FF96; /* je: equal / zero */

loc_0022FF80: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FF98; /* jne: not equal / not zero */

loc_0022FF83: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FF98: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFA6: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022FFC6; /* je: equal / zero */

loc_0022FFB0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FFC8; /* jne: not equal / not zero */

loc_0022FFB3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FFC8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFD6: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0022FFF6; /* je: equal / zero */

loc_0022FFE0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FFF8; /* jne: not equal / not zero */

loc_0022FFE3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FFF8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00230003: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022FF4E
 * Original: 0x0022FF4E - 0x00230006 (184 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FF4E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022FF4E: ;
    if (_flags /* je: equal / zero */) goto loc_0022FF66;

loc_0022FF50: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FF68; /* jne: not equal / not zero */

loc_0022FF53: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF66: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FF68: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FF98; /* jne: not equal / not zero */

loc_0022FF83: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FF98: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FFC8; /* jne: not equal / not zero */

loc_0022FFB3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FFC8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FFF8; /* jne: not equal / not zero */

loc_0022FFE3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FFF8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0022FF50
 * Original: 0x0022FF50 - 0x00230006 (182 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022FF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022FF50: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FF68; /* jne: not equal / not zero */

loc_0022FF53: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF68: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FF98; /* jne: not equal / not zero */

loc_0022FF83: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FF96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FF98: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FFC8; /* jne: not equal / not zero */

loc_0022FFB3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FFC8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0022FFF8; /* jne: not equal / not zero */

loc_0022FFE3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0022FFF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0022FFF8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00230006
 * Original: 0x00230006 - 0x00230288 (642 bytes, 270 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230006(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230006: ;
    edi = edi;
    PUSH32(esp, 0 /* seg:ss */);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -1) = MEM8(esi + -1) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi + -1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) (void)0; /* goto loc_00230011 - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_00230012: ;
    SET_LO8(eax, LO8(eax) & MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023001D
 * Original: 0x0023001D - 0x00230288 (619 bytes, 258 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023001D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023001D: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023001F
 * Original: 0x0023001F - 0x00230288 (617 bytes, 256 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023001F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023001F: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00230021
 * Original: 0x00230021 - 0x00230288 (615 bytes, 254 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230021(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230021: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00230022
 * Original: 0x00230022 - 0x00230288 (614 bytes, 253 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230022(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230022: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00230023
 * Original: 0x00230023 - 0x00230288 (613 bytes, 252 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230023: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00230028
 * Original: 0x00230028 - 0x00230288 (608 bytes, 247 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230028(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230028: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023002B
 * Original: 0x0023002B - 0x00230288 (605 bytes, 244 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023002B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023002B: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0023005D
 * Original: 0x0023005D - 0x00230288 (555 bytes, 194 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023005D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0023005D: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00230285; /* ja: above (unsigned >) */

loc_0023007D: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x230288); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00230085u) goto loc_00230085;
    if (_jt == 0x002300ECu) goto loc_002300EC;
    if (_jt == 0x00230153u) goto loc_00230153;
    if (_jt == 0x002301BAu) goto loc_002301BA;
    if (_jt == 0x00230221u) goto loc_00230221;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00230085: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023009B; /* je: equal / zero */

loc_00230091: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023009D; /* jne: not equal / not zero */

loc_00230094: ;
    eax = 1;
    goto loc_0023009D;

loc_0023009B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023009D: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002300B5u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002300B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002300D9; /* je: equal / zero */

loc_002300C0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002300DB; /* jne: not equal / not zero */

loc_002300C3: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002300DB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B4B) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002300EC: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230102; /* je: equal / zero */

loc_002300F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230104; /* jne: not equal / not zero */

loc_002300FB: ;
    eax = 1;
    goto loc_00230104;

loc_00230102: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230104: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0023011Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023011C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230140; /* je: equal / zero */

loc_00230127: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230142; /* jne: not equal / not zero */

loc_0023012A: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230140: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230142: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B6D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230153: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230169; /* je: equal / zero */

loc_0023015F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023016B; /* jne: not equal / not zero */

loc_00230162: ;
    eax = 1;
    goto loc_0023016B;

loc_00230169: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023016B: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B6E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B6E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230183u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230183: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301A7; /* je: equal / zero */

loc_0023018E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301A9; /* jne: not equal / not zero */

loc_00230191: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B8D) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002301BA: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002301D0; /* je: equal / zero */

loc_002301C6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002301D2; /* jne: not equal / not zero */

loc_002301C9: ;
    eax = 1;
    goto loc_002301D2;

loc_002301D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002301D2: ;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5B4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002301EAu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002301EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0023020E; /* je: equal / zero */

loc_002301F5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230210; /* jne: not equal / not zero */

loc_002301F8: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0023020E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230210: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B53) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230221: ;
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230237; /* je: equal / zero */

loc_0023022D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230239; /* jne: not equal / not zero */

loc_00230230: ;
    eax = 1;
    goto loc_00230239;

loc_00230237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230239: ;
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5B54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00230251u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00230251: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00230275; /* je: equal / zero */

loc_0023025C: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00230277; /* jne: not equal / not zero */

loc_0023025F: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00230275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00230277: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + 0x8F5B57) = 0;
    POP32(esp, esi);

loc_00230285: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00230EAA
 * Original: 0x00230EAA - 0x00231105 (603 bytes, 467 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00230EAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00230EAA: ;
    edi = edi;
    SET_LO8(eax, LO8(eax) & 9);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx) = MEM32(ebx) | esp;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + ecx + 0x9AC0023) = MEM8(ecx + ecx + 0x9AC0023) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + ecx + 0x9AC0023)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("aam 9", 0x00230EBCu); /* TODO: aam 9 */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0 /* seg:cs */);
    SET_HI8(eax, HI8(eax) | MEM8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0xA) = MEM8(ecx + 0xA) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = MEM32(edx) | 0xABC0023;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_00230EDC - dead code, label not in function */ /* loop: ecx is non-zero */

loc_00230ED2: ;
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx) = MEM8(ebx) | LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = esp | MEM32(ebx);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + ecx + 0xBEF0023) = MEM8(ebx + ecx + 0xBEF0023) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebx + ecx + 0xBEF0023)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | 0x23);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax | 0xD510023;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 0x23);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x7900230C) = MEM8(eax + 0x7900230C) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x7900230C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp = esp | MEM32(ebx);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + ecx + 0xDC70023) = MEM8(ebp + ecx + 0xDC70023) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + ecx + 0xDC70023)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xE380023) = MEM32(0xE380023) - 1;
    _fa = (uint32_t)(MEM32(0xE380023)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (_flags /* jno: not overflow */) goto loc_00230F20;

loc_00230F12: ;
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00230F20: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002310D8; /* je: equal / zero */

loc_002310AA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00231102; /* jne: not equal / not zero */

loc_002310AD: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002310BF; /* je: equal / zero */

loc_002310B5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002310C1; /* jne: not equal / not zero */

loc_002310B8: ;
    eax = 1;
    goto loc_002310C1;

loc_002310BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002310C1: ;
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C00;
    esp += 16; return; /* ret 12 */

loc_002310D8: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002310EC; /* je: equal / zero */

loc_002310E2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002310EE; /* jne: not equal / not zero */

loc_002310E5: ;
    eax = 1;
    goto loc_002310EE;

loc_002310EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002310EE: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    eax = eax + edx + 0x8F5BF0;

loc_00231102: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00231120
 * Original: 0x00231120 - 0x0023121A (250 bytes, 83 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00231120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00231120: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_002311A6; /* je: equal / zero */

loc_0023112B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00231215; /* jne: not equal / not zero */

loc_00231132: ;
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00231148; /* je: equal / zero */

loc_0023113E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0023114A; /* jne: not equal / not zero */

loc_00231141: ;
    eax = 1;
    goto loc_0023114A;

loc_00231148: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0023114A: ;
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0x18);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x54);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    edx = eax + esi + 0x8F5C00;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0023116Bu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0023116B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00231191; /* je: equal / zero */

loc_00231176: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00231193; /* jne: not equal / not zero */

loc_00231179: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    POP32(esp, edi);
    MEM8(eax + esi + 0x8F5C0F) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00231191: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00231193: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    POP32(esp, edi);
    MEM8(eax + esi + 0x8F5C0F) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_002311A6: ;
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002311BC; /* je: equal / zero */

loc_002311B2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002311BE; /* jne: not equal / not zero */

loc_002311B5: ;
    eax = 1;
    goto loc_002311BE;

loc_002311BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002311BE: ;
    esi = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0x18);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x54);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    edx = eax + esi + 0x8F5BF0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002311DFu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_002311DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00231205; /* je: equal / zero */

loc_002311EA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00231207; /* jne: not equal / not zero */

loc_002311ED: ;
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    POP32(esp, edi);
    MEM8(eax + esi + 0x8F5BFF) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00231205: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00231207: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM8(eax + esi + 0x8F5BFF) = 0;

loc_00231215: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00231260
 * Original: 0x00231260 - 0x0023171C (1212 bytes, 312 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00231260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00231260: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00231717; /* ja: above (unsigned >) */

loc_0023126D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x23171C); /* switch: 29 entries, 29 targets */
    if (_jt == 0x00231274u) goto loc_00231274;
    if (_jt == 0x0023129Du) goto loc_0023129D;
    if (_jt == 0x002312C9u) goto loc_002312C9;
    if (_jt == 0x002312F3u) goto loc_002312F3;
    if (_jt == 0x0023131Au) goto loc_0023131A;
    if (_jt == 0x00231341u) goto loc_00231341;
    if (_jt == 0x0023136Bu) goto loc_0023136B;
    if (_jt == 0x00231395u) goto loc_00231395;
    if (_jt == 0x002313BFu) goto loc_002313BF;
    if (_jt == 0x002313E7u) goto loc_002313E7;
    if (_jt == 0x0023140Fu) goto loc_0023140F;
    if (_jt == 0x00231436u) goto loc_00231436;
    if (_jt == 0x0023145Du) goto loc_0023145D;
    if (_jt == 0x00231484u) goto loc_00231484;
    if (_jt == 0x002314AEu) goto loc_002314AE;
    if (_jt == 0x002314D8u) goto loc_002314D8;
    if (_jt == 0x00231502u) goto loc_00231502;
    if (_jt == 0x0023152Au) goto loc_0023152A;
    if (_jt == 0x00231551u) goto loc_00231551;
    if (_jt == 0x00231578u) goto loc_00231578;
    if (_jt == 0x002315A2u) goto loc_002315A2;
    if (_jt == 0x002315CCu) goto loc_002315CC;
    if (_jt == 0x002315F6u) goto loc_002315F6;
    if (_jt == 0x0023161Eu) goto loc_0023161E;
    if (_jt == 0x00231648u) goto loc_00231648;
    if (_jt == 0x0023166Fu) goto loc_0023166F;
    if (_jt == 0x00231699u) goto loc_00231699;
    if (_jt == 0x002316C3u) goto loc_002316C3;
    if (_jt == 0x002316EDu) goto loc_002316ED;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00231274: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231281u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231281: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C10);
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_0023129D: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002312AAu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002312AA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002312C9: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002312D6u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002312D6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002312F3: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231300u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231300: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 16; return; /* ret 12 */

loc_0023131A: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231327u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231327: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C14);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231341: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023134Eu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023134E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_0023136B: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231378u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231378: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231395: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002313A2u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002313A2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002313BF: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002313CCu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002313CC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = ZX8(MEM8(eax + ecx + 0x8F5C17));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002313E7: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002313F4u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002313F4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = ZX8(MEM8(eax + ecx + 0x8F5C23));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_0023140F: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023141Cu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023141C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C24);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231436: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231443u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231443: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1E) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 16; return; /* ret 12 */

loc_0023145D: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023146Au); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023146A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C18);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231484: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231491u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231491: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002314AE: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002314BBu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002314BB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002314D8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002314E5u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002314E5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231502: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023150Fu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023150F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = ZX8(MEM8(eax + ecx + 0x8F5C1B));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_0023152A: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231537u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231537: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esp += 16; return; /* ret 12 */

loc_00231551: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023155Eu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023155E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C1C);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231578: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231585u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231585: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002315A2: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002315AFu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002315AF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002315CC: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002315D9u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002315D9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002315F6: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231603u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231603: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = ZX8(MEM8(eax + ecx + 0x8F5C1F));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_0023161E: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023162Bu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023162B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C1C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1E) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231648: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00231655u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_00231655: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C20);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_0023166F: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0023167Cu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_0023167C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231699: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002316A6u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002316A6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002316C3: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002316D0u); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002316D0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_002316ED: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002316FAu); RECOMP_ABI_CALL(0x0002A816u, sub_0002A816); /* call 0x0002A816 */

loc_002316FA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C20);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 16; return; /* ret 12 */

loc_00231717: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00232512
 * Original: 0x00232512 - 0x00232C1A (1800 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232512(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232512: ;
    edi = edi;
    RECOMP_UNIMPL("in al, 0x20", 0x00232514u); /* TODO: in al, 0x20 */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x39002321;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx) = MEM32(ebx) & esp;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x21) = MEM8(ebx + 0x21) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x21)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_HI8(eax, MEM8(ecx));
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, 0x21);
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00232C1A(); return; /* fallthrough 0x00232C1A */

}

/**
 * sub_00232C1A
 * Original: 0x00232C1A - 0x00232E34 (538 bytes, 443 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232C1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00232C1A: ;
    edi = edi;
    RECOMP_UNIMPL("les esp, ptr [esi]", 0x00232C1Cu); /* TODO: les esp, ptr [esi] */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(esi)); return; /* indirect tail jmp */

    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), MEM8(edi) (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00232C51; /* jne: not equal / not zero */

loc_00232C2A: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* wait - FPU sync */
    RECOMP_UNIMPL("daa", 0x00232C2Du); /* TODO: daa */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(MEM32(edi)), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        MEM32(edi) = _sv << _sc;
        _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 1; /* stc */
    RECOMP_UNIMPL("daa", 0x00232C35u); /* TODO: daa */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(ebx)) < (uint32_t)(HI8(eax)));
    MEM8(ebx) = MEM8(ebx) - HI8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x28)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + 0x28) = MEM8(ebp + 0x28) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x28)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x23);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -587193560)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(esi + -587193560) = MEM8(esi + -587193560) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi + -587193560)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(ebx)) < (uint32_t)(HI8(eax)));
    MEM8(ebx) = MEM8(ebx) - HI8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x3B002329)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(0x3B002329) = MEM8(0x3B002329) + LO8(edx);
    _fa = (uint32_t)(MEM8(0x3B002329)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00232C51: ;
    _fb = (uint32_t)(esp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx)) < (uint32_t)(esp));
    MEM32(ebx) = MEM32(ebx) - esp;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x29)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + 0x29) = MEM8(ecx + 0x29) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x29)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("pushfd", 0x00232C58u); /* TODO: pushfd */
    _fb = (uint32_t)(esp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx)) < (uint32_t)(esp));
    MEM32(ebx) = MEM32(ebx) - esp;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + LO8(edx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(esp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx)) < (uint32_t)(esp));
    MEM32(ebx) = MEM32(ebx) - esp;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(eax)) < (uint32_t)(MEM8(ebx)));
    SET_HI8(eax, HI8(eax) - MEM8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x2A)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + 0x2A) = MEM8(ebx + 0x2A) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x2A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _tmp = MEM8(edx);
    MEM8(edx) = HI8(ecx);
    SET_HI8(ecx, _tmp); }
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(MEM32(edx)), _sc=(uint32_t)(0x23) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        MEM32(edx) = _sv >> _sc;
        _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(eax)) < (uint32_t)(MEM8(ebx)));
    SET_HI8(eax, HI8(eax) - MEM8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + HI8(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(MEM32(ebx)));
    esp = esp - MEM32(ebx);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x2B)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx + 0x2B) = MEM8(edx + 0x2B) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx + 0x2B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE100232Bu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xE100232Bu (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(MEM32(ebx)));
    esp = esp - MEM32(ebx);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    ecx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00232E14; /* je: equal / zero */

loc_00232E0A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00232E16; /* jne: not equal / not zero */

loc_00232E0D: ;
    eax = 1;
    goto loc_00232E16;

loc_00232E14: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00232E16: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(esp + 0xC);
    ecx = ecx + ecx * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + eax + 0x8F5B98));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00232E50
 * Original: 0x00232E50 - 0x00232E87 (55 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00232E50: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00232E64; /* je: equal / zero */

loc_00232E5A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00232E66; /* jne: not equal / not zero */

loc_00232E5D: ;
    eax = 1;
    goto loc_00232E66;

loc_00232E64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00232E66: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = ecx + ecx * 2;
    MEM8(ecx + eax + 0x8F5B98) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00232EA0
 * Original: 0x00232EA0 - 0x00232ED1 (49 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00232EA0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00232EB4; /* je: equal / zero */

loc_00232EAA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00232EB6; /* jne: not equal / not zero */

loc_00232EAD: ;
    eax = 1;
    goto loc_00232EB6;

loc_00232EB4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00232EB6: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3BC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xC);
    eax = ZX8(MEM8(ecx + eax * 2 + 0x8F5BA4));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00232EE0
 * Original: 0x00232EE0 - 0x00232F14 (52 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00232EE0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00232EF4; /* je: equal / zero */

loc_00232EEA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00232EF6; /* jne: not equal / not zero */

loc_00232EED: ;
    eax = 1;
    goto loc_00232EF6;

loc_00232EF4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00232EF6: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3BC);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(edx + eax * 2 + 0x8F5BA4) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00232F30
 * Original: 0x00232F30 - 0x00232F64 (52 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00232F30: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00232F44; /* je: equal / zero */

loc_00232F3A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00232F46; /* jne: not equal / not zero */

loc_00232F3D: ;
    eax = 1;
    goto loc_00232F46;

loc_00232F44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00232F46: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(esp + 0xC);
    ecx = ecx + ecx * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + eax + 0x8F5BAA));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00232F80
 * Original: 0x00232F80 - 0x00232FB7 (55 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00232F80: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00232F94; /* je: equal / zero */

loc_00232F8A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00232F96; /* jne: not equal / not zero */

loc_00232F8D: ;
    eax = 1;
    goto loc_00232F96;

loc_00232F94: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00232F96: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = ecx + ecx * 4;
    MEM8(ecx + eax + 0x8F5BAA) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00232FD0
 * Original: 0x00232FD0 - 0x00233001 (49 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00232FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00232FD0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00232FE4; /* je: equal / zero */

loc_00232FDA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00232FE6; /* jne: not equal / not zero */

loc_00232FDD: ;
    eax = 1;
    goto loc_00232FE6;

loc_00232FE4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00232FE6: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1DE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xC);
    eax = ZX8(MEM8(ecx + eax * 4 + 0x8F5BB4));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233010
 * Original: 0x00233010 - 0x00233044 (52 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233010: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233024; /* je: equal / zero */

loc_0023301A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233026; /* jne: not equal / not zero */

loc_0023301D: ;
    eax = 1;
    goto loc_00233026;

loc_00233024: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233026: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1DE);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(edx + eax * 4 + 0x8F5BB4) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00233060
 * Original: 0x00233060 - 0x00233091 (49 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233060: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233074; /* je: equal / zero */

loc_0023306A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233076; /* jne: not equal / not zero */

loc_0023306D: ;
    eax = 1;
    goto loc_00233076;

loc_00233074: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233076: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1DE);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0xC);
    eax = ZX8(MEM8(ecx + eax * 4 + 0x8F5BBE));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002330A0
 * Original: 0x002330A0 - 0x002330D4 (52 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002330A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002330A0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002330B4; /* je: equal / zero */

loc_002330AA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002330B6; /* jne: not equal / not zero */

loc_002330AD: ;
    eax = 1;
    goto loc_002330B6;

loc_002330B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002330B6: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1DE);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(edx + eax * 4 + 0x8F5BBE) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002330F0
 * Original: 0x002330F0 - 0x00233124 (52 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002330F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002330F0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233104; /* je: equal / zero */

loc_002330FA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233106; /* jne: not equal / not zero */

loc_002330FD: ;
    eax = 1;
    goto loc_00233106;

loc_00233104: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233106: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(esp + 0xC);
    ecx = ecx + ecx * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(ecx + eax + 0x8F5BC6));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233140
 * Original: 0x00233140 - 0x00233177 (55 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233140: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233154; /* je: equal / zero */

loc_0023314A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233156; /* jne: not equal / not zero */

loc_0023314D: ;
    eax = 1;
    goto loc_00233156;

loc_00233154: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233156: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esp + 0x10));
    ecx = ecx + ecx * 2;
    MEM8(ecx + eax + 0x8F5BC6) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00233190
 * Original: 0x00233190 - 0x002331CE (62 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233190: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002331B7; /* je: equal / zero */

loc_0023319A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002331B9; /* jne: not equal / not zero */

loc_0023319D: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BCC));
    esp += 12; return; /* ret 8 */

loc_002331B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002331B9: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BCC));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002331E0
 * Original: 0x002331E0 - 0x0023320E (46 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002331E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002331E0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002331F4; /* je: equal / zero */

loc_002331EA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002331F6; /* jne: not equal / not zero */

loc_002331ED: ;
    eax = 1;
    goto loc_002331F6;

loc_002331F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002331F6: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(esp + 8);
    MEM8(eax + edx + 0x8F5BCC) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233220
 * Original: 0x00233220 - 0x0023325E (62 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233220: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233247; /* je: equal / zero */

loc_0023322A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233249; /* jne: not equal / not zero */

loc_0023322D: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BBC));
    esp += 12; return; /* ret 8 */

loc_00233247: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233249: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BBC));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233270
 * Original: 0x00233270 - 0x0023329E (46 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233270: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233284; /* je: equal / zero */

loc_0023327A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233286; /* jne: not equal / not zero */

loc_0023327D: ;
    eax = 1;
    goto loc_00233286;

loc_00233284: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233286: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(esp + 8);
    MEM8(eax + edx + 0x8F5BBC) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002332B0
 * Original: 0x002332B0 - 0x002332EE (62 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002332B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002332B0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002332D7; /* je: equal / zero */

loc_002332BA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002332D9; /* jne: not equal / not zero */

loc_002332BD: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BD3));
    esp += 12; return; /* ret 8 */

loc_002332D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002332D9: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BD3));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233300
 * Original: 0x00233300 - 0x0023332E (46 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233300: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233314; /* je: equal / zero */

loc_0023330A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233316; /* jne: not equal / not zero */

loc_0023330D: ;
    eax = 1;
    goto loc_00233316;

loc_00233314: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233316: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(esp + 8);
    MEM8(eax + edx + 0x8F5BD3) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233340
 * Original: 0x00233340 - 0x0023337E (62 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233340: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233367; /* je: equal / zero */

loc_0023334A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233369; /* jne: not equal / not zero */

loc_0023334D: ;
    ecx = MEM32(esp + 8);
    eax = 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BCE));
    esp += 12; return; /* ret 8 */

loc_00233367: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233369: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    eax = ZX8(MEM8(eax + ecx + 0x8F5BCE));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233390
 * Original: 0x00233390 - 0x002333BE (46 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233390: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002333A4; /* je: equal / zero */

loc_0023339A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002333A6; /* jne: not equal / not zero */

loc_0023339D: ;
    eax = 1;
    goto loc_002333A6;

loc_002333A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002333A6: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    edx = MEM32(esp + 8);
    MEM8(eax + edx + 0x8F5BCE) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002333D0
 * Original: 0x002333D0 - 0x002334AC (220 bytes, 72 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002333D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002333D0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x8F5B18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8F5B18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ecx + edx * 2;
    PUSH32(esp, edi);
    eax = edx + eax + 0x80;
    if (CMP_EQ(_fa, _fb)) goto loc_00233474; /* je: equal / zero */

loc_002333F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233406; /* jne: not equal / not zero */

loc_002333FD: ;
    eax = ecx + edx * 2 + 0x8C;
    goto loc_00233474;

loc_00233406: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233417; /* jne: not equal / not zero */

loc_0023340B: ;
    ecx = ecx + edx * 4;
    eax = edx + ecx + 0x92;
    goto loc_00233474;

loc_00233417: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233425; /* jne: not equal / not zero */

loc_0023341C: ;
    eax = ecx + edx * 4 + 0x9C;
    goto loc_00233474;

loc_00233425: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233432; /* jne: not equal / not zero */

loc_0023342A: ;
    eax = ecx + 0xA4;
    goto loc_00233474;

loc_00233432: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233440; /* jne: not equal / not zero */

loc_00233437: ;
    eax = ecx + edx * 4 + 0xA6;
    goto loc_00233474;

loc_00233440: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023344F; /* jne: not equal / not zero */

loc_00233445: ;
    _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + edx * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00233474;

loc_0023344F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0023345C; /* jne: not equal / not zero */

loc_00233454: ;
    eax = ecx + 0xB4;
    goto loc_00233474;

loc_0023345C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233469; /* jne: not equal / not zero */

loc_00233461: ;
    eax = ecx + 0xB6;
    goto loc_00233474;

loc_00233469: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233474; /* jne: not equal / not zero */

loc_0023346E: ;
    eax = ecx + 0xBB;

loc_00233474: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    edx = ZX8(MEM8(eax + esi));
    edi = MEM32(esp + 0x20);
    MEM8(eax + esi) = LO8(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002334A7; /* jle: less or equal (signed <=) */

loc_0023348D: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_00233490: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002334A1; /* je: equal / zero */

loc_00233494: ;
    ebx = ZX8(MEM8(ecx + eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002334A1; /* jne: not equal / not zero */

loc_0023349E: ;
    MEM8(ecx + eax) = LO8(edx);

loc_002334A1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00233490; /* jl: less (signed <) */

loc_002334A6: ;
    POP32(esp, ebx);

loc_002334A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_002334F0
 * Original: 0x002334F0 - 0x002335E0 (240 bytes, 81 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002334F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002334F0: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233507; /* je: equal / zero */

loc_002334FD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233509; /* jne: not equal / not zero */

loc_00233500: ;
    ecx = 1;
    goto loc_00233509;

loc_00233507: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233509: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = ecx + 0x8F5C2C;
    PUSH32(esp, edi);
    eax = edx;
    esi = 0x14;

loc_00233520: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0xFFF7FFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x54)) >> 32) & 1);
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233520; /* jne: not equal / not zero */

loc_0023352C: ;
    eax = 1;
    edi = ecx + 0x8F5C80;
    MEM32(esp + 0x1C) = eax;
    ebp = edx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x14;
    /* nop */

loc_00233550: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp), 0x80000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_002335B4; /* jne: not equal / not zero */

loc_00233559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002335B4; /* jge: greater or equal (signed >=) */

loc_0023355E: ;
    edx = 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00233565: ;
    esi = edi + -44;
    eax = ebp + -44;
    goto loc_00233570;

    /* nop */

loc_00233570: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00233594; /* jne: not equal / not zero */

loc_00233578: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00233590; /* je: equal / zero */

loc_0023357C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00233594; /* jne: not equal / not zero */

loc_00233586: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00233570; /* jne: not equal / not zero */

loc_00233590: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00233599;

loc_00233594: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00233599: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002335AA; /* jne: not equal / not zero */

loc_0023359D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp) = MEM32(ebp) | 0x80000;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(edi) = MEM32(edi) | 0x80000;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002335AA: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x54)) >> 32) & 1);
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233565; /* jne: not equal / not zero */

loc_002335B0: ;
    eax = MEM32(esp + 0x1C);

loc_002335B4: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x54)) >> 32) & 1);
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x54)) >> 32) & 1);
    ebp = ebp + 0x54;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    if ((_fa != 0)) goto loc_00233550; /* jne: not equal / not zero */

loc_002335D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233620
 * Original: 0x00233620 - 0x00233650 (48 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233620: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233640; /* je: equal / zero */

loc_0023362A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233642; /* jne: not equal / not zero */

loc_0023362D: ;
    ecx = 1;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0023363Au); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_0023363A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00233640: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233642: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0023364Au); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_0023364A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233660
 * Original: 0x00233660 - 0x00233785 (293 bytes, 99 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233660: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233674; /* je: equal / zero */

loc_0023366A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233676; /* jne: not equal / not zero */

loc_0023366D: ;
    eax = 1;
    goto loc_00233676;

loc_00233674: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233676: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    eax = ecx + eax * 2;
    esi = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = MEM32(esi + 0x8F6ADC);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002336F7; /* je: equal / zero */

loc_00233696: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x18;
    /* nop */

loc_002336A0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8F6AC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8F6AC4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002336A9; /* jne: not equal / not zero */

loc_002336A8: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002336A9: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8F6AD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8F6AD0), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002336B2; /* jne: not equal / not zero */

loc_002336B1: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002336B2: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8F6ADC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8F6ADC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002336BB; /* jne: not equal / not zero */

loc_002336BA: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002336BB: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8F6AE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8F6AE8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002336C4; /* jne: not equal / not zero */

loc_002336C3: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002336C4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8F6AF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8F6AF4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002336CD; /* jne: not equal / not zero */

loc_002336CC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002336CD: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8F6B00)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8F6B00), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002336D6; /* jne: not equal / not zero */

loc_002336D5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002336D6: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002336A0; /* jl: less (signed <) */

loc_002336E1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002336F7; /* jg: greater (signed >) */

loc_002336E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002336F0u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_002336F0: ;
    ecx = eax;
    PUSH32(esp, 0x002336F7u); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_002336F7: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00233710; /* je: equal / zero */

loc_002336FF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00233709u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00233709: ;
    ecx = eax;
    PUSH32(esp, 0x00233710u); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_00233710: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x8F6AE4) = LO8(edx);
    MEM32(esi + 0x8F6ADC) = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x18;
    goto loc_00233730;

    /* nop */

loc_00233730: ;
    esi = MEM32(eax + 0x8F6AC4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00233741; /* je: equal / zero */

loc_0023373C: ;
    ecx = 1;

loc_00233741: ;
    _fa = (uint32_t)(MEM32(eax + 0x8F6AD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8F6AD0), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023374A; /* je: equal / zero */

loc_00233749: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0023374A: ;
    _fa = (uint32_t)(MEM32(eax + 0x8F6ADC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8F6ADC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00233753; /* je: equal / zero */

loc_00233752: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00233753: ;
    _fa = (uint32_t)(MEM32(eax + 0x8F6AE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8F6AE8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023375C; /* je: equal / zero */

loc_0023375B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0023375C: ;
    _fa = (uint32_t)(MEM32(eax + 0x8F6AF4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8F6AF4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00233765; /* je: equal / zero */

loc_00233764: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00233765: ;
    _fa = (uint32_t)(MEM32(eax + 0x8F6B00)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x8F6B00), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0023376E; /* je: equal / zero */

loc_0023376D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0023376E: ;
    MEM8(edx + 0x8F6B6C) = LO8(ecx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00233730; /* jl: less (signed <) */

loc_0023377F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002337D0
 * Original: 0x002337D0 - 0x00233803 (51 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002337D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002337D0: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002337E4; /* je: equal / zero */

loc_002337DA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002337E6; /* jne: not equal / not zero */

loc_002337DD: ;
    eax = 1;
    goto loc_002337E6;

loc_002337E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002337E6: ;
    ecx = MEM32(esp + 0xC);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    edx = eax + eax * 2;
    ecx = MEM32(edx * 4 + 0x8F6ADC);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233810
 * Original: 0x00233810 - 0x0023386C (92 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233810: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00233820; /* jne: not equal / not zero */

loc_0023381A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00233820: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x8F6ADC;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00233830;

    /* nop */

loc_00233830: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edx;

loc_00233834: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00233858; /* je: equal / zero */

loc_00233838: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00233834; /* jl: less (signed <) */

loc_00233841: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00233830; /* jl: less (signed <) */

loc_00233850: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00233858: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233890
 * Original: 0x00233890 - 0x002338C1 (49 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233890: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002338A4; /* je: equal / zero */

loc_0023389A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002338A6; /* jne: not equal / not zero */

loc_0023389D: ;
    eax = 1;
    goto loc_002338A6;

loc_002338A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002338A6: ;
    ecx = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    edx = eax + eax * 2;
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x8F6AE0) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002338D0
 * Original: 0x002338D0 - 0x002338FD (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002338D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002338D0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002338E4; /* je: equal / zero */

loc_002338DA: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002338E6; /* jne: not equal / not zero */

loc_002338DD: ;
    eax = 1;
    goto loc_002338E6;

loc_002338E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002338E6: ;
    ecx = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    edx = eax + eax * 2;
    eax = MEM32(edx * 4 + 0x8F6AE0);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233910
 * Original: 0x00233910 - 0x00233941 (49 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233910: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233924; /* je: equal / zero */

loc_0023391A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233926; /* jne: not equal / not zero */

loc_0023391D: ;
    eax = 1;
    goto loc_00233926;

loc_00233924: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233926: ;
    ecx = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    edx = eax + eax * 2;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(edx * 4 + 0x8F6AE4) = LO8(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00233950
 * Original: 0x00233950 - 0x0023397D (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233950: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00233964; /* je: equal / zero */

loc_0023395A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00233966; /* jne: not equal / not zero */

loc_0023395D: ;
    eax = 1;
    goto loc_00233966;

loc_00233964: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233966: ;
    ecx = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    edx = eax + eax * 2;
    SET_LO8(eax, MEM8(edx * 4 + 0x8F6AE4));
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233990
 * Original: 0x00233990 - 0x002339F8 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 1;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(0x8F6A65) = LO8(ecx);
    MEM8(0x8F6A64) = LO8(ecx);
    eax = 0x8F6B24;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002339B0: ;
    MEM32(eax + -72) = edx;
    MEM32(eax) = edx;
    MEM32(eax + -68) = edx;
    MEM32(eax + 4) = edx;
    MEM8(eax + -64) = LO8(ebx);
    MEM8(eax + 8) = LO8(ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F6B6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8F6B6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002339B0; /* jl: less (signed <) */

loc_002339CB: ;
    _fa = (uint32_t)(MEM8(0x8C36FC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8C36FC), LO8(ebx) (8-bit) */
    MEM8(0x8F6B6C) = LO8(ebx);
    MEM8(0x8F6B6D) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002339EA; /* jne: not equal / not zero */

loc_002339DF: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002339EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002339E8u); } /* indirect call */
    }

loc_002339EA: ;
    PUSH32(esp, 0x002339EFu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_002339EF: ;
    POP32(esp, esi);
    ecx = eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001E890(); return; /* tail jmp 0x0001E890 */

}

/**
 * sub_00233A20
 * Original: 0x00233A20 - 0x00233AB7 (151 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233A20: ;
    ecx = MEM32(0x8F9CCC);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00233A40; /* je: equal / zero */

loc_00233A31: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00233A40; /* je: equal / zero */

loc_00233A34: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00233A3B; /* je: equal / zero */

loc_00233A37: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00233A43;

loc_00233A3B: ;
    ecx = MEM32(ecx + 8);
    goto loc_00233A43;

loc_00233A40: ;
    ecx = MEM32(ecx + 4);

loc_00233A43: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00233A4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00233A48u); } /* indirect call */
    }

loc_00233A4B: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, 0x00233A56u); RECOMP_ABI_CALL(0x00036940u, sub_00036940); /* call 0x00036940 */

loc_00233A56: ;
    edx = MEM32(esp + 0xB4);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = 0x7F7A14;
    PUSH32(esp, 0x00233A74u); RECOMP_ABI_CALL(0x00016280u, sub_00016280); /* call 0x00016280 */

loc_00233A74: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00233A76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00233A7Cu); RECOMP_ABI_CALL(0x00012BD5u, sub_00012BD5); /* call 0x00012BD5 */

loc_00233A7C: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00233A84u); RECOMP_ABI_CALL(0x0002984Eu, sub_0002984E); /* call 0x0002984E */

loc_00233A84: ;
    ecx = MEM32(esp + edi * 4 + 0x20);
    edx = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00233A94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00233A91u); } /* indirect call */
    }

loc_00233A94: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x26 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00233A76; /* jl: less (signed <) */

loc_00233A9A: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x14) = 0x7F7A14;
    PUSH32(esp, 0x00233AABu); RECOMP_ABI_CALL(0x000265EFu, sub_000265EF); /* call 0x000265EF */

loc_00233AAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233AE0
 * Original: 0x00233AE0 - 0x00233B53 (115 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0xE);
    eax = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x7FCF70;
    PUSH32(esp, 0x00233AF6u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00233AF6: ;
    PUSH32(esp, 0x28);
    ecx = esi + 0x12;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00233B03u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00233B03: ;
    PUSH32(esp, 0x80);
    edx = esi + 0x3A;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00233B13u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00233B13: ;
    PUSH32(esp, 0x1E0);
    eax = esi + 0xBA;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00233B26u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00233B26: ;
    PUSH32(esp, 0x1440);
    ecx = esi + 0x29C;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00233B39u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00233B39: ;
    PUSH32(esp, 0x200);
    edx = esi + 0x16DC;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00233B4Cu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00233B4C: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00233B70
 * Original: 0x00233B70 - 0x00233B8F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00233B70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FCF70;
    if (TEST_Z(_fa, _fb)) goto loc_00233B89; /* je: equal / zero */

loc_00233B80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00233B86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00233B86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00233B89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00233BA0
 * Original: 0x00233BA0 - 0x00233C54 (180 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233BA0: ;
    edx = MEM32(esp + 4);
    edx = edx + edx * 4;
    ecx = ecx + edx * 4 + 0x12;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00233C51; /* je: equal / zero */

loc_00233BB5: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00233C51; /* ja: above (unsigned >) */

loc_00233BC2: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x233C54); /* switch: 20 entries, 20 targets */
    if (_jt == 0x00233BC9u) goto loc_00233BC9;
    if (_jt == 0x00233BCFu) goto loc_00233BCF;
    if (_jt == 0x00233BD6u) goto loc_00233BD6;
    if (_jt == 0x00233BDDu) goto loc_00233BDD;
    if (_jt == 0x00233BE4u) goto loc_00233BE4;
    if (_jt == 0x00233BEBu) goto loc_00233BEB;
    if (_jt == 0x00233BF2u) goto loc_00233BF2;
    if (_jt == 0x00233BF9u) goto loc_00233BF9;
    if (_jt == 0x00233C00u) goto loc_00233C00;
    if (_jt == 0x00233C07u) goto loc_00233C07;
    if (_jt == 0x00233C0Eu) goto loc_00233C0E;
    if (_jt == 0x00233C15u) goto loc_00233C15;
    if (_jt == 0x00233C1Cu) goto loc_00233C1C;
    if (_jt == 0x00233C23u) goto loc_00233C23;
    if (_jt == 0x00233C2Au) goto loc_00233C2A;
    if (_jt == 0x00233C31u) goto loc_00233C31;
    if (_jt == 0x00233C38u) goto loc_00233C38;
    if (_jt == 0x00233C3Fu) goto loc_00233C3F;
    if (_jt == 0x00233C46u) goto loc_00233C46;
    if (_jt == 0x00233C4Du) goto loc_00233C4D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00233BC9: ;
    eax = ZX8(MEM8(ecx));
    esp += 12; return; /* ret 8 */

loc_00233BCF: ;
    eax = ZX8(MEM8(ecx + 1));
    esp += 12; return; /* ret 8 */

loc_00233BD6: ;
    eax = ZX8(MEM8(ecx + 2));
    esp += 12; return; /* ret 8 */

loc_00233BDD: ;
    eax = ZX8(MEM8(ecx + 3));
    esp += 12; return; /* ret 8 */

loc_00233BE4: ;
    eax = ZX8(MEM8(ecx + 4));
    esp += 12; return; /* ret 8 */

loc_00233BEB: ;
    eax = ZX8(MEM8(ecx + 5));
    esp += 12; return; /* ret 8 */

loc_00233BF2: ;
    eax = ZX8(MEM8(ecx + 6));
    esp += 12; return; /* ret 8 */

loc_00233BF9: ;
    eax = ZX8(MEM8(ecx + 7));
    esp += 12; return; /* ret 8 */

loc_00233C00: ;
    eax = ZX8(MEM8(ecx + 8));
    esp += 12; return; /* ret 8 */

loc_00233C07: ;
    eax = ZX8(MEM8(ecx + 9));
    esp += 12; return; /* ret 8 */

loc_00233C0E: ;
    eax = ZX8(MEM8(ecx + 0xA));
    esp += 12; return; /* ret 8 */

loc_00233C15: ;
    eax = ZX8(MEM8(ecx + 0xB));
    esp += 12; return; /* ret 8 */

loc_00233C1C: ;
    eax = ZX8(MEM8(ecx + 0xC));
    esp += 12; return; /* ret 8 */

loc_00233C23: ;
    eax = ZX8(MEM8(ecx + 0xD));
    esp += 12; return; /* ret 8 */

loc_00233C2A: ;
    eax = ZX8(MEM8(ecx + 0xE));
    esp += 12; return; /* ret 8 */

loc_00233C31: ;
    eax = ZX8(MEM8(ecx + 0xF));
    esp += 12; return; /* ret 8 */

loc_00233C38: ;
    eax = ZX8(MEM8(ecx + 0x10));
    esp += 12; return; /* ret 8 */

loc_00233C3F: ;
    eax = ZX8(MEM8(ecx + 0x11));
    esp += 12; return; /* ret 8 */

loc_00233C46: ;
    eax = ZX8(MEM8(ecx + 0x12));
    esp += 12; return; /* ret 8 */

loc_00233C4D: ;
    eax = ZX8(MEM8(ecx + 0x13));

loc_00233C51: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00233DDE
 * Original: 0x00233DDE - 0x00233ED1 (243 bytes, 131 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00233DDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00233DDE: ;
    edi = edi;
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D200023) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D200023 (32-bit) */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM8(0x3D340023)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_HI8(ebx, HI8(ebx) - MEM8(0x3D340023));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D480023) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D480023 (32-bit) */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D5C0023) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D5C0023 (32-bit) */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x23 (16-bit) */
    if (_flags /* jo: overflow */) goto loc_00233E43;

loc_00233E06: ;
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (_flags /* jp: parity */) goto loc_00233E47;

loc_00233E0A: ;
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0x3D8E0023)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x3D8E0023), HI8(ebx) (8-bit) */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = SX16(eax); /* cwde */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DA20023) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DA20023 (32-bit) */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3DCA0023) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3DCA0023 (32-bit) */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_HI8(edx, 0x3D);
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(0x3DD40023) = (uint32_t)(((int32_t)(int8_t)(MEM8(0x3DD40023))) >> ((0x23) & 31u));
    _fa = (uint32_t)(MEM8(0x3DD40023)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
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

loc_00233E43: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00233E47: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    edx = MEM32(esp + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    ecx = edx + ecx + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00233ECE; /* je: equal / zero */

loc_00233E91: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00233ECE; /* ja: above (unsigned >) */

loc_00233E9A: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x233ED4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00233EA1u) goto loc_00233EA1;
    if (_jt == 0x00233EA7u) goto loc_00233EA7;
    if (_jt == 0x00233EAEu) goto loc_00233EAE;
    if (_jt == 0x00233EB5u) goto loc_00233EB5;
    if (_jt == 0x00233EBCu) goto loc_00233EBC;
    if (_jt == 0x00233EC3u) goto loc_00233EC3;
    if (_jt == 0x00233ECAu) goto loc_00233ECA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00233EA1: ;
    eax = ZX8(MEM8(ecx));
    esp += 12; return; /* ret 8 */

loc_00233EA7: ;
    eax = ZX8(MEM8(ecx + 1));
    esp += 12; return; /* ret 8 */

loc_00233EAE: ;
    eax = ZX8(MEM8(ecx + 2));
    esp += 12; return; /* ret 8 */

loc_00233EB5: ;
    eax = ZX8(MEM8(ecx + 3));
    esp += 12; return; /* ret 8 */

loc_00233EBC: ;
    eax = ZX8(MEM8(ecx + 4));
    esp += 12; return; /* ret 8 */

loc_00233EC3: ;
    eax = ZX8(MEM8(ecx + 5));
    esp += 12; return; /* ret 8 */

loc_00233ECA: ;
    eax = ZX8(MEM8(ecx + 6));

loc_00233ECE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00234082
 * Original: 0x00234082 - 0x00234253 (465 bytes, 213 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00234082(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00234082: ;
    edi = edi;
    ecx -= 1; /* loop: count down */
    if (ecx != 0) (void)0; /* goto loc_002340C5 - dead code, label not in function */ /* loop: ecx is non-zero */

loc_00234086: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x0023408Du); RECOMP_ABI_CALL(0xEF2363CCu, sub_EF2363CC); /* call 0xEF2363CC */

loc_0023408D: ;
    RECOMP_UNIMPL("aas", 0x0023408Du); /* TODO: aas */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM8(edi)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM8(edi))); }
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_df = 1; /* std */
    RECOMP_UNIMPL("aas", 0x00234095u); /* TODO: aas */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x40)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax + 0x23);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(eax + 0x23)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax + 0x23) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(eax + 0x23)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("insd dword ptr es:[edi], dx", 0x002340C0u); /* TODO: insd dword ptr es:[edi], dx */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00234106; /* je: equal / zero */

loc_002340C6: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (_flags /* jnp: not parity */) goto loc_0023410A;

loc_002340CA: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("daa", 0x002340CCu); /* TODO: daa */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x3C002340;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00234106: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_0023410A: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    eax = edx + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x3A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00234250; /* je: equal / zero */

loc_0023414A: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00234250; /* ja: above (unsigned >) */

loc_00234157: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x234254); /* switch: 23 entries, 23 targets */
    if (_jt == 0x0023415Eu) goto loc_0023415E;
    if (_jt == 0x00234167u) goto loc_00234167;
    if (_jt == 0x00234171u) goto loc_00234171;
    if (_jt == 0x0023417Bu) goto loc_0023417B;
    if (_jt == 0x00234185u) goto loc_00234185;
    if (_jt == 0x0023418Fu) goto loc_0023418F;
    if (_jt == 0x00234199u) goto loc_00234199;
    if (_jt == 0x002341A3u) goto loc_002341A3;
    if (_jt == 0x002341ADu) goto loc_002341AD;
    if (_jt == 0x002341B7u) goto loc_002341B7;
    if (_jt == 0x002341C1u) goto loc_002341C1;
    if (_jt == 0x002341CBu) goto loc_002341CB;
    if (_jt == 0x002341D5u) goto loc_002341D5;
    if (_jt == 0x002341DFu) goto loc_002341DF;
    if (_jt == 0x002341E9u) goto loc_002341E9;
    if (_jt == 0x002341F3u) goto loc_002341F3;
    if (_jt == 0x002341FFu) goto loc_002341FF;
    if (_jt == 0x0023420Bu) goto loc_0023420B;
    if (_jt == 0x00234217u) goto loc_00234217;
    if (_jt == 0x00234223u) goto loc_00234223;
    if (_jt == 0x0023422Fu) goto loc_0023422F;
    if (_jt == 0x0023423Bu) goto loc_0023423B;
    if (_jt == 0x00234247u) goto loc_00234247;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0023415E: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_00234167: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 1) = LO8(edx);
    esp += 20; return; /* ret 16 */

loc_00234171: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 2) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_0023417B: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 3) = LO8(edx);
    esp += 20; return; /* ret 16 */

loc_00234185: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 4) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_0023418F: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 5) = LO8(edx);
    esp += 20; return; /* ret 16 */

loc_00234199: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 6) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_002341A3: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 7) = LO8(edx);
    esp += 20; return; /* ret 16 */

loc_002341AD: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 8) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_002341B7: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 9) = LO8(edx);
    esp += 20; return; /* ret 16 */

loc_002341C1: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 0x1A) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_002341CB: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x1B) = LO8(edx);
    esp += 20; return; /* ret 16 */

loc_002341D5: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 0x1C) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_002341DF: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x1D) = LO8(edx);
    esp += 20; return; /* ret 16 */

loc_002341E9: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax + 0x1E) = LO8(ecx);
    esp += 20; return; /* ret 16 */

loc_002341F3: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 0xA) = LO16(edx);
    esp += 20; return; /* ret 16 */

loc_002341FF: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0xC) = LO16(ecx);
    esp += 20; return; /* ret 16 */

loc_0023420B: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 0xE) = LO16(edx);
    esp += 20; return; /* ret 16 */

loc_00234217: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0x10) = LO16(ecx);
    esp += 20; return; /* ret 16 */

loc_00234223: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 0x18) = LO16(edx);
    esp += 20; return; /* ret 16 */

loc_0023422F: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0x12) = LO16(ecx);
    esp += 20; return; /* ret 16 */

loc_0023423B: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 0x14) = LO16(edx);
    esp += 20; return; /* ret 16 */

loc_00234247: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 0x16) = LO16(ecx);

loc_00234250: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002349A0
 * Original: 0x002349A0 - 0x002349BF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002349A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002349A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7FCFE0;
    if (TEST_Z(_fa, _fb)) goto loc_002349B9; /* je: equal / zero */

loc_002349B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002349B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002349B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002349B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002349D0
 * Original: 0x002349D0 - 0x00234B5B (395 bytes, 95 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002349D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002349D0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002349E4; /* je: equal / zero */

loc_002349DA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002349E6; /* jne: not equal / not zero */

loc_002349DD: ;
    ecx = 1;
    goto loc_002349E6;

loc_002349E4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002349E6: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00234B58; /* ja: above (unsigned >) */

loc_002349F5: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x234B5C); /* switch: 27 entries, 27 targets */
    if (_jt == 0x002349FCu) goto loc_002349FC;
    if (_jt == 0x00234A09u) goto loc_00234A09;
    if (_jt == 0x00234A16u) goto loc_00234A16;
    if (_jt == 0x00234A23u) goto loc_00234A23;
    if (_jt == 0x00234A30u) goto loc_00234A30;
    if (_jt == 0x00234A3Du) goto loc_00234A3D;
    if (_jt == 0x00234A4Au) goto loc_00234A4A;
    if (_jt == 0x00234A57u) goto loc_00234A57;
    if (_jt == 0x00234A64u) goto loc_00234A64;
    if (_jt == 0x00234A71u) goto loc_00234A71;
    if (_jt == 0x00234A7Eu) goto loc_00234A7E;
    if (_jt == 0x00234A8Bu) goto loc_00234A8B;
    if (_jt == 0x00234A98u) goto loc_00234A98;
    if (_jt == 0x00234AA5u) goto loc_00234AA5;
    if (_jt == 0x00234AB2u) goto loc_00234AB2;
    if (_jt == 0x00234ABFu) goto loc_00234ABF;
    if (_jt == 0x00234ACCu) goto loc_00234ACC;
    if (_jt == 0x00234AD9u) goto loc_00234AD9;
    if (_jt == 0x00234AE6u) goto loc_00234AE6;
    if (_jt == 0x00234AF3u) goto loc_00234AF3;
    if (_jt == 0x00234B00u) goto loc_00234B00;
    if (_jt == 0x00234B0Du) goto loc_00234B0D;
    if (_jt == 0x00234B1Au) goto loc_00234B1A;
    if (_jt == 0x00234B27u) goto loc_00234B27;
    if (_jt == 0x00234B34u) goto loc_00234B34;
    if (_jt == 0x00234B41u) goto loc_00234B41;
    if (_jt == 0x00234B4Eu) goto loc_00234B4E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002349FC: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B76);
    esp += 12; return; /* ret 8 */

loc_00234A09: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BAE);
    esp += 12; return; /* ret 8 */

loc_00234A16: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BAF);
    esp += 12; return; /* ret 8 */

loc_00234A23: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BB0);
    esp += 12; return; /* ret 8 */

loc_00234A30: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BB1);
    esp += 12; return; /* ret 8 */

loc_00234A3D: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B88);
    esp += 12; return; /* ret 8 */

loc_00234A4A: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B8E);
    esp += 12; return; /* ret 8 */

loc_00234A57: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B8A);
    esp += 12; return; /* ret 8 */

loc_00234A64: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B7C);
    esp += 12; return; /* ret 8 */

loc_00234A71: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B82);
    esp += 12; return; /* ret 8 */

loc_00234A7E: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B74);
    esp += 12; return; /* ret 8 */

loc_00234A8B: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BAA);
    esp += 12; return; /* ret 8 */

loc_00234A98: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BAB);
    esp += 12; return; /* ret 8 */

loc_00234AA5: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BAC);
    esp += 12; return; /* ret 8 */

loc_00234AB2: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x8F6BAD);
    esp += 12; return; /* ret 8 */

loc_00234ABF: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B90);
    esp += 12; return; /* ret 8 */

loc_00234ACC: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B92);
    esp += 12; return; /* ret 8 */

loc_00234AD9: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B9A);
    esp += 12; return; /* ret 8 */

loc_00234AE6: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B98);
    esp += 12; return; /* ret 8 */

loc_00234AF3: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B96);
    esp += 12; return; /* ret 8 */

loc_00234B00: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B9E);
    esp += 12; return; /* ret 8 */

loc_00234B0D: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B9C);
    esp += 12; return; /* ret 8 */

loc_00234B1A: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6BA8);
    esp += 12; return; /* ret 8 */

loc_00234B27: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6BA6);
    esp += 12; return; /* ret 8 */

loc_00234B34: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B84);
    esp += 12; return; /* ret 8 */

loc_00234B41: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6B94);
    esp += 12; return; /* ret 8 */

loc_00234B4E: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x8F6BA4);

loc_00234B58: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0023575E
 * Original: 0x0023575E - 0x002359E4 (646 bytes, 407 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0023575E(void)
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

loc_0023575E: ;
    edi = edi;
    PUSH32(esp, 0x53);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _tmp = MEM32(ebx + 0x23);
    MEM32(ebx + 0x23) = edx;
    edx = _tmp; }
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + -1124064429)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edx + -1124064429) = MEM8(edx + -1124064429) + HI8(eax);
    _fa = (uint32_t)(MEM8(edx + -1124064429)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x23)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebx + 0x23] */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0 /* seg:cs */);
    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx)) < (uint32_t)(edx));
    MEM32(ebx) = MEM32(ebx) - edx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* mov ss, MEM16(ebx) - segment register */;
    RECOMP_UNIMPL("les edx, ptr [ebx]", 0x0023578Cu); /* TODO: les edx, ptr [ebx] */
    RECOMP_UNIMPL("hlt", 0x00235790u); /* TODO: hlt */
    PUSH32(esp, esp);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM8(ebp + 0x23)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(edx)) < (uint32_t)(MEM8(ebp + 0x23)));
    SET_LO8(edx, LO8(edx) - MEM8(ebp + 0x23));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + 0x55)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + 0x55) = MEM8(eax + 0x55) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x55)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    RECOMP_UNIMPL("lds edx, ptr [ebp + 0x23]", 0x002357A0u); /* TODO: lds edx, ptr [ebp + 0x23] */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + HI8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x23) = MEM32(esi + 0x23) ^ edx;
    _fa = (uint32_t)(MEM32(esi + 0x23)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x56)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(edi + 0x56) = MEM8(edi + 0x56) + HI8(eax);
    _fa = (uint32_t)(MEM8(edi + 0x56)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002358F6; /* jne: not equal / not zero */

loc_002358ED: ;
    ecx = 1;
    goto loc_002358F6;

loc_002358F4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002358F6: ;
    edx = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002359E1; /* ja: above (unsigned >) */

loc_00235905: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x2359E4); /* switch: 9 entries, 9 targets */
    if (_jt == 0x0023590Cu) goto loc_0023590C;
    if (_jt == 0x00235924u) goto loc_00235924;
    if (_jt == 0x0023593Cu) goto loc_0023593C;
    if (_jt == 0x00235954u) goto loc_00235954;
    if (_jt == 0x0023596Cu) goto loc_0023596C;
    if (_jt == 0x00235984u) goto loc_00235984;
    if (_jt == 0x0023599Cu) goto loc_0023599C;
    if (_jt == 0x002359B4u) goto loc_002359B4;
    if (_jt == 0x002359CCu) goto loc_002359CC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0023590C: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = ZX16(MEM16(edx * 4 + 0x8F6C2C));
    esp += 16; return; /* ret 12 */

loc_00235924: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = ZX8(MEM8(edx * 4 + 0x8F6C30));
    esp += 16; return; /* ret 12 */

loc_0023593C: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = ZX8(MEM8(edx * 4 + 0x8F6C31));
    esp += 16; return; /* ret 12 */

loc_00235954: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(edx * 4 + 0x8F6C36);
    esp += 16; return; /* ret 12 */

loc_0023596C: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = ZX8(MEM8(edx * 4 + 0x8F6C32));
    esp += 16; return; /* ret 12 */

loc_00235984: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = ZX16(MEM16(edx * 4 + 0x8F6C2E));
    esp += 16; return; /* ret 12 */

loc_0023599C: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(edx * 4 + 0x8F6C34);
    esp += 16; return; /* ret 12 */

loc_002359B4: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(edx * 4 + 0x8F6C35);
    esp += 16; return; /* ret 12 */

loc_002359CC: ;
    eax = ecx + ecx * 4;
    ecx = MEM32(esp + 8);
    eax = ecx + eax * 4;
    edx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(edx * 4 + 0x8F6C37);

loc_002359E1: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00235C00
 * Original: 0x00235C00 - 0x00235C3E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00235C00: ;
    eax = MEM32(0x8F9CCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00235C3B; /* jne: not equal / not zero */

loc_00235C09: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x00235C12u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00235C12: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00235C2E; /* je: equal / zero */

loc_00235C19: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(0x8F9CCC) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00235C2E: ;
    MEM32(0x8F9CCC) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00235C3B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00235C50
 * Original: 0x00235C50 - 0x00235C69 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00235C50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00235C63; /* je: equal / zero */

loc_00235C5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00235C60u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00235C60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00235C63: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00235C70
 * Original: 0x00235C70 - 0x00235CA1 (49 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235C70(void)
{

loc_00235C70: ;
    MEM32(ecx) = 0x7FD180;
    MEM32(ecx + 4) = 0x7FD154;
    MEM32(ecx + 8) = 0x7FD12C;
    MEM32(ecx + 0xC) = 0x7FD0E0;
    MEM32(ecx + 0x10) = 0x7FD020;
    MEM32(ecx + 0x24) = 0x7FCF70;
    MEM32(ecx + 0x1C) = 0x7FCFE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00235CB0
 * Original: 0x00235CB0 - 0x00235CEC (60 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00235CB0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00235CC6u); RECOMP_ABI_CALL(0x000170FEu, sub_000170FE); /* call 0x000170FE */

loc_00235CC6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00235CE7; /* jne: not equal / not zero */

loc_00235CCA: ;
    PUSH32(esp, 0x00235CCFu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00235CCF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = MEM32(eax);
    ecx = eax;
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00235CE2; /* jne: not equal / not zero */

loc_00235CD8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00235CDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00235CDAu); } /* indirect call */
    }

loc_00235CDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00235CE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00235CE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00235CE4u); } /* indirect call */
    }

loc_00235CE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00235D00
 * Original: 0x00235D00 - 0x00235D27 (39 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235D00(void)
{

loc_00235D00: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00235D14u); RECOMP_ABI_CALL(0x00018DE1u, sub_00018DE1); /* call 0x00018DE1 */

loc_00235D14: ;
    PUSH32(esp, 0x00235D19u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00235D19: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00235D24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00235D21u); } /* indirect call */
    }

loc_00235D24: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00235D30
 * Original: 0x00235D30 - 0x00235D66 (54 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00235D30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00235D3Bu); RECOMP_ABI_CALL(0x0001B8A2u, sub_0001B8A2); /* call 0x0001B8A2 */

loc_00235D3B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00235D53; /* jne: not equal / not zero */

loc_00235D40: ;
    PUSH32(esp, 0x00235D45u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00235D45: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x21);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00235D50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00235D4Du); } /* indirect call */
    }

loc_00235D50: ;
    esp += 8; return; /* ret 4 */

loc_00235D53: ;
    PUSH32(esp, 0x00235D58u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00235D58: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x22);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00235D63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00235D60u); } /* indirect call */
    }

loc_00235D63: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00235D80
 * Original: 0x00235D80 - 0x00235DB1 (49 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235D80(void)
{

loc_00235D80: ;
    MEM32(ecx) = 0x7FD180;
    MEM32(ecx + 4) = 0x7FD154;
    MEM32(ecx + 8) = 0x7FD12C;
    MEM32(ecx + 0xC) = 0x7FD0E0;
    MEM32(ecx + 0x10) = 0x7FD020;
    MEM32(ecx + 0x24) = 0x7FCF70;
    MEM32(ecx + 0x1C) = 0x7FCFE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00235DC0
 * Original: 0x00235DC0 - 0x00235EBC (252 bytes, 92 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00235DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00235DC0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    ecx = ecx + eax + 0x8F5BDC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00235DFA; /* je: equal / zero */

loc_00235DDC: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00235EB8; /* ja: above (unsigned >) */

loc_00235DE6: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x235EBC); /* switch: 32 entries, 17 targets */
    if (_jt == 0x00235DEDu) goto loc_00235DED;
    if (_jt == 0x00235E0Bu) goto loc_00235E0B;
    if (_jt == 0x00235E15u) goto loc_00235E15;
    if (_jt == 0x00235E21u) goto loc_00235E21;
    if (_jt == 0x00235E2Eu) goto loc_00235E2E;
    if (_jt == 0x00235E3Bu) goto loc_00235E3B;
    if (_jt == 0x00235E48u) goto loc_00235E48;
    if (_jt == 0x00235E52u) goto loc_00235E52;
    if (_jt == 0x00235E5Eu) goto loc_00235E5E;
    if (_jt == 0x00235E6Au) goto loc_00235E6A;
    if (_jt == 0x00235E74u) goto loc_00235E74;
    if (_jt == 0x00235E7Eu) goto loc_00235E7E;
    if (_jt == 0x00235E88u) goto loc_00235E88;
    if (_jt == 0x00235E95u) goto loc_00235E95;
    if (_jt == 0x00235EA2u) goto loc_00235EA2;
    if (_jt == 0x00235EAFu) goto loc_00235EAF;
    if (_jt == 0x00235EB8u) goto loc_00235EB8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00235DED: ;
    eax = MEM32(ecx + 0x38);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235DFA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00235EB8; /* ja: above (unsigned >) */

loc_00235E04: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x235EEC); /* switch: 20 entries, 17 targets */
    if (_jt == 0x00235DEDu) goto loc_00235DED;
    if (_jt == 0x00235E0Bu) goto loc_00235E0B;
    if (_jt == 0x00235E15u) goto loc_00235E15;
    if (_jt == 0x00235E21u) goto loc_00235E21;
    if (_jt == 0x00235E2Eu) goto loc_00235E2E;
    if (_jt == 0x00235E3Bu) goto loc_00235E3B;
    if (_jt == 0x00235E48u) goto loc_00235E48;
    if (_jt == 0x00235E52u) goto loc_00235E52;
    if (_jt == 0x00235E5Eu) goto loc_00235E5E;
    if (_jt == 0x00235E6Au) goto loc_00235E6A;
    if (_jt == 0x00235E74u) goto loc_00235E74;
    if (_jt == 0x00235E7Eu) goto loc_00235E7E;
    if (_jt == 0x00235E88u) goto loc_00235E88;
    if (_jt == 0x00235E95u) goto loc_00235E95;
    if (_jt == 0x00235EA2u) goto loc_00235EA2;
    if (_jt == 0x00235EAFu) goto loc_00235EAF;
    if (_jt == 0x00235EB8u) goto loc_00235EB8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00235E0B: ;
    eax = MEM32(ecx + 0x34);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x43));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E21: ;
    eax = MEM32(ecx + 0x3C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E2E: ;
    eax = MEM32(ecx + 0x38);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E3B: ;
    eax = MEM32(ecx + 0x38);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E48: ;
    eax = MEM32(ecx + 0x38);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E52: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x3B));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E5E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x47));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E6A: ;
    eax = MEM32(ecx + 0x48);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E74: ;
    eax = MEM32(ecx + 0x3C);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E7E: ;
    eax = MEM32(ecx + 0x40);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E88: ;
    eax = MEM32(ecx + 0x40);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235E95: ;
    eax = MEM32(ecx + 0x3C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235EA2: ;
    eax = MEM32(ecx + 0x44);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00235EAF: ;
    eax = MEM32(ecx + 0x3C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00235EB8: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

}
