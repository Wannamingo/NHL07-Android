/**
 * nhl_07_recomp - Recompiled code chunk 247
 * Functions: 250 (0x00596B64 - 0x0059A0E6)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00596B64
 * Original: 0x00596B64 - 0x00596B67 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00596B64(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596B64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00596B67
 * Original: 0x00596B67 - 0x00596B83 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596B67(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596B67: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596B6Fu); RECOMP_ABI_CALL(0x00596B83u, sub_00596B83); /* call 0x00596B83 */

loc_00596B6F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00596B7D; /* je: equal / zero */

loc_00596B76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596B7Cu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00596B7C: ;
    POP32(esp, ecx);

loc_00596B7D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596B83
 * Original: 0x00596B83 - 0x00596B8A (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596B83(void)
{

loc_00596B83: ;
    MEM32(ecx) = 0x87D31C;
    esp += 4; return; /* ret */

}

/**
 * sub_00596B93
 * Original: 0x00596B93 - 0x00596BB9 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00596B93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596B93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91A534);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00596BB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596BB3u); } /* indirect call */
    }

loc_00596BB5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00596BB9
 * Original: 0x00596BB9 - 0x00596BDF (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00596BB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596BB9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x91A534);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00596BDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596BD9u); } /* indirect call */
    }

loc_00596BDB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00596BDF
 * Original: 0x00596BDF - 0x00596BF3 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596BDF(void)
{

loc_00596BDF: ;
    ecx = MEM32(0x91A534);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00596BF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596BEDu); } /* indirect call */
    }

loc_00596BF0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00596BF3
 * Original: 0x00596BF3 - 0x00596C09 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596BF3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596BF3: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00596C03u); RECOMP_ABI_CALL(0x00596849u, sub_00596849); /* call 0x00596849 */

loc_00596C03: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596C1E
 * Original: 0x00596C1E - 0x00596C34 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596C1E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596C1E: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00596C2Eu); RECOMP_ABI_CALL(0x00596938u, sub_00596938); /* call 0x00596938 */

loc_00596C2E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596C49
 * Original: 0x00596C49 - 0x00596C5F (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596C49(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596C49: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00596C59u); RECOMP_ABI_CALL(0x00596A27u, sub_00596A27); /* call 0x00596A27 */

loc_00596C59: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596C74
 * Original: 0x00596C74 - 0x00596C8F (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596C74(void)
{

loc_00596C74: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596C7Au); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596C7A: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00596C83u); RECOMP_ABI_CALL(0x005965D1u, sub_005965D1); /* call 0x005965D1 */

loc_00596C83: ;
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00596C8Bu); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596C8B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596C8F
 * Original: 0x00596C8F - 0x00596CA3 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596C8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00596C8F: ;
    PUSH32(esp, 0x00596C94u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596C94: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x00596C9Du); RECOMP_ABI_CALL(0x005965E8u, sub_005965E8); /* call 0x005965E8 */

loc_00596C9D: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00596648(); return; /* tail jmp 0x00596648 */

}

/**
 * sub_00596CA3
 * Original: 0x00596CA3 - 0x00596CDD (58 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596CA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596CA3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596CB1u); RECOMP_ABI_CALL(0x00596911u, sub_00596911); /* call 0x00596911 */

loc_00596CB1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596CD8; /* jl: less (signed <) */

loc_00596CB9: ;
    eax = MEM32(esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00596CC6; /* jne: not equal / not zero */

loc_00596CC1: ;
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, eax);
    goto loc_00596CDA;

loc_00596CC6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esp + 0x14));
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x00596CD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596CCDu); } /* indirect call */
    }

loc_00596CD0: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00596CC6; /* jne: not equal / not zero */

loc_00596CD8: ;
    eax = edi;

loc_00596CDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596CDD
 * Original: 0x00596CDD - 0x00596CFF (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596CDD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596CDD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596CEAu); RECOMP_ABI_CALL(0x00596911u, sub_00596911); /* call 0x00596911 */

loc_00596CEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596CFD; /* jl: less (signed <) */

loc_00596CF0: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi);
    PUSH32(esp, 0x00596CFBu); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00596CFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00596CFD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596CFF
 * Original: 0x00596CFF - 0x00596D21 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596CFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596CFF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596D0Cu); RECOMP_ABI_CALL(0x00596911u, sub_00596911); /* call 0x00596911 */

loc_00596D0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596D1F; /* jl: less (signed <) */

loc_00596D12: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi);
    PUSH32(esp, 0x00596D1Du); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00596D1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00596D1F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596D21
 * Original: 0x00596D21 - 0x00596D8F (110 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00596D21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596D21: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00596D36u); RECOMP_ABI_CALL(0x00596A00u, sub_00596A00); /* call 0x00596A00 */

loc_00596D36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596D8C; /* jl: less (signed <) */

loc_00596D3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00596D44u); RECOMP_ABI_CALL(0x005965D1u, sub_005965D1); /* call 0x005965D1 */

loc_00596D44: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00596D50; /* jne: not equal / not zero */

loc_00596D4B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00596D8B;

loc_00596D50: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = 1;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    edi = MEM32(eax);
    goto loc_00596D76;

loc_00596D67: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00596D71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596D6Eu); } /* indirect call */
    }

loc_00596D71: ;
    edi = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00596D76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00596D67; /* jne: not equal / not zero */

loc_00596D7A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00596D84u); RECOMP_ABI_CALL(0x00596522u, sub_00596522); /* call 0x00596522 */

loc_00596D84: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00596D8B: ;
    POP32(esp, esi);

loc_00596D8C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00596D8F
 * Original: 0x00596D8F - 0x00596DA9 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596D8F(void)
{

loc_00596D8F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596D97u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596D97: ;
    ecx = esi;
    PUSH32(esp, 0x00596D9Eu); RECOMP_ABI_CALL(0x0059678Fu, sub_0059678F); /* call 0x0059678F */

loc_00596D9E: ;
    esi = eax;
    PUSH32(esp, 0x00596DA5u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596DA5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596DA9
 * Original: 0x00596DA9 - 0x00596DC9 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596DA9(void)
{

loc_00596DA9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596DB1u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596DB1: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596DBCu); RECOMP_ABI_CALL(0x005967D3u, sub_005967D3); /* call 0x005967D3 */

loc_00596DBC: ;
    esi = eax;
    PUSH32(esp, 0x00596DC3u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596DC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596DC9
 * Original: 0x00596DC9 - 0x00596DEB (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596DC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596DC9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596DD6u); RECOMP_ABI_CALL(0x00596A00u, sub_00596A00); /* call 0x00596A00 */

loc_00596DD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596DE9; /* jl: less (signed <) */

loc_00596DDC: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi);
    PUSH32(esp, 0x00596DE7u); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00596DE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00596DE9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596DEB
 * Original: 0x00596DEB - 0x00596E0D (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596DEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596DEB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596DF8u); RECOMP_ABI_CALL(0x00596A00u, sub_00596A00); /* call 0x00596A00 */

loc_00596DF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596E0B; /* jl: less (signed <) */

loc_00596DFE: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi);
    PUSH32(esp, 0x00596E09u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00596E09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00596E0B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596E0D
 * Original: 0x00596E0D - 0x00596E2D (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596E0D(void)
{

loc_00596E0D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596E15u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596E15: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596E20u); RECOMP_ABI_CALL(0x005967E1u, sub_005967E1); /* call 0x005967E1 */

loc_00596E20: ;
    esi = eax;
    PUSH32(esp, 0x00596E27u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596E27: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596E2D
 * Original: 0x00596E2D - 0x00596E4D (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596E2D(void)
{

loc_00596E2D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596E35u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596E35: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596E40u); RECOMP_ABI_CALL(0x005967F9u, sub_005967F9); /* call 0x005967F9 */

loc_00596E40: ;
    esi = eax;
    PUSH32(esp, 0x00596E47u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596E47: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596E4D
 * Original: 0x00596E4D - 0x00596E6D (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596E4D(void)
{

loc_00596E4D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596E55u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596E55: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596E60u); RECOMP_ABI_CALL(0x00596815u, sub_00596815); /* call 0x00596815 */

loc_00596E60: ;
    esi = eax;
    PUSH32(esp, 0x00596E67u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596E67: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596E6D
 * Original: 0x00596E6D - 0x00596E8D (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596E6D(void)
{

loc_00596E6D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596E75u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596E75: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596E80u); RECOMP_ABI_CALL(0x0059682Du, sub_0059682D); /* call 0x0059682D */

loc_00596E80: ;
    esi = eax;
    PUSH32(esp, 0x00596E87u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596E87: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596E8D
 * Original: 0x00596E8D - 0x00596ED4 (71 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596E8D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596E8D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596E9Bu); RECOMP_ABI_CALL(0x00596AF1u, sub_00596AF1); /* call 0x00596AF1 */

loc_00596E9B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_00596EA5; /* jge: greater or equal (signed >=) */

loc_00596EA3: ;
    goto loc_00596ED1;

loc_00596EA5: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00596EB9; /* jne: not equal / not zero */

loc_00596EB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00596ED0;

loc_00596EB9: ;
    esi = MEM32(eax);
    MEM32(edi) = ecx;
    goto loc_00596ECA;

loc_00596EBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x00596EC6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596EC3u); } /* indirect call */
    }

loc_00596EC6: ;
    esi = MEM32(esi);
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00596ECA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00596EBF; /* jne: not equal / not zero */

loc_00596ECE: ;
    eax = ebx;

loc_00596ED0: ;
    POP32(esp, edi);

loc_00596ED1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00596ED4
 * Original: 0x00596ED4 - 0x00596F07 (51 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596ED4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596ED4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596EE1u); RECOMP_ABI_CALL(0x00596AF1u, sub_00596AF1); /* call 0x00596AF1 */

loc_00596EE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596F05; /* jl: less (signed <) */

loc_00596EE7: ;
    esi = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00596EF6u); RECOMP_ABI_CALL(0x00585FBBu, sub_00585FBB); /* call 0x00585FBB */

loc_00596EF6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x00596F00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596EFDu); } /* indirect call */
    }

loc_00596F00: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_00596F05: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596F07
 * Original: 0x00596F07 - 0x00596F29 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596F07(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596F07: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00596F14u); RECOMP_ABI_CALL(0x00596AF1u, sub_00596AF1); /* call 0x00596AF1 */

loc_00596F14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00596F27; /* jl: less (signed <) */

loc_00596F1A: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi);
    PUSH32(esp, 0x00596F25u); RECOMP_ABI_CALL(0x00585FD5u, sub_00585FD5); /* call 0x00585FD5 */

loc_00596F25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00596F27: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00596F29
 * Original: 0x00596F29 - 0x00596F49 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00596F29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00596F29: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x87D340);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00596F3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596F38u); } /* indirect call */
    }

loc_00596F3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00596F46; /* je: equal / zero */

loc_00596F3F: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00596B18(); return; /* tail jmp 0x00596B18 */

loc_00596F46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00596F49
 * Original: 0x00596F49 - 0x00596F78 (47 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00596F49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596F49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00596F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00596F66u); } /* indirect call */
    }

loc_00596F68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00596F74; /* je: equal / zero */

loc_00596F6C: ;
    MEM32(eax) = 0x87D368;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00596F74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00596F78
 * Original: 0x00596F78 - 0x00596F98 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596F78(void)
{

loc_00596F78: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596F80u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596F80: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596F8Bu); RECOMP_ABI_CALL(0x00596BF3u, sub_00596BF3); /* call 0x00596BF3 */

loc_00596F8B: ;
    esi = eax;
    PUSH32(esp, 0x00596F92u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596F92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596F98
 * Original: 0x00596F98 - 0x00596FB8 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596F98(void)
{

loc_00596F98: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596FA0u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596FA0: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596FABu); RECOMP_ABI_CALL(0x00596C1Eu, sub_00596C1E); /* call 0x00596C1E */

loc_00596FAB: ;
    esi = eax;
    PUSH32(esp, 0x00596FB2u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596FB2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596FB8
 * Original: 0x00596FB8 - 0x00596FD8 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596FB8(void)
{

loc_00596FB8: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00596FC0u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00596FC0: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x00596FCBu); RECOMP_ABI_CALL(0x00596C49u, sub_00596C49); /* call 0x00596C49 */

loc_00596FCB: ;
    esi = eax;
    PUSH32(esp, 0x00596FD2u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00596FD2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00596FD8
 * Original: 0x00596FD8 - 0x00597036 (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00596FD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00596FD8: ;
    eax = MEM32(0x91A538);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00596FFD; /* jne: not equal / not zero */

loc_00596FE4: ;
    PUSH32(esp, MEM32(0x91A534));
    PUSH32(esp, 0x00596FEFu); RECOMP_ABI_CALL(0x00596F49u, sub_00596F49); /* call 0x00596F49 */

loc_00596FEF: ;
    MEM32(0x91A538) = eax;
    MEM8(0x91A53D) = 1;
    goto loc_00597017;

loc_00596FFD: ;
    _fa = (uint32_t)(MEM32(0x91A534)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91A534), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00597018; /* jne: not equal / not zero */

loc_00597005: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0059700Bu); RECOMP_ABI_CALL(0x00596F29u, sub_00596F29); /* call 0x00596F29 */

loc_0059700B: ;
    MEM32(0x91A534) = eax;
    MEM8(0x91A53C) = 1;

loc_00597017: ;
    POP32(esp, ecx);

loc_00597018: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597020u); RECOMP_ABI_CALL(0x00449459u, sub_00449459); /* call 0x00449459 */

loc_00597020: ;
    MEM32(0x91A52C) = eax;
    MEM32(0x91A544) = esi;
    MEM8(0x91A53E) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00597036
 * Original: 0x00597036 - 0x00597056 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597036(void)
{

loc_00597036: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059703Cu); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_0059703C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00597049u); RECOMP_ABI_CALL(0x00596CA3u, sub_00596CA3); /* call 0x00596CA3 */

loc_00597049: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00597052u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00597052: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00597056
 * Original: 0x00597056 - 0x00597076 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597056(void)
{

loc_00597056: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059705Cu); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_0059705C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00597069u); RECOMP_ABI_CALL(0x00596CDDu, sub_00596CDD); /* call 0x00596CDD */

loc_00597069: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00597072u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00597072: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00597076
 * Original: 0x00597076 - 0x00597096 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597076(void)
{

loc_00597076: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059707Cu); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_0059707C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00597089u); RECOMP_ABI_CALL(0x00596CFFu, sub_00596CFF); /* call 0x00596CFF */

loc_00597089: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00597092u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00597092: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00597096
 * Original: 0x00597096 - 0x005970BB (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597096(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597096: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059709Cu); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_0059709C: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x005970ADu); RECOMP_ABI_CALL(0x00596D21u, sub_00596D21); /* call 0x00596D21 */

loc_005970AD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x005970B7u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_005970B7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005970BB
 * Original: 0x005970BB - 0x005970DB (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005970BB(void)
{

loc_005970BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005970C1u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_005970C1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x005970CEu); RECOMP_ABI_CALL(0x00596DC9u, sub_00596DC9); /* call 0x00596DC9 */

loc_005970CE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x005970D7u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_005970D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005970DB
 * Original: 0x005970DB - 0x005970FB (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005970DB(void)
{

loc_005970DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x005970E1u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_005970E1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x005970EEu); RECOMP_ABI_CALL(0x00596DEBu, sub_00596DEB); /* call 0x00596DEB */

loc_005970EE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x005970F7u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_005970F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005970FB
 * Original: 0x005970FB - 0x0059711B (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005970FB(void)
{

loc_005970FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597101u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00597101: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0059710Eu); RECOMP_ABI_CALL(0x00596E8Du, sub_00596E8D); /* call 0x00596E8D */

loc_0059710E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00597117u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00597117: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059711B
 * Original: 0x0059711B - 0x0059713B (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059711B(void)
{

loc_0059711B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597121u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00597121: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0059712Eu); RECOMP_ABI_CALL(0x00596ED4u, sub_00596ED4); /* call 0x00596ED4 */

loc_0059712E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00597137u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00597137: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059713B
 * Original: 0x0059713B - 0x0059715B (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059713B(void)
{

loc_0059713B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597141u); RECOMP_ABI_CALL(0x00596638u, sub_00596638); /* call 0x00596638 */

loc_00597141: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0059714Eu); RECOMP_ABI_CALL(0x00596F07u, sub_00596F07); /* call 0x00596F07 */

loc_0059714E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00597157u); RECOMP_ABI_CALL(0x00596648u, sub_00596648); /* call 0x00596648 */

loc_00597157: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059715B
 * Original: 0x0059715B - 0x00597168 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059715B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059715B: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0xFFFF;
    esp += 4; return; /* ret */

}

/**
 * sub_00597168
 * Original: 0x00597168 - 0x00597188 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597168(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597168: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00597170u); RECOMP_ABI_CALL(0x00597309u, sub_00597309); /* call 0x00597309 */

loc_00597170: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x18) = LO8(eax);
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi) = 0x87D374;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00597188
 * Original: 0x00597188 - 0x005971B7 (47 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597188(void)
{

loc_00597188: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00597198u); RECOMP_ABI_CALL(0x0059732Eu, sub_0059732E); /* call 0x0059732E */

loc_00597198: ;
    ecx = MEM32(esp + 8);
    MEM8(esi + 0x18) = 0;
    PUSH32(esp, 0x005971A5u); RECOMP_ABI_CALL(0x00597708u, sub_00597708); /* call 0x00597708 */

loc_005971A5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x005971B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005971B0u); } /* indirect call */
    }

loc_005971B3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005971B7
 * Original: 0x005971B7 - 0x005971BC (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005971B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005971B7: ;
    g_seh_ebp = ebp; sub_0059734F(); return; /* tail jmp 0x0059734F */

}

/**
 * sub_005971BC
 * Original: 0x005971BC - 0x005971EF (51 bytes, 18 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005971BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005971BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005971C7u); RECOMP_ABI_CALL(0x0059771Cu, sub_0059771C); /* call 0x0059771C */

loc_005971C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005971ED; /* je: equal / zero */

loc_005971CB: ;
    SET_LO16(ecx, MEM16(esi + 0x6C));
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x64) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x68));
    MEM16(esi + 0x62) = LO16(ecx);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005971E9u); RECOMP_ABI_CALL(0x007A4F6Eu, sub_007A4F6E); /* call 0x007A4F6E */

loc_005971E9: ;
    MEM8(esi + 0x18) = 1;

loc_005971ED: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005971EF
 * Original: 0x005971EF - 0x0059721C (45 bytes, 16 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005971EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005971EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x005971FAu); RECOMP_ABI_CALL(0x0059771Cu, sub_0059771C); /* call 0x0059771C */

loc_005971FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059721A; /* je: equal / zero */

loc_005971FE: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x64) = MEM16(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x64)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(esi + 0x62) = MEM16(esi + 0x62) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x62)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00597216u); RECOMP_ABI_CALL(0x007A4F6Eu, sub_007A4F6E); /* call 0x007A4F6E */

loc_00597216: ;
    MEM8(esi + 0x18) = 0;

loc_0059721A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059721C
 * Original: 0x0059721C - 0x00597233 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059721C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059721C: ;
    _fa = (uint32_t)(MEM8(ecx + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x18), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059722B; /* je: equal / zero */

loc_00597222: ;
    MEM32(ecx + 0x10) = 1;
    goto loc_0059722F;

loc_0059722B: ;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0059722F: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00597233
 * Original: 0x00597233 - 0x00597267 (52 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597233(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597233: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 8);
    eax = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00597247u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00597247: ;
    eax = MEM32(edi);
    MEM32(esi + 0x68) = eax;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x18), 0 (8-bit) */
    MEM32(esi + 0x6C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00597262; /* je: equal / zero */

loc_0059725B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00597262u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0059725Fu); } /* indirect call */
    }

loc_00597262: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597267
 * Original: 0x00597267 - 0x00597283 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597267(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00597267: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x18), 0 (8-bit) */
    MEM32(esi) = 0x87D374;
    if (CMP_EQ(_fa, _fb)) goto loc_0059727B; /* je: equal / zero */

loc_00597276: ;
    PUSH32(esp, 0x0059727Bu); RECOMP_ABI_CALL(0x005971EFu, sub_005971EF); /* call 0x005971EF */

loc_0059727B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00597354(); return; /* tail jmp 0x00597354 */

}

/**
 * sub_005972B5
 * Original: 0x005972B5 - 0x005972F6 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005972B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005972B5: ;
    eax = MEM32(0x91A548);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005972F5; /* jne: not equal / not zero */

loc_005972BE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x005972CAu); RECOMP_ABI_CALL(0x0059776Fu, sub_0059776F); /* call 0x0059776F */

loc_005972CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x005972DCu); RECOMP_ABI_CALL(0x00597792u, sub_00597792); /* call 0x00597792 */

loc_005972DC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005972ED; /* je: equal / zero */

loc_005972E3: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x005972EBu); RECOMP_ABI_CALL(0x00597573u, sub_00597573); /* call 0x00597573 */

loc_005972EB: ;
    goto loc_005972EF;

loc_005972ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005972EF: ;
    MEM32(0x91A548) = eax;
    POP32(esp, esi);

loc_005972F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005972F6
 * Original: 0x005972F6 - 0x005972F9 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005972F6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005972F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005972F9
 * Original: 0x005972F9 - 0x005972FC (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005972F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005972F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005972FC
 * Original: 0x005972FC - 0x005972FD (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005972FC(void)
{

loc_005972FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005972FD
 * Original: 0x005972FD - 0x00597300 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005972FD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005972FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597300
 * Original: 0x00597300 - 0x00597303 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00597300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597300: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597303
 * Original: 0x00597303 - 0x00597306 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00597303(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597303: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597306
 * Original: 0x00597306 - 0x00597309 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00597306(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597306: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597309
 * Original: 0x00597309 - 0x0059732E (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597309(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597309: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00597311u); RECOMP_ABI_CALL(0x00597824u, sub_00597824); /* call 0x00597824 */

loc_00597311: ;
    ecx = esi + 4;
    MEM32(esi) = 0x87D398;
    PUSH32(esp, 0x0059731Fu); RECOMP_ABI_CALL(0x0059715Bu, sub_0059715B); /* call 0x0059715B */

loc_0059731F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = LO8(eax);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059732E
 * Original: 0x0059732E - 0x0059734F (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059732E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059732E: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 8) = eax;
    MEM8(ecx + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0059734F
 * Original: 0x0059734F - 0x00597354 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059734F(void)
{

loc_0059734F: ;
    MEM8(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00597354
 * Original: 0x00597354 - 0x0059735F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597354(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00597354: ;
    MEM32(ecx) = 0x87D398;
    g_seh_ebp = ebp; sub_0059782D(); return; /* tail jmp 0x0059782D */

}

/**
 * sub_0059735F
 * Original: 0x0059735F - 0x00597360 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059735F(void)
{

loc_0059735F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00597360
 * Original: 0x00597360 - 0x00597361 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597360(void)
{

loc_00597360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00597361
 * Original: 0x00597361 - 0x00597365 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597361(void)
{

loc_00597361: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00597365
 * Original: 0x00597365 - 0x00597369 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597365(void)
{

loc_00597365: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00597369
 * Original: 0x00597369 - 0x00597385 (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597369(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597369: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00597382; /* je: equal / zero */

loc_00597370: ;
    PUSH32(esp, 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0059737Fu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0059737F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00597382: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597385
 * Original: 0x00597385 - 0x00597388 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597385(void)
{

loc_00597385: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597388
 * Original: 0x00597388 - 0x005973AD (37 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597388(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597388: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D398;
    PUSH32(esp, 0x00597396u); RECOMP_ABI_CALL(0x0059782Du, sub_0059782D); /* call 0x0059782D */

loc_00597396: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005973A7; /* je: equal / zero */

loc_0059739D: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005973A5u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_005973A5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_005973A7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005973C9
 * Original: 0x005973C9 - 0x005973DD (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005973C9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005973C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x005973D9u); RECOMP_ABI_CALL(0x00597789u, sub_00597789); /* call 0x00597789 */

loc_005973D9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005973EC
 * Original: 0x005973EC - 0x0059741E (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005973EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005973EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x87D3BC;
    if (CMP_EQ(_fa, _fb)) goto loc_00597416; /* je: equal / zero */

loc_005973FF: ;
    eax = ecx + -4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059740F; /* je: equal / zero */

loc_00597407: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0059740Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0059740Bu); } /* indirect call */
    }

loc_0059740D: ;
    goto loc_00597416;

loc_0059740F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00597415u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00597415: ;
    POP32(esp, ecx);

loc_00597416: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005978BE(); return; /* tail jmp 0x005978BE */

}

/**
 * sub_0059741E
 * Original: 0x0059741E - 0x00597442 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0059741E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059741E: ;
    eax = MEM32(ecx + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059743F; /* je: equal / zero */

loc_00597428: ;
    ecx = MEM32(ecx + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0059743F; /* jbe: below or equal (unsigned <=) */

loc_00597431: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00597441; /* je: equal / zero */

loc_00597437: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00597431; /* jb: below (unsigned <) */

loc_0059743F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597441: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00597442
 * Original: 0x00597442 - 0x00597507 (197 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597442(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00597442: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    MEM32(esp + 0x10) = edi;
    ebp = 0x148;

loc_00597454: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005974A8; /* je: equal / zero */

loc_0059745C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00597493; /* je: equal / zero */

loc_0059745F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0059747E; /* je: equal / zero */

loc_00597462: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005974F0; /* jne: not equal / not zero */

loc_00597469: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00597473u); RECOMP_ABI_CALL(0x00597792u, sub_00597792); /* call 0x00597792 */

loc_00597473: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005974C6; /* je: equal / zero */

loc_0059747A: ;
    PUSH32(esp, 3);
    goto loc_005974BA;

loc_0059747E: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00597488u); RECOMP_ABI_CALL(0x00597792u, sub_00597792); /* call 0x00597792 */

loc_00597488: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005974C6; /* je: equal / zero */

loc_0059748F: ;
    PUSH32(esp, 2);
    goto loc_005974BA;

loc_00597493: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0059749Du); RECOMP_ABI_CALL(0x00597792u, sub_00597792); /* call 0x00597792 */

loc_0059749D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005974C6; /* je: equal / zero */

loc_005974A4: ;
    PUSH32(esp, 1);
    goto loc_005974BA;

loc_005974A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005974B2u); RECOMP_ABI_CALL(0x00597792u, sub_00597792); /* call 0x00597792 */

loc_005974B2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005974C6; /* je: equal / zero */

loc_005974B9: ;
    PUSH32(esp, edi);

loc_005974BA: ;
    ecx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005974C2u); RECOMP_ABI_CALL(0x00597ADDu, sub_00597ADD); /* call 0x00597ADD */

loc_005974C2: ;
    esi = eax;
    goto loc_005974C8;

loc_005974C6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005974C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005974F0; /* je: equal / zero */

loc_005974CC: ;
    eax = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005974F0; /* je: equal / zero */

loc_005974D3: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005974F0; /* je: equal / zero */

loc_005974DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x005974E1u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x005974DFu); } /* indirect call */
    }

loc_005974E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005974F0; /* jne: not equal / not zero */

loc_005974E8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005974F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005974EEu); } /* indirect call */
    }

loc_005974F0: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00597454; /* jl: less (signed <) */

loc_005974FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00597507
 * Original: 0x00597507 - 0x00597573 (108 bytes, 36 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597507(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597507: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0059751B; /* je: equal / zero */

loc_00597516: ;
    PUSH32(esp, 0x0059751Bu); RECOMP_ABI_CALL(0x00597EF3u, sub_00597EF3); /* call 0x00597EF3 */

loc_0059751B: ;
    PUSH32(esp, 0x91A558);
    PUSH32(esp, 0x91A55C);
    PUSH32(esp, 0x79975C);
    PUSH32(esp, 0x0059752Fu); RECOMP_ABI_CALL(0x0079CCC3u, sub_0079CCC3); /* call 0x0079CCC3 */

loc_0059752F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059754B; /* je: equal / zero */

loc_00597533: ;
    eax = MEM32(0x91A558);
    eax = ~eax;
    eax = eax & MEM32(0x91A554);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(0x91A55C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x91A554) = eax;

loc_0059754B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9C), ebx (32-bit) */
    edi = esi + 0x1C;
    if (CMP_LE(_fas, _fbs)) goto loc_0059756F; /* jle: less or equal (signed <=) */

loc_00597558: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00597563; /* je: equal / zero */

loc_0059755E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00597563u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00597560u); } /* indirect call */
    }

loc_00597563: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x9C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00597558; /* jl: less (signed <) */

loc_0059756F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00597573
 * Original: 0x00597573 - 0x005975EB (120 bytes, 42 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597573(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597573: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 0x00597581u); RECOMP_ABI_CALL(0x00597A1Fu, sub_00597A1F); /* call 0x00597A1F */

loc_00597581: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x79975C);
    MEM32(esi) = 0x87D3BC;
    MEM32(esi + 0xB0) = ebx;
    PUSH32(esp, 0x00597599u); RECOMP_ABI_CALL(0x0079CCA1u, sub_0079CCA1); /* call 0x0079CCA1 */

loc_00597599: ;
    MEM32(0x91A54C) = eax;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005975DC; /* jbe: below or equal (unsigned <=) */

loc_005975A5: ;
    if (CMP_NE(_fa, _fb)) goto loc_005975B0; /* jne: not equal / not zero */

loc_005975A7: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x005975AEu); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_005975AE: ;
    goto loc_005975BE;

loc_005975B0: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x005975BEu); RECOMP_ABI_CALL(0x005973C9u, sub_005973C9); /* call 0x005973C9 */

loc_005975BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005975D6; /* je: equal / zero */

loc_005975C3: ;
    PUSH32(esp, 0x597168);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x70);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x005975D6u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_005975D6: ;
    MEM32(esi + 0xB0) = ebx;

loc_005975DC: ;
    ecx = esi;
    PUSH32(esp, 0x005975E3u); RECOMP_ABI_CALL(0x00597442u, sub_00597442); /* call 0x00597442 */

loc_005975E3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005975EB
 * Original: 0x005975EB - 0x005975F2 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005975EB(void)
{

loc_005975EB: ;
    eax = MEM32(ecx + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_005975F2
 * Original: 0x005975F2 - 0x005975F9 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005975F2(void)
{

loc_005975F2: ;
    eax = MEM32(ecx + 0xA0);
    esp += 4; return; /* ret */

}

/**
 * sub_005975F9
 * Original: 0x005975F9 - 0x00597600 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005975F9(void)
{

loc_005975F9: ;
    eax = MEM32(ecx + 0xA4);
    esp += 4; return; /* ret */

}

/**
 * sub_00597600
 * Original: 0x00597600 - 0x00597622 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00597608u); RECOMP_ABI_CALL(0x005973ECu, sub_005973EC); /* call 0x005973EC */

loc_00597608: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0059761C; /* je: equal / zero */

loc_0059760F: ;
    PUSH32(esp, 0xB4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059761Au); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_0059761A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0059761C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597622
 * Original: 0x00597622 - 0x00597670 (78 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597622(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597622: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00597653; /* je: equal / zero */

loc_0059762F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x597267);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597642u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00597642: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0059764E; /* je: equal / zero */

loc_00597647: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0059764Du); RECOMP_ABI_CALL(0x0059779Bu, sub_0059779B); /* call 0x0059779B */

loc_0059764D: ;
    POP32(esp, ecx);

loc_0059764E: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_0059766B;

loc_00597653: ;
    ecx = esi;
    PUSH32(esp, 0x0059765Au); RECOMP_ABI_CALL(0x00597267u, sub_00597267); /* call 0x00597267 */

loc_0059765A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00597669; /* je: equal / zero */

loc_0059765F: ;
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597667u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_00597667: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00597669: ;
    eax = esi;

loc_0059766B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597670
 * Original: 0x00597670 - 0x0059768C (28 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597670(void)
{

loc_00597670: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00597680u); RECOMP_ABI_CALL(0x005980B1u, sub_005980B1); /* call 0x005980B1 */

loc_00597680: ;
    MEM32(esi) = 0x87D3DC;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0059768C
 * Original: 0x0059768C - 0x00597690 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059768C(void)
{

loc_0059768C: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00597690
 * Original: 0x00597690 - 0x00597695 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00597690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597695
 * Original: 0x00597695 - 0x00597698 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00597695(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597695: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597698
 * Original: 0x00597698 - 0x005976A8 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597698(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00597698: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005976A8
 * Original: 0x005976A8 - 0x005976AB (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005976A8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005976A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005976AB
 * Original: 0x005976AB - 0x005976AE (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005976AB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005976AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005976AE
 * Original: 0x005976AE - 0x005976B1 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005976AE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005976AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005976B1
 * Original: 0x005976B1 - 0x005976D9 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005976B1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005976B1: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D3DC;
    PUSH32(esp, 0x005976BFu); RECOMP_ABI_CALL(0x0059806Fu, sub_0059806F); /* call 0x0059806F */

loc_005976BF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005976D3; /* je: equal / zero */

loc_005976C6: ;
    PUSH32(esp, 0x138);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005976D1u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_005976D1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_005976D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005976D9
 * Original: 0x005976D9 - 0x005976FD (36 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005976D9(void)
{

loc_005976D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0x005976E7u); RECOMP_ABI_CALL(0x00597670u, sub_00597670); /* call 0x00597670 */

loc_005976E7: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x138) = eax;
    MEM32(esi) = 0x87D3FC;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005976FD
 * Original: 0x005976FD - 0x00597708 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005976FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005976FD: ;
    MEM32(ecx) = 0x87D3DC;
    g_seh_ebp = ebp; sub_0059806F(); return; /* tail jmp 0x0059806F */

}

/**
 * sub_00597708
 * Original: 0x00597708 - 0x0059770F (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597708(void)
{

loc_00597708: ;
    eax = MEM32(ecx + 0x13C);
    esp += 4; return; /* ret */

}

/**
 * sub_0059770F
 * Original: 0x0059770F - 0x0059771C (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059770F(void)
{

loc_0059770F: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x13C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0059771C
 * Original: 0x0059771C - 0x00597723 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059771C(void)
{

loc_0059771C: ;
    eax = MEM32(ecx + 0x140);
    esp += 4; return; /* ret */

}

/**
 * sub_00597730
 * Original: 0x00597730 - 0x00597758 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597730: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D3DC;
    PUSH32(esp, 0x0059773Eu); RECOMP_ABI_CALL(0x0059806Fu, sub_0059806F); /* call 0x0059806F */

loc_0059773E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00597752; /* je: equal / zero */

loc_00597745: ;
    PUSH32(esp, 0x144);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597750u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_00597750: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00597752: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597758
 * Original: 0x00597758 - 0x0059776F (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597758(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597758: ;
    ecx = MEM32(0x91A550);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059776E; /* je: equal / zero */

loc_00597762: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00597767u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00597764u); } /* indirect call */
    }

loc_00597767: ;
    MEM32(0x91A550) = MEM32(0x91A550) & 0;
    _fa = (uint32_t)(MEM32(0x91A550)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0059776E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0059776F
 * Original: 0x0059776F - 0x00597783 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059776F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0059776F: ;
    PUSH32(esp, 0x00597774u); RECOMP_ABI_CALL(0x00597758u, sub_00597758); /* call 0x00597758 */

loc_00597774: ;
    ecx = MEM32(esp + 4);
    MEM32(0x91A550) = ecx;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_00597789
 * Original: 0x00597789 - 0x00597792 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00597789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00597789: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_005977C1(); return; /* tail jmp 0x005977C1 */

}

/**
 * sub_00597792
 * Original: 0x00597792 - 0x0059779B (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00597792(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00597792: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_005977C1(); return; /* tail jmp 0x005977C1 */

}

/**
 * sub_0059779B
 * Original: 0x0059779B - 0x005977AD (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059779B(void)
{

loc_0059779B: ;
    ecx = MEM32(0x91A550);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005977ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005977A9u); } /* indirect call */
    }

loc_005977AC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005977AD
 * Original: 0x005977AD - 0x005977C1 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005977AD(void)
{

loc_005977AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(0x91A550);
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005977C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005977BDu); } /* indirect call */
    }

loc_005977C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005977C1
 * Original: 0x005977C1 - 0x00597824 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005977C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005977C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(0x91A550);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = ebp + -12;
    MEM32(ebp + -16) = eax;
    eax = ebp + -24;
    MEM32(ebp + -28) = eax;
    edx = ebp + -48;
    eax = ebp + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -48) = 4;
    MEM32(ebp + -36) = 3;
    MEM32(ebp + -24) = 2;
    MEM32(ebp + -12) = 1;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00597822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00597820u); } /* indirect call */
    }

loc_00597822: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00597824
 * Original: 0x00597824 - 0x0059782D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597824(void)
{

loc_00597824: ;
    eax = ecx;
    MEM32(eax) = 0x87D41C;
    esp += 4; return; /* ret */

}

/**
 * sub_0059782D
 * Original: 0x0059782D - 0x00597834 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059782D(void)
{

loc_0059782D: ;
    MEM32(ecx) = 0x87D41C;
    esp += 4; return; /* ret */

}

/**
 * sub_00597834
 * Original: 0x00597834 - 0x00597835 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597834(void)
{

loc_00597834: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00597835
 * Original: 0x00597835 - 0x00597836 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597835(void)
{

loc_00597835: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00597836
 * Original: 0x00597836 - 0x00597839 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00597836(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597836: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597839
 * Original: 0x00597839 - 0x0059783C (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00597839(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597839: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0059783C
 * Original: 0x0059783C - 0x0059783F (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059783C(void)
{

loc_0059783C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0059783F
 * Original: 0x0059783F - 0x00597842 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059783F(void)
{

loc_0059783F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597842
 * Original: 0x00597842 - 0x0059786D (43 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597842(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597842: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D41C;
    if (TEST_Z(_fa, _fb)) goto loc_0059785C; /* je: equal / zero */

loc_00597852: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059785Au); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_0059785A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0059785C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0059786D
 * Original: 0x0059786D - 0x005978BE (81 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059786D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0059786D: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D438;
    if (TEST_Z(_fa, _fb)) goto loc_00597884; /* je: equal / zero */

loc_0059787D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597883u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00597883: ;
    POP32(esp, ecx);

loc_00597884: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x005978B1u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_005978B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005978BE
 * Original: 0x005978BE - 0x005978F4 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005978BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005978BE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xAC);
    MEM32(esi) = 0x87D458;
    goto loc_005978D2;

loc_005978CF: ;
    ecx = MEM32(esi + 0x1C);

loc_005978D2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005978DC; /* je: equal / zero */

loc_005978D6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005978DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005978DAu); } /* indirect call */
    }

loc_005978DC: ;
    _fa = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9C), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005978CF; /* jg: greater (signed >) */

loc_005978E5: ;
    MEM32(esi + 0x9C) = MEM32(esi + 0x9C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = 0x87D438;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005978F4
 * Original: 0x005978F4 - 0x005978FB (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005978F4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005978F4: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_005978FB
 * Original: 0x005978FB - 0x00597921 (38 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005978FB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005978FB: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ecx + 0x18);
    if ((_fa != 0)) goto loc_00597920; /* jne: not equal / not zero */

loc_00597903: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91A548)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x91A548) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00597912; /* jne: not equal / not zero */

loc_0059790B: ;
    MEM32(0x91A548) = MEM32(0x91A548) & 0;
    _fa = (uint32_t)(MEM32(0x91A548)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00597912: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00597919u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00597916u); } /* indirect call */
    }

loc_00597919: ;
    PUSH32(esp, 0x0059791Eu); RECOMP_ABI_CALL(0x00597758u, sub_00597758); /* call 0x00597758 */

loc_0059791E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597920: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00597921
 * Original: 0x00597921 - 0x0059795D (60 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597921(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597921: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00597935; /* je: equal / zero */

loc_00597930: ;
    PUSH32(esp, 0x00597935u); RECOMP_ABI_CALL(0x00597EF3u, sub_00597EF3); /* call 0x00597EF3 */

loc_00597935: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9C), ebx (32-bit) */
    edi = esi + 0x1C;
    if (CMP_LE(_fas, _fbs)) goto loc_00597959; /* jle: less or equal (signed <=) */

loc_00597942: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059794D; /* je: equal / zero */

loc_00597948: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0059794Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0059794Au); } /* indirect call */
    }

loc_0059794D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x9C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00597942; /* jl: less (signed <) */

loc_00597959: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0059795D
 * Original: 0x0059795D - 0x0059796F (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0059795D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0059795D: ;
    ecx = MEM32(ecx + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059796C; /* je: equal / zero */

loc_00597967: ;
    g_seh_ebp = ebp; sub_00597EFA(); return; /* tail jmp 0x00597EFA */

loc_0059796C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0059796F
 * Original: 0x0059796F - 0x005979B3 (68 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059796F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059796F: ;
    eax = ecx + 0x9C;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_005979AD; /* jge: greater or equal (signed >=) */

loc_0059797D: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + esi * 4 + 0x1C) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005979A3; /* je: equal / zero */

loc_0059798D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0059799B; /* je: equal / zero */

loc_00597990: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005979A9; /* jne: not equal / not zero */

loc_00597993: ;
    MEM32(ecx + 0xA8) = edx;
    goto loc_005979A9;

loc_0059799B: ;
    MEM32(ecx + 0xA0) = edx;
    goto loc_005979A9;

loc_005979A3: ;
    MEM32(ecx + 0xA4) = edx;

loc_005979A9: ;
    SET_LO8(eax, 1);
    goto loc_005979AF;

loc_005979AD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_005979AF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005979B3
 * Original: 0x005979B3 - 0x00597A1F (108 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005979B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005979B3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005979C0; /* jne: not equal / not zero */

loc_005979BC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_005979E3;

loc_005979C0: ;
    eax = MEM32(ecx + 0x9C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = ecx + 0x1C;
    if (CMP_LE(_fas, _fbs)) goto loc_005979E0; /* jle: less or equal (signed <=) */

loc_005979D0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005979E7; /* je: equal / zero */

loc_005979D4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x9C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005979D0; /* jl: less (signed <) */

loc_005979E0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_005979E2: ;
    POP32(esp, edi);

loc_005979E3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_005979E7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x9C) = eax;
    eax = MEM32(ecx + eax * 4 + 0x1C);
    MEM32(edx) = eax;
    eax = ecx + 0xA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00597A01; /* jne: not equal / not zero */

loc_005979FE: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00597A01: ;
    eax = ecx + 0xA4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00597A0E; /* jne: not equal / not zero */

loc_00597A0B: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00597A0E: ;
    eax = ecx + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00597A1B; /* jne: not equal / not zero */

loc_00597A18: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00597A1B: ;
    SET_LO8(eax, 1);
    goto loc_005979E2;

}

/**
 * sub_00597A1F
 * Original: 0x00597A1F - 0x00597AB4 (149 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597A1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00597A1F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 5);
    POP32(esp, ecx);
    MEM32(ebx) = 0x87D458;
    edi = ebx + 4;
    MEM32(edi) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = 0x20;
    MEM32(edi + 0x10) = ebp;
    PUSH32(esp, 0x80);
    eax = ebx + 0x1C;
    PUSH32(esp, ebp);
    MEM32(ebx + 0x18) = 1;
    MEM32(ebx + 0x9C) = ebp;
    MEM32(ebx + 0xA0) = ebp;
    MEM32(ebx + 0xA4) = ebp;
    MEM32(ebx + 0xA8) = ebp;
    MEM32(ebx + 0xAC) = ebp;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x00597A7Fu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00597A7F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x14);
    PUSH32(esp, ebp);
    MEM32(ebx + 0x9C) = ebp;
    PUSH32(esp, 0x00597A90u); RECOMP_ABI_CALL(0x00597792u, sub_00597792); /* call 0x00597792 */

loc_00597A90: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00597AA3; /* je: equal / zero */

loc_00597A97: ;
    PUSH32(esp, MEM32(ebx + 0x10));
    ecx = eax;
    PUSH32(esp, 0x00597AA1u); RECOMP_ABI_CALL(0x00597F0Cu, sub_00597F0C); /* call 0x00597F0C */

loc_00597AA1: ;
    goto loc_00597AA5;

loc_00597AA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597AA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xAC) = eax;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597AB4
 * Original: 0x00597AB4 - 0x00597AD6 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597AB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597AB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00597ABCu); RECOMP_ABI_CALL(0x005978BEu, sub_005978BE); /* call 0x005978BE */

loc_00597ABC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00597AD0; /* je: equal / zero */

loc_00597AC3: ;
    PUSH32(esp, 0xB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597ACEu); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_00597ACE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00597AD0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597ADD
 * Original: 0x00597ADD - 0x00597B40 (99 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597ADD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597ADD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00597AEDu); RECOMP_ABI_CALL(0x005976D9u, sub_005976D9); /* call 0x005976D9 */

loc_00597AED: ;
    ebx = MEM32(esp + 0x14);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi) = 0x87D478;
    MEM32(esi + 0x140) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x144) = edi;
    PUSH32(esp, 0x00597B17u); RECOMP_ABI_CALL(0x0059770Fu, sub_0059770F); /* call 0x0059770F */

loc_00597B17: ;
    PUSH32(esp, 0x118);
    eax = esi + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x00597B29u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00597B29: ;
    ecx = MEM32(esi + 0x138);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597B38u); RECOMP_ABI_CALL(0x0059796Fu, sub_0059796F); /* call 0x0059796F */

loc_00597B38: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00597B40
 * Original: 0x00597B40 - 0x00597B84 (68 bytes, 24 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00597B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x138);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi) = 0x87D478;
    PUSH32(esp, 0x00597B56u); RECOMP_ABI_CALL(0x005979B3u, sub_005979B3); /* call 0x005979B3 */

loc_00597B56: ;
    edi = esi + 0x140;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00597B6B; /* je: equal / zero */

loc_00597B62: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00597B68u); RECOMP_ABI_CALL(0x007A4D17u, sub_007A4D17); /* call 0x007A4D17 */

loc_00597B68: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00597B6B: ;
    ecx = MEM32(esi + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00597B7B; /* je: equal / zero */

loc_00597B75: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00597B7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00597B79u); } /* indirect call */
    }

loc_00597B7B: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005976FD(); return; /* tail jmp 0x005976FD */

}

/**
 * sub_00597B84
 * Original: 0x00597B84 - 0x00597E4D (713 bytes, 225 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00597B84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00597B84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x240) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x240));
    esp = esp - 0x240;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(0x91A55C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x91A55C), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00597BD8; /* je: equal / zero */

loc_00597BA1: ;
    _fa = (uint32_t)(MEM32(0x91A558)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x91A558), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00597BD8; /* je: equal / zero */

loc_00597BA9: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00597BD8; /* je: equal / zero */

loc_00597BAF: ;
    eax = MEM32(esi + 0x140);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00597BDA; /* je: equal / zero */

loc_00597BBB: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597BC1u); RECOMP_ABI_CALL(0x007A4D17u, sub_007A4D17); /* call 0x007A4D17 */

loc_00597BC1: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x79975C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597BD0u); RECOMP_ABI_CALL(0x007A4CC1u, sub_007A4CC1); /* call 0x007A4CC1 */

loc_00597BD0: ;
    MEM32(esi + 0x140) = eax;
    goto loc_00597BDA;

loc_00597BD8: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597BDA: ;
    eax = MEM32(esi + 0x138);
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00597E47; /* je: equal / zero */

loc_00597BF1: ;
    PUSH32(esp, ebx);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597BFAu); RECOMP_ABI_CALL(0x005980FFu, sub_005980FF); /* call 0x005980FF */

loc_00597BFA: ;
    PUSH32(esp, 0x24);
    eax = ebp + -40;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597C06u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00597C06: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597C11u); RECOMP_ABI_CALL(0x00598144u, sub_00598144); /* call 0x00598144 */

loc_00597C11: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ebp + -20) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = esi + 0x20;
    _fa = (uint32_t)(MEM32(0x91A554)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x91A554), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00597DFD; /* je: equal / zero */

loc_00597C2B: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00597C64; /* jne: not equal / not zero */

loc_00597C31: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597C40u); RECOMP_ABI_CALL(0x00597FA1u, sub_00597FA1); /* call 0x00597FA1 */

loc_00597C40: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x79975C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597C4Fu); RECOMP_ABI_CALL(0x007A4CC1u, sub_007A4CC1); /* call 0x007A4CC1 */

loc_00597C4F: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) | 3;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 8);
    POP32(esp, edi);
    MEM32(esi + 0x140) = eax;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    goto loc_00597C67;

loc_00597C64: ;
    PUSH32(esp, 8);
    POP32(esp, edi);

loc_00597C67: ;
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x140));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597C76u); RECOMP_ABI_CALL(0x007A4EFBu, sub_007A4EFB); /* call 0x007A4EFB */

loc_00597C76: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -50);
    MEM32(ebp + -320) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -48);
    MEM32(ebp + -316) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -46);
    MEM32(ebp + -312) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -44);
    MEM32(ebp + -308) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597CA0: ;
    ecx = ZX8(MEM8(ebp + eax + -58));
    MEM32(ebp + eax * 4 + -304) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00597CA0; /* jl: less (signed <) */

loc_00597CB1: ;
    esi = ZX16(MEM16(ebp + -60));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597CB7: ;
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((1) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + eax * 4 + -576) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00597CB7; /* jl: less (signed <) */

loc_00597CD4: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597CD6: ;
    eax = MEM32(ebp + edi * 4 + -320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + edi * 4 + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + edi * 4 + 0x98) (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, 4);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00597D57; /* je: equal / zero */

loc_00597CE9: ;
    eax = edi;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -28) = 3;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -24) = edi;
    if ((_fa == 0)) goto loc_00597D32; /* je: equal / zero */

loc_00597CFE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00597D27; /* je: equal / zero */

loc_00597D01: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00597D1C; /* je: equal / zero */

loc_00597D04: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00597D3D; /* jne: not equal / not zero */

loc_00597D07: ;
    eax = MEM32(ebp + -308);
    MEM32(ebx + 0x10) = eax;

loc_00597D10: ;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = 1;
    goto loc_00597D3D;

loc_00597D1C: ;
    eax = MEM32(ebp + -312);
    MEM32(ebx + 0xC) = eax;
    goto loc_00597D10;

loc_00597D27: ;
    eax = MEM32(ebp + -316);
    MEM32(ebx + 4) = eax;
    goto loc_00597D3A;

loc_00597D32: ;
    eax = MEM32(ebp + -320);
    MEM32(ebx) = eax;

loc_00597D3A: ;
    MEM32(ebp + -24) = ecx;

loc_00597D3D: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597D49u); RECOMP_ABI_CALL(0x00597FA1u, sub_00597FA1); /* call 0x00597FA1 */

loc_00597D49: ;
    eax = MEM32(ebp + edi * 4 + -320);
    MEM32(ebx + edi * 4 + 0x98) = eax;

loc_00597D57: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00597CD6; /* jl: less (signed <) */

loc_00597D60: ;
    PUSH32(esp, 4);
    POP32(esp, edi);
    esi = ebx + 0x38;

loc_00597D66: ;
    eax = MEM32(ebp + edi * 4 + -320);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00597DB7; /* je: equal / zero */

loc_00597D71: ;
    ecx = edi + 4;
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -32) = 4;
    MEM32(ebp + -24) = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00597D97; /* je: equal / zero */

loc_00597D8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00597DA2; /* jne: not equal / not zero */

loc_00597D8E: ;
    MEM32(ebp + -32) = 3;
    goto loc_00597DA2;

loc_00597D97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00597DA2; /* je: equal / zero */

loc_00597D9B: ;
    MEM32(ebp + -32) = 2;

loc_00597DA2: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597DAEu); RECOMP_ABI_CALL(0x00597FA1u, sub_00597FA1); /* call 0x00597FA1 */

loc_00597DAE: ;
    eax = MEM32(ebp + edi * 4 + -320);
    MEM32(esi) = eax;

loc_00597DB7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00597D66; /* jl: less (signed <) */

loc_00597DC0: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebx + 0x18;

loc_00597DC5: ;
    eax = MEM32(ebp + edi * 4 + -576);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00597DF2; /* je: equal / zero */

loc_00597DD0: ;
    ecx = MEM32(ebp + -4);
    MEM32(esi) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 1;
    MEM32(ebp + -24) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597DF2u); RECOMP_ABI_CALL(0x00597FA1u, sub_00597FA1); /* call 0x00597FA1 */

loc_00597DF2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00597DC5; /* jl: less (signed <) */

loc_00597DFB: ;
    goto loc_00597E3E;

loc_00597DFD: ;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00597E3E; /* je: equal / zero */

loc_00597E03: ;
    PUSH32(esp, 0x118);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597E0Fu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00597E0F: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597E25u); RECOMP_ABI_CALL(0x00597FA1u, sub_00597FA1); /* call 0x00597FA1 */

loc_00597E25: ;
    edi = esi + 0x140;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00597E3A; /* je: equal / zero */

loc_00597E31: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597E37u); RECOMP_ABI_CALL(0x007A4D17u, sub_007A4D17); /* call 0x007A4D17 */

loc_00597E37: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00597E3A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00597E3E: ;
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00597E46u); RECOMP_ABI_CALL(0x0059811Du, sub_0059811D); /* call 0x0059811D */

loc_00597E46: ;
    POP32(esp, ebx);

loc_00597E47: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00597E4D
 * Original: 0x00597E4D - 0x00597E95 (72 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597E4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597E4D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00597E5B; /* je: equal / zero */

loc_00597E57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00597E5F; /* jne: not equal / not zero */

loc_00597E5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00597E91;

loc_00597E5F: ;
    ecx = MEM32(esi + 0x144);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00597E6E; /* je: equal / zero */

loc_00597E69: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00597E6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00597E6Bu); } /* indirect call */
    }

loc_00597E6E: ;
    ecx = MEM32(0x91A548);
    PUSH32(esp, 0x00597E79u); RECOMP_ABI_CALL(0x0059741Eu, sub_0059741E); /* call 0x0059741E */

loc_00597E79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    MEM32(esi + 0x144) = eax;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00597E8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00597E88u); } /* indirect call */
    }

loc_00597E8B: ;
    eax = MEM32(esi + 0x144);

loc_00597E91: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597E95
 * Original: 0x00597E95 - 0x00597E9C (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597E95(void)
{

loc_00597E95: ;
    eax = MEM32(ecx + 0x144);
    esp += 4; return; /* ret */

}

/**
 * sub_00597E9C
 * Original: 0x00597E9C - 0x00597EBE (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597E9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597E9C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00597EA4u); RECOMP_ABI_CALL(0x00597B40u, sub_00597B40); /* call 0x00597B40 */

loc_00597EA4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00597EB8; /* je: equal / zero */

loc_00597EAB: ;
    PUSH32(esp, 0x148);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00597EB6u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_00597EB6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00597EB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597EC3
 * Original: 0x00597EC3 - 0x00597ED7 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597EC3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597EC3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00597ED3u); RECOMP_ABI_CALL(0x00597789u, sub_00597789); /* call 0x00597789 */

loc_00597ED3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00597EE2
 * Original: 0x00597EE2 - 0x00597EEE (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597EE2(void)
{

loc_00597EE2: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00597EEAu); RECOMP_ABI_CALL(0x005980FFu, sub_005980FF); /* call 0x005980FF */

loc_00597EEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00597EEE
 * Original: 0x00597EEE - 0x00597EF3 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597EEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00597EEE: ;
    g_seh_ebp = ebp; sub_0059811D(); return; /* tail jmp 0x0059811D */

}

/**
 * sub_00597EF3
 * Original: 0x00597EF3 - 0x00597EFA (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597EF3(void)
{

loc_00597EF3: ;
    eax = MEM32(ecx + 0xC);
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00597F0C
 * Original: 0x00597F0C - 0x00597F84 (120 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597F0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597F0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi + edi * 4;
    esi = ecx;
    eax = eax * 8 + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x87D498;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x00597F2Eu); RECOMP_ABI_CALL(0x00597EC3u, sub_00597EC3); /* call 0x00597EC3 */

loc_00597F2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00597F4A; /* je: equal / zero */

loc_00597F33: ;
    PUSH32(esp, 0x597EE2);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00597F46u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00597F46: ;
    eax = ebx;
    goto loc_00597F4C;

loc_00597F4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597F4C: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00597F72; /* jle: less or equal (signed <=) */

loc_00597F5D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;

loc_00597F61: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + 0x28;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x24) = ebx;
    if ((_fa != 0)) goto loc_00597F61; /* jne: not equal / not zero */

loc_00597F72: ;
    ecx = MEM32(esi + 8);
    eax = eax + eax * 4;
    POP32(esp, edi);
    MEM32(ecx + eax * 8 + 0x24) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597F84
 * Original: 0x00597F84 - 0x00597FA1 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597F84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597F84: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x87D498;
    if (CMP_EQ(_fa, _fb)) goto loc_00597F9B; /* je: equal / zero */

loc_00597F94: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00597F9Bu); RECOMP_ABI_CALL(0x00598002u, sub_00598002); /* call 0x00598002 */

loc_00597F9B: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00597FA1
 * Original: 0x00597FA1 - 0x00597FC9 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597FA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00597FA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00597FB0u); RECOMP_ABI_CALL(0x00597FC9u, sub_00597FC9); /* call 0x00597FC9 */

loc_00597FB0: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00597FC0; /* jne: not equal / not zero */

loc_00597FBB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00597FC5;

loc_00597FC0: ;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00597FC5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00597FC9
 * Original: 0x00597FC9 - 0x00598002 (57 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00597FC9(void)
{

loc_00597FC9: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00598002
 * Original: 0x00598002 - 0x00598050 (78 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598002(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598002: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00598033; /* je: equal / zero */

loc_0059800F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x597EEE);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598022u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_00598022: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0059802E; /* je: equal / zero */

loc_00598027: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0059802Du); RECOMP_ABI_CALL(0x0059779Bu, sub_0059779B); /* call 0x0059779B */

loc_0059802D: ;
    POP32(esp, ecx);

loc_0059802E: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_0059804B;

loc_00598033: ;
    ecx = esi;
    PUSH32(esp, 0x0059803Au); RECOMP_ABI_CALL(0x0059811Du, sub_0059811D); /* call 0x0059811D */

loc_0059803A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00598049; /* je: equal / zero */

loc_0059803F: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598047u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_00598047: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00598049: ;
    eax = esi;

loc_0059804B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00598050
 * Original: 0x00598050 - 0x0059806F (31 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00598058u); RECOMP_ABI_CALL(0x00597F84u, sub_00597F84); /* call 0x00597F84 */

loc_00598058: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00598069; /* je: equal / zero */

loc_0059805F: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598067u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_00598067: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00598069: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0059806F
 * Original: 0x0059806F - 0x00598076 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059806F(void)
{

loc_0059806F: ;
    MEM32(ecx) = 0x87D49C;
    esp += 4; return; /* ret */

}

/**
 * sub_00598076
 * Original: 0x00598076 - 0x0059809F (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598076(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598076: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x10);
    eax = esi + 4;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0059808Du); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0059808D: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059809Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0059809A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059809F
 * Original: 0x0059809F - 0x005980B1 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059809F(void)
{

loc_0059809F: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D49C;
    PUSH32(esp, 0x005980ADu); RECOMP_ABI_CALL(0x00598076u, sub_00598076); /* call 0x00598076 */

loc_005980AD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005980B1
 * Original: 0x005980B1 - 0x005980D3 (34 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005980B1(void)
{

loc_005980B1: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D49C;
    PUSH32(esp, 0x005980BFu); RECOMP_ABI_CALL(0x00598076u, sub_00598076); /* call 0x00598076 */

loc_005980BF: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005980D3
 * Original: 0x005980D3 - 0x005980D6 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005980D3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005980D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005980D6
 * Original: 0x005980D6 - 0x005980D9 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005980D6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005980D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005980D9
 * Original: 0x005980D9 - 0x005980DC (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005980D9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005980D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_005980DC
 * Original: 0x005980DC - 0x005980FF (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005980DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005980DC: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D49C;
    if (TEST_Z(_fa, _fb)) goto loc_005980F9; /* je: equal / zero */

loc_005980EC: ;
    PUSH32(esp, 0x138);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005980F7u); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_005980F7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_005980F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005980FF
 * Original: 0x005980FF - 0x0059811D (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005980FF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005980FF: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x87D4BC;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 3;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0059811D
 * Original: 0x0059811D - 0x00598124 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059811D(void)
{

loc_0059811D: ;
    MEM32(ecx) = 0x87D4BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00598124
 * Original: 0x00598124 - 0x00598144 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598124(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598124: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D4BC;
    if (TEST_Z(_fa, _fb)) goto loc_0059813E; /* je: equal / zero */

loc_00598134: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059813Cu); RECOMP_ABI_CALL(0x005977ADu, sub_005977AD); /* call 0x005977AD */

loc_0059813C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0059813E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00598144
 * Original: 0x00598144 - 0x00598149 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598144(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00598144: ;
    g_seh_ebp = ebp; sub_0059E3B6(); return; /* tail jmp 0x0059E3B6 */

}

/**
 * sub_00598149
 * Original: 0x00598149 - 0x00598179 (48 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598149(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598149: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    edi = ecx;
    goto loc_00598159;

loc_00598152: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598173; /* je: equal / zero */

loc_00598157: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00598159: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00598162u); RECOMP_ABI_CALL(0x005CCFA4u, sub_005CCFA4); /* call 0x005CCFA4 */

loc_00598162: ;
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0059816Du); RECOMP_ABI_CALL(0x005CCFA4u, sub_005CCFA4); /* call 0x005CCFA4 */

loc_0059816D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_00598152; /* je: equal / zero */

loc_00598173: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00598179
 * Original: 0x00598179 - 0x005981E1 (104 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598179(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598179: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_HI8(eax, MEM8(esi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0FB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0FB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00598192; /* jne: not equal / not zero */

loc_0059818F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005981DC;

loc_00598192: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059819Au); RECOMP_ABI_CALL(0x0002C9B3u, sub_0002C9B3); /* call 0x0002C9B3 */

loc_0059819A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42494746) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x42494746 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005981A8; /* jne: not equal / not zero */

loc_005981A3: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);
    goto loc_005981DC;

loc_005981A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005981B1u); RECOMP_ABI_CALL(0x0002C9B3u, sub_0002C9B3); /* call 0x0002C9B3 */

loc_005981B1: ;
    edi = 0xFFFFFF00u;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42494700) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x42494700 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005981C5; /* jne: not equal / not zero */

loc_005981C1: ;
    PUSH32(esp, 3);
    goto loc_005981DA;

loc_005981C5: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x005981CDu); RECOMP_ABI_CALL(0x0002C9B3u, sub_0002C9B3); /* call 0x0002C9B3 */

loc_005981CD: ;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x53687000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x53687000 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005981DB; /* jne: not equal / not zero */

loc_005981D8: ;
    PUSH32(esp, 2);

loc_005981DA: ;
    POP32(esp, ebx);

loc_005981DB: ;
    POP32(esp, edi);

loc_005981DC: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005981E1
 * Original: 0x005981E1 - 0x0059821D (60 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005981E1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005981E1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x005981EFu); RECOMP_ABI_CALL(0x00598179u, sub_00598179); /* call 0x00598179 */

loc_005981EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0059820B; /* je: equal / zero */

loc_005981F5: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00598218; /* jle: less or equal (signed <=) */

loc_005981F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00598218; /* jg: greater (signed >) */

loc_005981FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598207u); RECOMP_ABI_CALL(0x0002C9B3u, sub_0002C9B3); /* call 0x0002C9B3 */

loc_00598207: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00598216;

loc_0059820B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi + 2));
    SET_LO8(eax, MEM8(esi + 3));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00598216: ;
    edi = eax;

loc_00598218: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059821D
 * Original: 0x0059821D - 0x005982AC (143 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059821D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059821D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0059822Bu); RECOMP_ABI_CALL(0x005981E1u, sub_005981E1); /* call 0x005981E1 */

loc_0059822B: ;
    POP32(esp, ecx);
    ecx = eax + esi + -8;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0059823A; /* jl: less (signed <) */

loc_00598236: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00598242; /* jle: less or equal (signed <=) */

loc_0059823A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005982A7; /* jl: less (signed <) */

loc_0059823E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005982A7; /* jg: greater (signed >) */

loc_00598242: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005982A7; /* jl: less (signed <) */

loc_00598249: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005982A7; /* jg: greater (signed >) */

loc_0059824D: ;
    SET_LO8(edx, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005982A7; /* jl: less (signed <) */

loc_00598255: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005982A7; /* jg: greater (signed >) */

loc_0059825A: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005982A6; /* jl: less (signed <) */

loc_00598263: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005982A6; /* jg: greater (signed >) */

loc_00598268: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, 8);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0059828F; /* je: equal / zero */

loc_00598273: ;
    esi = (uint32_t)(int32_t)SMEM8(ecx + 2);
    eax = SX8(LO8(eax));
    eax = eax + eax * 4;
    eax = esi + eax * 2;
    esi = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = esi + eax * 2 + -5328;
    MEM32(edx) = eax;

loc_0059828F: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005982A6; /* je: equal / zero */

loc_00598297: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005982A2u); RECOMP_ABI_CALL(0x0002C9B3u, sub_0002C9B3); /* call 0x0002C9B3 */

loc_005982A2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;

loc_005982A6: ;
    POP32(esp, ebx);

loc_005982A7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005982AC
 * Original: 0x005982AC - 0x005982CA (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005982AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005982AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005982C2u); RECOMP_ABI_CALL(0x0059821Du, sub_0059821D); /* call 0x0059821D */

loc_005982C2: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005982CA
 * Original: 0x005982CA - 0x005983E8 (286 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005982CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005982CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005982E2u); RECOMP_ABI_CALL(0x0059821Du, sub_0059821D); /* call 0x0059821D */

loc_005982E2: ;
    PUSH32(esp, 4);
    POP32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    esi = edi + 0x10;
    MEM32(ebp + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005982F4u); RECOMP_ABI_CALL(0x005981E1u, sub_005981E1); /* call 0x005981E1 */

loc_005982F4: ;
    ecx = edi;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598304u); RECOMP_ABI_CALL(0x00598179u, sub_00598179); /* call 0x00598179 */

loc_00598304: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00598324; /* je: equal / zero */

loc_0059830A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0059832D; /* jne: not equal / not zero */

loc_0059830E: ;
    ebx = (uint32_t)(int32_t)SMEM8(edi + 3);
    PUSH32(esp, 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0059832D; /* jle: less or equal (signed <=) */

loc_0059831F: ;
    MEM32(ebp + 8) = eax;
    goto loc_0059832D;

loc_00598324: ;
    PUSH32(esp, 3);
    POP32(esp, ebx);
    esi = edi + 6;
    MEM32(ebp + 8) = ebx;

loc_0059832D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598386; /* je: equal / zero */

loc_00598333: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0059836B; /* jae: above or equal (unsigned >=) */

loc_00598338: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_00598340: ;
    eax = MEM32(ebp + -8);
    edi = eax + esi;
    eax = MEM32(ebp + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598350u); RECOMP_ABI_CALL(0x00598149u, sub_00598149); /* call 0x00598149 */

loc_00598350: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005983B8; /* je: equal / zero */

loc_00598354: ;
    eax = edi;
    edx = eax + 1;

loc_00598359: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00598359; /* jne: not equal / not zero */

loc_00598360: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + edi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00598340; /* jb: below (unsigned <) */

loc_0059836B: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598375; /* je: equal / zero */

loc_00598372: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00598375: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059837F; /* je: equal / zero */

loc_0059837C: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0059837F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00598381: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00598386: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0059836B; /* jae: above or equal (unsigned >=) */

loc_0059838B: ;
    eax = MEM32(ebp + 8);
    edx = eax + ebx;

loc_00598391: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    edi = edx + esi;
    if (CMP_EQ(_fa, _fb)) goto loc_005983B8; /* je: equal / zero */

loc_0059839C: ;
    eax = edi;
    esi = eax + 1;

loc_005983A1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005983A1; /* jne: not equal / not zero */

loc_005983A8: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax + edi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00598391; /* jb: below (unsigned <) */

loc_005983B6: ;
    goto loc_0059836B;

loc_005983B8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005983CC; /* je: equal / zero */

loc_005983BE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005983C5u); RECOMP_ABI_CALL(0x00019FBBu, sub_00019FBB); /* call 0x00019FBB */

loc_005983C5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;

loc_005983CC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005983E4; /* je: equal / zero */

loc_005983D2: ;
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005983DDu); RECOMP_ABI_CALL(0x0002C9B3u, sub_0002C9B3); /* call 0x0002C9B3 */

loc_005983DD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;

loc_005983E4: ;
    eax = edi;
    goto loc_00598381;

}

/**
 * sub_005983E8
 * Original: 0x005983E8 - 0x0059840F (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005983E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005983E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0059840A; /* je: equal / zero */

loc_005983F6: ;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598407u); RECOMP_ABI_CALL(0x005982CAu, sub_005982CA); /* call 0x005982CA */

loc_00598407: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0059840A: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059840F
 * Original: 0x0059840F - 0x0059843B (44 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059840F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059840F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598428u); RECOMP_ABI_CALL(0x005982CAu, sub_005982CA); /* call 0x005982CA */

loc_00598428: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598436; /* je: equal / zero */

loc_0059842F: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00598438;

loc_00598436: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00598438: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059843B
 * Original: 0x0059843B - 0x0059845B (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059843B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059843B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0059844Du); RECOMP_ABI_CALL(0x005983E8u, sub_005983E8); /* call 0x005983E8 */

loc_0059844D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00598456; /* je: equal / zero */

loc_00598453: ;
    esi = eax + edi;

loc_00598456: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059845B
 * Original: 0x0059845B - 0x00598494 (57 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059845B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059845B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00598469u); RECOMP_ABI_CALL(0x00598179u, sub_00598179); /* call 0x00598179 */

loc_00598469: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00598485; /* je: equal / zero */

loc_0059846F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0059848F; /* jle: less or equal (signed <=) */

loc_00598471: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0059848F; /* jg: greater (signed >) */

loc_00598476: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598481u); RECOMP_ABI_CALL(0x0002C9B3u, sub_0002C9B3); /* call 0x0002C9B3 */

loc_00598481: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0059848D;

loc_00598485: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi + 4));
    SET_LO8(eax, MEM8(esi + 5));

loc_0059848D: ;
    edi = eax;

loc_0059848F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598494
 * Original: 0x00598494 - 0x005984CD (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598494(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598494: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005984A8u); RECOMP_ABI_CALL(0x005982CAu, sub_005982CA); /* call 0x005982CA */

loc_005984A8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005984C3; /* je: equal / zero */

loc_005984AF: ;
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005984B4: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005984B4; /* jne: not equal / not zero */

loc_005984BE: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_005984C3: ;
    eax = MEM32(ebp + 0x10);
    MEM8(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005984CD
 * Original: 0x005984CD - 0x005984D6 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005984CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_005984CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_005982CA(); return; /* tail jmp 0x005982CA */

}

/**
 * sub_005984D6
 * Original: 0x005984D6 - 0x005984FD (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005984D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005984D6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005984F8; /* je: equal / zero */

loc_005984E4: ;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005984F5u); RECOMP_ABI_CALL(0x005982CAu, sub_005982CA); /* call 0x005982CA */

loc_005984F5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005984F8: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005984FD
 * Original: 0x005984FD - 0x0059851D (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005984FD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005984FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0059850Fu); RECOMP_ABI_CALL(0x005984D6u, sub_005984D6); /* call 0x005984D6 */

loc_0059850F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00598518; /* je: equal / zero */

loc_00598515: ;
    esi = eax + edi;

loc_00598518: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059851D
 * Original: 0x0059851D - 0x0059855D (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059851D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059851D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);

loc_00598525: ;
    PUSH32(esp, 0x2C);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059852Fu); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_0059852F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0059853A; /* je: equal / zero */

loc_00598537: ;
    MEM8(esi) = 0;

loc_0059853A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598545u); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_00598545: ;
    MEM32(edi) = eax;
    POP32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00598559; /* je: equal / zero */

loc_00598550: ;
    MEM8(esi) = 0x2C;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = esi;
    if ((_fa != 0)) goto loc_00598525; /* jne: not equal / not zero */

loc_00598559: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0059855D
 * Original: 0x0059855D - 0x00598596 (57 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059855D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059855D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598571u); RECOMP_ABI_CALL(0x005982CAu, sub_005982CA); /* call 0x005982CA */

loc_00598571: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059858C; /* je: equal / zero */

loc_00598578: ;
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0059857D: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059857D; /* jne: not equal / not zero */

loc_00598587: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0059858C: ;
    eax = MEM32(ebp + 0x10);
    MEM8(eax) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00598596
 * Original: 0x00598596 - 0x005985A4 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598596(void)
{

loc_00598596: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x005985A1u); RECOMP_ABI_CALL(0x00598D0Bu, sub_00598D0B); /* call 0x00598D0B */

loc_005985A1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_005985A4
 * Original: 0x005985A4 - 0x005985E0 (60 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005985A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005985A4: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x005985B8u); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_005985B8: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005985DB; /* je: equal / zero */

loc_005985C1: ;
    PUSH32(esp, ebx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x005985CAu); RECOMP_ABI_CALL(0x00598CE8u, sub_00598CE8); /* call 0x00598CE8 */

loc_005985CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x005985D3u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_005985D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    POP32(esp, ebx);
    goto loc_005985DD;

loc_005985DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005985DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005985E0
 * Original: 0x005985E0 - 0x00598610 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005985E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005985E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005985FFu); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_005985FF: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5985A4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059860Bu); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_0059860B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598610
 * Original: 0x00598610 - 0x0059863D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059862Cu); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_0059862C: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5985A4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598638u); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_00598638: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059863D
 * Original: 0x0059863D - 0x00598723 (230 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059863D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059863D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598658u); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_00598658: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0059871C; /* je: equal / zero */

loc_00598666: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059866Eu); RECOMP_ABI_CALL(0x00598CE8u, sub_00598CE8); /* call 0x00598CE8 */

loc_0059866E: ;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(esi);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -36) = eax;
    eax = MEM32(esi + 0x10);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ebp + -16;
    MEM32(ebp + -20) = eax;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -28;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(0x8DFD6C);
    eax = ebp + -40;
    MEM32(ebp + -44) = eax;
    edx = ebp + -64;
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(0x8DFD44);
    eax = ebp + -52;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -64) = 6;
    MEM32(ebp + -60) = 0xAB;
    MEM32(ebp + -52) = 5;
    MEM32(ebp + -48) = 0x87D4C0;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -56) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005986E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005986E5u); } /* indirect call */
    }

loc_005986E7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00598712; /* je: equal / zero */

loc_005986EE: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005986FCu); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_005986FC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598705u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_00598705: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    goto loc_0059871E;

loc_00598712: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059871Au); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_0059871A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0059871C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0059871E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598723
 * Original: 0x00598723 - 0x00598765 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598723(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598723: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598748u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598748: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x59863D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598754u); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_00598754: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598763; /* je: equal / zero */

loc_0059875E: ;
    edx = MEM32(ebp + -12);
    MEM32(ecx) = edx;

loc_00598763: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598765
 * Original: 0x00598765 - 0x005987A4 (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598765(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598765: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598787u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598787: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x59863D);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598793u); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_00598793: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005987A2; /* je: equal / zero */

loc_0059879D: ;
    edx = MEM32(ebp + -12);
    MEM32(ecx) = edx;

loc_005987A2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005987A4
 * Original: 0x005987A4 - 0x005987F0 (76 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005987A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005987A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005987C0u); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_005987C0: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005987E9; /* je: equal / zero */

loc_005987C9: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005987D9u); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_005987D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005987E2u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_005987E2: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    goto loc_005987EB;

loc_005987E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005987EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005987F0
 * Original: 0x005987F0 - 0x00598832 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005987F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005987F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598821u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598821: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5987A4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059882Du); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_0059882D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598832
 * Original: 0x00598832 - 0x00598871 (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598832(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598832: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598860u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598860: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5987A4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059886Cu); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_0059886C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598871
 * Original: 0x00598871 - 0x005988CF (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598871(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598871: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    MEM32(ebp + -4) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_005988C8; /* jle: less or equal (signed <=) */

loc_00598887: ;
    PUSH32(esp, edi);

loc_00598888: ;
    PUSH32(esp, MEM32(esi + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    edi = ebx;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, MEM32(edi + eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059889Fu); RECOMP_ABI_CALL(0x00598765u, sub_00598765); /* call 0x00598765 */

loc_0059889F: ;
    ecx = MEM32(esi + 8);
    MEM32(edi + ecx) = eax;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005988B5; /* jne: not equal / not zero */

loc_005988B1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005988B5: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005988C2; /* je: equal / zero */

loc_005988BC: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + edi) = ecx;

loc_005988C2: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00598888; /* jl: less (signed <) */

loc_005988C7: ;
    POP32(esp, edi);

loc_005988C8: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005988CF
 * Original: 0x005988CF - 0x00598925 (86 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005988CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005988CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_005988E3; /* jge: greater or equal (signed >=) */

loc_005988DF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_005988E3: ;
    edx = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -24;
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(eax));
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059890Eu); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_0059890E: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x598871);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059891Au); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_0059891A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598925
 * Original: 0x00598925 - 0x0059897A (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598925(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00598925: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00598937; /* jge: greater or equal (signed >=) */

loc_00598933: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00598937: ;
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + -8) = ecx;
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x64);
    PUSH32(esp, MEM32(eax));
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598963u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598963: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x598871);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059896Fu); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_0059896F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059897A
 * Original: 0x0059897A - 0x00598AFD (387 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059897A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059897A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFF80u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x9F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9F4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx));
    esi = esp + 0x20B;
    esi = esi & 0xFFFFFF80u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005989A3u); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_005989A3: ;
    MEM32(esp + 0x44) = eax;
    eax = edi + -1;
    PUSH32(esp, eax);
    edi = 0x800;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x54));
    MEM32(esp + 0x60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005989C1u); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_005989C1: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005989C7u); RECOMP_ABI_CALL(0x00598179u, sub_00598179); /* call 0x00598179 */

loc_005989C7: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005989D5; /* jne: not equal / not zero */

loc_005989CE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00598AE5;

loc_005989D5: ;
    PUSH32(esp, MEM32(ebx));
    eax = esp + 0x84;
    PUSH32(esp, 0x87D500);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005989E9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_005989E9: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005989EFu); RECOMP_ABI_CALL(0x005981E1u, sub_005981E1); /* call 0x005981E1 */

loc_005989EF: ;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x8C) = MEM32(esp + 0x8C) & 0;
    _fa = (uint32_t)(MEM32(esp + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esp + 0x90;
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(ebx + 8);
    edx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x84) = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esp + 0x84;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x54) = edx;
    edx = MEM32(0x8DFD6C);
    eax = esp + 0x54;
    MEM32(esp + 0x80) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x58) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x68;
    MEM32(esp + 0x58) = eax;
    edx = esp + 0x5C;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(0x8DFD44);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x40));
    MEM32(esp + 0x64) = 6;
    MEM32(esp + 0x68) = 0x200;
    MEM32(esp + 0x58) = 5;
    MEM32(esp + 0x5C) = 0x87D514;
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00598A93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00598A91u); } /* indirect call */
    }

loc_00598A93: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00598AAB; /* jne: not equal / not zero */

loc_00598A99: ;
    ecx = MEM32(0x8DFD44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00598AA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00598AA3u); } /* indirect call */
    }

loc_00598AA6: ;
    goto loc_005989CE;

loc_00598AAB: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edi; /* cmovg */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598ABCu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00598ABC: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00598AE5; /* jle: less or equal (signed <=) */

loc_00598AC7: ;
    PUSH32(esp, MEM32(esp + 0x40));
    _fb = (uint32_t)(0xFFFFF800u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFF800u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebx + 0x800;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598AE2u); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_00598AE2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00598AE5: ;
    PUSH32(esp, MEM32(esp + 0x40));
    PUSH32(esp, MEM32(esp + 0x3C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598AF2u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_00598AF2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00598AFD
 * Original: 0x00598AFD - 0x00598B33 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598AFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598AFD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -12) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598B22u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598B22: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x59897A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598B2Eu); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_00598B2E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598B33
 * Original: 0x00598B33 - 0x00598B66 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598B33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598B33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598B55u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598B55: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x59897A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598B61u); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_00598B61: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598B66
 * Original: 0x00598B66 - 0x00598BB5 (79 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598B66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598B66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598B7Bu); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_00598B7B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00598BAF; /* je: equal / zero */

loc_00598B85: ;
    PUSH32(esp, ebx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598B96u); RECOMP_ABI_CALL(0x00598C91u, sub_00598C91); /* call 0x00598C91 */

loc_00598B96: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598BA1u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_00598BA1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 8) (32-bit) */
    POP32(esp, ebx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_00598BB1;

loc_00598BAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00598BB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00598BB5
 * Original: 0x00598BB5 - 0x00598BF7 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598BB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00598BB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598BE0u); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598BE0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x598B66);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598BECu); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_00598BEC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598BF7
 * Original: 0x00598BF7 - 0x00598C36 (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598BF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00598BF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = ecx;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598C1Fu); RECOMP_ABI_CALL(0x0059A341u, sub_0059A341); /* call 0x0059A341 */

loc_00598C1F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x598B66);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598C2Bu); RECOMP_ABI_CALL(0x0059A2EDu, sub_0059A2ED); /* call 0x0059A2ED */

loc_00598C2B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00598C36
 * Original: 0x00598C36 - 0x00598C5D (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598C36(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598C36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00598C4Au); RECOMP_ABI_CALL(0x0059A6D5u, sub_0059A6D5); /* call 0x0059A6D5 */

loc_00598C4A: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598C52u); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00598C52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598C58u); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598C58: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598C5D
 * Original: 0x00598C5D - 0x00598C91 (52 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598C5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598C5D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x18));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598C7Du); RECOMP_ABI_CALL(0x0059A252u, sub_0059A252); /* call 0x0059A252 */

loc_00598C7D: ;
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598C85u); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00598C85: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598C8Bu); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598C8B: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00598C91
 * Original: 0x00598C91 - 0x00598CBF (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598C91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598C91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598CABu); RECOMP_ABI_CALL(0x0059A28Du, sub_0059A28D); /* call 0x0059A28D */

loc_00598CAB: ;
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598CB3u); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00598CB3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598CB9u); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598CB9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00598CBF
 * Original: 0x00598CBF - 0x00598CE8 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598CBF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00598CBF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00598CCFu); RECOMP_ABI_CALL(0x0059A1F2u, sub_0059A1F2); /* call 0x0059A1F2 */

loc_00598CCF: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598CD7u); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00598CD7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598CDDu); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598CDD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598CE8
 * Original: 0x00598CE8 - 0x00598D0B (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598CE8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598CE8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00598CF8u); RECOMP_ABI_CALL(0x0059A2C2u, sub_0059A2C2); /* call 0x0059A2C2 */

loc_00598CF8: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598D00u); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00598D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598D06u); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598D06: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598D0B
 * Original: 0x00598D0B - 0x00598D34 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598D0B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00598D0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00598D1Bu); RECOMP_ABI_CALL(0x0059A5EEu, sub_0059A5EE); /* call 0x0059A5EE */

loc_00598D1B: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598D23u); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00598D23: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598D29u); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598D29: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598D34
 * Original: 0x00598D34 - 0x00598D5D (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598D34(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00598D34: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x00598D44u); RECOMP_ABI_CALL(0x0059A624u, sub_0059A624); /* call 0x0059A624 */

loc_00598D44: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598D4Cu); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00598D4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00598D52u); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598D52: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598D5D
 * Original: 0x00598D5D - 0x00598D87 (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598D5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598D5D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00598D73; /* jle: less or equal (signed <=) */

loc_00598D6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00598D71u); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00598D71: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00598D73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8DFD40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00598D7Fu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00598D7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598D87
 * Original: 0x00598D87 - 0x00598DBA (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598D87(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598D87: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x50 (32-bit) */
    PUSH32(esp, edi);
    edi = 0x8DFD40;
    if (CMP_GE(_fas, _fbs)) goto loc_00598DA1; /* jge: greater or equal (signed >=) */

loc_00598D97: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00598D9Fu); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00598D9F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00598DA1: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00598DAAu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00598DAA: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x8DFD94) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598DBA
 * Original: 0x00598DBA - 0x00598DBD (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598DBA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598DBA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00598DBD
 * Original: 0x00598DBD - 0x00598DE8 (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598DBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00598DBD: ;
    PUSH32(esp, ebx);
    ebx = 0x91A578;
    ecx = ebx;
    PUSH32(esp, 0x00598DCAu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00598DCA: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00598DD3; /* jne: not equal / not zero */

loc_00598DCF: ;
    MEM32(edi) = esi;
    goto loc_00598DD9;

loc_00598DD3: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = esi;

loc_00598DD9: ;
    MEM32(edi + 4) = esi;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_00598DE8
 * Original: 0x00598DE8 - 0x00598E13 (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598DE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598DE8: ;
    PUSH32(esp, ebx);
    ebx = 0x91A578;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00598DF6u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00598DF6: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00598E00; /* jne: not equal / not zero */

loc_00598DFC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00598E07;

loc_00598E00: ;
    edi = eax;
    eax = MEM32(edi + 4);
    MEM32(esi) = eax;

loc_00598E07: ;
    ecx = ebx;
    PUSH32(esp, 0x00598E0Eu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00598E0E: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00598E13
 * Original: 0x00598E13 - 0x00598E35 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598E13(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598E13: ;
    eax = 0x100;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x91A564) = MEM32(0x91A564) + eax;
    _fa = (uint32_t)(MEM32(0x91A564)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00598E25; /* jne: not equal / not zero */

loc_00598E20: ;
    MEM32(0x91A564) = eax;

loc_00598E25: ;
    eax = MEM32(ecx);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(0x91A564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00598E35
 * Original: 0x00598E35 - 0x00598E68 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00598E35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00598E35: ;
    eax = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00598E65; /* jl: less (signed <) */

loc_00598E44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91A570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x91A570) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00598E65; /* jge: greater or equal (signed >=) */

loc_00598E4C: ;
    ecx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(0x91A574)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(0x91A574))) >> 32) & 1);
    ecx = ecx + MEM32(0x91A574);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00598E65: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00598E68
 * Original: 0x00598E68 - 0x00598E9E (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598E68(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598E68: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598E88; /* je: equal / zero */

loc_00598E73: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00598E88; /* jbe: below or equal (unsigned <=) */

loc_00598E7B: ;
    ecx = MEM32(0x8DFD44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00598E88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00598E85u); } /* indirect call */
    }

loc_00598E88: ;
    MEM32(esi) = MEM32(esi) & 0xFF;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1C) = edi;
    edi = 0x91A568;
    PUSH32(esp, 0x00598E9Bu); RECOMP_ABI_CALL(0x00598DBDu, sub_00598DBD); /* call 0x00598DBD */

loc_00598E9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598E9E
 * Original: 0x00598E9E - 0x00598EEF (81 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598E9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00598E9E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0x91A578;
    ecx = edi;
    PUSH32(esp, 0x00598EAEu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00598EAE: ;
    eax = MEM32(esi + 0xC);
    ebp = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x10);
    ecx = edi;
    MEM32(esp + 0xC) = eax;
    MEM32(esi + 0x1C) = 0;
    PUSH32(esp, 0x00598EC9u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00598EC9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598EE1; /* je: equal / zero */

loc_00598ECD: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00598EEA; /* jne: not equal / not zero */

loc_00598ED4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00598E68(); return; /* tail jmp 0x00598E68 */

loc_00598EE1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598EEA; /* je: equal / zero */

loc_00598EE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00598EE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00598EE7u); } /* indirect call */
    }

loc_00598EE9: ;
    POP32(esp, ecx);

loc_00598EEA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00598EEF
 * Original: 0x00598EEF - 0x00598F04 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598EEF(void)
{

loc_00598EEF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00598EFCu); RECOMP_ABI_CALL(0x0059A151u, sub_0059A151); /* call 0x0059A151 */

loc_00598EFC: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x00598F02u); RECOMP_ABI_CALL(0x00598E9Eu, sub_00598E9E); /* call 0x00598E9E */

loc_00598F02: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598F04
 * Original: 0x00598F04 - 0x00598F8B (135 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00598F04(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598F04: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00598F12u); RECOMP_ABI_CALL(0x0059A0E6u, sub_0059A0E6); /* call 0x0059A0E6 */

loc_00598F12: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DFD68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8DFD68) (32-bit) */
    edi = MEM32(esi + 0x2C);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_00598F62; /* jb: below (unsigned <) */

loc_00598F24: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00598F62; /* jne: not equal / not zero */

loc_00598F2A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x28);
    edx = MEM32(0x8DFD68);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x63);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x00598F4Fu); RECOMP_ABI_CALL(0x0059A21Du, sub_0059A21D); /* call 0x0059A21D */

loc_00598F4F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598F88; /* je: equal / zero */

loc_00598F5B: ;
    PUSH32(esp, 0x598F04);
    goto loc_00598F7E;

loc_00598F62: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x63);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x00598F6Du); RECOMP_ABI_CALL(0x0059A1F2u, sub_0059A1F2); /* call 0x0059A1F2 */

loc_00598F6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00598F88; /* je: equal / zero */

loc_00598F79: ;
    PUSH32(esp, 0x598EEF);

loc_00598F7E: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00598F86u); RECOMP_ABI_CALL(0x0059A156u, sub_0059A156); /* call 0x0059A156 */

loc_00598F86: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00598F88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00598F8B
 * Original: 0x00598F8B - 0x00599087 (252 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00598F8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00598F8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598F9Du); RECOMP_ABI_CALL(0x0059A0E6u, sub_0059A0E6); /* call 0x0059A0E6 */

loc_00598F9D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00598FC9; /* je: equal / zero */

loc_00598FA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x63);
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00598FAFu); RECOMP_ABI_CALL(0x0059A1F2u, sub_0059A1F2); /* call 0x0059A1F2 */

loc_00598FAF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599084; /* je: equal / zero */

loc_00598FBF: ;
    PUSH32(esp, 0x598EEF);
    goto loc_0059907A;

loc_00598FC9: ;
    ecx = MEM32(esi + 0x28);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = ecx;
    ecx = ebp + -12;
    MEM32(ebp + -16) = ecx;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -24;
    MEM32(ebp + -28) = ecx;
    MEM32(esi + 0x28) = eax;
    MEM32(ebp + -24) = ebx;
    ebx = MEM32(0x8DFD6C);
    ecx = ebp + -36;
    MEM32(ebp + -40) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -20) = ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp + -48;
    MEM32(ebp + -52) = ecx;
    ecx = MEM32(0x8DFD44);
    ebx = ebp + -60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebp + -60) = 6;
    MEM32(ebp + -56) = 0x13F;
    MEM32(ebp + -48) = 5;
    MEM32(ebp + -44) = 0x87D564;
    MEM32(ebp + -36) = edx;
    MEM32(ebp + -32) = 0x87D554;
    MEM32(ebp + -8) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00599044u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00599042u); } /* indirect call */
    }

loc_00599044: ;
    edx = MEM32(esi + 0x28);
    POP32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(0x8DFD68);
    PUSH32(esp, 0x63);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) edx = ecx; /* cmova */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599069u); RECOMP_ABI_CALL(0x0059A21Du, sub_0059A21D); /* call 0x0059A21D */

loc_00599069: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599084; /* je: equal / zero */

loc_00599075: ;
    PUSH32(esp, 0x598F04);

loc_0059907A: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599082u); RECOMP_ABI_CALL(0x0059A156u, sub_0059A156); /* call 0x0059A156 */

loc_00599082: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00599084: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00599087
 * Original: 0x00599087 - 0x0059911B (148 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599087(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599087: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00599095u); RECOMP_ABI_CALL(0x0059A0E6u, sub_0059A0E6); /* call 0x0059A0E6 */

loc_00599095: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_005990A6; /* jne: not equal / not zero */

loc_0059909F: ;
    PUSH32(esp, 0x005990A4u); RECOMP_ABI_CALL(0x00598E9Eu, sub_00598E9E); /* call 0x00598E9E */

loc_005990A4: ;
    goto loc_00599118;

loc_005990A6: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0x63);
    if (CMP_EQ(_fa, _fb)) goto loc_005990C6; /* je: equal / zero */

loc_005990AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005990B4u); RECOMP_ABI_CALL(0x0059A1F2u, sub_0059A1F2); /* call 0x0059A1F2 */

loc_005990B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599118; /* je: equal / zero */

loc_005990BF: ;
    PUSH32(esp, 0x598EEF);
    goto loc_0059910E;

loc_005990C6: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005990F8; /* jne: not equal / not zero */

loc_005990CB: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(0x8DFD68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) ecx = edx; /* cmova */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x2C));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0x005990E6u); RECOMP_ABI_CALL(0x0059A21Du, sub_0059A21D); /* call 0x0059A21D */

loc_005990E6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599118; /* je: equal / zero */

loc_005990F1: ;
    PUSH32(esp, 0x598F04);
    goto loc_0059910E;

loc_005990F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005990FEu); RECOMP_ABI_CALL(0x0059A2C2u, sub_0059A2C2); /* call 0x0059A2C2 */

loc_005990FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599118; /* je: equal / zero */

loc_00599109: ;
    PUSH32(esp, 0x598F8B);

loc_0059910E: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00599116u); RECOMP_ABI_CALL(0x0059A156u, sub_0059A156); /* call 0x0059A156 */

loc_00599116: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00599118: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059911B
 * Original: 0x0059911B - 0x0059918B (112 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059911B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059911B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x00599129u); RECOMP_ABI_CALL(0x0059A0E6u, sub_0059A0E6); /* call 0x0059A0E6 */

loc_00599129: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + eax;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DFD68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8DFD68) (32-bit) */
    edi = MEM32(esi + 0x2C);
    POP32(esp, ecx);
    if (CMP_B(_fa, _fb)) goto loc_00599183; /* jb: below (unsigned <) */

loc_0059913B: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599183; /* jne: not equal / not zero */

loc_00599141: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x28);
    edx = MEM32(0x8DFD68);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x63);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = edx; /* cmova */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x00599166u); RECOMP_ABI_CALL(0x0059A21Du, sub_0059A21D); /* call 0x0059A21D */

loc_00599166: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599188; /* je: equal / zero */

loc_00599172: ;
    PUSH32(esp, 0x59911B);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x0059917Fu); RECOMP_ABI_CALL(0x0059A156u, sub_0059A156); /* call 0x0059A156 */

loc_0059917F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00599188;

loc_00599183: ;
    PUSH32(esp, 0x00599188u); RECOMP_ABI_CALL(0x00598E9Eu, sub_00598E9E); /* call 0x00598E9E */

loc_00599188: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0059918B
 * Original: 0x0059918B - 0x0059927C (241 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059918B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059918B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(0x91A574)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91A574), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059927A; /* jne: not equal / not zero */

loc_0059919E: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00599279; /* jg: greater (signed >) */

loc_005991AE: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -12;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -24) = edx;
    edx = MEM32(0x8DFD6C);
    eax = ebp + -24;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -20) = edx;
    eax = ebp + -36;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(0x8DFD44);
    edx = ebp + -60;
    eax = ebp + -48;
    esi = edi + edi * 2;
    PUSH32(esp, edx);
    MEM32(ebp + -60) = 6;
    MEM32(ebp + -56) = 0x1F2;
    MEM32(ebp + -48) = 5;
    MEM32(ebp + -44) = 0x87D5B0;
    MEM32(ebp + -32) = 0x87D5A4;
    MEM32(ebp + -52) = eax;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(0x91A570) = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00599232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00599230u); } /* indirect call */
    }

loc_00599232: ;
    MEM32(0x91A574) = eax;
    MEM32(0x91A568) = eax;
    eax = esi + eax + -48;
    ecx = 0x91A578;
    MEM32(0x91A56C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059924Fu); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_0059924F: ;
    edx = MEM32(0x91A574);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00599273; /* jle: less or equal (signed <=) */

loc_0059925B: ;
    eax = edx + 0x30;

loc_0059925E: ;
    MEM32(eax + -48) = ecx;
    MEM32(eax + -20) = 0;
    MEM32(eax + -44) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0059925E; /* jl: less (signed <) */

loc_00599273: ;
    MEM32(esi + edx + -44) = MEM32(esi + edx + -44) & 0;
    _fa = (uint32_t)(MEM32(esi + edx + -44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);

loc_00599279: ;
    POP32(esp, edi);

loc_0059927A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059927C
 * Original: 0x0059927C - 0x005992E6 (106 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059927C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059927C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x91A568;
    PUSH32(esp, 0x00599288u); RECOMP_ABI_CALL(0x00598DE8u, sub_00598DE8); /* call 0x00598DE8 */

loc_00599288: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005992CE; /* je: equal / zero */

loc_00599290: ;
    ecx = esi;
    PUSH32(esp, 0x00599297u); RECOMP_ABI_CALL(0x00598E13u, sub_00598E13); /* call 0x00598E13 */

loc_00599297: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x005992C3u); RECOMP_ABI_CALL(0x0059A6D5u, sub_0059A6D5); /* call 0x0059A6D5 */

loc_005992C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005992D2; /* jne: not equal / not zero */

loc_005992CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005992E3;

loc_005992D2: ;
    PUSH32(esp, 0x599087);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x005992DFu); RECOMP_ABI_CALL(0x0059A156u, sub_0059A156); /* call 0x0059A156 */

loc_005992DF: ;
    eax = MEM32(esi);
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_005992E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005992E6
 * Original: 0x005992E6 - 0x00599341 (91 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005992E6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005992E6: ;
    PUSH32(esp, esi);
    esi = 0x91A568;
    PUSH32(esp, 0x005992F1u); RECOMP_ABI_CALL(0x00598DE8u, sub_00598DE8); /* call 0x00598DE8 */

loc_005992F1: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x005992FAu); RECOMP_ABI_CALL(0x00598E13u, sub_00598E13); /* call 0x00598E13 */

loc_005992FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x64);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x0059932Au); RECOMP_ABI_CALL(0x0059A6D5u, sub_0059A6D5); /* call 0x0059A6D5 */

loc_0059932A: ;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x599087);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0x0059933Au); RECOMP_ABI_CALL(0x0059A156u, sub_0059A156); /* call 0x0059A156 */

loc_0059933A: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00599341
 * Original: 0x00599341 - 0x005993C5 (132 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00599341(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599341: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x91A568;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599350u); RECOMP_ABI_CALL(0x00598DE8u, sub_00598DE8); /* call 0x00598DE8 */

loc_00599350: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005993AC; /* je: equal / zero */

loc_00599358: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599360u); RECOMP_ABI_CALL(0x00598E13u, sub_00598E13); /* call 0x00598E13 */

loc_00599360: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, esi);
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x2C) = ecx;
    ecx = MEM32(0x8DFD68);
    PUSH32(esp, 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005993A0u); RECOMP_ABI_CALL(0x0059A21Du, sub_0059A21D); /* call 0x0059A21D */

loc_005993A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_005993B0; /* jne: not equal / not zero */

loc_005993AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005993C1;

loc_005993B0: ;
    PUSH32(esp, 0x59911B);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005993BDu); RECOMP_ABI_CALL(0x0059A156u, sub_0059A156); /* call 0x0059A156 */

loc_005993BD: ;
    eax = MEM32(esi);
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_005993C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00599410
 * Original: 0x00599410 - 0x00599446 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599410: ;
    PUSH32(esp, esi);
    esi = 0x91A578;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0059941Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0059941E: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00599427u); RECOMP_ABI_CALL(0x00598E35u, sub_00598E35); /* call 0x00598E35 */

loc_00599427: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599430; /* jne: not equal / not zero */

loc_0059942B: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0059943A;

loc_00599430: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), ecx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edi = ecx;

loc_0059943A: ;
    ecx = esi;
    PUSH32(esp, 0x00599441u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599441: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00599446
 * Original: 0x00599446 - 0x005994DF (153 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00599446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599446: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x91A578;
    ecx = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059945Au); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0059945A: ;
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599462u); RECOMP_ABI_CALL(0x00598E35u, sub_00598E35); /* call 0x00598E35 */

loc_00599462: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599476; /* je: equal / zero */

loc_00599468: ;
    ebx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599476; /* jne: not equal / not zero */

loc_0059946F: ;
    MEM32(esi + 0xC) = 1;

loc_00599476: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059947Du); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0059947D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599487; /* je: equal / zero */

loc_00599483: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599498; /* je: equal / zero */

loc_00599487: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0059948A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0059948F: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599497u); RECOMP_ABI_CALL(0x0059A047u, sub_0059A047); /* call 0x0059A047 */

loc_00599497: ;
    POP32(esp, ecx);

loc_00599498: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059948F; /* jne: not equal / not zero */

loc_0059949D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_005994C2; /* je: equal / zero */

loc_005994A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005994AB; /* je: equal / zero */

loc_005994A9: ;
    MEM32(eax) = edi;

loc_005994AB: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005994B4; /* je: equal / zero */

loc_005994B2: ;
    MEM32(eax) = edi;

loc_005994B4: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_005994B7: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005994BEu); RECOMP_ABI_CALL(0x00598E68u, sub_00598E68); /* call 0x00598E68 */

loc_005994BE: ;
    eax = edi;
    goto loc_0059948A;

loc_005994C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005994CE; /* je: equal / zero */

loc_005994C6: ;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ecx;

loc_005994CE: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005994DA; /* je: equal / zero */

loc_005994D5: ;
    ecx = MEM32(esi + 8);
    MEM32(eax) = ecx;

loc_005994DA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005994B7;

}

/**
 * sub_005994DF
 * Original: 0x005994DF - 0x00599556 (119 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005994DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005994DF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x91A578;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x005994F3u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_005994F3: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0x005994FCu); RECOMP_ABI_CALL(0x00598E35u, sub_00598E35); /* call 0x00598E35 */

loc_005994FC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059951A; /* je: equal / zero */

loc_00599502: ;
    edi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = MEM32(esi + 0x10);
    ebp = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00599513; /* jne: not equal / not zero */

loc_0059950F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059951A; /* jne: not equal / not zero */

loc_00599513: ;
    MEM32(esi + 0x10) = 1;

loc_0059951A: ;
    ecx = 0x91A578;
    PUSH32(esp, 0x00599524u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599524: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059954E; /* je: equal / zero */

loc_00599528: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059954E; /* jne: not equal / not zero */

loc_0059952C: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059954E; /* je: equal / zero */

loc_00599531: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059953E; /* je: equal / zero */

loc_00599535: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0059953Bu); RECOMP_ABI_CALL(0x0059A001u, sub_0059A001); /* call 0x0059A001 */

loc_0059953B: ;
    POP32(esp, ecx);
    goto loc_00599549;

loc_0059953E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599549; /* jne: not equal / not zero */

loc_00599542: ;
    eax = esi;
    PUSH32(esp, 0x00599549u); RECOMP_ABI_CALL(0x00598E68u, sub_00598E68); /* call 0x00598E68 */

loc_00599549: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00599551;

loc_0059954E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00599551: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00599556
 * Original: 0x00599556 - 0x005995E2 (140 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599556(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599556: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x91A574)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91A574), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005995E0; /* je: equal / zero */

loc_00599561: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x91A570)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91A570), ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0059958A; /* jle: less or equal (signed <=) */

loc_0059956C: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0059956F: ;
    eax = MEM32(0x91A574);
    PUSH32(esp, MEM32(esi + eax));
    PUSH32(esp, 0x0059957Cu); RECOMP_ABI_CALL(0x005994DFu, sub_005994DF); /* call 0x005994DF */

loc_0059957C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x91A570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x91A570) (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_0059956F; /* jl: less (signed <) */

loc_00599589: ;
    POP32(esp, esi);

loc_0059958A: ;
    POP32(esp, edi);

loc_0059958B: ;
    ecx = MEM32(0x91A570);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005995BE; /* jle: less or equal (signed <=) */

loc_00599597: ;
    eax = MEM32(0x91A574);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0059959F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005995A6; /* je: equal / zero */

loc_005995A3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005995A6: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0059959F; /* jne: not equal / not zero */

loc_005995AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005995BE; /* je: equal / zero */

loc_005995B0: ;
    PUSH32(esp, 0x005995B5u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_005995B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x005995BBu); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_005995BB: ;
    POP32(esp, ecx);
    goto loc_0059958B;

loc_005995BE: ;
    ecx = MEM32(0x8DFD44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x91A574));
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x005995D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005995CDu); } /* indirect call */
    }

loc_005995D0: ;
    ecx = 0x91A578;
    PUSH32(esp, 0x005995DAu); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_005995DA: ;
    MEM32(0x91A574) = ebx;

loc_005995E0: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_005995E9
 * Original: 0x005995E9 - 0x005995EC (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005995E9(void)
{

loc_005995E9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_005995EC
 * Original: 0x005995EC - 0x005995ED (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005995EC(void)
{

loc_005995EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005995ED
 * Original: 0x005995ED - 0x005995F2 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005995ED(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005995ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_005995F2
 * Original: 0x005995F2 - 0x005995F9 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005995F2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005995F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005995F9
 * Original: 0x005995F9 - 0x005995FE (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005995F9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005995F9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005995FE
 * Original: 0x005995FE - 0x00599603 (5 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005995FE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005995FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00599603
 * Original: 0x00599603 - 0x00599607 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599603(void)
{

loc_00599603: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00599607
 * Original: 0x00599607 - 0x0059960A (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00599607(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599607: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0059960A
 * Original: 0x0059960A - 0x00599679 (111 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059960A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059960A: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D654;
    if (TEST_Z(_fa, _fb)) goto loc_00599621; /* je: equal / zero */

loc_0059961A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00599620u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00599620: ;
    POP32(esp, ecx);

loc_00599621: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00599679
 * Original: 0x00599679 - 0x00599696 (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599679(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599679: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D68C;
    if (TEST_Z(_fa, _fb)) goto loc_00599690; /* je: equal / zero */

loc_00599689: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0059968Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_0059968F: ;
    POP32(esp, ecx);

loc_00599690: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00599696
 * Original: 0x00599696 - 0x005996B6 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599696(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599696: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + 4;
    MEM32(eax) = 0x87D654;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_005996A8: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005996A8; /* jne: not equal / not zero */

loc_005996B2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005996B6
 * Original: 0x005996B6 - 0x005996B7 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005996B6(void)
{

loc_005996B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005996B7
 * Original: 0x005996B7 - 0x005996D3 (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005996B7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005996B7: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x91A598);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x8C);
    _fb = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005996D3
 * Original: 0x005996D3 - 0x00599728 (85 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005996D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005996D3: ;
    ecx = MEM32(0x91A598);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x005996E2u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_005996E2: ;
    eax = MEM32(0x91A598);
    esi = MEM32(eax + 0x58);
    ecx = esi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10000 (32-bit) */
    MEM32(eax + 0x58) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005996FF; /* jne: not equal / not zero */

loc_005996F8: ;
    MEM32(eax + 0x58) = 1;

loc_005996FF: ;
    ecx = eax + 0x5C;
    PUSH32(esp, 0x00599707u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599707: ;
    ecx = MEM32(0x91A598);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x8C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00599728
 * Original: 0x00599728 - 0x005997B9 (145 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00599728(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599728: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0059973F; /* jne: not equal / not zero */

loc_0059973A: ;
    edi = 0x87D5F6;

loc_0059973F: ;
    eax = edi;
    esi = eax + 1;

loc_00599744: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599744; /* jne: not equal / not zero */

loc_0059974B: ;
    ecx = MEM32(0x8DFD44);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -8) = eax;
    eax = ebp + -12;
    MEM32(ebp + -16) = eax;
    eax = ebp + -24;
    MEM32(ebp + -28) = eax;
    edx = ebp + -48;
    eax = ebp + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(ebp + -48) = 6;
    MEM32(ebp + -44) = 0x1A5;
    MEM32(ebp + -36) = 5;
    MEM32(ebp + -32) = 0x87D5F8;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -12) = 4;
    MEM32(ebp + -40) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x005997A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005997A2u); } /* indirect call */
    }

loc_005997A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebx + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005997AFu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_005997AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005997B9
 * Original: 0x005997B9 - 0x005997E7 (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005997B9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005997B9: ;
    ecx = MEM32(0x8DFD4C);
    eax = MEM32(0x8DFD48);
    eax = eax + ecx * 2 + 6;
    ecx = MEM32(0x8DFD50);
    eax = ecx + eax * 8;
    ecx = MEM32(0x8DFD58);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8D);
    _fb = (uint32_t)(MEM32(0x8DFD54)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x8DFD54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_005997E8
 * Original: 0x005997E8 - 0x00599818 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005997E8(void)
{

loc_005997E8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x88);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x005997FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x005997FBu); } /* indirect call */
    }

loc_005997FE: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00599818
 * Original: 0x00599818 - 0x005998DD (197 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599818(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599818: ;
    eax = MEM32(0x91A598);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x8DFD54));
    PUSH32(esp, MEM32(eax + 0x98));
    PUSH32(esp, 0x00599830u); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00599830: ;
    eax = MEM32(0x8DFD50);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    eax = MEM32(0x91A598);
    PUSH32(esp, MEM32(eax + 0x94));
    PUSH32(esp, 0x00599849u); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00599849: ;
    eax = MEM32(0x91A598);
    esi = MEM32(esp + 0x1C);
    ecx = eax + 0x98;
    edi = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0059985D: ;
    SET_LO8(edx, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059985D; /* jne: not equal / not zero */

loc_00599867: ;
    ecx = MEM32(ecx);
    eax = MEM32(eax + 0x94);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3B);
    MEM32(eax) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    goto loc_005998A1;

loc_00599879: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    MEM8(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00599889; /* je: equal / zero */

loc_00599884: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059988D; /* jne: not equal / not zero */

loc_00599889: ;
    MEM8(eax + -1) = 0;

loc_0059988D: ;
    ecx = MEM32(0x91A598);
    ecx = MEM32(ecx + 0x94);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3B);
    MEM32(ecx + esi * 4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);

loc_005998A1: ;
    PUSH32(esp, 0x005998A6u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_005998A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00599879; /* jne: not equal / not zero */

loc_005998AC: ;
    eax = MEM32(0x91A598);
    eax = MEM32(eax + 0x94);
    ecx = MEM32(eax + esi * 4 + -4);
    eax = ecx;
    esi = eax + 1;

loc_005998C0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005998C0; /* jne: not equal / not zero */

loc_005998C7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ecx + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005998D8; /* je: equal / zero */

loc_005998D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005998DC; /* jne: not equal / not zero */

loc_005998D8: ;
    MEM8(ecx + -1) = 0;

loc_005998DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005998DD
 * Original: 0x005998DD - 0x005999DE (257 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005998DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005998DD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x91A598);
    eax = MEM32(eax + 0x98);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0059990C;

loc_005998F0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005998F1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005998F0; /* jne: not equal / not zero */

loc_005998F6: ;
    ecx = eax + 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599909; /* jne: not equal / not zero */

loc_005998FE: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599909; /* je: equal / zero */

loc_00599904: ;
    eax = ecx;
    MEM8(eax) = 0x2F;

loc_00599909: ;
    MEM8(eax) = 0x3B;

loc_0059990C: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005998F1; /* jne: not equal / not zero */

loc_00599912: ;
    MEM8(eax) = 0;
    esi = MEM32(0x8DFD54);
    eax = esi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599928u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_00599928: ;
    ebx = esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599931u); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00599931: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 1 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    edx = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0059997F; /* jne: not equal / not zero */

loc_0059993B: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00599940: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599940; /* jne: not equal / not zero */

loc_0059994A: ;
    edi = ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0059994D: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059994D; /* jne: not equal / not zero */

loc_00599955: ;
    eax = MEM32(0x91A598);
    esi = 0x87D64C;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(eax + 0x98);
    edx = eax;

loc_00599969: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599969; /* jne: not equal / not zero */

loc_00599970: ;
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00599975: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599975; /* jne: not equal / not zero */

loc_0059997D: ;
    goto loc_005999BF;

loc_0059997F: ;
    eax = MEM32(0x91A598);
    ecx = MEM32(eax + 0x98);

loc_0059998A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0059998A; /* jne: not equal / not zero */

loc_00599994: ;
    edi = ebx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00599997: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599997; /* jne: not equal / not zero */

loc_0059999F: ;
    eax = MEM32(ebp + 8);
    esi = 0x87D650;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    edx = eax;

loc_005999AB: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005999AB; /* jne: not equal / not zero */

loc_005999B2: ;
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_005999B7: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005999B7; /* jne: not equal / not zero */

loc_005999BF: ;
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
    PUSH32(esp, ebx);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005999D5u); RECOMP_ABI_CALL(0x00599818u, sub_00599818); /* call 0x00599818 */

loc_005999D5: ;
    POP32(esp, ecx);
    esp = ebp + -12;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005999DE
 * Original: 0x005999DE - 0x00599B0F (305 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005999DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005999DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(0x8DFD50);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(0x91A598);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00599A46; /* jle: less or equal (signed <=) */

loc_005999FA: ;
    eax = MEM32(ecx + 0x94);
    MEM32(ebp + -8) = eax;

loc_00599A03: ;
    eax = MEM32(ebp + -8);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00599A4B; /* je: equal / zero */

loc_00599A0C: ;
    edi = MEM32(ebp + 8);

loc_00599A0F: ;
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00599A31; /* jne: not equal / not zero */

loc_00599A17: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00599A2D; /* je: equal / zero */

loc_00599A1B: ;
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(edi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00599A31; /* jne: not equal / not zero */

loc_00599A25: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00599A0F; /* jne: not equal / not zero */

loc_00599A2D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00599A36;

loc_00599A31: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00599A36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00599A46; /* je: equal / zero */

loc_00599A3A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00599A03; /* jl: less (signed <) */

loc_00599A46: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00599A52; /* jne: not equal / not zero */

loc_00599A4B: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00599B07;

loc_00599A52: ;
    eax = MEM32(ecx + 0x98);
    goto loc_00599A76;

loc_00599A5A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00599A5B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00599A5A; /* jne: not equal / not zero */

loc_00599A60: ;
    edx = eax + 1;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00599A73; /* jne: not equal / not zero */

loc_00599A68: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00599A73; /* je: equal / zero */

loc_00599A6E: ;
    eax = edx;
    MEM8(eax) = 0x2F;

loc_00599A73: ;
    MEM8(eax) = 0x3B;

loc_00599A76: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00599A5B; /* jne: not equal / not zero */

loc_00599A7C: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM8(eax) = 0;
    PUSH32(esp, MEM32(ecx + 0x98));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599A8Du); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00599A8D: ;
    esi = MEM32(0x8DFD54);
    edi = eax;
    eax = esi;
    POP32(esp, ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599AA4u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_00599AA4: ;
    ebx = esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599AADu); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00599AAD: ;
    eax = MEM32(0x91A598);
    eax = MEM32(eax + 0x98);
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599AC4u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00599AC4: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_00599ACD: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00599ACD; /* jne: not equal / not zero */

loc_00599AD4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + edi + 1;
    esi = eax;

loc_00599ADC: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00599ADC; /* jne: not equal / not zero */

loc_00599AE3: ;
    edi = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00599AE8: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00599AE8; /* jne: not equal / not zero */

loc_00599AF0: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
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
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599B04u); RECOMP_ABI_CALL(0x00599818u, sub_00599818); /* call 0x00599818 */

loc_00599B04: ;
    POP32(esp, ecx);
    SET_LO8(eax, 1);

loc_00599B07: ;
    esp = ebp + -20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00599B0F
 * Original: 0x00599B0F - 0x00599B3B (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599B0F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599B0F: ;
    ecx = MEM32(0x91A598);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00599B1Fu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599B1F: ;
    esi = MEM32(0x91A598);
    ecx = esi;
    PUSH32(esp, 0x00599B2Cu); RECOMP_ABI_CALL(0x0059AAB6u, sub_0059AAB6); /* call 0x0059AAB6 */

loc_00599B2C: ;
    ecx = esi + 0xC;
    edi = eax;
    PUSH32(esp, 0x00599B36u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599B36: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00599B3B
 * Original: 0x00599B3B - 0x00599B72 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599B3B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599B3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi + 0x10;
    MEM8(esi + 0x10) = 1;
    PUSH32(esp, 0x00599B52u); RECOMP_ABI_CALL(0x0059AB15u, sub_0059AB15); /* call 0x0059AB15 */

loc_00599B52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599B6D; /* je: equal / zero */

loc_00599B56: ;
    PUSH32(esp, esi);
    ecx = edi + 0x1C;
    PUSH32(esp, 0x00599B5Fu); RECOMP_ABI_CALL(0x0059AA64u, sub_0059AA64); /* call 0x0059AA64 */

loc_00599B5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esi + 0xC));
    { uint32_t _icall_target = MEM32(esi + 0x1C); PUSH32(esp, 0x00599B6Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00599B67u); } /* indirect call */
    }

loc_00599B6A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00599B6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00599B72
 * Original: 0x00599B72 - 0x00599BA3 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599B72(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599B72: ;
    ecx = MEM32(0x91A598);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00599B82u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599B82: ;
    esi = MEM32(0x91A598);
    ecx = esi + 0x2C;
    PUSH32(esp, 0x00599B90u); RECOMP_ABI_CALL(0x0059ABE7u, sub_0059ABE7); /* call 0x0059ABE7 */

loc_00599B90: ;
    ecx = esi + 0x38;
    edi = eax;
    PUSH32(esp, 0x00599B9Au); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599B9A: ;
    MEM32(edi + 8) = MEM32(edi + 8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00599BA3
 * Original: 0x00599BA3 - 0x00599BDA (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599BA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00599BA3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00599BAFu); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00599BAF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x91A598);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00599BBFu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599BBF: ;
    esi = MEM32(0x91A598);
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi + 0x2C;
    PUSH32(esp, 0x00599BD1u); RECOMP_ABI_CALL(0x0059ABB2u, sub_0059ABB2); /* call 0x0059ABB2 */

loc_00599BD1: ;
    ecx = esi + 0x38;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_00599BDA
 * Original: 0x00599BDA - 0x00599BF3 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599BDA(void)
{

loc_00599BDA: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x88);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00599BEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00599BE8u); } /* indirect call */
    }

loc_00599BEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00599BF1u); RECOMP_ABI_CALL(0x00599BA3u, sub_00599BA3); /* call 0x00599BA3 */

loc_00599BF1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00599BF3
 * Original: 0x00599BF3 - 0x00599CCB (216 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599BF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00599BF3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi + 0x80));
    MEM32(esi + 4) = 1;
    PUSH32(esp, 0x00599C0Au); RECOMP_ABI_CALL(0x0044931Eu, sub_0044931E); /* call 0x0044931E */

loc_00599C0A: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599CC0; /* jne: not equal / not zero */

loc_00599C14: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = esi + 0x10;
    ebp = esi + 0x28;

loc_00599C1D: ;
    ecx = ebp;
    PUSH32(esp, 0x00599C24u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599C24: ;
    edi = MEM32(ebx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599C44; /* je: equal / zero */

loc_00599C2E: ;
    eax = ZX8(MEM8(edi + 0x12));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x84) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00599C44; /* jg: greater (signed >) */

loc_00599C3A: ;
    ecx = ebx;
    PUSH32(esp, 0x00599C41u); RECOMP_ABI_CALL(0x0059AAB6u, sub_0059AAB6); /* call 0x0059AAB6 */

loc_00599C41: ;
    MEM32(esi + 0xC) = eax;

loc_00599C44: ;
    ecx = ebp;
    PUSH32(esp, 0x00599C4Bu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599C4B: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599C5D; /* jne: not equal / not zero */

loc_00599C51: ;
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00599C5Au); RECOMP_ABI_CALL(0x0059E97Fu, sub_0059E97F); /* call 0x0059E97F */

loc_00599C5A: ;
    POP32(esp, ecx);
    goto loc_00599CB3;

loc_00599C5D: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x10), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599C6B; /* je: equal / zero */

loc_00599C63: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00599C6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00599C68u); } /* indirect call */
    }

loc_00599C6B: ;
    _fa = (uint32_t)(MEM8(edi + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599CB3; /* je: equal / zero */

loc_00599C71: ;
    ecx = ebp;
    PUSH32(esp, 0x00599C78u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599C78: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x00599C81u); RECOMP_ABI_CALL(0x0059AA64u, sub_0059AA64); /* call 0x0059AA64 */

loc_00599C81: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp;
    PUSH32(esp, 0x00599C8Cu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599C8C: ;
    _fa = (uint32_t)(MEM8(edi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x10), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599C97; /* jne: not equal / not zero */

loc_00599C92: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00599C9B;

loc_00599C97: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x11);

loc_00599C9B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xC));
    { uint32_t _icall_target = MEM32(edi + 0x1C); PUSH32(esp, 0x00599CA5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00599CA2u); } /* indirect call */
    }

loc_00599CA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0x00599CB3u); RECOMP_ABI_CALL(0x0044931Eu, sub_0044931E); /* call 0x0044931E */

loc_00599CB3: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599C1D; /* je: equal / zero */

loc_00599CBD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00599CC0: ;
    MEM32(esi + 4) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00599CCB
 * Original: 0x00599CCB - 0x00599D06 (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599CCB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599CCB: ;
    PUSH32(esp, esi);
    esi = MEM32(0x91A598);
    PUSH32(esp, edi);
    ecx = esi + 0x7C;
    PUSH32(esp, 0x00599CDBu); RECOMP_ABI_CALL(0x0059AC24u, sub_0059AC24); /* call 0x0059AC24 */

loc_00599CDB: ;
    edi = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi + 0x88;
    MEM32(edi + 0x88) = eax;
    PUSH32(esp, 0x00599CF3u); RECOMP_ABI_CALL(0x0059AC07u, sub_0059AC07); /* call 0x0059AC07 */

loc_00599CF3: ;
    eax = edi;
    _fb = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x8C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00599D06
 * Original: 0x00599D06 - 0x00599DB1 (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599D06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599D06: ;
    eax = MEM32(0x91A598);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8C);
    _fb = (uint32_t)(MEM32(eax + 0xA4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(eax + 0xA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = eax + 0x88;
    PUSH32(esp, 0x00599D2Cu); RECOMP_ABI_CALL(0x0059AC44u, sub_0059AC44); /* call 0x0059AC44 */

loc_00599D2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599DAE; /* je: equal / zero */

loc_00599D30: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599D95; /* je: equal / zero */

loc_00599D35: ;
    PUSH32(esp, edi);
    edi = esi + 0x48;
    PUSH32(esp, edi);
    MEM32(esi + 8) = 1;
    PUSH32(esp, 0x00599D46u); RECOMP_ABI_CALL(0x0059E95Eu, sub_0059E95E); /* call 0x0059E95E */

loc_00599D46: ;
    goto loc_00599D4E;

loc_00599D48: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00599D4Eu); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_00599D4E: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00599D48; /* jne: not equal / not zero */

loc_00599D54: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00599D5Au); RECOMP_ABI_CALL(0x0059E9B5u, sub_0059E9B5); /* call 0x0059E9B5 */

loc_00599D5A: ;
    POP32(esp, ecx);
    edi = esi + 0x80;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x00599D68u); RECOMP_ABI_CALL(0x0044931Eu, sub_0044931E); /* call 0x0044931E */

loc_00599D68: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x00599D6Fu); RECOMP_ABI_CALL(0x0044AF9Au, sub_0044AF9A); /* call 0x0044AF9A */

loc_00599D6F: ;
    eax = esi + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00599D78u); RECOMP_ABI_CALL(0x0059E4CFu, sub_0059E4CF); /* call 0x0059E4CF */

loc_00599D78: ;
    POP32(esp, ecx);
    ecx = esi + 0x28;
    PUSH32(esp, 0x00599D81u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_00599D81: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x00599D89u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_00599D89: ;
    ecx = MEM32(esi + 0x88);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00599D94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00599D91u); } /* indirect call */
    }

loc_00599D94: ;
    POP32(esp, edi);

loc_00599D95: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00599D9Du); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_00599D9D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x91A598);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x7C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00599DAEu); RECOMP_ABI_CALL(0x0059AC07u, sub_0059AC07); /* call 0x0059AC07 */

loc_00599DAE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00599DB1
 * Original: 0x00599DB1 - 0x00599DED (60 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599DB1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599DB1: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00599DD1;

loc_00599DB8: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599DDB; /* je: equal / zero */

loc_00599DC1: ;
    eax = esi;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599DCF; /* je: equal / zero */

loc_00599DCA: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF8u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00599DD1;

loc_00599DCF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00599DD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599DB8; /* jne: not equal / not zero */

loc_00599DD5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00599DD7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00599DDB: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599DE9; /* je: equal / zero */

loc_00599DE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00599DE9u); RECOMP_ABI_CALL(0x0059AB15u, sub_0059AB15); /* call 0x0059AB15 */

loc_00599DE9: ;
    eax = esi;
    goto loc_00599DD7;

}

/**
 * sub_00599DED
 * Original: 0x00599DED - 0x00599E84 (151 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599DED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00599DED: ;
    ecx = MEM32(0x91A598);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00599DFBu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599DFB: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x00599E03u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_00599E03: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00599E10u); RECOMP_ABI_CALL(0x0059E940u, sub_0059E940); /* call 0x0059E940 */

loc_00599E10: ;
    POP32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00599E1Eu); RECOMP_ABI_CALL(0x00449261u, sub_00449261); /* call 0x00449261 */

loc_00599E1E: ;
    ecx = esi + 0x50;
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x00599E2Cu); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_00599E2C: ;
    ecx = MEM32(esi + 0x88);
    MEM32(esi + 0x84) = 0xFF;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00599E41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00599E3Eu); } /* indirect call */
    }

loc_00599E41: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(0x8DFD5C));
    eax = esi + 0x70;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x599BF3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00599E5Bu); RECOMP_ABI_CALL(0x0059E682u, sub_0059E682); /* call 0x0059E682 */

loc_00599E5B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0x00599E6Bu); RECOMP_ABI_CALL(0x004497AAu, sub_004497AA); /* call 0x004497AA */

loc_00599E6B: ;
    PUSH32(esp, MEM32(esi + 0x80));
    PUSH32(esp, 0x00599E76u); RECOMP_ABI_CALL(0x0044933Eu, sub_0044933E); /* call 0x0044933E */

loc_00599E76: ;
    ecx = MEM32(0x91A598);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_00599E84
 * Original: 0x00599E84 - 0x00599EE0 (92 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599E84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599E84: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = 0x87D68C;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599E9F; /* jne: not equal / not zero */

loc_00599E9A: ;
    PUSH32(esp, 0x00599E9Fu); RECOMP_ABI_CALL(0x00599DEDu, sub_00599DED); /* call 0x00599DED */

loc_00599E9F: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM32(edi + 0x14) = MEM32(edi + 0x14) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edi + 0x12) = LO8(eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edi + 0x10) = LO8(ebx);
    MEM8(edi + 0x11) = LO8(ebx);
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = 0x5996B6;
    MEM32(edi + 0x20) = ebx;
    MEM32(edi + 0x24) = ebx;
    MEM32(edi + 0x28) = ebx;
    MEM32(edi + 0x2C) = ebx;
    MEM32(edi + 0x30) = ebx;
    PUSH32(esp, 0x00599ED5u); RECOMP_ABI_CALL(0x005996D3u, sub_005996D3); /* call 0x005996D3 */

loc_00599ED5: ;
    MEM32(edi + 0xC) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00599EE0
 * Original: 0x00599EE0 - 0x00599F25 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00599EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599EE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = MEM32(ebx) & eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599F24; /* je: equal / zero */

loc_00599EE9: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599EFD; /* je: equal / zero */

loc_00599EF0: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599EFD; /* jne: not equal / not zero */

loc_00599EF9: ;
    MEM32(ebx) = MEM32(ebx) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00599EFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi + 0x10;
    PUSH32(esp, 0x00599F0Bu); RECOMP_ABI_CALL(0x00599DB1u, sub_00599DB1); /* call 0x00599DB1 */

loc_00599F0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599F16; /* je: equal / zero */

loc_00599F0F: ;
    MEM32(ebx) = 1;
    esp += 4; return; /* ret */

loc_00599F16: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi + 0x1C;
    PUSH32(esp, 0x00599F24u); RECOMP_ABI_CALL(0x00599DB1u, sub_00599DB1); /* call 0x00599DB1 */

loc_00599F24: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00599F25
 * Original: 0x00599F25 - 0x00599FAC (135 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00599F25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599F25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599F35u); RECOMP_ABI_CALL(0x005996B7u, sub_005996B7); /* call 0x005996B7 */

loc_00599F35: ;
    edi = eax;
    POP32(esp, ecx);
    ecx = edi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599F40u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599F40: ;
    eax = ZX8(MEM8(esi + 0x12));
    ecx = MEM32(esi + 0xC);
    edx = MEM32(edi + 0x10);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0xFFFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599F8A; /* je: equal / zero */

loc_00599F5D: ;
    PUSH32(esp, ebx);

loc_00599F5E: ;
    ecx = ZX8(MEM8(edx + 0x12));
    ebx = MEM32(edx + 0xC);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = ebx & 0xFFFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00599F89; /* jb: below (unsigned <) */

loc_00599F74: ;
    MEM32(ebp + -4) = edx;
    edx = MEM32(edx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599F83; /* je: equal / zero */

loc_00599F7E: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFF8u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00599F85;

loc_00599F83: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00599F85: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599F5E; /* jne: not equal / not zero */

loc_00599F89: ;
    POP32(esp, ebx);

loc_00599F8A: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599F96u); RECOMP_ABI_CALL(0x0059AAE2u, sub_0059AAE2); /* call 0x0059AAE2 */

loc_00599F96: ;
    ecx = edi + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599F9Eu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599F9E: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599FA7u); RECOMP_ABI_CALL(0x0059E95Eu, sub_0059E95E); /* call 0x0059E95E */

loc_00599FA7: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00599FAC
 * Original: 0x00599FAC - 0x0059A001 (85 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00599FAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00599FAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599FBBu); RECOMP_ABI_CALL(0x005996B7u, sub_005996B7); /* call 0x005996B7 */

loc_00599FBB: ;
    esi = eax;
    POP32(esp, ecx);
    edi = esi + 0x28;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599FC8u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_00599FC8: ;
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599FD3u); RECOMP_ABI_CALL(0x00599EE0u, sub_00599EE0); /* call 0x00599EE0 */

loc_00599FD3: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00599FF3; /* jne: not equal / not zero */

loc_00599FDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00599FF0; /* je: equal / zero */

loc_00599FDF: ;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x10), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00599FEA; /* jne: not equal / not zero */

loc_00599FE5: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00599FF3;

loc_00599FEA: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    goto loc_00599FF3;

loc_00599FF0: ;
    PUSH32(esp, 0xFFFFFFFDu);
    POP32(esp, esi);

loc_00599FF3: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00599FFAu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_00599FFA: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059A001
 * Original: 0x0059A001 - 0x0059A047 (70 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059A001(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059A001: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A010u); RECOMP_ABI_CALL(0x005996B7u, sub_005996B7); /* call 0x005996B7 */

loc_0059A010: ;
    esi = eax;
    POP32(esp, ecx);
    edi = esi + 0x28;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A01Du); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0059A01D: ;
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A028u); RECOMP_ABI_CALL(0x00599EE0u, sub_00599EE0); /* call 0x00599EE0 */

loc_0059A028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0059A03B; /* je: equal / zero */

loc_0059A02D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059A03B; /* je: equal / zero */

loc_0059A033: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0059A03Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0059A038u); } /* indirect call */
    }

loc_0059A03B: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A042u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0059A042: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059A047
 * Original: 0x0059A047 - 0x0059A0E6 (159 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0059A047(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059A047: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0059A056; /* jne: not equal / not zero */

loc_0059A051: ;
    PUSH32(esp, 0xFFFFFFFDu);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0059A056: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A05Fu); RECOMP_ABI_CALL(0x005996B7u, sub_005996B7); /* call 0x005996B7 */

loc_0059A05F: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0059A06D; /* jne: not equal / not zero */

loc_0059A068: ;
    PUSH32(esp, 0xFFFFFFFDu);
    POP32(esp, eax);
    goto loc_0059A0E3;

loc_0059A06D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x28;

loc_0059A072: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A079u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0059A079: ;
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A084u); RECOMP_ABI_CALL(0x00599EE0u, sub_00599EE0); /* call 0x00599EE0 */

loc_0059A084: ;
    POP32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -4) = MEM32(ebp + -4) & ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A096u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0059A096: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0059A0D8; /* je: equal / zero */

loc_0059A09C: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A0A3u); RECOMP_ABI_CALL(0x0059E517u, sub_0059E517); /* call 0x0059E517 */

loc_0059A0A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0059A0B7; /* je: equal / zero */

loc_0059A0A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A0ADu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0059A0AD: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A0B4u); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_0059A0B4: ;
    POP32(esp, ecx);
    goto loc_0059A072;

loc_0059A0B7: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A0BFu); RECOMP_ABI_CALL(0x005996B7u, sub_005996B7); /* call 0x005996B7 */

loc_0059A0BF: ;
    POP32(esp, ecx);
    ebx = eax + 0x80;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A0CFu); RECOMP_ABI_CALL(0x004497AAu, sub_004497AA); /* call 0x004497AA */

loc_0059A0CF: ;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A0D6u); RECOMP_ABI_CALL(0x0044933Eu, sub_0044933E); /* call 0x0044933E */

loc_0059A0D6: ;
    goto loc_0059A072;

loc_0059A0D8: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0059A0E0u); RECOMP_ABI_CALL(0x00599FACu, sub_00599FAC); /* call 0x00599FAC */

loc_0059A0E0: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0059A0E3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0059A0E6
 * Original: 0x0059A0E6 - 0x0059A151 (107 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0059A0E6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0059A0E6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x0059A0F2u); RECOMP_ABI_CALL(0x005996B7u, sub_005996B7); /* call 0x005996B7 */

loc_0059A0F2: ;
    esi = eax;
    POP32(esp, ecx);
    edi = esi + 0x28;
    ecx = edi;
    PUSH32(esp, 0x0059A0FFu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0059A0FF: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = esi + 0x1C;
    PUSH32(esp, 0x0059A10Du); RECOMP_ABI_CALL(0x00599DB1u, sub_00599DB1); /* call 0x00599DB1 */

loc_0059A10D: ;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0059A116u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0059A116: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0059A11Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0059A11Au); } /* indirect call */
    }

loc_0059A11D: ;
    ecx = MEM32(0x91A598);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    ebx = edx;
    PUSH32(esp, 0x0059A133u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0059A133: ;
    PUSH32(esp, esi);
    esi = MEM32(0x91A598);
    ecx = esi;
    PUSH32(esp, 0x0059A141u); RECOMP_ABI_CALL(0x0059AA89u, sub_0059AA89); /* call 0x0059AA89 */

loc_0059A141: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x0059A149u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0059A149: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    edx = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
