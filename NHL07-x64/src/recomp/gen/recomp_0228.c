/**
 * nhl_07_recomp - Recompiled code chunk 228
 * Functions: 250 (0x004EB905 - 0x004EE71D)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004EB905
 * Original: 0x004EB905 - 0x004EB925 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB905(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB905: ;
    PUSH32(esp, 0x004EB90Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EB90A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004EB916u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EB916: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EB924; /* je: equal / zero */

loc_004EB91D: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_004EB8C3(); return; /* tail jmp 0x004EB8C3 */

loc_004EB924: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EB925
 * Original: 0x004EB925 - 0x004EB941 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB925(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB925: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EB92Du); RECOMP_ABI_CALL(0x004EB8E2u, sub_004EB8E2); /* call 0x004EB8E2 */

loc_004EB92D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EB93B; /* je: equal / zero */

loc_004EB934: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB93Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EB93A: ;
    POP32(esp, ecx);

loc_004EB93B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB951
 * Original: 0x004EB951 - 0x004EB97E (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB951(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB951: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DC18;
    if (TEST_Z(_fa, _fb)) goto loc_004EB968; /* je: equal / zero */

loc_004EB961: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB967u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EB967: ;
    POP32(esp, ecx);

loc_004EB968: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB97E
 * Original: 0x004EB97E - 0x004EB99B (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB97E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EB97E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DC24;
    if (TEST_Z(_fa, _fb)) goto loc_004EB995; /* je: equal / zero */

loc_004EB98E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EB994u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EB994: ;
    POP32(esp, ecx);

loc_004EB995: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB99B
 * Original: 0x004EB99B - 0x004EB9B2 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB99B(void)
{

loc_004EB99B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x86DC4C);
    esi = ecx;
    PUSH32(esp, 0x004EB9A8u); RECOMP_ABI_CALL(0x0060CAC7u, sub_0060CAC7); /* call 0x0060CAC7 */

loc_004EB9A8: ;
    MEM32(esi) = 0x86DC30;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB9B2
 * Original: 0x004EB9B2 - 0x004EB9B6 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB9B2(void)
{

loc_004EB9B2: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004EB9B6
 * Original: 0x004EB9B6 - 0x004EB9BB (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB9B6(void)
{

loc_004EB9B6: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EB9BB
 * Original: 0x004EB9BB - 0x004EBA1D (98 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EB9BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EB9BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x004EB9C4u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EB9C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EB9CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB9C8u); } /* indirect call */
    }

loc_004EB9CB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004EB9D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB9CFu); } /* indirect call */
    }

loc_004EB9D2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBA16; /* je: equal / zero */

loc_004EB9D8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004EB9DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB9DCu); } /* indirect call */
    }

loc_004EB9DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBA16; /* jne: not equal / not zero */

loc_004EB9E3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x004EB9EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB9E7u); } /* indirect call */
    }

loc_004EB9EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBA16; /* jne: not equal / not zero */

loc_004EB9EE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x004EB9F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EB9F2u); } /* indirect call */
    }

loc_004EB9F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBA16; /* jne: not equal / not zero */

loc_004EB9F9: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004EBA08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBA05u); } /* indirect call */
    }

loc_004EBA08: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x14); PUSH32(esp, 0x004EBA0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBA0Bu); } /* indirect call */
    }

loc_004EBA0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_004EBA16; /* jne: not equal / not zero */

loc_004EBA14: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004EBA16: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBA1D
 * Original: 0x004EBA1D - 0x004EBA3F (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBA1D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBA1D: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DC30;
    PUSH32(esp, 0x004EBA2Bu); RECOMP_ABI_CALL(0x0060CAEFu, sub_0060CAEF); /* call 0x0060CAEF */

loc_004EBA2B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EBA39; /* je: equal / zero */

loc_004EBA32: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EBA38u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EBA38: ;
    POP32(esp, ecx);

loc_004EBA39: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBA3F
 * Original: 0x004EBA3F - 0x004EBA51 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBA3F(void)
{

loc_004EBA3F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EBA47u); RECOMP_ABI_CALL(0x004BE475u, sub_004BE475); /* call 0x004BE475 */

loc_004EBA47: ;
    MEM32(esi) = 0x86DC54;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBA51
 * Original: 0x004EBA51 - 0x004EBA57 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBA51(void)
{

loc_004EBA51: ;
    eax = 0x67616D65;
    esp += 4; return; /* ret */

}

/**
 * sub_004EBA57
 * Original: 0x004EBA57 - 0x004EBA79 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBA57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBA57: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DC54;
    PUSH32(esp, 0x004EBA65u); RECOMP_ABI_CALL(0x004BE487u, sub_004BE487); /* call 0x004BE487 */

loc_004EBA65: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EBA73; /* je: equal / zero */

loc_004EBA6C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EBA72u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EBA72: ;
    POP32(esp, ecx);

loc_004EBA73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBA79
 * Original: 0x004EBA79 - 0x004EBA84 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBA79(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBA79: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004EBA81u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EBA81: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBA84
 * Original: 0x004EBA84 - 0x004EBAB8 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EBA84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBA84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004EBAAE; /* je: equal / zero */

loc_004EBA8E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x74696D65 (32-bit) */
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EBAAA; /* je: equal / zero */

loc_004EBA9F: ;
    PUSH32(esp, 0);

loc_004EBAA1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBAA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBAA1u); } /* indirect call */
    }

loc_004EBAA4: ;
    MEM8(esi + 0x18) = 0;
    goto loc_004EBAB5;

loc_004EBAAA: ;
    PUSH32(esp, 4);
    goto loc_004EBAA1;

loc_004EBAAE: ;
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 0x19) = 1;

loc_004EBAB5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBAB8
 * Original: 0x004EBAB8 - 0x004EBAE4 (44 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBAB8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBAB8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    SET_LO8(ebx, MEM8(esi + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_004EBAD1; /* je: equal / zero */

loc_004EBAC5: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBACCu); } /* indirect call */
    }

loc_004EBACF: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004EBAD1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBADD; /* jne: not equal / not zero */

loc_004EBAD5: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EBADDu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EBADD: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBAE4
 * Original: 0x004EBAE4 - 0x004EBB19 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBAE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EBAE4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBAF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBAEFu); } /* indirect call */
    }

loc_004EBAF2: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EBB02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBAFFu); } /* indirect call */
    }

loc_004EBB02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBB0D; /* je: equal / zero */

loc_004EBB06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EBB0Cu); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004EBB0C: ;
    POP32(esp, ecx);

loc_004EBB0D: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EBB15u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EBB15: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBB19
 * Original: 0x004EBB19 - 0x004EBBA2 (137 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EBB19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBB19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004EBB3D; /* je: equal / zero */

loc_004EBB25: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x74696D65 (32-bit) */
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EBB39; /* je: equal / zero */

loc_004EBB36: ;
    PUSH32(esp, ebx);
    goto loc_004EBB97;

loc_004EBB39: ;
    PUSH32(esp, 4);
    goto loc_004EBB97;

loc_004EBB3D: ;
    esi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004EBB8D; /* jle: less or equal (signed <=) */

loc_004EBB44: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBB4Au); RECOMP_ABI_CALL(0x004DC955u, sub_004DC955); /* call 0x004DC955 */

loc_004EBB4A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EBB59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBB57u); } /* indirect call */
    }

loc_004EBB59: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBB76; /* je: equal / zero */

loc_004EBB5F: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBB69u); RECOMP_ABI_CALL(0x005F1F60u, sub_005F1F60); /* call 0x005F1F60 */

loc_004EBB69: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBB73u); RECOMP_ABI_CALL(0x005F2AD0u, sub_005F2AD0); /* call 0x005F2AD0 */

loc_004EBB73: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EBB76: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EBB82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBB80u); } /* indirect call */
    }

loc_004EBB82: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBB8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBB87u); } /* indirect call */
    }

loc_004EBB8A: ;
    POP32(esp, edi);
    goto loc_004EBB9A;

loc_004EBB8D: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, 1);

loc_004EBB97: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBB9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBB97u); } /* indirect call */
    }

loc_004EBB9A: ;
    MEM8(esi + 0x10) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBBA2
 * Original: 0x004EBBA2 - 0x004EBBCE (44 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBBA2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBBA2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    SET_LO8(ebx, MEM8(esi + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_004EBBBB; /* je: equal / zero */

loc_004EBBAF: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBBB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBBB6u); } /* indirect call */
    }

loc_004EBBB9: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004EBBBB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBBC7; /* jne: not equal / not zero */

loc_004EBBBF: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EBBC7u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EBBC7: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBBCE
 * Original: 0x004EBBCE - 0x004EBC03 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBBCE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EBBCE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBBDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBBD9u); } /* indirect call */
    }

loc_004EBBDC: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EBBECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBBE9u); } /* indirect call */
    }

loc_004EBBEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBBF7; /* je: equal / zero */

loc_004EBBF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EBBF6u); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004EBBF6: ;
    POP32(esp, ecx);

loc_004EBBF7: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EBBFFu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EBBFF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBC03
 * Original: 0x004EBC03 - 0x004EBC2F (44 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBC03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBC03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    SET_LO8(ebx, MEM8(esi + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_004EBC1C; /* je: equal / zero */

loc_004EBC10: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBC1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC17u); } /* indirect call */
    }

loc_004EBC1A: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004EBC1C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBC28; /* jne: not equal / not zero */

loc_004EBC20: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EBC28u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EBC28: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBC2F
 * Original: 0x004EBC2F - 0x004EBC64 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBC2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EBC2F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBC3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC3Au); } /* indirect call */
    }

loc_004EBC3D: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EBC4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC4Au); } /* indirect call */
    }

loc_004EBC4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBC58; /* je: equal / zero */

loc_004EBC51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EBC57u); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004EBC57: ;
    POP32(esp, ecx);

loc_004EBC58: ;
    ecx = esi + -8;
    PUSH32(esp, 0x004EBC60u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EBC60: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBC64
 * Original: 0x004EBC64 - 0x004EBCEA (134 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBC64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBC64: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004EBC70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC6Du); } /* indirect call */
    }

loc_004EBC70: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBCE5; /* je: equal / zero */

loc_004EBC76: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x004EBC7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC7Au); } /* indirect call */
    }

loc_004EBC7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBCE5; /* jne: not equal / not zero */

loc_004EBC81: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x004EBC88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC85u); } /* indirect call */
    }

loc_004EBC88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBCE5; /* jne: not equal / not zero */

loc_004EBC8C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x004EBC93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC90u); } /* indirect call */
    }

loc_004EBC93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EBCE5; /* jne: not equal / not zero */

loc_004EBC97: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EBCA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBC9Fu); } /* indirect call */
    }

loc_004EBCA1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EBCA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBCA5u); } /* indirect call */
    }

loc_004EBCA8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBCE5; /* je: equal / zero */

loc_004EBCAE: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EBCB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBCB7u); } /* indirect call */
    }

loc_004EBCB9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EBCC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBCBDu); } /* indirect call */
    }

loc_004EBCC0: ;
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x86DC68);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EBCD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBCD2u); } /* indirect call */
    }

loc_004EBCD5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x86DC60);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EBCE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBCE1u); } /* indirect call */
    }

loc_004EBCE4: ;
    POP32(esp, ebx);

loc_004EBCE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBCEA
 * Original: 0x004EBCEA - 0x004EBCEB (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBCEA(void)
{

loc_004EBCEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EBCEB
 * Original: 0x004EBCEB - 0x004EBCFE (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBCEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBCEB: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBCF9; /* je: equal / zero */

loc_004EBCF2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EBCF8u); RECOMP_ABI_CALL(0x005F2030u, sub_005F2030); /* call 0x005F2030 */

loc_004EBCF8: ;
    POP32(esp, ecx);

loc_004EBCF9: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBCFE
 * Original: 0x004EBCFE - 0x004EBD0F (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBCFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBCFE: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBD0C; /* je: equal / zero */

loc_004EBD05: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EBD0Bu); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004EBD0B: ;
    POP32(esp, ecx);

loc_004EBD0C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBD0F
 * Original: 0x004EBD0F - 0x004EBD44 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBD0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBD0F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBD28; /* je: equal / zero */

loc_004EBD19: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0x004EBD22u); RECOMP_ABI_CALL(0x005F2AB0u, sub_005F2AB0); /* call 0x005F2AB0 */

loc_004EBD22: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_004EBD28: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBD40; /* je: equal / zero */

loc_004EBD2F: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0x004EBD3Bu); RECOMP_ABI_CALL(0x005F2A40u, sub_005F2A40); /* call 0x005F2A40 */

loc_004EBD3B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x38) = eax;

loc_004EBD40: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBD44
 * Original: 0x004EBD44 - 0x004EBD48 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBD44(void)
{

loc_004EBD44: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBD48
 * Original: 0x004EBD48 - 0x004EBDFC (180 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EBD48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EBD48: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(0x90E804);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EBD66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBD63u); } /* indirect call */
    }

loc_004EBD66: ;
    esi = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004EBD79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBD76u); } /* indirect call */
    }

loc_004EBD79: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBD87; /* je: equal / zero */

loc_004EBD7F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EBD87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBD84u); } /* indirect call */
    }

loc_004EBD87: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBD99u); RECOMP_ABI_CALL(0x005F2AD0u, sub_005F2AD0); /* call 0x005F2AD0 */

loc_004EBD99: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EBDA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBDA3u); } /* indirect call */
    }

loc_004EBDA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBDABu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EBDAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2A4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBDB8u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EBDB8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004EBDD2; /* je: equal / zero */

loc_004EBDBF: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebp + -260;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBDD0u); RECOMP_ABI_CALL(0x004ED12Eu, sub_004ED12E); /* call 0x004ED12E */

loc_004EBDD0: ;
    goto loc_004EBDD4;

loc_004EBDD2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EBDD4: ;
    edi = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBDDCu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EBDDC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBDE3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EBDE3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x004EBDE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBDE6u); } /* indirect call */
    }

loc_004EBDE9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004EBDF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBDEDu); } /* indirect call */
    }

loc_004EBDF0: ;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBDFAu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004EBDFA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004EBDFC
 * Original: 0x004EBDFC - 0x004EBE00 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBDFC(void)
{

loc_004EBDFC: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBE00
 * Original: 0x004EBE00 - 0x004EBE12 (18 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0x004EBE0Bu); RECOMP_ABI_CALL(0x005F2F60u, sub_005F2F60); /* call 0x005F2F60 */

loc_004EBE0B: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBE12
 * Original: 0x004EBE12 - 0x004EBE1C (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBE12(void)
{

loc_004EBE12: ;
    PUSH32(esp, MEM32(ecx + 0x34));
    PUSH32(esp, 0x004EBE1Au); RECOMP_ABI_CALL(0x005F1C70u, sub_005F1C70); /* call 0x005F1C70 */

loc_004EBE1A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBE1C
 * Original: 0x004EBE1C - 0x004EBE64 (72 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBE1C(void)
{

loc_004EBE1C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EBE23u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EBE23: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004EBE2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE27u); } /* indirect call */
    }

loc_004EBE2A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86DBAC);
    PUSH32(esp, 0x86DBC4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004EBE3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE38u); } /* indirect call */
    }

loc_004EBE3B: ;
    edi = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x90E810);
    MEM32(0x90E810) = edi;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004EBE57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE54u); } /* indirect call */
    }

loc_004EBE57: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EBE5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE5Cu); } /* indirect call */
    }

loc_004EBE5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBE64
 * Original: 0x004EBE64 - 0x004EBEBC (88 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBE64(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBE64: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EBE6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE6Du); } /* indirect call */
    }

loc_004EBE6F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EBE76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE73u); } /* indirect call */
    }

loc_004EBE76: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBEB5; /* je: equal / zero */

loc_004EBE7C: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EBE88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE86u); } /* indirect call */
    }

loc_004EBE88: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EBE8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBE8Cu); } /* indirect call */
    }

loc_004EBE8F: ;
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x86DC68);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EBEA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBEA1u); } /* indirect call */
    }

loc_004EBEA4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86DC60);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EBEB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBEB0u); } /* indirect call */
    }

loc_004EBEB3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004EBEB5: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBEBC
 * Original: 0x004EBEBC - 0x004EBED8 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBEBC(void)
{

loc_004EBEBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EBEC4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EBEC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 4);
    PUSH32(esp, 0x004EBED2u); RECOMP_ABI_CALL(0x004DD66Du, sub_004DD66D); /* call 0x004DD66D */

loc_004EBED2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBF07
 * Original: 0x004EBF07 - 0x004EBF22 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBF07(void)
{

loc_004EBF07: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004EBF17u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004EBF17: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBF22
 * Original: 0x004EBF22 - 0x004EBF3E (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBF22(void)
{

loc_004EBF22: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EBF2Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EBF2A: ;
    PUSH32(esp, 2);
    ecx = esi + 8;
    PUSH32(esp, 0x004EBF34u); RECOMP_ABI_CALL(0x004EBEBCu, sub_004EBEBC); /* call 0x004EBEBC */

loc_004EBF34: ;
    MEM32(esi) = 0x86DC70;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EBF3E
 * Original: 0x004EBF3E - 0x004EBF57 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBF3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EBF3E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x86DC70;
    PUSH32(esp, 0x004EBF4Fu); RECOMP_ABI_CALL(0x004DD70Au, sub_004DD70A); /* call 0x004DD70A */

loc_004EBF4F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004EBF57
 * Original: 0x004EBF57 - 0x004EBF73 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBF57(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBF57: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EBF5Fu); RECOMP_ABI_CALL(0x004EBF3Eu, sub_004EBF3E); /* call 0x004EBF3E */

loc_004EBF5F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EBF6D; /* je: equal / zero */

loc_004EBF66: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EBF6Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EBF6C: ;
    POP32(esp, ecx);

loc_004EBF6D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EBF73
 * Original: 0x004EBF73 - 0x004EBF7B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EBF73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EBF73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004E019D(); return; /* tail jmp 0x004E019D */

}

/**
 * sub_004EBF7B
 * Original: 0x004EBF7B - 0x004EC0C5 (330 bytes, 135 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EBF7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EBF7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EBF8Du); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EBF8D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EBF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBF91u); } /* indirect call */
    }

loc_004EBF94: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004EBF9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBF98u); } /* indirect call */
    }

loc_004EBF9B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC071; /* je: equal / zero */

loc_004EBFA5: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004EBFACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBFA9u); } /* indirect call */
    }

loc_004EBFAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EC05B; /* jne: not equal / not zero */

loc_004EBFB4: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x004EBFBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBFB8u); } /* indirect call */
    }

loc_004EBFBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EC05B; /* jne: not equal / not zero */

loc_004EBFC3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x004EBFCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBFC7u); } /* indirect call */
    }

loc_004EBFCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EC05B; /* jne: not equal / not zero */

loc_004EBFD2: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ebx = MEM32(eax + 0x2C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x67616D65);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EBFECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EBFE9u); } /* indirect call */
    }

loc_004EBFEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EBFFD; /* je: equal / zero */

loc_004EBFF0: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    goto loc_004EC049;

loc_004EBFFD: ;
    eax = MEM32(ebp + 8);
    esi = eax + 8;
    eax = MEM32(eax + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1C) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EC014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC011u); } /* indirect call */
    }

loc_004EC014: ;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC01Cu); RECOMP_ABI_CALL(0x004B0A18u, sub_004B0A18); /* call 0x004B0A18 */

loc_004EC01C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_004EC045; /* je: equal / zero */

loc_004EC024: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC026u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC024u); } /* indirect call */
    }

loc_004EC026: ;
    edx = MEM32(edi);
    ebx = eax;
    eax = MEM32(ebx);
    ecx = edi;
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004EC034u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC031u); } /* indirect call */
    }

loc_004EC034: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EC03Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC03Au); } /* indirect call */
    }

loc_004EC03D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EC052; /* jne: not equal / not zero */

loc_004EC041: ;
    eax = MEM32(esi);
    ecx = esi;

loc_004EC045: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);

loc_004EC049: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EC04Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC049u); } /* indirect call */
    }

loc_004EC04C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_004EC0BB;

loc_004EC052: ;
    MEM32(ebp + -4) = 2;
    goto loc_004EC0BB;

loc_004EC05B: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x004EC062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC05Fu); } /* indirect call */
    }

loc_004EC062: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EC071; /* jne: not equal / not zero */

loc_004EC066: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x004EC06Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC06Au); } /* indirect call */
    }

loc_004EC06D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC0BB; /* je: equal / zero */

loc_004EC071: ;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004EC07Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC07Bu); } /* indirect call */
    }

loc_004EC07E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC0BB; /* je: equal / zero */

loc_004EC084: ;
    eax = MEM32(esi);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x86DC68);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC094u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC091u); } /* indirect call */
    }

loc_004EC094: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x86DC60);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC0A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC0A1u); } /* indirect call */
    }

loc_004EC0A4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EC0AD; /* jne: not equal / not zero */

loc_004EC0A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC0BB; /* je: equal / zero */

loc_004EC0AD: ;
    eax = MEM32(edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EC0B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC0B5u); } /* indirect call */
    }

loc_004EC0B8: ;
    MEM32(ebp + -4) = esi;

loc_004EC0BB: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC0C5
 * Original: 0x004EC0C5 - 0x004EC170 (171 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC0C5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EC0C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EC0CFu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EC0CF: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004EC0D9u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004EC0D9: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = 0x86DC18;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x86DCD4;
    MEM32(edi) = 0x86DCC4;
    MEM32(esi + 0xC) = 0x86DCB8;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    ecx = esi;
    MEM8(esi + 0x18) = 1;
    MEM8(esi + 0x19) = LO8(ebx);
    MEM8(esi + 0x1A) = LO8(ebx);
    PUSH32(esp, 0x004EC110u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004EC110: ;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC11Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC118u); } /* indirect call */
    }

loc_004EC11B: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EC12Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC128u); } /* indirect call */
    }

loc_004EC12B: ;
    PUSH32(esp, MEM32(esp + 0x14));
    edi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EC13Du); RECOMP_ABI_CALL(0x005F1630u, sub_005F1630); /* call 0x005F1630 */

loc_004EC13D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC149; /* je: equal / zero */

loc_004EC144: ;
    MEM8(esi + 0x18) = LO8(ebx);
    goto loc_004EC168;

loc_004EC149: ;
    PUSH32(esp, 0x7530);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4EBA84);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EC15Au); RECOMP_ABI_CALL(0x005F1DD0u, sub_005F1DD0); /* call 0x005F1DD0 */

loc_004EC15A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC168; /* je: equal / zero */

loc_004EC161: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EC167u); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004EC167: ;
    POP32(esp, ecx);

loc_004EC168: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004EC170
 * Original: 0x004EC170 - 0x004EC173 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC170(void)
{

loc_004EC170: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC173
 * Original: 0x004EC173 - 0x004EC17B (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC173(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC173: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECB35(); return; /* tail jmp 0x004ECB35 */

}

/**
 * sub_004EC17B
 * Original: 0x004EC17B - 0x004EC183 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC17B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC17B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECB35(); return; /* tail jmp 0x004ECB35 */

}

/**
 * sub_004EC183
 * Original: 0x004EC183 - 0x004EC1CC (73 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC183(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC183: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    MEM32(esi) = 0x86DCD4;
    MEM32(edi) = 0x86DCC4;
    MEM32(esi + 0xC) = 0x86DCB8;
    if (CMP_EQ(_fa, _fb)) goto loc_004EC1A9; /* je: equal / zero */

loc_004EC1A4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC1A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC1A6u); } /* indirect call */
    }

loc_004EC1A9: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC1B5; /* je: equal / zero */

loc_004EC1B0: ;
    PUSH32(esp, 0x004EC1B5u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EC1B5: ;
    ecx = edi;
    MEM32(esi + 0xC) = 0x86DC18;
    PUSH32(esp, 0x004EC1C3u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004EC1C3: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004EC1CC
 * Original: 0x004EC1CC - 0x004EC251 (133 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EC1CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EC1CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, MEM8(esi + 0x10));
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC23B; /* je: equal / zero */

loc_004EC1DF: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004EC23B; /* jne: not equal / not zero */

loc_004EC1E5: ;
    MEM8(esi + 0x12) = 1;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC1F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC1F2u); } /* indirect call */
    }

loc_004EC1F4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EC1FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC1F8u); } /* indirect call */
    }

loc_004EC1FB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC22F; /* je: equal / zero */

loc_004EC201: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC207u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EC207: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EC20Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC20Bu); } /* indirect call */
    }

loc_004EC20E: ;
    edx = MEM32(eax);
    ecx = esi + -8;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebx = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004EC223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC220u); } /* indirect call */
    }

loc_004EC223: ;
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC22Cu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EC22C: ;
    POP32(esp, ebx);
    goto loc_004EC23A;

loc_004EC22F: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC236u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC234u); } /* indirect call */
    }

loc_004EC236: ;
    MEM8(esi + 0x10) = 0;

loc_004EC23A: ;
    POP32(esp, edi);

loc_004EC23B: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004EC249; /* jne: not equal / not zero */

loc_004EC241: ;
    ecx = esi + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC249u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EC249: ;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC251
 * Original: 0x004EC251 - 0x004EC26B (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC251(void)
{

loc_004EC251: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004EC25Eu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EC25E: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC265u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC263u); } /* indirect call */
    }

loc_004EC265: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EC26B
 * Original: 0x004EC26B - 0x004EC28A (31 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC26B(void)
{

loc_004EC26B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004EC278u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EC278: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC27Fu); } /* indirect call */
    }

loc_004EC282: ;
    MEM8(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC28A
 * Original: 0x004EC28A - 0x004EC320 (150 bytes, 55 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC28A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EC28A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004EC294u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EC294: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004EC29Eu); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004EC29E: ;
    eax = MEM32(esp + 0x18);
    ecx = esi;
    MEM32(esi) = 0x86DCE8;
    MEM32(edi) = 0x86DCD8;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x10) = 1;
    PUSH32(esp, 0x004EC2BCu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004EC2BC: ;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC2C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC2C4u); } /* indirect call */
    }

loc_004EC2C7: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EC2D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC2D4u); } /* indirect call */
    }

loc_004EC2D7: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x20));
    ebx = eax;
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004EC2ECu); RECOMP_ABI_CALL(0x005F1D30u, sub_005F1D30); /* call 0x005F1D30 */

loc_004EC2EC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004EC318; /* jne: not equal / not zero */

loc_004EC2F6: ;
    PUSH32(esp, 0x7530);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4EBB19);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004EC307u); RECOMP_ABI_CALL(0x005F1DD0u, sub_005F1DD0); /* call 0x005F1DD0 */

loc_004EC307: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004EC318; /* je: equal / zero */

loc_004EC311: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004EC317u); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004EC317: ;
    POP32(esp, ecx);

loc_004EC318: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004EC320
 * Original: 0x004EC320 - 0x004EC323 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC320(void)
{

loc_004EC320: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC323
 * Original: 0x004EC323 - 0x004EC33F (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC323(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EC323: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EC32Bu); RECOMP_ABI_CALL(0x004EC33Fu, sub_004EC33F); /* call 0x004EC33F */

loc_004EC32B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EC339; /* je: equal / zero */

loc_004EC332: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EC338u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EC338: ;
    POP32(esp, ecx);

loc_004EC339: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC33F
 * Original: 0x004EC33F - 0x004EC35E (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC33F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC33F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x86DCE8;
    MEM32(ecx) = 0x86DCD8;
    PUSH32(esp, 0x004EC356u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004EC356: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004EC35E
 * Original: 0x004EC35E - 0x004EC366 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC35E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC35E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EC323(); return; /* tail jmp 0x004EC323 */

}

/**
 * sub_004EC366
 * Original: 0x004EC366 - 0x004EC413 (173 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EC366(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EC366: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC3D2; /* je: equal / zero */

loc_004EC374: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E666E64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E666E64 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC3A1; /* je: equal / zero */

loc_004EC37B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70617373) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70617373 (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC39B; /* je: equal / zero */

loc_004EC388: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x74696D65 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC397; /* je: equal / zero */

loc_004EC391: ;
    PUSH32(esp, ebx);

loc_004EC392: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC395u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC392u); } /* indirect call */
    }

loc_004EC395: ;
    goto loc_004EC40C;

loc_004EC397: ;
    PUSH32(esp, 5);
    goto loc_004EC392;

loc_004EC39B: ;
    eax = MEM32(ecx);
    PUSH32(esp, 4);
    goto loc_004EC392;

loc_004EC3A1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC3A6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EC3A6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004EC3ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC3AAu); } /* indirect call */
    }

loc_004EC3AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC3C6; /* je: equal / zero */

loc_004EC3B2: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC3BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC3BAu); } /* indirect call */
    }

loc_004EC3BC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004EC3C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC3C2u); } /* indirect call */
    }

loc_004EC3C4: ;
    goto loc_004EC402;

loc_004EC3C6: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    goto loc_004EC392;

loc_004EC3D2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC3DBu); RECOMP_ABI_CALL(0x005F1F60u, sub_005F1F60); /* call 0x005F1F60 */

loc_004EC3DB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x90E804);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC3EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC3E7u); } /* indirect call */
    }

loc_004EC3EA: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC3FFu); RECOMP_ABI_CALL(0x004EBD48u, sub_004EBD48); /* call 0x004EBD48 */

loc_004EC3FF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EC402: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC40Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC40Au); } /* indirect call */
    }

loc_004EC40C: ;
    MEM8(esi + 0x10) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004EC413
 * Original: 0x004EC413 - 0x004EC4AA (151 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EC413(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EC413: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC439; /* je: equal / zero */

loc_004EC41D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x74696D65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x74696D65 (32-bit) */
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC435; /* je: equal / zero */

loc_004EC42E: ;
    PUSH32(esp, 0);

loc_004EC430: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC430u); } /* indirect call */
    }

loc_004EC433: ;
    goto loc_004EC4A3;

loc_004EC435: ;
    PUSH32(esp, 4);
    goto loc_004EC430;

loc_004EC439: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x67616D65);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC452u); RECOMP_ABI_CALL(0x004B08CFu, sub_004B08CF); /* call 0x004B08CF */

loc_004EC452: ;
    edi = MEM32(eax + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + 0xC);
    if ((_fas < 0)) goto loc_004EC49B; /* js: sign (negative) */

loc_004EC45B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, esi);

loc_004EC462: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC46Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004EC46B: ;
    esi = eax + 8;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004EC475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC472u); } /* indirect call */
    }

loc_004EC475: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC497; /* je: equal / zero */

loc_004EC479: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x86DC68);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EC487u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC484u); } /* indirect call */
    }

loc_004EC487: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EC497; /* jne: not equal / not zero */

loc_004EC48C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004EC497u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC494u); } /* indirect call */
    }

loc_004EC497: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_004EC462; /* jns: not sign (positive) */

loc_004EC49A: ;
    POP32(esp, esi);

loc_004EC49B: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC4A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC4A0u); } /* indirect call */
    }

loc_004EC4A2: ;
    POP32(esp, edi);

loc_004EC4A3: ;
    MEM8(ebx + 0x10) = 0;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004EC4AA
 * Original: 0x004EC4AA - 0x004EC667 (445 bytes, 146 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC4AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC4AA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x863F20;
    ebx = esi + 0xC;
    MEM32(esi + 4) = 0x86426C;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi + 8) = 0x86DC24;
    PUSH32(esp, 0x004EC4CEu); RECOMP_ABI_CALL(0x0060CB78u, sub_0060CB78); /* call 0x0060CB78 */

loc_004EC4CE: ;
    edi = esi + 0x10;
    ecx = edi;
    PUSH32(esp, 0x004EC4D8u); RECOMP_ABI_CALL(0x004EBF22u, sub_004EBF22); /* call 0x004EBF22 */

loc_004EC4D8: ;
    MEM32(ebx) = 0x86DD98;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = 0x86DD50;
    MEM32(esi) = 0x86DD24;
    MEM32(esi + 4) = 0x86DD1C;
    MEM32(esi + 8) = 0x86DD10;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM8(esi + 0x4C) = LO8(ebx);
    edi = esi + 0x54;
    MEM32(edi) = ebx;
    ebp = esi + 0x58;
    MEM32(ebp) = ebx;
    MEM8(esi + 0x5C) = LO8(ebx);
    PUSH32(esp, MEM32(0x8D7E80));
    PUSH32(esp, MEM32(0x8D7E7C));
    PUSH32(esp, 0x004EC52Eu); RECOMP_ABI_CALL(0x005F1580u, sub_005F1580); /* call 0x005F1580 */

loc_004EC52E: ;
    POP32(esp, ecx);
    MEM32(esi + 0x34) = eax;
    _fa = (uint32_t)(MEM8(0x90E814)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x90E814), LO8(ebx) (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC54E; /* je: equal / zero */

loc_004EC53B: ;
    PUSH32(esp, 0x4EBCEA);
    PUSH32(esp, 0x86DCF4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EC54Bu); RECOMP_ABI_CALL(0x005F1610u, sub_005F1610); /* call 0x005F1610 */

loc_004EC54B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004EC54E: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC561u); } /* indirect call */
    }

loc_004EC564: ;
    PUSH32(esp, eax);
    ecx = esi + 0x40;
    PUSH32(esp, 0x004EC56Du); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EC56D: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0x004EC584u); RECOMP_ABI_CALL(0x004BD7BAu, sub_004BD7BA); /* call 0x004BD7BA */

loc_004EC584: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x90E810);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x86DBAC);
    PUSH32(esp, 0x86DBC4);
    MEM32(0x90E810) = ebx;
    PUSH32(esp, 0x004EC5A7u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_004EC5A7: ;
    PUSH32(esp, 0x004EC5ACu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EC5AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x004EC5B6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EC5B6: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC5C6; /* je: equal / zero */

loc_004EC5BD: ;
    ecx = eax;
    PUSH32(esp, 0x004EC5C4u); RECOMP_ABI_CALL(0x004EB99Bu, sub_004EB99B); /* call 0x004EB99B */

loc_004EC5C4: ;
    goto loc_004EC5C8;

loc_004EC5C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EC5C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EC5CEu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EC5CE: ;
    ecx = eax;
    PUSH32(esp, 0x004EC5D5u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EC5D5: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004EC5DDu); RECOMP_ABI_CALL(0x004E019Du, sub_004E019D); /* call 0x004E019D */

loc_004EC5DD: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86DCEC);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EC5F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC5F2u); } /* indirect call */
    }

loc_004EC5F5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004EC5FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC5FBu); } /* indirect call */
    }

loc_004EC5FE: ;
    PUSH32(esp, 0x004EC603u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EC603: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 8);
    PUSH32(esp, 0x004EC60Du); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EC60D: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC625; /* je: equal / zero */

loc_004EC616: ;
    ecx = edi;
    PUSH32(esp, 0x004EC61Du); RECOMP_ABI_CALL(0x004BE475u, sub_004BE475); /* call 0x004BE475 */

loc_004EC61D: ;
    MEM32(edi) = 0x86DC54;
    goto loc_004EC627;

loc_004EC625: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EC627: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004EC62Du); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EC62D: ;
    ecx = eax;
    PUSH32(esp, 0x004EC634u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EC634: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004EC63Cu); RECOMP_ABI_CALL(0x004E0407u, sub_004E0407); /* call 0x004E0407 */

loc_004EC63C: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp));
    ecx = edi;
    PUSH32(esp, 0x004EC655u); RECOMP_ABI_CALL(0x004B0172u, sub_004B0172); /* call 0x004B0172 */

loc_004EC655: ;
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004EC660u); RECOMP_ABI_CALL(0x004AFD71u, sub_004AFD71); /* call 0x004AFD71 */

loc_004EC660: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EC667
 * Original: 0x004EC667 - 0x004EC66B (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC667(void)
{

loc_004EC667: ;
    SET_LO8(eax, MEM8(ecx + 0x3C));
    esp += 4; return; /* ret */

}

/**
 * sub_004EC66B
 * Original: 0x004EC66B - 0x004EC66F (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC66B(void)
{

loc_004EC66B: ;
    SET_LO8(eax, MEM8(ecx + 0x4C));
    esp += 4; return; /* ret */

}

/**
 * sub_004EC66F
 * Original: 0x004EC66F - 0x004EC674 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC66F(void)
{

loc_004EC66F: ;
    MEM8(ecx + 0x4C) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004EC674
 * Original: 0x004EC674 - 0x004EC679 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC674(void)
{

loc_004EC674: ;
    MEM8(ecx + 0x4C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004EC679
 * Original: 0x004EC679 - 0x004EC67C (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC679(void)
{

loc_004EC679: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC67C
 * Original: 0x004EC67C - 0x004EC684 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC67C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC67C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECD08(); return; /* tail jmp 0x004ECD08 */

}

/**
 * sub_004EC684
 * Original: 0x004EC684 - 0x004EC68C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC684(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC684: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECD08(); return; /* tail jmp 0x004ECD08 */

}

/**
 * sub_004EC68C
 * Original: 0x004EC68C - 0x004EC694 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC68C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC68C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECD08(); return; /* tail jmp 0x004ECD08 */

}

/**
 * sub_004EC694
 * Original: 0x004EC694 - 0x004EC69C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC694(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC694: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECD08(); return; /* tail jmp 0x004ECD08 */

}

/**
 * sub_004EC69C
 * Original: 0x004EC69C - 0x004EC7D7 (315 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC69C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EC69C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0xC;
    ebp = esi + 0x10;
    PUSH32(esp, edi);
    MEM32(esi) = 0x86DD24;
    MEM32(esi + 4) = 0x86DD1C;
    MEM32(esi + 8) = 0x86DD10;
    MEM32(ebx) = 0x86DD98;
    MEM32(ebp) = 0x86DD50;
    PUSH32(esp, 0x004EC6CEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EC6CE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004EC6D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC6D2u); } /* indirect call */
    }

loc_004EC6D5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86DBAC);
    PUSH32(esp, 0x86DBC4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004EC6E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC6E3u); } /* indirect call */
    }

loc_004EC6E6: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, MEM32(esi + 0x40));
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x004EC6FCu); RECOMP_ABI_CALL(0x004E354Bu, sub_004E354B); /* call 0x004E354B */

loc_004EC6FC: ;
    eax = MEM32(esi + 0x34);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC720; /* je: equal / zero */

loc_004EC705: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EC70Bu); RECOMP_ABI_CALL(0x005F2FB0u, sub_005F2FB0); /* call 0x005F2FB0 */

loc_004EC70B: ;
    POP32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004EC714u); RECOMP_ABI_CALL(0x004EBD0Fu, sub_004EBD0F); /* call 0x004EBD0F */

loc_004EC714: ;
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, 0x004EC71Cu); RECOMP_ABI_CALL(0x005F2F60u, sub_005F2F60); /* call 0x005F2F60 */

loc_004EC71C: ;
    POP32(esp, ecx);
    MEM32(esi + 0x34) = edi;

loc_004EC720: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC725u); } /* indirect call */
    }

loc_004EC728: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC734; /* je: equal / zero */

loc_004EC72F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EC734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC731u); } /* indirect call */
    }

loc_004EC734: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x86DCEC);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EC74Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC749u); } /* indirect call */
    }

loc_004EC74C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004EC754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC751u); } /* indirect call */
    }

loc_004EC754: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    edi = MEM32(eax + 0x2C);
    PUSH32(esp, MEM32(esi + 0x58));
    ecx = edi;
    PUSH32(esp, 0x004EC76Cu); RECOMP_ABI_CALL(0x004B01B9u, sub_004B01B9); /* call 0x004B01B9 */

loc_004EC76C: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004EC774u); RECOMP_ABI_CALL(0x004AFD84u, sub_004AFD84); /* call 0x004AFD84 */

loc_004EC774: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC780; /* je: equal / zero */

loc_004EC77B: ;
    PUSH32(esp, 0x004EC780u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EC780: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC78C; /* je: equal / zero */

loc_004EC787: ;
    PUSH32(esp, 0x004EC78Cu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EC78C: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC798; /* je: equal / zero */

loc_004EC793: ;
    PUSH32(esp, 0x004EC798u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EC798: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC7A4; /* je: equal / zero */

loc_004EC79F: ;
    PUSH32(esp, 0x004EC7A4u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EC7A4: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC7B0; /* je: equal / zero */

loc_004EC7AB: ;
    PUSH32(esp, 0x004EC7B0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EC7B0: ;
    ecx = ebp;
    PUSH32(esp, 0x004EC7B7u); RECOMP_ABI_CALL(0x004EBF3Eu, sub_004EBF3E); /* call 0x004EBF3E */

loc_004EC7B7: ;
    ecx = ebx;
    PUSH32(esp, 0x004EC7BEu); RECOMP_ABI_CALL(0x0060CB81u, sub_0060CB81); /* call 0x0060CB81 */

loc_004EC7BE: ;
    MEM32(esi + 8) = 0x86DC24;
    POP32(esp, edi);
    MEM32(esi + 4) = 0x86426C;
    MEM32(esi) = 0x863F20;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EC7D7
 * Original: 0x004EC7D7 - 0x004EC8A4 (205 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EC7D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EC7D7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC7EFu); RECOMP_ABI_CALL(0x00454720u, sub_00454720); /* call 0x00454720 */

loc_004EC7EF: ;
    _fb = (uint32_t)(0x1388) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1388)) >> 32) & 1);
    eax = eax + 0x1388;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    MEM32(esi + 0x4C) = eax;
    edi = MEM32(0x90E7AC);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    edx = ebp + -68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86DDA0);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EC815u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC812u); } /* indirect call */
    }

loc_004EC815: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC81Cu); RECOMP_ABI_CALL(0x004DC1D4u, sub_004DC1D4); /* call 0x004DC1D4 */

loc_004EC81C: ;
    ebx = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x38) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC829u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EC829: ;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC835u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EC835: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004EC857; /* je: equal / zero */

loc_004EC83C: ;
    ecx = esi + -4;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = ebp + -68;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC855u); RECOMP_ABI_CALL(0x004EC0C5u, sub_004EC0C5); /* call 0x004EC0C5 */

loc_004EC855: ;
    goto loc_004EC859;

loc_004EC857: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EC859: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC85Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EC85F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC866u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EC866: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x40)) >> 32) & 1);
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EC88Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC888u); } /* indirect call */
    }

loc_004EC88B: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC893u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EC893: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC8A0u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004EC8A0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC8A4
 * Original: 0x004EC8A4 - 0x004EC8CB (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC8A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EC8A4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC8BB; /* je: equal / zero */

loc_004EC8AE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0x3C));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC8B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC8B5u); } /* indirect call */
    }

loc_004EC8B7: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004EC8BB: ;
    PUSH32(esp, 0);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004EC8C5u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EC8C5: ;
    MEM8(esi + 0x44) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EC8CB
 * Original: 0x004EC8CB - 0x004EC8F4 (41 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC8CB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EC8CB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC8E2; /* je: equal / zero */

loc_004EC8D5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x3C));
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EC8DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC8DCu); } /* indirect call */
    }

loc_004EC8DE: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004EC8E2: ;
    PUSH32(esp, 0);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x004EC8ECu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EC8EC: ;
    MEM8(esi + 0x44) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EC8F4
 * Original: 0x004EC8F4 - 0x004EC959 (101 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC8F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EC8F4: ;
    PUSH32(esp, 0x004EC8F9u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EC8F9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004EC905u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EC905: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EC921; /* je: equal / zero */

loc_004EC90C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004EC91Fu); RECOMP_ABI_CALL(0x004EC28Au, sub_004EC28A); /* call 0x004EC28A */

loc_004EC91F: ;
    goto loc_004EC923;

loc_004EC921: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EC923: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EC92Au); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004EC92A: ;
    ecx = eax;
    PUSH32(esp, 0x004EC931u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004EC931: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EC955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC952u); } /* indirect call */
    }

loc_004EC955: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004EC959
 * Original: 0x004EC959 - 0x004EC974 (27 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EC959(void)
{

loc_004EC959: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x67616D65);
    PUSH32(esp, 0x004EC973u); RECOMP_ABI_CALL(0x004B1865u, sub_004B1865); /* call 0x004B1865 */

loc_004EC973: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EC974
 * Original: 0x004EC974 - 0x004ECA00 (140 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EC974(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EC974: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004EC989u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC986u); } /* indirect call */
    }

loc_004EC989: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004EC990u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC98Du); } /* indirect call */
    }

loc_004EC990: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    eax = ebp + -16;
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC9A1u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004EC9A1: ;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 8));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x86DDAC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x8D7E88));
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x8D7E84));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC9D7u); RECOMP_ABI_CALL(0x004B45CCu, sub_004B45CC); /* call 0x004B45CC */

loc_004EC9D7: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC9DEu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004EC9DE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x004EC9F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EC9EAu); } /* indirect call */
    }

loc_004EC9F0: ;
    ecx = MEM32(ebp + -4);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004EC9FCu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004EC9FC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECA00
 * Original: 0x004ECA00 - 0x004ECA04 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECA00(void)
{

loc_004ECA00: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECA04
 * Original: 0x004ECA04 - 0x004ECA0C (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECA04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ECA04: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004EBF07(); return; /* tail jmp 0x004EBF07 */

}

/**
 * sub_004ECA0C
 * Original: 0x004ECA0C - 0x004ECA32 (38 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECA0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECA0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x18;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004ECA2E; /* jbe: below or equal (unsigned <=) */

loc_004ECA1B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x004ECA23u); RECOMP_ABI_CALL(0x004DD726u, sub_004DD726); /* call 0x004DD726 */

loc_004ECA23: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004ECA29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA27u); } /* indirect call */
    }

loc_004ECA29: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004ECA1B; /* jb: below (unsigned <) */

loc_004ECA2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECA32
 * Original: 0x004ECA32 - 0x004ECA6C (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECA32(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECA32: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004ECA3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA3Bu); } /* indirect call */
    }

loc_004ECA3E: ;
    ecx = MEM32(esi + 0x38);
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x004ECA48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA45u); } /* indirect call */
    }

loc_004ECA48: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004ECA55; /* jne: not equal / not zero */

loc_004ECA51: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECA55: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004ECA5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA5Du); } /* indirect call */
    }

loc_004ECA5F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004ECA67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA65u); } /* indirect call */
    }

loc_004ECA67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECA6C
 * Original: 0x004ECA6C - 0x004ECA8E (34 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECA6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECA6C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004ECA79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA77u); } /* indirect call */
    }

loc_004ECA79: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004ECA80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA7Du); } /* indirect call */
    }

loc_004ECA80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ECA8C; /* je: equal / zero */

loc_004ECA84: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ECA8C; /* jne: not equal / not zero */

loc_004ECA8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECA8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECA8E
 * Original: 0x004ECA8E - 0x004ECB08 (122 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECA8E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECA8E: ;
    PUSH32(esp, esi);
    esi = ecx + 0x38;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ECAFD; /* je: equal / zero */

loc_004ECA98: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004ECA9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECA9Au); } /* indirect call */
    }

loc_004ECA9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ECAFD; /* jne: not equal / not zero */

loc_004ECAA1: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x004ECAA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECAA5u); } /* indirect call */
    }

loc_004ECAA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ECAFD; /* jne: not equal / not zero */

loc_004ECAAC: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004ECAB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECAB1u); } /* indirect call */
    }

loc_004ECAB4: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ECAFC; /* je: equal / zero */

loc_004ECABB: ;
    ecx = MEM32(0x90E7AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004ECAC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECAC3u); } /* indirect call */
    }

loc_004ECAC6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004ECACEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECACBu); } /* indirect call */
    }

loc_004ECACE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ECAFC; /* je: equal / zero */

loc_004ECAD2: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x34);
    ecx = MEM32(ecx + 0x2C);
    PUSH32(esp, 0x67616D65);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ECAECu); RECOMP_ABI_CALL(0x004B0548u, sub_004B0548); /* call 0x004B0548 */

loc_004ECAEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ECAFC; /* je: equal / zero */

loc_004ECAF0: ;
    ecx = eax + 8;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004ECAFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECAF9u); } /* indirect call */
    }

loc_004ECAFC: ;
    POP32(esp, edi);

loc_004ECAFD: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x004ECB06u); RECOMP_ABI_CALL(0x004EBF07u, sub_004EBF07); /* call 0x004EBF07 */

loc_004ECB06: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECB08
 * Original: 0x004ECB08 - 0x004ECB35 (45 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECB08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ECB08: ;
    ecx = MEM32(ecx + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x004ECB11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECB0Eu); } /* indirect call */
    }

loc_004ECB11: ;
    ecx = MEM32(0x90E7AC);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x004ECB1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECB1Bu); } /* indirect call */
    }

loc_004ECB1E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004ECB26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECB23u); } /* indirect call */
    }

loc_004ECB26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_004ECB32; /* je: equal / zero */

loc_004ECB2B: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2C)); return; /* indirect tail jmp */

loc_004ECB32: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004ECB35
 * Original: 0x004ECB35 - 0x004ECB51 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECB35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECB35: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ECB3Du); RECOMP_ABI_CALL(0x004EC183u, sub_004EC183); /* call 0x004EC183 */

loc_004ECB3D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECB4B; /* je: equal / zero */

loc_004ECB44: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECB4Au); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ECB4A: ;
    POP32(esp, ecx);

loc_004ECB4B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECB51
 * Original: 0x004ECB51 - 0x004ECBE9 (152 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECB51(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004ECB51: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004ECB5Au); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004ECB5A: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004ECB64u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004ECB64: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi) = 0x86DDD8;
    MEM32(edi) = 0x86DDC8;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x10) = 1;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004ECB86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECB83u); } /* indirect call */
    }

loc_004ECB86: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004ECB96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECB93u); } /* indirect call */
    }

loc_004ECB96: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x004ECB9Fu); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004ECB9F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4EBD48);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECBB6u); RECOMP_ABI_CALL(0x005F1BC0u, sub_005F1BC0); /* call 0x005F1BC0 */

loc_004ECBB6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004ECBE2; /* jne: not equal / not zero */

loc_004ECBC0: ;
    PUSH32(esp, 0x7530);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4EC366);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECBD1u); RECOMP_ABI_CALL(0x005F1DD0u, sub_005F1DD0); /* call 0x005F1DD0 */

loc_004ECBD1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004ECBE2; /* je: equal / zero */

loc_004ECBDB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECBE1u); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004ECBE1: ;
    POP32(esp, ecx);

loc_004ECBE2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004ECBE9
 * Original: 0x004ECBE9 - 0x004ECBEC (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECBE9(void)
{

loc_004ECBE9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECBEC
 * Original: 0x004ECBEC - 0x004ECC08 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECBEC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECBEC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ECBF4u); RECOMP_ABI_CALL(0x004ECC08u, sub_004ECC08); /* call 0x004ECC08 */

loc_004ECBF4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECC02; /* je: equal / zero */

loc_004ECBFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECC01u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ECC01: ;
    POP32(esp, ecx);

loc_004ECC02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECC08
 * Original: 0x004ECC08 - 0x004ECC27 (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECC08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ECC08: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x86DDD8;
    MEM32(ecx) = 0x86DDC8;
    PUSH32(esp, 0x004ECC1Fu); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004ECC1F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004ECC27
 * Original: 0x004ECC27 - 0x004ECC2F (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECC27(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ECC27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECBEC(); return; /* tail jmp 0x004ECBEC */

}

/**
 * sub_004ECC2F
 * Original: 0x004ECC2F - 0x004ECCC2 (147 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECC2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004ECC2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x004ECC38u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004ECC38: ;
    edi = esi + 8;
    ecx = edi;
    PUSH32(esp, 0x004ECC42u); RECOMP_ABI_CALL(0x004E30ECu, sub_004E30EC); /* call 0x004E30EC */

loc_004ECC42: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    ecx = esi;
    MEM32(esi) = 0x86DDEC;
    MEM32(edi) = 0x86DDDC;
    MEM8(esi + 0x10) = 1;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x004ECC67u); RECOMP_ABI_CALL(0x004DD5E6u, sub_004DD5E6); /* call 0x004DD5E6 */

loc_004ECC67: ;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004ECC72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECC6Fu); } /* indirect call */
    }

loc_004ECC72: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004ECC82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECC7Fu); } /* indirect call */
    }

loc_004ECC82: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x14));
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECC8Fu); RECOMP_ABI_CALL(0x005F19D0u, sub_005F19D0); /* call 0x005F19D0 */

loc_004ECC8F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004ECCBB; /* jne: not equal / not zero */

loc_004ECC99: ;
    PUSH32(esp, 0x7530);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4EC413);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECCAAu); RECOMP_ABI_CALL(0x005F1DD0u, sub_005F1DD0); /* call 0x005F1DD0 */

loc_004ECCAA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_004ECCBB; /* je: equal / zero */

loc_004ECCB4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECCBAu); RECOMP_ABI_CALL(0x005F1FD0u, sub_005F1FD0); /* call 0x005F1FD0 */

loc_004ECCBA: ;
    POP32(esp, ecx);

loc_004ECCBB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ECCC2
 * Original: 0x004ECCC2 - 0x004ECCC5 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECCC2(void)
{

loc_004ECCC2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECCC5
 * Original: 0x004ECCC5 - 0x004ECCE1 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECCC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECCC5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ECCCDu); RECOMP_ABI_CALL(0x004ECCE1u, sub_004ECCE1); /* call 0x004ECCE1 */

loc_004ECCCD: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECCDB; /* je: equal / zero */

loc_004ECCD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECCDAu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ECCDA: ;
    POP32(esp, ecx);

loc_004ECCDB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECCE1
 * Original: 0x004ECCE1 - 0x004ECD00 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECCE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ECCE1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x86DDEC;
    MEM32(ecx) = 0x86DDDC;
    PUSH32(esp, 0x004ECCF8u); RECOMP_ABI_CALL(0x004E310Cu, sub_004E310C); /* call 0x004E310C */

loc_004ECCF8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004DD576(); return; /* tail jmp 0x004DD576 */

}

/**
 * sub_004ECD00
 * Original: 0x004ECD00 - 0x004ECD08 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ECD00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004ECCC5(); return; /* tail jmp 0x004ECCC5 */

}

/**
 * sub_004ECD08
 * Original: 0x004ECD08 - 0x004ECD24 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECD08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECD08: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ECD10u); RECOMP_ABI_CALL(0x004EC69Cu, sub_004EC69C); /* call 0x004EC69C */

loc_004ECD10: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECD1E; /* je: equal / zero */

loc_004ECD17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECD1Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ECD1D: ;
    POP32(esp, ecx);

loc_004ECD1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECD24
 * Original: 0x004ECD24 - 0x004ECD86 (98 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECD24(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004ECD24: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECD2Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ECD2B: ;
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004ECD37u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004ECD37: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004ECD50; /* je: equal / zero */

loc_004ECD3E: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x004ECD4Eu); RECOMP_ABI_CALL(0x004ECB51u, sub_004ECB51); /* call 0x004ECB51 */

loc_004ECD4E: ;
    goto loc_004ECD52;

loc_004ECD50: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECD52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ECD58u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004ECD58: ;
    ecx = eax;
    PUSH32(esp, 0x004ECD5Fu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004ECD5F: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004ECD81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECD7Eu); } /* indirect call */
    }

loc_004ECD81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ECD86
 * Original: 0x004ECD86 - 0x004ECDEB (101 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECD86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004ECD86: ;
    PUSH32(esp, 0x004ECD8Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ECD8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004ECD97u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004ECD97: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004ECDB3; /* je: equal / zero */

loc_004ECD9E: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004ECDB1u); RECOMP_ABI_CALL(0x004ECB51u, sub_004ECB51); /* call 0x004ECB51 */

loc_004ECDB1: ;
    goto loc_004ECDB5;

loc_004ECDB3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECDB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ECDBCu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004ECDBC: ;
    ecx = eax;
    PUSH32(esp, 0x004ECDC3u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004ECDC3: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004ECDE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECDE4u); } /* indirect call */
    }

loc_004ECDE7: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004ECDEB
 * Original: 0x004ECDEB - 0x004ECE54 (105 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECDEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004ECDEB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ECDF1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ECDF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004ECDFDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004ECDFD: ;
    edi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004ECE1D; /* je: equal / zero */

loc_004ECE06: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004ECE13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECE10u); } /* indirect call */
    }

loc_004ECE13: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004ECE1Bu); RECOMP_ABI_CALL(0x004ECC2Fu, sub_004ECC2F); /* call 0x004ECC2F */

loc_004ECE1B: ;
    goto loc_004ECE1F;

loc_004ECE1D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECE1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ECE25u); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004ECE25: ;
    ecx = eax;
    PUSH32(esp, 0x004ECE2Cu); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004ECE2C: ;
    ecx = MEM32(0x90E7AC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    edi = edi & eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004ECE50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ECE4Du); } /* indirect call */
    }

loc_004ECE50: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ECE54
 * Original: 0x004ECE54 - 0x004ECE70 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECE54(void)
{

loc_004ECE54: ;
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    esi = ecx;
    PUSH32(esp, 0x004ECE5Eu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004ECE5E: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86DDF0;
    PUSH32(esp, 0x004ECE6Cu); RECOMP_ABI_CALL(0x004ED569u, sub_004ED569); /* call 0x004ED569 */

loc_004ECE6C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECE70
 * Original: 0x004ECE70 - 0x004ECE76 (6 bytes, 2 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECE70(void)
{

loc_004ECE70: ;
    eax = 0x86DE34;
    esp += 4; return; /* ret */

}

/**
 * sub_004ECE76
 * Original: 0x004ECE76 - 0x004ECEB0 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECE76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECE76: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86DDF0;
    PUSH32(esp, 0x004ECE87u); RECOMP_ABI_CALL(0x004ED6AFu, sub_004ED6AF); /* call 0x004ED6AF */

loc_004ECE87: ;
    ecx = esi;
    PUSH32(esp, 0x004ECE8Eu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004ECE8E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECEAA; /* je: equal / zero */

loc_004ECE95: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECEA7u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004ECEA7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004ECEAA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECEB0
 * Original: 0x004ECEB0 - 0x004ECECC (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECEB0(void)
{

loc_004ECEB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x17);
    esi = ecx;
    PUSH32(esp, 0x004ECEBAu); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004ECEBA: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86DE50;
    PUSH32(esp, 0x004ECEC8u); RECOMP_ABI_CALL(0x004ED702u, sub_004ED702); /* call 0x004ED702 */

loc_004ECEC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECECC
 * Original: 0x004ECECC - 0x004ECED2 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECECC(void)
{

loc_004ECECC: ;
    eax = 0x86DE94;
    esp += 4; return; /* ret */

}

/**
 * sub_004ECED2
 * Original: 0x004ECED2 - 0x004ECF0C (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECED2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECED2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86DE50;
    PUSH32(esp, 0x004ECEE3u); RECOMP_ABI_CALL(0x004ED991u, sub_004ED991); /* call 0x004ED991 */

loc_004ECEE3: ;
    ecx = esi;
    PUSH32(esp, 0x004ECEEAu); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004ECEEA: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECF06; /* je: equal / zero */

loc_004ECEF1: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECF03u); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004ECF03: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004ECF06: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECF0C
 * Original: 0x004ECF0C - 0x004ECF28 (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECF0C(void)
{

loc_004ECF0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    esi = ecx;
    PUSH32(esp, 0x004ECF16u); RECOMP_ABI_CALL(0x004D075Cu, sub_004D075C); /* call 0x004D075C */

loc_004ECF16: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86DEB0;
    PUSH32(esp, 0x004ECF24u); RECOMP_ABI_CALL(0x004EDBA5u, sub_004EDBA5); /* call 0x004EDBA5 */

loc_004ECF24: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECF28
 * Original: 0x004ECF28 - 0x004ECF2E (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECF28(void)
{

loc_004ECF28: ;
    eax = 0x86DEF4;
    esp += 4; return; /* ret */

}

/**
 * sub_004ECF2E
 * Original: 0x004ECF2E - 0x004ECF68 (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECF2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECF2E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x86DEB0;
    PUSH32(esp, 0x004ECF3Fu); RECOMP_ABI_CALL(0x004EDD95u, sub_004EDD95); /* call 0x004EDD95 */

loc_004ECF3F: ;
    ecx = esi;
    PUSH32(esp, 0x004ECF46u); RECOMP_ABI_CALL(0x004D0774u, sub_004D0774); /* call 0x004D0774 */

loc_004ECF46: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECF62; /* je: equal / zero */

loc_004ECF4D: ;
    PUSH32(esp, 0x10E);
    PUSH32(esp, 0x868148);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECF5Fu); RECOMP_ABI_CALL(0x005060A0u, sub_005060A0); /* call 0x005060A0 */

loc_004ECF5F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004ECF62: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ECF68
 * Original: 0x004ECF68 - 0x004ECFC3 (91 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECF68(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ECF68: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004ECF6Fu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004ECF6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004ECF7D; /* je: equal / zero */

loc_004ECF74: ;
    ecx = eax;
    PUSH32(esp, 0x004ECF7Bu); RECOMP_ABI_CALL(0x004ECE54u, sub_004ECE54); /* call 0x004ECE54 */

loc_004ECF7B: ;
    goto loc_004ECF7F;

loc_004ECF7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECF7F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ECF85u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004ECF85: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004ECF8Cu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004ECF8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004ECF9B; /* je: equal / zero */

loc_004ECF92: ;
    ecx = eax;
    PUSH32(esp, 0x004ECF99u); RECOMP_ABI_CALL(0x004ECEB0u, sub_004ECEB0); /* call 0x004ECEB0 */

loc_004ECF99: ;
    goto loc_004ECF9D;

loc_004ECF9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECF9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ECFA3u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004ECFA3: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x004ECFAAu); RECOMP_ABI_CALL(0x004CE94Fu, sub_004CE94F); /* call 0x004CE94F */

loc_004ECFAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004ECFB9; /* je: equal / zero */

loc_004ECFB0: ;
    ecx = eax;
    PUSH32(esp, 0x004ECFB7u); RECOMP_ABI_CALL(0x004ECF0Cu, sub_004ECF0C); /* call 0x004ECF0C */

loc_004ECFB7: ;
    goto loc_004ECFBB;

loc_004ECFB9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ECFBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ECFC1u); RECOMP_ABI_CALL(0x00505EC0u, sub_00505EC0); /* call 0x00505EC0 */

loc_004ECFC1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECFC3
 * Original: 0x004ECFC3 - 0x004ECFD5 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECFC3(void)
{

loc_004ECFC3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ECFCBu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004ECFCB: ;
    MEM32(esi) = 0x86DF10;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ECFE0
 * Original: 0x004ECFE0 - 0x004ED00D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ECFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ECFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DF10;
    PUSH32(esp, 0x004ECFEEu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004ECFEE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ECFFC; /* je: equal / zero */

loc_004ECFF5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ECFFBu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ECFFB: ;
    POP32(esp, ecx);

loc_004ECFFC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ED00D
 * Original: 0x004ED00D - 0x004ED02B (30 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED00D(void)
{

loc_004ED00D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004ED01Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED018u); } /* indirect call */
    }

loc_004ED01B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004ED027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED024u); } /* indirect call */
    }

loc_004ED027: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ED02B
 * Original: 0x004ED02B - 0x004ED069 (62 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED02B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED02B: ;
    PUSH32(esp, 0x004ED030u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ED030: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x004ED03Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004ED03F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED057; /* je: equal / zero */

loc_004ED046: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004ED055u); RECOMP_ABI_CALL(0x004EE153u, sub_004EE153); /* call 0x004EE153 */

loc_004ED055: ;
    goto loc_004ED059;

loc_004ED057: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ED059: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ED05Fu); RECOMP_ABI_CALL(0x004E3379u, sub_004E3379); /* call 0x004E3379 */

loc_004ED05F: ;
    ecx = eax;
    PUSH32(esp, 0x004ED066u); RECOMP_ABI_CALL(0x004E33BAu, sub_004E33BA); /* call 0x004E33BA */

loc_004ED066: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ED069
 * Original: 0x004ED069 - 0x004ED08B (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_004ED069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED069: ;
    _fa = (uint32_t)(MEM32(ecx + 0x258)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x258), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ED088; /* jne: not equal / not zero */

loc_004ED072: ;
    edx = MEM32(ecx + 0x7C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004ED081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED07Bu); } /* indirect call */
    }

loc_004ED081: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_004ED088: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_004ED08B
 * Original: 0x004ED08B - 0x004ED12E (163 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004ED08B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004ED08B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x4C));
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x284;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi) = LO8(ebx);
    ecx = MEM32(0x90E804);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004ED0B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED0B0u); } /* indirect call */
    }

loc_004ED0B3: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004ED0C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED0C0u); } /* indirect call */
    }

loc_004ED0C3: ;
    ecx = MEM32(0x90E804);
    MEM32(ebp + -72) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004ED0D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED0CEu); } /* indirect call */
    }

loc_004ED0D1: ;
    ecx = eax + 0x10;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004ED0D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED0D6u); } /* indirect call */
    }

loc_004ED0D9: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x100), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -76) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_004ED11D; /* jle: less or equal (signed <=) */

loc_004ED0E4: ;
    PUSH32(esp, ebx);
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -76));
    PUSH32(esp, MEM32(ebp + -72));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ED0F4u); RECOMP_ABI_CALL(0x005F2D60u, sub_005F2D60); /* call 0x005F2D60 */

loc_004ED0F4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004ED11D; /* jne: not equal / not zero */

loc_004ED0FB: ;
    eax = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004ED10E; /* je: equal / zero */

loc_004ED103: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x100) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004ED0E4; /* jl: less (signed <) */

loc_004ED10C: ;
    goto loc_004ED11D;

loc_004ED10E: ;
    PUSH32(esp, 0x20);
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ED11Au); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004ED11A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004ED11D: ;
    ecx = MEM32(ebp + -4);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004ED12Au); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004ED12A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ED12E
 * Original: 0x004ED12E - 0x004ED46A (828 bytes, 239 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004ED12E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004ED12E: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xD8));
    esp = esp - 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x6C) = eax;
    ebx = ecx;
    PUSH32(esp, 0x004ED14Bu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004ED14B: ;
    esi = MEM32(ebp + 0x78);
    MEM32(ebx) = 0x86DFA0;
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    edi = ebx + 8;
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
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x270) = MEM32(ebx + 0x270) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x270)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x274) = MEM32(ebx + 0x274) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x274)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x254) = MEM32(ebx + 0x254) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x254)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebx + 0x278) = 0;
    MEM8(ebx + 0x279) = 0;
    MEM8(ebx + 0x27A) = 0;
    MEM32(ebx + 0x25C) = 1;
    MEM32(ebx + 0x260) = 4;
    eax = MEM32(0x90E7AC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(eax + 0x34);
    edi = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    edx = ebx + 0x1C8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x004ED1BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED1B9u); } /* indirect call */
    }

loc_004ED1BC: ;
    esi = MEM32(ebp + 0x78);
    eax = MEM32(esi + 0x64);
    MEM32(ebp + -56) = eax;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, 0x7374696D);
    PUSH32(esp, edi);
    MEM32(ebp + -64) = eax;
    PUSH32(esp, 0x004ED1D6u); RECOMP_ABI_CALL(0x005E2450u, sub_005E2450); /* call 0x005E2450 */

loc_004ED1D6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -56);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + 0x26C) = ecx;
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(esi + 0x84);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x80000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -60) = ecx;
    edi = eax;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x20000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -72) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_004ED275; /* jne: not equal / not zero */

loc_004ED20E: ;
    PUSH32(esp, 0x004ED213u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ED213: ;
    PUSH32(esp, eax);
    eax = esi + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    ecx = ebp + -104;
    PUSH32(esp, 0x004ED225u); RECOMP_ABI_CALL(0x004DCBFAu, sub_004DCBFA); /* call 0x004DCBFA */

loc_004ED225: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(0x86DB84));
    ecx = ebp + -104;
    PUSH32(esp, 0x004ED235u); RECOMP_ABI_CALL(0x004DCCFBu, sub_004DCCFB); /* call 0x004DCCFB */

loc_004ED235: ;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ebx + 0x250) = eax;
    PUSH32(esp, MEM32(0x86DB88));
    ecx = ebp + -104;
    PUSH32(esp, 0x004ED24Bu); RECOMP_ABI_CALL(0x004DCCFBu, sub_004DCCFB); /* call 0x004DCCFB */

loc_004ED24B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(ebx + 0x27C) = eax;
    PUSH32(esp, MEM32(0x86DB8C));
    ecx = ebp + -104;
    PUSH32(esp, 0x004ED261u); RECOMP_ABI_CALL(0x004DCCFBu, sub_004DCCFB); /* call 0x004DCCFB */

loc_004ED261: ;
    ecx = ebp + -104;
    MEM32(ebx + 0x280) = eax;
    PUSH32(esp, 0x004ED26Fu); RECOMP_ABI_CALL(0x004DCC7Fu, sub_004DCC7F); /* call 0x004DCC7F */

loc_004ED26F: ;
    eax = MEM32(ebp + -68);
    ecx = MEM32(ebp + -72);

loc_004ED275: ;
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 0x27B) = LO8(edx);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 0x27A) = LO8(edx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004ED29F; /* je: equal / zero */

loc_004ED297: ;
    MEM32(ebx + 0x25C) = edx;
    goto loc_004ED2AF;

loc_004ED29F: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x25C) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ED2AF: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004ED2FA; /* jne: not equal / not zero */

loc_004ED2B4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004ED2EC; /* jne: not equal / not zero */

loc_004ED2B8: ;
    ecx = MEM32(ebp + 0x78);
    _fb = (uint32_t)(0xFFFFFFC3u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFC3u)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFC3u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -56) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_004ED2DA; /* jle: less or equal (signed <=) */

loc_004ED2C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_004ED2EC; /* jne: not equal / not zero */

loc_004ED2C7: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x26C) = MEM32(ebx + 0x26C) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx + 0x26C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x258) = 3;
    goto loc_004ED2F2;

loc_004ED2DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_004ED2EC; /* jne: not equal / not zero */

loc_004ED2DE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x26C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x26C), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_004ED2EC; /* jge: greater or equal (signed >=) */

loc_004ED2E6: ;
    MEM32(ebx + 0x26C) = edx;

loc_004ED2EC: ;
    MEM32(ebx + 0x258) = edx;

loc_004ED2F2: ;
    ecx = MEM32(ebx + 0x26C);
    goto loc_004ED346;

loc_004ED2FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_004ED336; /* je: equal / zero */

loc_004ED2FE: ;
    ecx = MEM32(ebp + 0x78);
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -64), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_004ED324; /* jle: less or equal (signed <=) */

loc_004ED306: ;
    ecx = MEM32(esi + 0xF8);
    MEM32(ebp + 0x78) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x70) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x258) = eax;
    eax = MEM32(ebp + 0x78);
    goto loc_004ED32E;

loc_004ED324: ;
    MEM32(ebx + 0x258) = 4;

loc_004ED32E: ;
    MEM32(ebx + 0x268) = edx;
    goto loc_004ED34C;

loc_004ED336: ;
    ecx = MEM32(esi + 0x78);
    _fb = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + 0x78)));
    ecx = ecx - MEM32(ebp + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + 0x258) = 1;

loc_004ED346: ;
    MEM32(ebx + 0x268) = ecx;

loc_004ED34C: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 0x279) = LO8(eax);
    MEM8(ebx + 0x110) = 0;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004ED369u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED366u); } /* indirect call */
    }

loc_004ED369: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004ED379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED376u); } /* indirect call */
    }

loc_004ED379: ;
    edi = eax;
    PUSH32(esp, 0);
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ED38Au); RECOMP_ABI_CALL(0x005F2DB0u, sub_005F2DB0); /* call 0x005F2DB0 */

loc_004ED38A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_004ED448; /* jne: not equal / not zero */

loc_004ED395: ;
    eax = MEM32(ebp + 0x30);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004ED3D4; /* je: equal / zero */

loc_004ED39B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004ED3C8; /* je: equal / zero */

loc_004ED39E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004ED3BC; /* je: equal / zero */

loc_004ED3A1: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_004ED3B4; /* je: equal / zero */

loc_004ED3A8: ;
    MEM32(ebx + 0x260) = 4;
    goto loc_004ED3DB;

loc_004ED3B4: ;
    MEM32(ebx + 0x260) = ecx;
    goto loc_004ED3DB;

loc_004ED3BC: ;
    MEM32(ebx + 0x260) = 2;
    goto loc_004ED3DB;

loc_004ED3C8: ;
    MEM32(ebx + 0x260) = 1;
    goto loc_004ED3DB;

loc_004ED3D4: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x260) = MEM32(ebx + 0x260) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x260)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004ED3DB: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebx + 0x264) = eax;
    PUSH32(esp, MEM32(esi + 0x74));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ED3F3u); RECOMP_ABI_CALL(0x005F2F10u, sub_005F2F10); /* call 0x005F2F10 */

loc_004ED3F3: ;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x74));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ED407u); RECOMP_ABI_CALL(0x005F2F30u, sub_005F2F30); /* call 0x005F2F30 */

loc_004ED407: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_004ED448; /* jle: less or equal (signed <=) */

loc_004ED40E: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004ED448; /* jne: not equal / not zero */

loc_004ED414: ;
    ecx = MEM32(ebp + -28);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, MEM32(ebp + eax * 4 + -28));
    eax = ebx + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, edi);
    PUSH32(esp, 0x004ED433u); RECOMP_ABI_CALL(0x005F2D00u, sub_005F2D00); /* call 0x005F2D00 */

loc_004ED433: ;
    eax = MEM32(ebp + -52);
    MEM32(ebx + 0x270) = eax;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x274) = eax;

loc_004ED448: ;
    ecx = MEM32(ebp + 0x6C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x148) = 0;
    MEM8(ebx + 0x284) = 0;
    eax = ebx;
    POP32(esp, ebx);
    PUSH32(esp, 0x004ED463u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004ED463: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x70)) >> 32) & 1);
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ED46A
 * Original: 0x004ED46A - 0x004ED46E (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED46A(void)
{

loc_004ED46A: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED46E
 * Original: 0x004ED46E - 0x004ED472 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED46E(void)
{

loc_004ED46E: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED472
 * Original: 0x004ED472 - 0x004ED479 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED472(void)
{

loc_004ED472: ;
    eax = MEM32(ecx + 0x100);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED479
 * Original: 0x004ED479 - 0x004ED47D (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED479(void)
{

loc_004ED479: ;
    eax = MEM32(ecx + 0x78);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED47D
 * Original: 0x004ED47D - 0x004ED484 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED47D(void)
{

loc_004ED47D: ;
    eax = MEM32(ecx + 0x258);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED484
 * Original: 0x004ED484 - 0x004ED48B (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED484(void)
{

loc_004ED484: ;
    eax = MEM32(ecx + 0x25C);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED48B
 * Original: 0x004ED48B - 0x004ED492 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED48B(void)
{

loc_004ED48B: ;
    eax = ecx + 0x1C8;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED492
 * Original: 0x004ED492 - 0x004ED496 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED492(void)
{

loc_004ED492: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED496
 * Original: 0x004ED496 - 0x004ED49D (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED496(void)
{

loc_004ED496: ;
    eax = ecx + 0x148;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED49D
 * Original: 0x004ED49D - 0x004ED4A4 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED49D(void)
{

loc_004ED49D: ;
    SET_LO8(eax, MEM8(ecx + 0x279));
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4A4
 * Original: 0x004ED4A4 - 0x004ED4AB (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4A4(void)
{

loc_004ED4A4: ;
    eax = MEM32(ecx + 0x250);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4AB
 * Original: 0x004ED4AB - 0x004ED4B2 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4AB(void)
{

loc_004ED4AB: ;
    eax = MEM32(ecx + 0x27C);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4B2
 * Original: 0x004ED4B2 - 0x004ED4B9 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4B2(void)
{

loc_004ED4B2: ;
    eax = MEM32(ecx + 0x280);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4B9
 * Original: 0x004ED4B9 - 0x004ED4C0 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4B9(void)
{

loc_004ED4B9: ;
    eax = MEM32(ecx + 0x254);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4C0
 * Original: 0x004ED4C0 - 0x004ED4C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4C0(void)
{

loc_004ED4C0: ;
    eax = MEM32(ecx + 0x6C);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4C4
 * Original: 0x004ED4C4 - 0x004ED4C8 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4C4(void)
{

loc_004ED4C4: ;
    eax = MEM32(ecx + 0x68);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4C8
 * Original: 0x004ED4C8 - 0x004ED4CF (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4C8(void)
{

loc_004ED4C8: ;
    eax = MEM32(ecx + 0x104);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4CF
 * Original: 0x004ED4CF - 0x004ED4D3 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4CF(void)
{

loc_004ED4CF: ;
    eax = MEM32(ecx + 0x7C);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4D3
 * Original: 0x004ED4D3 - 0x004ED4DA (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4D3(void)
{

loc_004ED4D3: ;
    eax = MEM32(ecx + 0x268);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4DA
 * Original: 0x004ED4DA - 0x004ED4E1 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4DA(void)
{

loc_004ED4DA: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED4E1
 * Original: 0x004ED4E1 - 0x004ED4FC (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4E1(void)
{

loc_004ED4E1: ;
    eax = MEM32(ecx + 0x90);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x94);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004ED4FC
 * Original: 0x004ED4FC - 0x004ED503 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED4FC(void)
{

loc_004ED4FC: ;
    SET_LO8(eax, MEM8(ecx + 0x27A));
    esp += 4; return; /* ret */

}

/**
 * sub_004ED503
 * Original: 0x004ED503 - 0x004ED50E (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED503(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED503: ;
    _fa = (uint32_t)(MEM32(ecx + 0x258)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x258), 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004ED50E
 * Original: 0x004ED50E - 0x004ED519 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED50E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED50E: ;
    _fa = (uint32_t)(MEM32(ecx + 0x25C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x25C), 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004ED519
 * Original: 0x004ED519 - 0x004ED524 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED519(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED519: ;
    _fa = (uint32_t)(MEM32(ecx + 0x25C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x25C), 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_004ED524
 * Original: 0x004ED524 - 0x004ED52B (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED524(void)
{

loc_004ED524: ;
    SET_LO8(eax, MEM8(ecx + 0x27B));
    esp += 4; return; /* ret */

}

/**
 * sub_004ED52B
 * Original: 0x004ED52B - 0x004ED532 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED52B(void)
{

loc_004ED52B: ;
    eax = MEM32(ecx + 0x270);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED532
 * Original: 0x004ED532 - 0x004ED539 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED532(void)
{

loc_004ED532: ;
    eax = MEM32(ecx + 0x274);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED539
 * Original: 0x004ED539 - 0x004ED540 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED539(void)
{

loc_004ED539: ;
    eax = MEM32(ecx + 0x260);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED540
 * Original: 0x004ED540 - 0x004ED547 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED540(void)
{

loc_004ED540: ;
    eax = MEM32(ecx + 0x264);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED547
 * Original: 0x004ED547 - 0x004ED569 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED547(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED547: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86DF10;
    PUSH32(esp, 0x004ED555u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004ED555: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ED563; /* je: equal / zero */

loc_004ED55C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ED562u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004ED562: ;
    POP32(esp, ecx);

loc_004ED563: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ED569
 * Original: 0x004ED569 - 0x004ED576 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED569(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED569: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86E02C;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED576
 * Original: 0x004ED576 - 0x004ED5AB (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED576(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED576: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ED57Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ED57E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004ED58Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004ED58A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED59C; /* je: equal / zero */

loc_004ED591: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004ED59Au); RECOMP_ABI_CALL(0x004EE514u, sub_004EE514); /* call 0x004EE514 */

loc_004ED59A: ;
    goto loc_004ED59E;

loc_004ED59C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ED59E: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004ED5A9u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004ED5A9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED5AB
 * Original: 0x004ED5AB - 0x004ED5CA (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED5AB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED5AB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ED5B7u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004ED5B7: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED5C4; /* je: equal / zero */

loc_004ED5BE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004ED5C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED5C2u); } /* indirect call */
    }

loc_004ED5C4: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED5CA
 * Original: 0x004ED5CA - 0x004ED5FD (51 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED5CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED5CA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004ED5DFu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004ED5DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004EE46B(); return; /* tail jmp 0x004EE46B */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004EE47C(); return; /* tail jmp 0x004EE47C */

}

/**
 * sub_004ED5FD
 * Original: 0x004ED5FD - 0x004ED616 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED5FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED5FD: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED611; /* je: equal / zero */

loc_004ED606: ;
    ecx = MEM32(0x90E818);
    PUSH32(esp, 0x004ED611u); RECOMP_ABI_CALL(0x004ED576u, sub_004ED576); /* call 0x004ED576 */

loc_004ED611: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED616
 * Original: 0x004ED616 - 0x004ED62F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED616(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED616: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED62A; /* je: equal / zero */

loc_004ED61F: ;
    ecx = MEM32(0x90E818);
    PUSH32(esp, 0x004ED62Au); RECOMP_ABI_CALL(0x004ED5ABu, sub_004ED5AB); /* call 0x004ED5AB */

loc_004ED62A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED62F
 * Original: 0x004ED62F - 0x004ED660 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED62F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED62F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED65B; /* je: equal / zero */

loc_004ED638: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004ED640u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004ED640: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004ED649u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004ED649: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E818);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED65Au); RECOMP_ABI_CALL(0x004EE5BBu, sub_004EE5BB); /* call 0x004EE5BB */

loc_004ED65A: ;
    POP32(esp, esi);

loc_004ED65B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED660
 * Original: 0x004ED660 - 0x004ED68C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED660: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ED66E; /* jne: not equal / not zero */

loc_004ED669: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004ED66E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004ED675u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004ED675: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E818);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED684u); RECOMP_ABI_CALL(0x004EE46Bu, sub_004EE46B); /* call 0x004EE46B */

loc_004ED684: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ED68Au); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004ED68A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED68C
 * Original: 0x004ED68C - 0x004ED6AF (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED68C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED68C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ED69A; /* jne: not equal / not zero */

loc_004ED695: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004ED69A: ;
    eax = MEM32(0x90E818);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED6A7u); RECOMP_ABI_CALL(0x004EE47Cu, sub_004EE47C); /* call 0x004EE47C */

loc_004ED6A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ED6ADu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004ED6AD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED6AF
 * Original: 0x004ED6AF - 0x004ED6CB (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED6AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED6AF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86E02C;
    if (CMP_EQ(_fa, _fb)) goto loc_004ED6C3; /* je: equal / zero */

loc_004ED6BE: ;
    PUSH32(esp, 0x004ED6C3u); RECOMP_ABI_CALL(0x004ED5ABu, sub_004ED5AB); /* call 0x004ED5AB */

loc_004ED6C3: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED6CB
 * Original: 0x004ED6CB - 0x004ED6DE (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED6CB(void)
{

loc_004ED6CB: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86E078);
    MEM32(0x90E818) = eax;
    PUSH32(esp, 0x004ED6DDu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004ED6DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED6DE
 * Original: 0x004ED6DE - 0x004ED6FA (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED6DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED6DE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ED6E6u); RECOMP_ABI_CALL(0x004ED6AFu, sub_004ED6AF); /* call 0x004ED6AF */

loc_004ED6E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004ED6F4; /* je: equal / zero */

loc_004ED6ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ED6F3u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004ED6F3: ;
    POP32(esp, ecx);

loc_004ED6F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004ED702
 * Original: 0x004ED702 - 0x004ED70F (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED702(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED702: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86E0A8;
    esp += 4; return; /* ret */

}

/**
 * sub_004ED70F
 * Original: 0x004ED70F - 0x004ED744 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED70F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED70F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004ED717u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004ED717: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x004ED723u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004ED723: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED735; /* je: equal / zero */

loc_004ED72A: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004ED733u); RECOMP_ABI_CALL(0x004EE925u, sub_004EE925); /* call 0x004EE925 */

loc_004ED733: ;
    goto loc_004ED737;

loc_004ED735: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004ED737: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004ED742u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004ED742: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED744
 * Original: 0x004ED744 - 0x004ED767 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED744(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED744: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED765; /* je: equal / zero */

loc_004ED74E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004ED754u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004ED754: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED761; /* je: equal / zero */

loc_004ED75B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004ED761u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004ED75Fu); } /* indirect call */
    }

loc_004ED761: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004ED765: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED7A7
 * Original: 0x004ED7A7 - 0x004ED7BE (23 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED7A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED7A7: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    ecx = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_004ED7B9; /* jne: not equal / not zero */

loc_004ED7B1: ;
    PUSH32(esp, 0x004ED7B6u); RECOMP_ABI_CALL(0x004EE752u, sub_004EE752); /* call 0x004EE752 */

loc_004ED7B6: ;
    esp += 8; return; /* ret 4 */

loc_004ED7B9: ;
    g_seh_ebp = ebp; sub_004EE786(); return; /* tail jmp 0x004EE786 */

}

/**
 * sub_004ED7BE
 * Original: 0x004ED7BE - 0x004ED7D9 (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED7BE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED7BE: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004ED7D3u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004ED7D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004ED7D9
 * Original: 0x004ED7D9 - 0x004ED7F2 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED7D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED7D9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED7ED; /* je: equal / zero */

loc_004ED7E2: ;
    ecx = MEM32(0x90E81C);
    PUSH32(esp, 0x004ED7EDu); RECOMP_ABI_CALL(0x004ED70Fu, sub_004ED70F); /* call 0x004ED70F */

loc_004ED7ED: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED7F2
 * Original: 0x004ED7F2 - 0x004ED80B (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED7F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED7F2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED806; /* je: equal / zero */

loc_004ED7FB: ;
    ecx = MEM32(0x90E81C);
    PUSH32(esp, 0x004ED806u); RECOMP_ABI_CALL(0x004ED744u, sub_004ED744); /* call 0x004ED744 */

loc_004ED806: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED80B
 * Original: 0x004ED80B - 0x004ED826 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED80B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED80B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED821; /* je: equal / zero */

loc_004ED814: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED821u); RECOMP_ABI_CALL(0x004EE833u, sub_004EE833); /* call 0x004EE833 */

loc_004ED821: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED826
 * Original: 0x004ED826 - 0x004ED841 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED826(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED826: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED83C; /* je: equal / zero */

loc_004ED82F: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED83Cu); RECOMP_ABI_CALL(0x004EEAC9u, sub_004EEAC9); /* call 0x004EEAC9 */

loc_004ED83C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED841
 * Original: 0x004ED841 - 0x004ED85C (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED841(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED841: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED857; /* je: equal / zero */

loc_004ED84A: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED857u); RECOMP_ABI_CALL(0x004EE68Eu, sub_004EE68E); /* call 0x004EE68E */

loc_004ED857: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED85C
 * Original: 0x004ED85C - 0x004ED87F (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED85C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED85C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ED86A; /* jne: not equal / not zero */

loc_004ED865: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004ED86A: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED877u); RECOMP_ABI_CALL(0x004EE668u, sub_004EE668); /* call 0x004EE668 */

loc_004ED877: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ED87Du); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004ED87D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED87F
 * Original: 0x004ED87F - 0x004ED8A2 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED87F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED87F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ED88D; /* jne: not equal / not zero */

loc_004ED888: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004ED88D: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED89Au); RECOMP_ABI_CALL(0x004EE740u, sub_004EE740); /* call 0x004EE740 */

loc_004ED89A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ED8A0u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004ED8A0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED8A2
 * Original: 0x004ED8A2 - 0x004ED8C5 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED8A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED8A2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ED8B0; /* jne: not equal / not zero */

loc_004ED8AB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004ED8B0: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED8BDu); RECOMP_ABI_CALL(0x004EE67Bu, sub_004EE67B); /* call 0x004EE67B */

loc_004ED8BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ED8C3u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004ED8C3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED8C5
 * Original: 0x004ED8C5 - 0x004ED8E8 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED8C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED8C5: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004ED8D3; /* jne: not equal / not zero */

loc_004ED8CE: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004ED8D3: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED8E0u); RECOMP_ABI_CALL(0x004EE862u, sub_004EE862); /* call 0x004EE862 */

loc_004ED8E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004ED8E6u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004ED8E6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004ED8E8
 * Original: 0x004ED8E8 - 0x004ED90C (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED8E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED8E8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED907; /* je: equal / zero */

loc_004ED8F1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004ED8F8u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004ED8F8: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED907u); RECOMP_ABI_CALL(0x004EE655u, sub_004EE655); /* call 0x004EE655 */

loc_004ED907: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED90C
 * Original: 0x004ED90C - 0x004ED92E (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED90C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED90C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED929; /* je: equal / zero */

loc_004ED915: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004ED91Cu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004ED91C: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E81C);
    PUSH32(esp, 0x004ED929u); RECOMP_ABI_CALL(0x004ED7A7u, sub_004ED7A7); /* call 0x004ED7A7 */

loc_004ED929: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004ED92E
 * Original: 0x004ED92E - 0x004ED991 (99 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED92E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004ED92E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004ED944; /* je: equal / zero */

loc_004ED937: ;
    eax = MEM32(0x90E81C);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004ED944u); RECOMP_ABI_CALL(0x004EE8FEu, sub_004EE8FE); /* call 0x004EE8FE */

loc_004ED944: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x78)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x74)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x58)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x6C)); return; /* indirect tail jmp */

}

/**
 * sub_004ED991
 * Original: 0x004ED991 - 0x004ED9AD (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004ED991(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004ED991: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86E0A8;
    if (CMP_EQ(_fa, _fb)) goto loc_004ED9A5; /* je: equal / zero */

loc_004ED9A0: ;
    PUSH32(esp, 0x004ED9A5u); RECOMP_ABI_CALL(0x004ED744u, sub_004ED744); /* call 0x004ED744 */

loc_004ED9A5: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDA10
 * Original: 0x004EDA10 - 0x004EDA36 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDA10: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDA1E; /* jne: not equal / not zero */

loc_004EDA19: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDA1E: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EDA2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDA2Bu); } /* indirect call */
    }

loc_004EDA2E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDA34u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004EDA34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDA36
 * Original: 0x004EDA36 - 0x004EDA5C (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDA36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDA36: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDA44; /* jne: not equal / not zero */

loc_004EDA3F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDA44: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EDA54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDA51u); } /* indirect call */
    }

loc_004EDA54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDA5Au); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDA5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDA5C
 * Original: 0x004EDA5C - 0x004EDA82 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDA5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDA5C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDA6A; /* jne: not equal / not zero */

loc_004EDA65: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDA6A: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x004EDA7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDA77u); } /* indirect call */
    }

loc_004EDA7A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDA80u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDA80: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDA82
 * Original: 0x004EDA82 - 0x004EDAA8 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDA82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDA82: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDA90; /* jne: not equal / not zero */

loc_004EDA8B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDA90: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x004EDAA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDA9Du); } /* indirect call */
    }

loc_004EDAA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDAA6u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDAA6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDAA8
 * Original: 0x004EDAA8 - 0x004EDACE (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDAA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDAA8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDAB6; /* jne: not equal / not zero */

loc_004EDAB1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDAB6: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004EDAC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDAC3u); } /* indirect call */
    }

loc_004EDAC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDACCu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004EDACC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDACE
 * Original: 0x004EDACE - 0x004EDAF4 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDACE: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDADC; /* jne: not equal / not zero */

loc_004EDAD7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDADC: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004EDAECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDAE9u); } /* indirect call */
    }

loc_004EDAEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDAF2u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004EDAF2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDAF4
 * Original: 0x004EDAF4 - 0x004EDB1A (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDAF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDAF4: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDB02; /* jne: not equal / not zero */

loc_004EDAFD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDB02: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EDB12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDB0Fu); } /* indirect call */
    }

loc_004EDB12: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDB18u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004EDB18: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDB1A
 * Original: 0x004EDB1A - 0x004EDB40 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDB1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDB1A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDB28; /* jne: not equal / not zero */

loc_004EDB23: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDB28: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EDB38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDB35u); } /* indirect call */
    }

loc_004EDB38: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDB3Eu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004EDB3E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDB40
 * Original: 0x004EDB40 - 0x004EDB66 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDB40: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDB4E; /* jne: not equal / not zero */

loc_004EDB49: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDB4E: ;
    eax = MEM32(0x90E81C);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x004EDB5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDB5Bu); } /* indirect call */
    }

loc_004EDB5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDB64u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004EDB64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDB66
 * Original: 0x004EDB66 - 0x004EDB82 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDB66(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EDB66: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EDB6Eu); RECOMP_ABI_CALL(0x004ED991u, sub_004ED991); /* call 0x004ED991 */

loc_004EDB6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EDB7C; /* je: equal / zero */

loc_004EDB75: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EDB7Bu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EDB7B: ;
    POP32(esp, ecx);

loc_004EDB7C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EDB82
 * Original: 0x004EDB82 - 0x004EDBA5 (35 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDB82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDB82: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86E220);
    MEM32(0x90E81C) = eax;
    PUSH32(esp, 0x004EDB94u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004EDB94: ;
    esp += 4; return; /* ret */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004EEB02(); return; /* tail jmp 0x004EEB02 */

}

/**
 * sub_004EDBA5
 * Original: 0x004EDBA5 - 0x004EDBB2 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDBA5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EDBA5: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86E2D0;
    esp += 4; return; /* ret */

}

/**
 * sub_004EDBB2
 * Original: 0x004EDBB2 - 0x004EDBE7 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDBB2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EDBB2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EDBBAu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004EDBBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004EDBC6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004EDBC6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDBD8; /* je: equal / zero */

loc_004EDBCD: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004EDBD6u); RECOMP_ABI_CALL(0x004EEB9Bu, sub_004EEB9B); /* call 0x004EEB9B */

loc_004EDBD6: ;
    goto loc_004EDBDA;

loc_004EDBD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004EDBDA: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004EDBE5u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004EDBE5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDBE7
 * Original: 0x004EDBE7 - 0x004EDC0A (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDBE7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EDBE7: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDC08; /* je: equal / zero */

loc_004EDBF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EDBF7u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004EDBF7: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDC04; /* je: equal / zero */

loc_004EDBFE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EDC04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDC02u); } /* indirect call */
    }

loc_004EDC04: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004EDC08: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDC12
 * Original: 0x004EDC12 - 0x004EDC2D (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDC12(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EDC12: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004EDC27u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004EDC27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004EDC2D
 * Original: 0x004EDC2D - 0x004EDC46 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDC2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDC2D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDC41; /* je: equal / zero */

loc_004EDC36: ;
    ecx = MEM32(0x90E820);
    PUSH32(esp, 0x004EDC41u); RECOMP_ABI_CALL(0x004EDBB2u, sub_004EDBB2); /* call 0x004EDBB2 */

loc_004EDC41: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EDC46
 * Original: 0x004EDC46 - 0x004EDC5F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDC46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDC46: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDC5A; /* je: equal / zero */

loc_004EDC4F: ;
    ecx = MEM32(0x90E820);
    PUSH32(esp, 0x004EDC5Au); RECOMP_ABI_CALL(0x004EDBE7u, sub_004EDBE7); /* call 0x004EDBE7 */

loc_004EDC5A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EDC5F
 * Original: 0x004EDC5F - 0x004EDC8B (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDC5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDC5F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDC6D; /* jne: not equal / not zero */

loc_004EDC68: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDC6D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004EDC74u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EDC74: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E820);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004EDC83u); RECOMP_ABI_CALL(0x004EEC6Bu, sub_004EEC6B); /* call 0x004EEC6B */

loc_004EDC83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDC89u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDC89: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDC8B
 * Original: 0x004EDC8B - 0x004EDCA6 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDC8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDC8B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDCA1; /* je: equal / zero */

loc_004EDC94: ;
    eax = MEM32(0x90E820);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004EDCA1u); RECOMP_ABI_CALL(0x004EEC94u, sub_004EEC94); /* call 0x004EEC94 */

loc_004EDCA1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EDCA6
 * Original: 0x004EDCA6 - 0x004EDCCC (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDCA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDCA6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDCB4; /* jne: not equal / not zero */

loc_004EDCAF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDCB4: ;
    eax = MEM32(0x90E820);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004EDCC1u); RECOMP_ABI_CALL(0x004EEB02u, sub_004EEB02); /* call 0x004EEB02 */

loc_004EDCC1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDCC7u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004EDCC7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDCCC
 * Original: 0x004EDCCC - 0x004EDCE7 (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDCCC(void)
{

loc_004EDCCC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004EDCDCu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004EDCDC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EDCF7
 * Original: 0x004EDCF7 - 0x004EDD1A (35 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDCF7(void)
{

loc_004EDCF7: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004EDD0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDD07u); } /* indirect call */
    }

loc_004EDD0D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004EDD16u); RECOMP_ABI_CALL(0x004EDCCCu, sub_004EDCCC); /* call 0x004EDCCC */

loc_004EDD16: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EDD1A
 * Original: 0x004EDD1A - 0x004EDD3D (35 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDD1A(void)
{

loc_004EDD1A: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x004EDD30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDD2Au); } /* indirect call */
    }

loc_004EDD30: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    PUSH32(esp, 0x004EDD39u); RECOMP_ABI_CALL(0x004EDCCCu, sub_004EDCCC); /* call 0x004EDCCC */

loc_004EDD39: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EDD95
 * Original: 0x004EDD95 - 0x004EDDB1 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDD95(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EDD95: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86E2D0;
    if (CMP_EQ(_fa, _fb)) goto loc_004EDDA9; /* je: equal / zero */

loc_004EDDA4: ;
    PUSH32(esp, 0x004EDDA9u); RECOMP_ABI_CALL(0x004EDBE7u, sub_004EDBE7); /* call 0x004EDBE7 */

loc_004EDDA9: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDE5B
 * Original: 0x004EDE5B - 0x004EDE81 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDE5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDE5B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDE69; /* jne: not equal / not zero */

loc_004EDE64: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDE69: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004EDE79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDE76u); } /* indirect call */
    }

loc_004EDE79: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDE7Fu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDE7F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDE81
 * Original: 0x004EDE81 - 0x004EDEA7 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDE81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDE81: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDE8F; /* jne: not equal / not zero */

loc_004EDE8A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDE8F: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004EDE9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDE9Cu); } /* indirect call */
    }

loc_004EDE9F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDEA5u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDEA5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDEA7
 * Original: 0x004EDEA7 - 0x004EDECD (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDEA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDEA7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDEB5; /* jne: not equal / not zero */

loc_004EDEB0: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDEB5: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EDEC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDEC2u); } /* indirect call */
    }

loc_004EDEC5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDECBu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004EDECB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDECD
 * Original: 0x004EDECD - 0x004EDEFE (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDECD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDECD: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDEF9; /* je: equal / zero */

loc_004EDED6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004EDEDEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EDEDE: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004EDEE7u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EDEE7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E820);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004EDEF8u); RECOMP_ABI_CALL(0x004EDCF7u, sub_004EDCF7); /* call 0x004EDCF7 */

loc_004EDEF8: ;
    POP32(esp, esi);

loc_004EDEF9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EDEFE
 * Original: 0x004EDEFE - 0x004EDF2F (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDEFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDEFE: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EDF2A; /* je: equal / zero */

loc_004EDF07: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004EDF0Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EDF0F: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004EDF18u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EDF18: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E820);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004EDF29u); RECOMP_ABI_CALL(0x004EDD1Au, sub_004EDD1A); /* call 0x004EDD1A */

loc_004EDF29: ;
    POP32(esp, esi);

loc_004EDF2A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004EDF2F
 * Original: 0x004EDF2F - 0x004EDF55 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDF2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDF2F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDF3D; /* jne: not equal / not zero */

loc_004EDF38: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDF3D: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x004EDF4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDF4Au); } /* indirect call */
    }

loc_004EDF4D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDF53u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004EDF53: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDF55
 * Original: 0x004EDF55 - 0x004EDF7B (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDF55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDF55: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDF63; /* jne: not equal / not zero */

loc_004EDF5E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDF63: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004EDF73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDF70u); } /* indirect call */
    }

loc_004EDF73: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDF79u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDF79: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDF7B
 * Original: 0x004EDF7B - 0x004EDFA1 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDF7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDF7B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDF89; /* jne: not equal / not zero */

loc_004EDF84: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDF89: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004EDF99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDF96u); } /* indirect call */
    }

loc_004EDF99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDF9Fu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDF9F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDFA1
 * Original: 0x004EDFA1 - 0x004EDFC7 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDFA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDFA1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDFAF; /* jne: not equal / not zero */

loc_004EDFAA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDFAF: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EDFBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDFBCu); } /* indirect call */
    }

loc_004EDFBF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDFC5u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDFC5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDFC7
 * Original: 0x004EDFC7 - 0x004EDFED (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDFC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDFC7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDFD5; /* jne: not equal / not zero */

loc_004EDFD0: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDFD5: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004EDFE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EDFE2u); } /* indirect call */
    }

loc_004EDFE5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EDFEBu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EDFEB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EDFED
 * Original: 0x004EDFED - 0x004EE013 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EDFED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EDFED: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EDFFB; /* jne: not equal / not zero */

loc_004EDFF6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EDFFB: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004EE00Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE008u); } /* indirect call */
    }

loc_004EE00B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE011u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EE011: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE013
 * Original: 0x004EE013 - 0x004EE039 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE013(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE013: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE021; /* jne: not equal / not zero */

loc_004EE01C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EE021: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004EE031u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE02Eu); } /* indirect call */
    }

loc_004EE031: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE037u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004EE037: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE039
 * Original: 0x004EE039 - 0x004EE069 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE039: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE047; /* jne: not equal / not zero */

loc_004EE042: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EE047: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004EE04Eu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EE04E: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E820);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004EE061u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE05Eu); } /* indirect call */
    }

loc_004EE061: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE067u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EE067: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE069
 * Original: 0x004EE069 - 0x004EE099 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE069: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE077; /* jne: not equal / not zero */

loc_004EE072: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EE077: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004EE07Eu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004EE07E: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E820);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004EE091u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE08Eu); } /* indirect call */
    }

loc_004EE091: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE097u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004EE097: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE099
 * Original: 0x004EE099 - 0x004EE0BF (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE099(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE099: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE0A7; /* jne: not equal / not zero */

loc_004EE0A2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EE0A7: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004EE0B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE0B4u); } /* indirect call */
    }

loc_004EE0B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE0BDu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004EE0BD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE0BF
 * Original: 0x004EE0BF - 0x004EE0E5 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE0BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE0BF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE0CD; /* jne: not equal / not zero */

loc_004EE0C8: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004EE0CD: ;
    eax = MEM32(0x90E820);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x004EE0DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE0DAu); } /* indirect call */
    }

loc_004EE0DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE0E3u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004EE0E3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE0E5
 * Original: 0x004EE0E5 - 0x004EE101 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE0E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE0E5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EE0EDu); RECOMP_ABI_CALL(0x004EDD95u, sub_004EDD95); /* call 0x004EDD95 */

loc_004EE0ED: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EE0FB; /* je: equal / zero */

loc_004EE0F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EE0FAu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EE0FA: ;
    POP32(esp, ecx);

loc_004EE0FB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE101
 * Original: 0x004EE101 - 0x004EE114 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE101(void)
{

loc_004EE101: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86E428);
    MEM32(0x90E820) = eax;
    PUSH32(esp, 0x004EE113u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004EE113: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004EE114
 * Original: 0x004EE114 - 0x004EE126 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE114(void)
{

loc_004EE114: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EE11Cu); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EE11C: ;
    MEM32(esi) = 0x86E4E0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE131
 * Original: 0x004EE131 - 0x004EE153 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE131(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE131: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E4E0;
    PUSH32(esp, 0x004EE13Fu); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004EE13F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EE14D; /* je: equal / zero */

loc_004EE146: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EE14Cu); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EE14C: ;
    POP32(esp, ecx);

loc_004EE14D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE153
 * Original: 0x004EE153 - 0x004EE368 (533 bytes, 141 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004EE153(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004EE153: ;
    PUSH32(esp, ebp);
    ebp = esp + -140;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10C));
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0x88) = eax;
    esi = ecx;
    PUSH32(esp, 0x004EE176u); RECOMP_ABI_CALL(0x004DD565u, sub_004DD565); /* call 0x004DD565 */

loc_004EE176: ;
    eax = MEM32(ebp + 0x94);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xB4) = eax;
    eax = MEM32(ebp + 0x98);
    PUSH32(esp, 0x11);
    MEM32(esi + 0xB8) = eax;
    edi = 0x7B891F;
    eax = esi + 0xD8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi) = 0x86E514;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xC8) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0xD4) = ebx;
    MEM32(esi + 0xFC) = ebx;
    MEM32(esi + 0x100) = ebx;
    MEM8(esi + 0x104) = LO8(ebx);
    PUSH32(esp, 0x004EE1F8u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004EE1F8: ;
    PUSH32(esp, 0x11);
    eax = esi + 0xE9;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE207u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004EE207: ;
    ecx = MEM32(0x90E804);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EE215u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE212u); } /* indirect call */
    }

loc_004EE215: ;
    ecx = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004EE225u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE222u); } /* indirect call */
    }

loc_004EE225: ;
    ecx = MEM32(0x90E804);
    MEM32(ebp + -124) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EE233u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE230u); } /* indirect call */
    }

loc_004EE233: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x004EE23Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE237u); } /* indirect call */
    }

loc_004EE23A: ;
    ecx = ebp + -120;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -124));
    MEM32(ebp + -128) = eax;
    PUSH32(esp, 0x004EE24Au); RECOMP_ABI_CALL(0x005F2AD0u, sub_005F2AD0); /* call 0x005F2AD0 */

loc_004EE24A: ;
    PUSH32(esp, MEM32(esi + 0xB8));
    eax = esi + 0x48;
    PUSH32(esp, MEM32(esi + 0xB0));
    PUSH32(esp, MEM32(esi + 0xB4));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -128));
    PUSH32(esp, MEM32(ebp + -124));
    PUSH32(esp, 0x004EE26Bu); RECOMP_ABI_CALL(0x005F2E30u, sub_005F2E30); /* call 0x005F2E30 */

loc_004EE26B: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004EE280; /* je: equal / zero */

loc_004EE272: ;
    eax = MEM32(esi + 0x5C);
    MEM32(esi + 0xC0) = eax;
    goto loc_004EE34E;

loc_004EE280: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, MEM32(esi + 0x60));
    MEM32(esi + 0xAC) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0xBC) = eax;
    eax = MEM32(esi + 0x5C);
    MEM32(esi + 0xC0) = eax;
    eax = esi + 0x88;
    MEM32(esi + 0x100) = eax;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -128));
    PUSH32(esp, MEM32(ebp + -124));
    PUSH32(esp, 0x004EE2B9u); RECOMP_ABI_CALL(0x005F2D00u, sub_005F2D00); /* call 0x005F2D00 */

loc_004EE2B9: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0xD8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE2C9u); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004EE2C9: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, MEM32(esi + 0x64));
    MEM32(esi + 0xC8) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0xCC) = eax;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -128));
    PUSH32(esp, MEM32(ebp + -124));
    PUSH32(esp, 0x004EE2EDu); RECOMP_ABI_CALL(0x005F2D00u, sub_005F2D00); /* call 0x005F2D00 */

loc_004EE2ED: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0xE9;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE2FDu); RECOMP_ABI_CALL(0x005D00B0u, sub_005D00B0); /* call 0x005D00B0 */

loc_004EE2FD: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0xD0) = eax;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0xD4) = eax;
    eax = esi + 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004EE319u); RECOMP_ABI_CALL(0x005F2ED0u, sub_005F2ED0); /* call 0x005F2ED0 */

loc_004EE319: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xD0) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_004EE338; /* jne: not equal / not zero */

loc_004EE32A: ;
    eax = esi + 0xE9;

loc_004EE330: ;
    MEM32(esi + 0xFC) = eax;
    goto loc_004EE34E;

loc_004EE338: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004EE348; /* jne: not equal / not zero */

loc_004EE340: ;
    eax = esi + 0xD8;
    goto loc_004EE330;

loc_004EE348: ;
    MEM32(esi + 0xFC) = edi;

loc_004EE34E: ;
    ecx = MEM32(ebp + 0x88);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x004EE35Eu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004EE35E: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x8C)) >> 32) & 1);
    ebp = ebp + 0x8C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EE368
 * Original: 0x004EE368 - 0x004EE36F (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE368(void)
{

loc_004EE368: ;
    eax = MEM32(ecx + 0xAC);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE36F
 * Original: 0x004EE36F - 0x004EE376 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE36F(void)
{

loc_004EE36F: ;
    eax = MEM32(ecx + 0xB0);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE376
 * Original: 0x004EE376 - 0x004EE37D (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE376(void)
{

loc_004EE376: ;
    eax = MEM32(ecx + 0xB4);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE37D
 * Original: 0x004EE37D - 0x004EE384 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE37D(void)
{

loc_004EE37D: ;
    eax = MEM32(ecx + 0xB8);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE384
 * Original: 0x004EE384 - 0x004EE38B (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE384(void)
{

loc_004EE384: ;
    eax = MEM32(ecx + 0xBC);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE38B
 * Original: 0x004EE38B - 0x004EE392 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE38B(void)
{

loc_004EE38B: ;
    eax = MEM32(ecx + 0xC0);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE392
 * Original: 0x004EE392 - 0x004EE399 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE392(void)
{

loc_004EE392: ;
    eax = MEM32(ecx + 0xC4);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE399
 * Original: 0x004EE399 - 0x004EE3A0 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE399(void)
{

loc_004EE399: ;
    eax = MEM32(ecx + 0xFC);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE3A0
 * Original: 0x004EE3A0 - 0x004EE3B2 (18 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE3A0: ;
    eax = MEM32(ecx + 0x100);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE3B2
 * Original: 0x004EE3B2 - 0x004EE3D2 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE3B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE3B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE3C2; /* jne: not equal / not zero */

loc_004EE3BA: ;
    eax = MEM32(ecx + 0xC8);
    goto loc_004EE3CF;

loc_004EE3C2: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE3CF; /* jne: not equal / not zero */

loc_004EE3C9: ;
    eax = MEM32(ecx + 0xD0);

loc_004EE3CF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE3D2
 * Original: 0x004EE3D2 - 0x004EE3F2 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE3D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE3D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE3E2; /* jne: not equal / not zero */

loc_004EE3DA: ;
    eax = ecx + 0xD8;
    goto loc_004EE3EF;

loc_004EE3E2: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE3EF; /* jne: not equal / not zero */

loc_004EE3E9: ;
    eax = ecx + 0xE9;

loc_004EE3EF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE3F2
 * Original: 0x004EE3F2 - 0x004EE412 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE3F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE3F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE402; /* jne: not equal / not zero */

loc_004EE3FA: ;
    eax = MEM32(ecx + 0xCC);
    goto loc_004EE40F;

loc_004EE402: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004EE40F; /* jne: not equal / not zero */

loc_004EE409: ;
    eax = MEM32(ecx + 0xD4);

loc_004EE40F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE412
 * Original: 0x004EE412 - 0x004EE434 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE412(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE412: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E4E0;
    PUSH32(esp, 0x004EE420u); RECOMP_ABI_CALL(0x004DD576u, sub_004DD576); /* call 0x004DD576 */

loc_004EE420: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EE42E; /* je: equal / zero */

loc_004EE427: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EE42Du); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EE42D: ;
    POP32(esp, ecx);

loc_004EE42E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE44E
 * Original: 0x004EE44E - 0x004EE46B (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE44E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE44E: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E548;
    if (TEST_Z(_fa, _fb)) goto loc_004EE465; /* je: equal / zero */

loc_004EE45E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EE464u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EE464: ;
    POP32(esp, ecx);

loc_004EE465: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE46B
 * Original: 0x004EE46B - 0x004EE47C (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE46B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE46B: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EE475u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE473u); } /* indirect call */
    }

loc_004EE475: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004EE47C
 * Original: 0x004EE47C - 0x004EE48D (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE47C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE47C: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EE486u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE484u); } /* indirect call */
    }

loc_004EE486: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_004EE4A2
 * Original: 0x004EE4A2 - 0x004EE4BD (27 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE4A2(void)
{

loc_004EE4A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x004EE4B2u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_004EE4B2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE4BD
 * Original: 0x004EE4BD - 0x004EE4F1 (52 bytes, 16 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE4BD(void)
{

loc_004EE4BD: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    MEM32(0x90E824) = eax;
    PUSH32(esp, 0x004EE4D3u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE4D3: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004EE4DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE4D8u); } /* indirect call */
    }

loc_004EE4DB: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86E554);
    ecx = esi + -24;
    PUSH32(esp, 0x004EE4EDu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE4ED: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE4F1
 * Original: 0x004EE4F1 - 0x004EE514 (35 bytes, 11 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE4F1(void)
{

loc_004EE4F1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 8;
    PUSH32(esp, 0x004EE4FEu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE4FE: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86E568);
    ecx = esi + -24;
    PUSH32(esp, 0x004EE510u); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE510: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE514
 * Original: 0x004EE514 - 0x004EE570 (92 bytes, 29 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE514(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE514: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x86E58C);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x004EE526u); RECOMP_ABI_CALL(0x004C17F2u, sub_004C17F2); /* call 0x004C17F2 */

loc_004EE526: ;
    MEM32(esi + 0x18) = 0x86E548;
    MEM32(esi) = 0x86E588;
    MEM32(esi + 0x18) = 0x86E57C;
    edi = esi + 0x1C;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x004EE549u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE549: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE550u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE54Du); } /* indirect call */
    }

loc_004EE550: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004EE558u); RECOMP_ABI_CALL(0x004EE4A2u, sub_004EE4A2); /* call 0x004EE4A2 */

loc_004EE558: ;
    ecx = MEM32(0x90E808);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004EE562u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE560u); } /* indirect call */
    }

loc_004EE562: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004EE569u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE566u); } /* indirect call */
    }

loc_004EE569: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE570
 * Original: 0x004EE570 - 0x004EE578 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE570: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004EE5DF(); return; /* tail jmp 0x004EE5DF */

}

/**
 * sub_004EE578
 * Original: 0x004EE578 - 0x004EE5BB (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE578(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE578: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x86E588;
    MEM32(esi + 0x18) = 0x86E57C;
    if (CMP_EQ(_fa, _fb)) goto loc_004EE594; /* je: equal / zero */

loc_004EE58F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EE594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE591u); } /* indirect call */
    }

loc_004EE594: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EE5A0; /* je: equal / zero */

loc_004EE59B: ;
    PUSH32(esp, 0x004EE5A0u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EE5A0: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004EE5AC; /* je: equal / zero */

loc_004EE5A7: ;
    PUSH32(esp, 0x004EE5ACu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_004EE5AC: ;
    MEM32(esi + 0x18) = 0x86E548;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C1837(); return; /* tail jmp 0x004C1837 */

}

/**
 * sub_004EE5BB
 * Original: 0x004EE5BB - 0x004EE5DF (36 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE5BB(void)
{

loc_004EE5BB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    edx = esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004EE5D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE5CFu); } /* indirect call */
    }

loc_004EE5D2: ;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, 0x004EE5DBu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE5DB: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EE5DF
 * Original: 0x004EE5DF - 0x004EE5FB (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE5DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE5DF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004EE5E7u); RECOMP_ABI_CALL(0x004EE578u, sub_004EE578); /* call 0x004EE578 */

loc_004EE5E7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004EE5F5; /* je: equal / zero */

loc_004EE5EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EE5F4u); RECOMP_ABI_CALL(0x004DD5A1u, sub_004DD5A1); /* call 0x004DD5A1 */

loc_004EE5F4: ;
    POP32(esp, ecx);

loc_004EE5F5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE60B
 * Original: 0x004EE60B - 0x004EE638 (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE60B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE60B: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E5AC;
    if (TEST_Z(_fa, _fb)) goto loc_004EE622; /* je: equal / zero */

loc_004EE61B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EE621u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EE621: ;
    POP32(esp, ecx);

loc_004EE622: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE638
 * Original: 0x004EE638 - 0x004EE655 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE638(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE638: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x86E5B8;
    if (TEST_Z(_fa, _fb)) goto loc_004EE64F; /* je: equal / zero */

loc_004EE648: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004EE64Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004EE64E: ;
    POP32(esp, ecx);

loc_004EE64F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE655
 * Original: 0x004EE655 - 0x004EE668 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE655(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE655: ;
    PUSH32(esp, 0x004EE65Au); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE65A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE661u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE65Eu); } /* indirect call */
    }

loc_004EE661: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

}

/**
 * sub_004EE668
 * Original: 0x004EE668 - 0x004EE67B (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE668(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE668: ;
    PUSH32(esp, 0x004EE66Du); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE66D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE671u); } /* indirect call */
    }

loc_004EE674: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_004EE67B
 * Original: 0x004EE67B - 0x004EE68E (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE67B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE67B: ;
    PUSH32(esp, 0x004EE680u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE680: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE687u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE684u); } /* indirect call */
    }

loc_004EE687: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_004EE68E
 * Original: 0x004EE68E - 0x004EE6A1 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE68E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EE68E: ;
    PUSH32(esp, 0x004EE693u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_004EE693: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004EE69Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004EE697u); } /* indirect call */
    }

loc_004EE69A: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2C)); return; /* indirect tail jmp */

}

/**
 * sub_004EE6C1
 * Original: 0x004EE6C1 - 0x004EE6F2 (49 bytes, 16 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE6C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004EE6C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004EE6CEu); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE6CE: ;
    eax = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi + -24;
    PUSH32(esp, 0x7B891F);
    if ((_fa == 0)) goto loc_004EE6E4; /* je: equal / zero */

loc_004EE6DD: ;
    PUSH32(esp, 0x86634C);
    goto loc_004EE6E9;

loc_004EE6E4: ;
    PUSH32(esp, 0x86633C);

loc_004EE6E9: ;
    PUSH32(esp, 0x004EE6EEu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE6EE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004EE6F2
 * Original: 0x004EE6F2 - 0x004EE71D (43 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE6F2(void)
{

loc_004EE6F2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, 0x004EE6FFu); RECOMP_ABI_CALL(0x004EBF07u, sub_004EBF07); /* call 0x004EBF07 */

loc_004EE6FF: ;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004EE709u); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE709: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86E5C0);
    ecx = esi + -28;
    PUSH32(esp, 0x004EE71Bu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE71B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004EE71D
 * Original: 0x004EE71D - 0x004EE740 (35 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EE71D(void)
{

loc_004EE71D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esi + 0x14;
    PUSH32(esp, 0x004EE72Au); RECOMP_ABI_CALL(0x00013341u, sub_00013341); /* call 0x00013341 */

loc_004EE72A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x86E5D8);
    ecx = esi + -28;
    PUSH32(esp, 0x004EE73Cu); RECOMP_ABI_CALL(0x004C1857u, sub_004C1857); /* call 0x004C1857 */

loc_004EE73C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
