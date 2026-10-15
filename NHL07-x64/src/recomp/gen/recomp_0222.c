/**
 * nhl_07_recomp - Recompiled code chunk 222
 * Functions: 250 (0x004D68C1 - 0x004D954A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004D68C1
 * Original: 0x004D68C1 - 0x004D68EC (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D68C1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D68C1: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D68EA; /* je: equal / zero */

loc_004D68CB: ;
    PUSH32(esp, 0x004D68D0u); RECOMP_ABI_CALL(0x004C78D4u, sub_004C78D4); /* call 0x004C78D4 */

loc_004D68D0: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D68D9u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D68D9: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D68E6; /* je: equal / zero */

loc_004D68E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D68E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D68E4u); } /* indirect call */
    }

loc_004D68E6: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_004D68EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6934
 * Original: 0x004D6934 - 0x004D694A (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6934(void)
{

loc_004D6934: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004D693Eu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D693E: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D694A
 * Original: 0x004D694A - 0x004D6956 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D694A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D694A: ;
    PUSH32(esp, 0x004D694Fu); RECOMP_ABI_CALL(0x004DC981u, sub_004DC981); /* call 0x004DC981 */

loc_004D694F: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_004D697E
 * Original: 0x004D697E - 0x004D6994 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D697E(void)
{

loc_004D697E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004D6988u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6988: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D69B4
 * Original: 0x004D69B4 - 0x004D69E5 (49 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D69B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D69B4: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004D69C1u); RECOMP_ABI_CALL(0x004C7D3Au, sub_004C7D3A); /* call 0x004C7D3A */

loc_004D69C1: ;
    PUSH32(esp, 0x7B891F);
    esi = eax;
    PUSH32(esp, 0x004D69CDu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D69CD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004D69D9; /* je: equal / zero */

loc_004D69D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D69D8u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D69D8: ;
    POP32(esp, ecx);

loc_004D69D9: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D6A0D
 * Original: 0x004D6A0D - 0x004D6A2F (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6A0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6A0D: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D6A21u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D6A21: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D6A2F
 * Original: 0x004D6A2F - 0x004D6A48 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6A2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6A2F: ;
    PUSH32(esp, 0x004D6A34u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D6A34: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D6A3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6A38u); } /* indirect call */
    }

loc_004D6A3B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004D6A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6A3Fu); } /* indirect call */
    }

loc_004D6A42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_004D6A50
 * Original: 0x004D6A50 - 0x004D6A69 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6A50: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6A64; /* je: equal / zero */

loc_004D6A59: ;
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, 0x004D6A64u); RECOMP_ABI_CALL(0x004D6887u, sub_004D6887); /* call 0x004D6887 */

loc_004D6A64: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6A69
 * Original: 0x004D6A69 - 0x004D6A82 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6A69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6A69: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6A7D; /* je: equal / zero */

loc_004D6A72: ;
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, 0x004D6A7Du); RECOMP_ABI_CALL(0x004D68C1u, sub_004D68C1); /* call 0x004D68C1 */

loc_004D6A7D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6A82
 * Original: 0x004D6A82 - 0x004D6AA5 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6A82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6A82: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6A90; /* jne: not equal / not zero */

loc_004D6A8B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6A90: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6A9Du); RECOMP_ABI_CALL(0x004C1380u, sub_004C1380); /* call 0x004C1380 */

loc_004D6A9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6AA3u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D6AA3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6AA5
 * Original: 0x004D6AA5 - 0x004D6AD1 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6AA5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6AA5: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6AB3; /* jne: not equal / not zero */

loc_004D6AAE: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6AB3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6ABAu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6ABA: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6AC9u); RECOMP_ABI_CALL(0x004C7BACu, sub_004C7BAC); /* call 0x004C7BAC */

loc_004D6AC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6ACFu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6ACF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6AD1
 * Original: 0x004D6AD1 - 0x004D6AEC (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6AD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6AD1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6AE7; /* je: equal / zero */

loc_004D6ADA: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6AE7u); RECOMP_ABI_CALL(0x004C79B3u, sub_004C79B3); /* call 0x004C79B3 */

loc_004D6AE7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6AEC
 * Original: 0x004D6AEC - 0x004D6B07 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6AEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6AEC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6B02; /* je: equal / zero */

loc_004D6AF5: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6B02u); RECOMP_ABI_CALL(0x004C7A3Fu, sub_004C7A3F); /* call 0x004C7A3F */

loc_004D6B02: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6B07
 * Original: 0x004D6B07 - 0x004D6B36 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D6B07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6B07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6B2F; /* je: equal / zero */

loc_004D6B14: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6B1Bu); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D6B1B: ;
    POP32(esp, ecx);
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(0x90E4EC);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6B2Fu); RECOMP_ABI_CALL(0x004C7AA6u, sub_004C7AA6); /* call 0x004C7AA6 */

loc_004D6B2F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6B34u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D6B34: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D6B36
 * Original: 0x004D6B36 - 0x004D6B59 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6B36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6B36: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6B44; /* jne: not equal / not zero */

loc_004D6B3F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6B44: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6B51u); RECOMP_ABI_CALL(0x004C13FFu, sub_004C13FF); /* call 0x004C13FF */

loc_004D6B51: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6B57u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6B57: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6B59
 * Original: 0x004D6B59 - 0x004D6B7C (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6B59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6B59: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6B67; /* jne: not equal / not zero */

loc_004D6B62: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6B67: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6B74u); RECOMP_ABI_CALL(0x004C1411u, sub_004C1411); /* call 0x004C1411 */

loc_004D6B74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6B7Au); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6B7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6B7C
 * Original: 0x004D6B7C - 0x004D6B9F (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6B7C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6B7C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6B8A; /* jne: not equal / not zero */

loc_004D6B85: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6B8A: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6B97u); RECOMP_ABI_CALL(0x004C1393u, sub_004C1393); /* call 0x004C1393 */

loc_004D6B97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6B9Du); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D6B9D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6B9F
 * Original: 0x004D6B9F - 0x004D6BCD (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6B9F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6B9F: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6BB0; /* jne: not equal / not zero */

loc_004D6BA9: ;
    PUSH32(esp, 0x004D6BAEu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D6BAE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D6BB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6BB7u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6BB7: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6BC9u); RECOMP_ABI_CALL(0x004D6934u, sub_004D6934); /* call 0x004D6934 */

loc_004D6BC9: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6BCD
 * Original: 0x004D6BCD - 0x004D6BF9 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6BCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6BCD: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6BDB; /* jne: not equal / not zero */

loc_004D6BD6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6BDB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6BE2u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6BE2: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6BF1u); RECOMP_ABI_CALL(0x004C13DBu, sub_004C13DB); /* call 0x004C13DB */

loc_004D6BF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6BF7u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6BF7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6BF9
 * Original: 0x004D6BF9 - 0x004D6C25 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6BF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6BF9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6C07; /* jne: not equal / not zero */

loc_004D6C02: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6C07: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6C0Eu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6C0E: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6C1Du); RECOMP_ABI_CALL(0x004C13EDu, sub_004C13ED); /* call 0x004C13ED */

loc_004D6C1D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6C23u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6C23: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6C25
 * Original: 0x004D6C25 - 0x004D6C46 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6C25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6C25: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6C33; /* jne: not equal / not zero */

loc_004D6C2E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6C33: ;
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, 0x004D6C3Eu); RECOMP_ABI_CALL(0x004D694Au, sub_004D694A); /* call 0x004D694A */

loc_004D6C3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6C44u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D6C44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6C46
 * Original: 0x004D6C46 - 0x004D6C69 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6C46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6C46: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6C54; /* jne: not equal / not zero */

loc_004D6C4F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6C54: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6C61u); RECOMP_ABI_CALL(0x004C7A7Au, sub_004C7A7A); /* call 0x004C7A7A */

loc_004D6C61: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6C67u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D6C67: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6C69
 * Original: 0x004D6C69 - 0x004D6C95 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6C69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6C69: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6C77; /* jne: not equal / not zero */

loc_004D6C72: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6C77: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6C7Eu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6C7E: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6C8Du); RECOMP_ABI_CALL(0x004C7B47u, sub_004C7B47); /* call 0x004C7B47 */

loc_004D6C8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6C93u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D6C93: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6C95
 * Original: 0x004D6C95 - 0x004D6CB0 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6C95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6C95: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6CAB; /* je: equal / zero */

loc_004D6C9E: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6CABu); RECOMP_ABI_CALL(0x004C7C32u, sub_004C7C32); /* call 0x004C7C32 */

loc_004D6CAB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6CB0
 * Original: 0x004D6CB0 - 0x004D6CD4 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6CB0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6CCF; /* je: equal / zero */

loc_004D6CB9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6CC0u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6CC0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6CCFu); RECOMP_ABI_CALL(0x004C7C60u, sub_004C7C60); /* call 0x004C7C60 */

loc_004D6CCF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6CD4
 * Original: 0x004D6CD4 - 0x004D6D03 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D6CD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6CD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6CFC; /* je: equal / zero */

loc_004D6CE1: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6CE8u); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D6CE8: ;
    POP32(esp, ecx);
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(0x90E4EC);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6CFCu); RECOMP_ABI_CALL(0x004C7C9Eu, sub_004C7C9E); /* call 0x004C7C9E */

loc_004D6CFC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6D01u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D6D01: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D6D03
 * Original: 0x004D6D03 - 0x004D6D26 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6D03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6D03: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6D11; /* jne: not equal / not zero */

loc_004D6D0C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6D11: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6D1Eu); RECOMP_ABI_CALL(0x004C13B7u, sub_004C13B7); /* call 0x004C13B7 */

loc_004D6D1E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6D24u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D6D24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6D26
 * Original: 0x004D6D26 - 0x004D6D54 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6D26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6D26: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6D37; /* jne: not equal / not zero */

loc_004D6D30: ;
    PUSH32(esp, 0x004D6D35u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D6D35: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D6D37: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6D3Eu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6D3E: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6D50u); RECOMP_ABI_CALL(0x004D697Eu, sub_004D697E); /* call 0x004D697E */

loc_004D6D50: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6D54
 * Original: 0x004D6D54 - 0x004D6D78 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6D54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6D54: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6D73; /* je: equal / zero */

loc_004D6D5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6D64u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6D64: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6D73u); RECOMP_ABI_CALL(0x004C7CF1u, sub_004C7CF1); /* call 0x004C7CF1 */

loc_004D6D73: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6D78
 * Original: 0x004D6D78 - 0x004D6DA6 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6D78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6D78: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6D89; /* jne: not equal / not zero */

loc_004D6D82: ;
    PUSH32(esp, 0x004D6D87u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D6D87: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D6D89: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6D90u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6D90: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6DA2u); RECOMP_ABI_CALL(0x004D69B4u, sub_004D69B4); /* call 0x004D69B4 */

loc_004D6DA2: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6DA6
 * Original: 0x004D6DA6 - 0x004D6DC9 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6DA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6DA6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6DB4; /* jne: not equal / not zero */

loc_004D6DAF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6DB4: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6DC1u); RECOMP_ABI_CALL(0x004C1423u, sub_004C1423); /* call 0x004C1423 */

loc_004D6DC1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6DC7u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D6DC7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6DC9
 * Original: 0x004D6DC9 - 0x004D6DF5 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6DC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6DC9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6DD7; /* jne: not equal / not zero */

loc_004D6DD2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6DD7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6DDEu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D6DDE: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6DEDu); RECOMP_ABI_CALL(0x004C7D7Cu, sub_004C7D7C); /* call 0x004C7D7C */

loc_004D6DED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6DF3u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D6DF3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6DF5
 * Original: 0x004D6DF5 - 0x004D6E18 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6DF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6DF5: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6E03; /* jne: not equal / not zero */

loc_004D6DFE: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6E03: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6E10u); RECOMP_ABI_CALL(0x004C7DF7u, sub_004C7DF7); /* call 0x004C7DF7 */

loc_004D6E10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6E16u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6E16: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6E18
 * Original: 0x004D6E18 - 0x004D6E47 (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D6E18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6E18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6E40; /* je: equal / zero */

loc_004D6E25: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6E2Cu); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D6E2C: ;
    POP32(esp, ecx);
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(0x90E4EC);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6E40u); RECOMP_ABI_CALL(0x004C142Fu, sub_004C142F); /* call 0x004C142F */

loc_004D6E40: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6E45u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D6E45: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D6E47
 * Original: 0x004D6E47 - 0x004D6E62 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6E47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6E47: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6E5D; /* je: equal / zero */

loc_004D6E50: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6E5Du); RECOMP_ABI_CALL(0x004C7E53u, sub_004C7E53); /* call 0x004C7E53 */

loc_004D6E5D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6E62
 * Original: 0x004D6E62 - 0x004D6E7D (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6E62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6E62: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6E78; /* je: equal / zero */

loc_004D6E6B: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6E78u); RECOMP_ABI_CALL(0x004C7EA1u, sub_004C7EA1); /* call 0x004C7EA1 */

loc_004D6E78: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6E7D
 * Original: 0x004D6E7D - 0x004D6E9E (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6E7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6E7D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6E8B; /* jne: not equal / not zero */

loc_004D6E86: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6E8B: ;
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, 0x004D6E96u); RECOMP_ABI_CALL(0x004D6A2Fu, sub_004D6A2F); /* call 0x004D6A2F */

loc_004D6E96: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6E9Cu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D6E9C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6E9E
 * Original: 0x004D6E9E - 0x004D6EC1 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6E9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6E9E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6EAC; /* jne: not equal / not zero */

loc_004D6EA7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6EAC: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6EB9u); RECOMP_ABI_CALL(0x004C1439u, sub_004C1439); /* call 0x004C1439 */

loc_004D6EB9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6EBFu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D6EBF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6EC1
 * Original: 0x004D6EC1 - 0x004D6FFF (318 bytes, 114 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D6EC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6EC1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6ED1u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D6ED1: ;
    ecx = ebp + -20;
    ebx = eax;
    MEM32(esp) = 0x869BE8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6EE2u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D6EE2: ;
    PUSH32(esp, 0x869BDC);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6EEFu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D6EEF: ;
    PUSH32(esp, 0x869BD0);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6EFCu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D6EFC: ;
    PUSH32(esp, 0x869BC0);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F09u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D6F09: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D6F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6F10u); } /* indirect call */
    }

loc_004D6F13: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D6F1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6F17u); } /* indirect call */
    }

loc_004D6F1A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F20u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6F20: ;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F2Bu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D6F2B: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D6F35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6F32u); } /* indirect call */
    }

loc_004D6F35: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D6F3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6F39u); } /* indirect call */
    }

loc_004D6F3C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F42u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6F42: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F4Du); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D6F4D: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D6F57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6F54u); } /* indirect call */
    }

loc_004D6F57: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D6F5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6F5Bu); } /* indirect call */
    }

loc_004D6F5E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F64u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6F64: ;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F6Fu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D6F6F: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D6F79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6F76u); } /* indirect call */
    }

loc_004D6F79: ;
    esi = eax;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F86u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D6F86: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D6FC8; /* jbe: below or equal (unsigned <=) */

loc_004D6F8D: ;
    PUSH32(esp, 0x869BB4);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6F9Au); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D6F9A: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FA3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D6FA3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D6FAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6FA7u); } /* indirect call */
    }

loc_004D6FAA: ;
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FBAu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D6FBA: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FC2u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D6FC2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D6F8D; /* jb: below (unsigned <) */

loc_004D6FC8: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FD5u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D6FD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FE0u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D6FE0: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FE8u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D6FE8: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FF0u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D6FF0: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6FF8u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D6FF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D6FFF
 * Original: 0x004D6FFF - 0x004D701B (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6FFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6FFF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86B210;
    if (CMP_EQ(_fa, _fb)) goto loc_004D7013; /* je: equal / zero */

loc_004D700E: ;
    PUSH32(esp, 0x004D7013u); RECOMP_ABI_CALL(0x004D68C1u, sub_004D68C1); /* call 0x004D68C1 */

loc_004D7013: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D701B
 * Original: 0x004D701B - 0x004D707C (97 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D701B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D701B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D702Bu); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004D702B: ;
    edi = eax;
    esi = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7039u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D7039: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D706D; /* jbe: below or equal (unsigned <=) */

loc_004D703F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004D7042: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D704Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D704A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D7051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D704Eu); } /* indirect call */
    }

loc_004D7051: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D7058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7055u); } /* indirect call */
    }

loc_004D7058: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7068u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D7068: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D7042; /* jb: below (unsigned <) */

loc_004D706D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D707C
 * Original: 0x004D707C - 0x004D709A (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D707C(void)
{

loc_004D707C: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D7084u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004D7084: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004D7090u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D7090: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D7097u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7094u); } /* indirect call */
    }

loc_004D7097: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D709A
 * Original: 0x004D709A - 0x004D70BF (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D709A(void)
{

loc_004D709A: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D70A2u); RECOMP_ABI_CALL(0x004C7790u, sub_004C7790); /* call 0x004C7790 */

loc_004D70A2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D70A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D70A6u); } /* indirect call */
    }

loc_004D70A9: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004D70B5u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D70B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004D70BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D70B9u); } /* indirect call */
    }

loc_004D70BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D70BF
 * Original: 0x004D70BF - 0x004D70DD (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D70BF(void)
{

loc_004D70BF: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D70C7u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004D70C7: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = eax + 8;
    PUSH32(esp, 0x004D70D3u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D70D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004D70DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D70D7u); } /* indirect call */
    }

loc_004D70DA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D70DD
 * Original: 0x004D70DD - 0x004D714B (110 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D70DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D70DD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D70EDu); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004D70ED: ;
    eax = MEM32(eax + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_004D7145; /* jbe: below or equal (unsigned <=) */

loc_004D70F9: ;
    PUSH32(esp, edi);

loc_004D70FA: ;
    ecx = MEM32(esi + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7102u); RECOMP_ABI_CALL(0x004C7998u, sub_004C7998); /* call 0x004C7998 */

loc_004D7102: ;
    PUSH32(esp, ebx);
    ecx = eax + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D710Bu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_004D710B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D7112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D710Fu); } /* indirect call */
    }

loc_004D7112: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D711Cu); RECOMP_ABI_CALL(0x005D0020u, sub_005D0020); /* call 0x005D0020 */

loc_004D711C: ;
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D7128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7125u); } /* indirect call */
    }

loc_004D7128: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D712Eu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_004D712E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D713E; /* jne: not equal / not zero */

loc_004D7135: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D713Eu); RECOMP_ABI_CALL(0x004C7AE7u, sub_004C7AE7); /* call 0x004C7AE7 */

loc_004D713E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D70FA; /* jb: below (unsigned <) */

loc_004D7144: ;
    POP32(esp, edi);

loc_004D7145: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D714B
 * Original: 0x004D714B - 0x004D716F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D714B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D714B: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D715C; /* jne: not equal / not zero */

loc_004D7155: ;
    PUSH32(esp, 0x004D715Au); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D715A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D715C: ;
    ecx = MEM32(0x90E4EC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D716Bu); RECOMP_ABI_CALL(0x004D701Bu, sub_004D701B); /* call 0x004D701B */

loc_004D716B: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D716F
 * Original: 0x004D716F - 0x004D7199 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D716F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D716F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D717D; /* jne: not equal / not zero */

loc_004D7178: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D717D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D7184u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D7184: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7191u); RECOMP_ABI_CALL(0x004D707Cu, sub_004D707C); /* call 0x004D707C */

loc_004D7191: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7197u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D7197: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7199
 * Original: 0x004D7199 - 0x004D71BC (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7199(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7199: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D71A7; /* jne: not equal / not zero */

loc_004D71A2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D71A7: ;
    eax = MEM32(0x90E4EC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D71B4u); RECOMP_ABI_CALL(0x004C7790u, sub_004C7790); /* call 0x004C7790 */

loc_004D71B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D71BAu); RECOMP_ABI_CALL(0x004D6EC1u, sub_004D6EC1); /* call 0x004D6EC1 */

loc_004D71BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D71BC
 * Original: 0x004D71BC - 0x004D71DE (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D71BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D71BC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D71D9; /* je: equal / zero */

loc_004D71C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D71CCu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D71CC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, 0x004D71D9u); RECOMP_ABI_CALL(0x004D709Au, sub_004D709A); /* call 0x004D709A */

loc_004D71D9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D71DE
 * Original: 0x004D71DE - 0x004D7208 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D71DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D71DE: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D71EC; /* jne: not equal / not zero */

loc_004D71E7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D71EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D71F3u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D71F3: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7200u); RECOMP_ABI_CALL(0x004D70BFu, sub_004D70BF); /* call 0x004D70BF */

loc_004D7200: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7206u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D7206: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7208
 * Original: 0x004D7208 - 0x004D722A (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7208: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7225; /* je: equal / zero */

loc_004D7211: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D7218u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D7218: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4EC);
    PUSH32(esp, 0x004D7225u); RECOMP_ABI_CALL(0x004D70DDu, sub_004D70DD); /* call 0x004D70DD */

loc_004D7225: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D722A
 * Original: 0x004D722A - 0x004D7246 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D722A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D722A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D7232u); RECOMP_ABI_CALL(0x004D6FFFu, sub_004D6FFF); /* call 0x004D6FFF */

loc_004D7232: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D7240; /* je: equal / zero */

loc_004D7239: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D723Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D723F: ;
    POP32(esp, ecx);

loc_004D7240: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D7246
 * Original: 0x004D7246 - 0x004D7259 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7246(void)
{

loc_004D7246: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86B4A8);
    MEM32(0x90E4EC) = eax;
    PUSH32(esp, 0x004D7258u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D7258: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D7259
 * Original: 0x004D7259 - 0x004D726A (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7259(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7259: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86B5D8;
    MEM8(eax + 4) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_004D726A
 * Original: 0x004D726A - 0x004D729D (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D726A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D726A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D7272u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D7272: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x004D727Eu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D727E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D728E; /* je: equal / zero */

loc_004D7285: ;
    ecx = eax;
    PUSH32(esp, 0x004D728Cu); RECOMP_ABI_CALL(0x004C6227u, sub_004C6227); /* call 0x004C6227 */

loc_004D728C: ;
    goto loc_004D7290;

loc_004D728E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D7290: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D729Bu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D729B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D729D
 * Original: 0x004D729D - 0x004D72BC (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D729D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D729D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D72A9u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D72A9: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D72B6; /* je: equal / zero */

loc_004D72B0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D72B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D72B4u); } /* indirect call */
    }

loc_004D72B6: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D72BC
 * Original: 0x004D72BC - 0x004D72FE (66 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D72BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D72BC: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D72D0u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D72D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004C63A9(); return; /* tail jmp 0x004C63A9 */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004C1202(); return; /* tail jmp 0x004C1202 */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004C1143(); return; /* tail jmp 0x004C1143 */

    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_004C636E(); return; /* tail jmp 0x004C636E */

}

/**
 * sub_004D72FE
 * Original: 0x004D72FE - 0x004D730A (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D72FE(void)
{

loc_004D72FE: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D7306u); RECOMP_ABI_CALL(0x004C1116u, sub_004C1116); /* call 0x004C1116 */

loc_004D7306: ;
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_004D730A
 * Original: 0x004D730A - 0x004D735F (85 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D730A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D730A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7328u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D7328: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7333u); RECOMP_ABI_CALL(0x004C1123u, sub_004C1123); /* call 0x004C1123 */

loc_004D7333: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D733Fu); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004D733F: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7348u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7348: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D735Bu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D735B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D736F
 * Original: 0x004D736F - 0x004D73C4 (85 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D736F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D736F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D738Du); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D738D: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7398u); RECOMP_ABI_CALL(0x004C1108u, sub_004C1108); /* call 0x004C1108 */

loc_004D7398: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D73A4u); RECOMP_ABI_CALL(0x004E367Fu, sub_004E367F); /* call 0x004E367F */

loc_004D73A4: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D73ADu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D73AD: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D73C0u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D73C0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D73D4
 * Original: 0x004D73D4 - 0x004D73E0 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D73D4(void)
{

loc_004D73D4: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D73DCu); RECOMP_ABI_CALL(0x004C10EFu, sub_004C10EF); /* call 0x004C10EF */

loc_004D73DC: ;
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_004D73E0
 * Original: 0x004D73E0 - 0x004D73F9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D73E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D73E0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D73F4; /* je: equal / zero */

loc_004D73E9: ;
    ecx = MEM32(0x90E4F0);
    PUSH32(esp, 0x004D73F4u); RECOMP_ABI_CALL(0x004D726Au, sub_004D726A); /* call 0x004D726A */

loc_004D73F4: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D73F9
 * Original: 0x004D73F9 - 0x004D7412 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D73F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D73F9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D740D; /* je: equal / zero */

loc_004D7402: ;
    ecx = MEM32(0x90E4F0);
    PUSH32(esp, 0x004D740Du); RECOMP_ABI_CALL(0x004D729Du, sub_004D729D); /* call 0x004D729D */

loc_004D740D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7412
 * Original: 0x004D7412 - 0x004D7436 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7412(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7412: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7431; /* je: equal / zero */

loc_004D741B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D7422u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D7422: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D7431u); RECOMP_ABI_CALL(0x004C63C2u, sub_004C63C2); /* call 0x004C63C2 */

loc_004D7431: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7436
 * Original: 0x004D7436 - 0x004D745A (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7436(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7436: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7455; /* je: equal / zero */

loc_004D743F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D7446u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D7446: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D7455u); RECOMP_ABI_CALL(0x004C63A9u, sub_004C63A9); /* call 0x004C63A9 */

loc_004D7455: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D745A
 * Original: 0x004D745A - 0x004D747D (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D745A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D745A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D7468; /* jne: not equal / not zero */

loc_004D7463: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D7468: ;
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D7475u); RECOMP_ABI_CALL(0x004C1202u, sub_004C1202); /* call 0x004C1202 */

loc_004D7475: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D747Bu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D747B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D747D
 * Original: 0x004D747D - 0x004D74A0 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D747D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D747D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D748B; /* jne: not equal / not zero */

loc_004D7486: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D748B: ;
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D7498u); RECOMP_ABI_CALL(0x004C1143u, sub_004C1143); /* call 0x004C1143 */

loc_004D7498: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D749Eu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D749E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D74A0
 * Original: 0x004D74A0 - 0x004D74C4 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D74A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D74A0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D74BF; /* je: equal / zero */

loc_004D74A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D74B0u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D74B0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D74BFu); RECOMP_ABI_CALL(0x004C636Eu, sub_004C636E); /* call 0x004C636E */

loc_004D74BF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D74C4
 * Original: 0x004D74C4 - 0x004D74E5 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D74C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D74C4: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D74D2; /* jne: not equal / not zero */

loc_004D74CD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D74D2: ;
    ecx = MEM32(0x90E4F0);
    PUSH32(esp, 0x004D74DDu); RECOMP_ABI_CALL(0x004D72FEu, sub_004D72FE); /* call 0x004D72FE */

loc_004D74DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D74E3u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D74E3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D74E5
 * Original: 0x004D74E5 - 0x004D7509 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D74E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D74E5: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D74F6; /* jne: not equal / not zero */

loc_004D74EF: ;
    PUSH32(esp, 0x004D74F4u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D74F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D74F6: ;
    ecx = MEM32(0x90E4F0);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7505u); RECOMP_ABI_CALL(0x004D730Au, sub_004D730A); /* call 0x004D730A */

loc_004D7505: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7509
 * Original: 0x004D7509 - 0x004D752D (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7509(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7509: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7528; /* je: equal / zero */

loc_004D7512: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D7519u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D7519: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D7528u); RECOMP_ABI_CALL(0x004C6341u, sub_004C6341); /* call 0x004C6341 */

loc_004D7528: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D752D
 * Original: 0x004D752D - 0x004D7551 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D752D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D752D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D753E; /* jne: not equal / not zero */

loc_004D7537: ;
    PUSH32(esp, 0x004D753Cu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D753C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D753E: ;
    ecx = MEM32(0x90E4F0);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D754Du); RECOMP_ABI_CALL(0x004D736Fu, sub_004D736F); /* call 0x004D736F */

loc_004D754D: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7551
 * Original: 0x004D7551 - 0x004D7574 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7551(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7551: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D755F; /* jne: not equal / not zero */

loc_004D755A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D755F: ;
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D756Cu); RECOMP_ABI_CALL(0x004C1102u, sub_004C1102); /* call 0x004C1102 */

loc_004D756C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7572u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D7572: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7574
 * Original: 0x004D7574 - 0x004D7597 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7574(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7574: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D7582; /* jne: not equal / not zero */

loc_004D757D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D7582: ;
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D758Fu); RECOMP_ABI_CALL(0x004C10FCu, sub_004C10FC); /* call 0x004C10FC */

loc_004D758F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7595u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D7595: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7597
 * Original: 0x004D7597 - 0x004D75B2 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7597(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7597: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D75AD; /* je: equal / zero */

loc_004D75A0: ;
    eax = MEM32(0x90E4F0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D75ADu); RECOMP_ABI_CALL(0x004C62F2u, sub_004C62F2); /* call 0x004C62F2 */

loc_004D75AD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D75B2
 * Original: 0x004D75B2 - 0x004D75D3 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D75B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D75B2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D75C0; /* jne: not equal / not zero */

loc_004D75BB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D75C0: ;
    ecx = MEM32(0x90E4F0);
    PUSH32(esp, 0x004D75CBu); RECOMP_ABI_CALL(0x004D73D4u, sub_004D73D4); /* call 0x004D73D4 */

loc_004D75CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D75D1u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D75D1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D75D3
 * Original: 0x004D75D3 - 0x004D75EF (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D75D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D75D3: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86B5D8;
    if (CMP_EQ(_fa, _fb)) goto loc_004D75E7; /* je: equal / zero */

loc_004D75E2: ;
    PUSH32(esp, 0x004D75E7u); RECOMP_ABI_CALL(0x004D729Du, sub_004D729D); /* call 0x004D729D */

loc_004D75E7: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D75EF
 * Original: 0x004D75EF - 0x004D763F (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D75EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D75EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7601u); RECOMP_ABI_CALL(0x004C1147u, sub_004C1147); /* call 0x004C1147 */

loc_004D7601: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D760Cu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D760C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D7630; /* jbe: below or equal (unsigned <=) */

loc_004D7612: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D761Bu); RECOMP_ABI_CALL(0x004C1194u, sub_004C1194); /* call 0x004C1194 */

loc_004D761B: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D762Bu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D762B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D7612; /* jb: below (unsigned <) */

loc_004D7630: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D763F
 * Original: 0x004D763F - 0x004D768F (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D763F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D763F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7651u); RECOMP_ABI_CALL(0x004C1131u, sub_004C1131); /* call 0x004C1131 */

loc_004D7651: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D765Cu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D765C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D7680; /* jbe: below or equal (unsigned <=) */

loc_004D7662: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D766Bu); RECOMP_ABI_CALL(0x004C1135u, sub_004C1135); /* call 0x004C1135 */

loc_004D766B: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D767Bu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D767B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D7662; /* jb: below (unsigned <) */

loc_004D7680: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D768F
 * Original: 0x004D768F - 0x004D76B3 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D768F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D768F: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D76A0; /* jne: not equal / not zero */

loc_004D7699: ;
    PUSH32(esp, 0x004D769Eu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D769E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D76A0: ;
    ecx = MEM32(0x90E4F0);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D76AFu); RECOMP_ABI_CALL(0x004D75EFu, sub_004D75EF); /* call 0x004D75EF */

loc_004D76AF: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D76B3
 * Original: 0x004D76B3 - 0x004D76D7 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D76B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D76B3: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D76C4; /* jne: not equal / not zero */

loc_004D76BD: ;
    PUSH32(esp, 0x004D76C2u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D76C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D76C4: ;
    ecx = MEM32(0x90E4F0);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D76D3u); RECOMP_ABI_CALL(0x004D763Fu, sub_004D763F); /* call 0x004D763F */

loc_004D76D3: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D76D7
 * Original: 0x004D76D7 - 0x004D76F3 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D76D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D76D7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D76DFu); RECOMP_ABI_CALL(0x004D75D3u, sub_004D75D3); /* call 0x004D75D3 */

loc_004D76DF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D76ED; /* je: equal / zero */

loc_004D76E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D76ECu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D76EC: ;
    POP32(esp, ecx);

loc_004D76ED: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D76F3
 * Original: 0x004D76F3 - 0x004D7706 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D76F3(void)
{

loc_004D76F3: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86B738);
    MEM32(0x90E4F0) = eax;
    PUSH32(esp, 0x004D7705u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D7705: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D7706
 * Original: 0x004D7706 - 0x004D7722 (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7706(void)
{

loc_004D7706: ;
    PUSH32(esp, 0x004D770Bu); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004D770B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D7711u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D770Fu); } /* indirect call */
    }

loc_004D7711: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D771Bu); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D771B: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D7722
 * Original: 0x004D7722 - 0x004D772E (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7722(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7722: ;
    PUSH32(esp, 0x004D7727u); RECOMP_ABI_CALL(0x004DC9FAu, sub_004DC9FA); /* call 0x004DC9FA */

loc_004D7727: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_004D773A
 * Original: 0x004D773A - 0x004D774D (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D773A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D773A: ;
    PUSH32(esp, 0x004D773Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D773F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D7746u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7743u); } /* indirect call */
    }

loc_004D7746: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_004D774D
 * Original: 0x004D774D - 0x004D7771 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D774D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D774D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D775E; /* jne: not equal / not zero */

loc_004D7757: ;
    PUSH32(esp, 0x004D775Cu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D775C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D775E: ;
    ecx = MEM32(0x90E4F4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D776Du); RECOMP_ABI_CALL(0x004D7706u, sub_004D7706); /* call 0x004D7706 */

loc_004D776D: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7771
 * Original: 0x004D7771 - 0x004D7792 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7771: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D777F; /* jne: not equal / not zero */

loc_004D777A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D777F: ;
    ecx = MEM32(0x90E4F4);
    PUSH32(esp, 0x004D778Au); RECOMP_ABI_CALL(0x004D7722u, sub_004D7722); /* call 0x004D7722 */

loc_004D778A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7790u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D7790: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7792
 * Original: 0x004D7792 - 0x004D77B0 (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7792(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7792: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D779Au); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D779A: ;
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x004D77A2u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004D77A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x004D77AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D77A7u); } /* indirect call */
    }

loc_004D77AA: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D77B0
 * Original: 0x004D77B0 - 0x004D77D2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D77B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D77B0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D77CD; /* je: equal / zero */

loc_004D77B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D77C0u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D77C0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4F4);
    PUSH32(esp, 0x004D77CDu); RECOMP_ABI_CALL(0x004D773Au, sub_004D773A); /* call 0x004D773A */

loc_004D77CD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D77D2
 * Original: 0x004D77D2 - 0x004D77E5 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D77D2(void)
{

loc_004D77D2: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86B7E8);
    MEM32(0x90E4F4) = eax;
    PUSH32(esp, 0x004D77E4u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D77E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D77E5
 * Original: 0x004D77E5 - 0x004D77F6 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D77E5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D77E5: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86B810;
    MEM8(eax + 4) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_004D77F6
 * Original: 0x004D77F6 - 0x004D782B (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D77F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D77F6: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D77FEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D77FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004D780Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D780A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D781C; /* je: equal / zero */

loc_004D7811: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D781Au); RECOMP_ABI_CALL(0x004CAA91u, sub_004CAA91); /* call 0x004CAA91 */

loc_004D781A: ;
    goto loc_004D781E;

loc_004D781C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D781E: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D7829u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D7829: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D782B
 * Original: 0x004D782B - 0x004D784A (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D782B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D782B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D7837u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D7837: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7844; /* je: equal / zero */

loc_004D783E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D7844u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7842u); } /* indirect call */
    }

loc_004D7844: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7852
 * Original: 0x004D7852 - 0x004D786C (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7852(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7852: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D7866u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D7866: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D786C
 * Original: 0x004D786C - 0x004D7899 (45 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D786C(void)
{

loc_004D786C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D787Bu); RECOMP_ABI_CALL(0x004CAB4Du, sub_004CAB4D); /* call 0x004CAB4D */

loc_004D787B: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D7887u); RECOMP_ABI_CALL(0x004CAB1Cu, sub_004CAB1C); /* call 0x004CAB1C */

loc_004D7887: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7891u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D7891: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D7899
 * Original: 0x004D7899 - 0x004D78B2 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7899(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7899: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D78AD; /* je: equal / zero */

loc_004D78A2: ;
    ecx = MEM32(0x90E4F8);
    PUSH32(esp, 0x004D78ADu); RECOMP_ABI_CALL(0x004D77F6u, sub_004D77F6); /* call 0x004D77F6 */

loc_004D78AD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D78B2
 * Original: 0x004D78B2 - 0x004D78CB (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D78B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D78B2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D78C6; /* je: equal / zero */

loc_004D78BB: ;
    ecx = MEM32(0x90E4F8);
    PUSH32(esp, 0x004D78C6u); RECOMP_ABI_CALL(0x004D782Bu, sub_004D782B); /* call 0x004D782B */

loc_004D78C6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D78CB
 * Original: 0x004D78CB - 0x004D78EF (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D78CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D78CB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D78EA; /* je: equal / zero */

loc_004D78D4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D78DBu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D78DB: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4F8);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D78EAu); RECOMP_ABI_CALL(0x004C1C69u, sub_004C1C69); /* call 0x004C1C69 */

loc_004D78EA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D78EF
 * Original: 0x004D78EF - 0x004D791D (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D78EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D78EF: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D7900; /* jne: not equal / not zero */

loc_004D78F9: ;
    PUSH32(esp, 0x004D78FEu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D78FE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D7900: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D7907u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D7907: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4F8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D7919u); RECOMP_ABI_CALL(0x004D786Cu, sub_004D786C); /* call 0x004D786C */

loc_004D7919: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D791D
 * Original: 0x004D791D - 0x004D7939 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D791D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D791D: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86B810;
    if (CMP_EQ(_fa, _fb)) goto loc_004D7931; /* je: equal / zero */

loc_004D792C: ;
    PUSH32(esp, 0x004D7931u); RECOMP_ABI_CALL(0x004D782Bu, sub_004D782B); /* call 0x004D782B */

loc_004D7931: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7939
 * Original: 0x004D7939 - 0x004D7989 (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D7939(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7939: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D794Bu); RECOMP_ABI_CALL(0x004CAB0Fu, sub_004CAB0F); /* call 0x004CAB0F */

loc_004D794B: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7956u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D7956: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D797A; /* jle: less or equal (signed <=) */

loc_004D795C: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7965u); RECOMP_ABI_CALL(0x004CAB1Cu, sub_004CAB1C); /* call 0x004CAB1C */

loc_004D7965: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7975u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D7975: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004D795C; /* jl: less (signed <) */

loc_004D797A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D7989
 * Original: 0x004D7989 - 0x004D79AD (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7989(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7989: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D799A; /* jne: not equal / not zero */

loc_004D7993: ;
    PUSH32(esp, 0x004D7998u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D7998: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D799A: ;
    ecx = MEM32(0x90E4F8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D79A9u); RECOMP_ABI_CALL(0x004D7939u, sub_004D7939); /* call 0x004D7939 */

loc_004D79A9: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D79AD
 * Original: 0x004D79AD - 0x004D79C9 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D79AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D79AD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D79B5u); RECOMP_ABI_CALL(0x004D791Du, sub_004D791D); /* call 0x004D791D */

loc_004D79B5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D79C3; /* je: equal / zero */

loc_004D79BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D79C2u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D79C2: ;
    POP32(esp, ecx);

loc_004D79C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D79C9
 * Original: 0x004D79C9 - 0x004D79DC (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D79C9(void)
{

loc_004D79C9: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86B868);
    MEM32(0x90E4F8) = eax;
    PUSH32(esp, 0x004D79DBu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D79DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D79DC
 * Original: 0x004D79DC - 0x004D79E9 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D79DC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D79DC: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86B898;
    esp += 4; return; /* ret */

}

/**
 * sub_004D79E9
 * Original: 0x004D79E9 - 0x004D7A1E (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D79E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D79E9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D79F1u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D79F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x004D79FDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D79FD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7A0F; /* je: equal / zero */

loc_004D7A04: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D7A0Du); RECOMP_ABI_CALL(0x004C4316u, sub_004C4316); /* call 0x004C4316 */

loc_004D7A0D: ;
    goto loc_004D7A11;

loc_004D7A0F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D7A11: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D7A1Cu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D7A1C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7A1E
 * Original: 0x004D7A1E - 0x004D7A3D (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7A1E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7A1E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D7A2Au); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D7A2A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7A37; /* je: equal / zero */

loc_004D7A31: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D7A37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7A35u); } /* indirect call */
    }

loc_004D7A37: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7A3D
 * Original: 0x004D7A3D - 0x004D7AA6 (105 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7A3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7A3D: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D7A46u); RECOMP_ABI_CALL(0x004C44C2u, sub_004C44C2); /* call 0x004C44C2 */

loc_004D7A46: ;
    ecx = MEM32(esp + 8);
    esi = MEM32(ecx + 0x14);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D7A54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7A51u); } /* indirect call */
    }

loc_004D7A54: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D7A5Fu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D7A5F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C44E3(); return; /* tail jmp 0x004C44E3 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C453B(); return; /* tail jmp 0x004C453B */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C4576(); return; /* tail jmp 0x004C4576 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C45B3(); return; /* tail jmp 0x004C45B3 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C45EC(); return; /* tail jmp 0x004C45EC */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C4609(); return; /* tail jmp 0x004C4609 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C4626(); return; /* tail jmp 0x004C4626 */

}

/**
 * sub_004D7AA6
 * Original: 0x004D7AA6 - 0x004D7ABF (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7AA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7AA6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7ABA; /* je: equal / zero */

loc_004D7AAF: ;
    ecx = MEM32(0x90E4FC);
    PUSH32(esp, 0x004D7ABAu); RECOMP_ABI_CALL(0x004D79E9u, sub_004D79E9); /* call 0x004D79E9 */

loc_004D7ABA: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7ABF
 * Original: 0x004D7ABF - 0x004D7AD8 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7ABF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7ABF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7AD3; /* je: equal / zero */

loc_004D7AC8: ;
    ecx = MEM32(0x90E4FC);
    PUSH32(esp, 0x004D7AD3u); RECOMP_ABI_CALL(0x004D7A1Eu, sub_004D7A1E); /* call 0x004D7A1E */

loc_004D7AD3: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7AD8
 * Original: 0x004D7AD8 - 0x004D7AF3 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7AD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7AD8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7AEE; /* je: equal / zero */

loc_004D7AE1: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7AEEu); RECOMP_ABI_CALL(0x004C44C6u, sub_004C44C6); /* call 0x004C44C6 */

loc_004D7AEE: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7AF3
 * Original: 0x004D7AF3 - 0x004D7B0E (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7AF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7AF3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7B09; /* je: equal / zero */

loc_004D7AFC: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7B09u); RECOMP_ABI_CALL(0x004C44E3u, sub_004C44E3); /* call 0x004C44E3 */

loc_004D7B09: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7B0E
 * Original: 0x004D7B0E - 0x004D7B29 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7B0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7B0E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7B24; /* je: equal / zero */

loc_004D7B17: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7B24u); RECOMP_ABI_CALL(0x004C453Bu, sub_004C453B); /* call 0x004C453B */

loc_004D7B24: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7B29
 * Original: 0x004D7B29 - 0x004D7B44 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7B29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7B29: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7B3F; /* je: equal / zero */

loc_004D7B32: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7B3Fu); RECOMP_ABI_CALL(0x004C4576u, sub_004C4576); /* call 0x004C4576 */

loc_004D7B3F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7B44
 * Original: 0x004D7B44 - 0x004D7B5F (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7B44(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7B44: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7B5A; /* je: equal / zero */

loc_004D7B4D: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7B5Au); RECOMP_ABI_CALL(0x004C45B3u, sub_004C45B3); /* call 0x004C45B3 */

loc_004D7B5A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7B5F
 * Original: 0x004D7B5F - 0x004D7B7A (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7B5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7B5F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7B75; /* je: equal / zero */

loc_004D7B68: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7B75u); RECOMP_ABI_CALL(0x004C45ECu, sub_004C45EC); /* call 0x004C45EC */

loc_004D7B75: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7B7A
 * Original: 0x004D7B7A - 0x004D7B95 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7B7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7B7A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7B90; /* je: equal / zero */

loc_004D7B83: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7B90u); RECOMP_ABI_CALL(0x004C4609u, sub_004C4609); /* call 0x004C4609 */

loc_004D7B90: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7B95
 * Original: 0x004D7B95 - 0x004D7BB0 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7B95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7B95: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7BAB; /* je: equal / zero */

loc_004D7B9E: ;
    eax = MEM32(0x90E4FC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D7BABu); RECOMP_ABI_CALL(0x004C4626u, sub_004C4626); /* call 0x004C4626 */

loc_004D7BAB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7BB0
 * Original: 0x004D7BB0 - 0x004D7BCC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86B898;
    if (CMP_EQ(_fa, _fb)) goto loc_004D7BC4; /* je: equal / zero */

loc_004D7BBF: ;
    PUSH32(esp, 0x004D7BC4u); RECOMP_ABI_CALL(0x004D7A1Eu, sub_004D7A1E); /* call 0x004D7A1E */

loc_004D7BC4: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7BCC
 * Original: 0x004D7BCC - 0x004D7BF1 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7BCC(void)
{

loc_004D7BCC: ;
    PUSH32(esp, 0x004D7BD1u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D7BD1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D7BD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7BD5u); } /* indirect call */
    }

loc_004D7BD8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D7BE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7BE0u); } /* indirect call */
    }

loc_004D7BE3: ;
    PUSH32(esp, eax);
    ecx = 0x90E468;
    PUSH32(esp, 0x004D7BEEu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004D7BEE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D7BF1
 * Original: 0x004D7BF1 - 0x004D7C13 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7BF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7BF1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7C0E; /* je: equal / zero */

loc_004D7BFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D7C01u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D7C01: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4FC);
    PUSH32(esp, 0x004D7C0Eu); RECOMP_ABI_CALL(0x004D7BCCu, sub_004D7BCC); /* call 0x004D7BCC */

loc_004D7C0E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7C13
 * Original: 0x004D7C13 - 0x004D7C2F (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7C13(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7C13: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D7C1Bu); RECOMP_ABI_CALL(0x004D7BB0u, sub_004D7BB0); /* call 0x004D7BB0 */

loc_004D7C1B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D7C29; /* je: equal / zero */

loc_004D7C22: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D7C28u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D7C28: ;
    POP32(esp, ecx);

loc_004D7C29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D7C2F
 * Original: 0x004D7C2F - 0x004D7C46 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7C2F(void)
{

loc_004D7C2F: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86B958);
    MEM32(0x90E4FC) = eax;
    PUSH32(esp, 0x004D7C41u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D7C41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D7C46
 * Original: 0x004D7C46 - 0x004D7C57 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7C46(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7C46: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86B9B8;
    MEM8(eax + 4) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_004D7C57
 * Original: 0x004D7C57 - 0x004D7C91 (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7C57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7C57: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D7C5Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D7C5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x004D7C6Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D7C6B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7C7B; /* je: equal / zero */

loc_004D7C72: ;
    ecx = eax;
    PUSH32(esp, 0x004D7C79u); RECOMP_ABI_CALL(0x004C8169u, sub_004C8169); /* call 0x004C8169 */

loc_004D7C79: ;
    goto loc_004D7C7D;

loc_004D7C7B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D7C7D: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D7C88u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D7C88: ;
    ecx = MEM32(esi + 8);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C80F3(); return; /* tail jmp 0x004C80F3 */

}

/**
 * sub_004D7C91
 * Original: 0x004D7C91 - 0x004D7CB0 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7C91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7C91: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D7C9Du); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D7C9D: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7CAA; /* je: equal / zero */

loc_004D7CA4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D7CAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D7CA8u); } /* indirect call */
    }

loc_004D7CAA: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7CB8
 * Original: 0x004D7CB8 - 0x004D7D1E (102 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D7CB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7CB8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x866F34);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7CCBu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004D7CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_004D7D05; /* jne: not equal / not zero */

loc_004D7CD1: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004D7CF5; /* je: equal / zero */

loc_004D7CDA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004D7CEE; /* je: equal / zero */

loc_004D7CDD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004D7CE7; /* je: equal / zero */

loc_004D7CE0: ;
    eax = 0x829E34;
    goto loc_004D7CFA;

loc_004D7CE7: ;
    eax = 0x86B9EC;
    goto loc_004D7CFA;

loc_004D7CEE: ;
    eax = 0x86B9E4;
    goto loc_004D7CFA;

loc_004D7CF5: ;
    eax = 0x86B9DC;

loc_004D7CFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x86B9C0);
    goto loc_004D7D11;

loc_004D7D05: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));

loc_004D7D11: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7D16u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D7D16: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D7D1E
 * Original: 0x004D7D1E - 0x004D7D37 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7D1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7D1E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7D32; /* je: equal / zero */

loc_004D7D27: ;
    ecx = MEM32(0x90E500);
    PUSH32(esp, 0x004D7D32u); RECOMP_ABI_CALL(0x004D7C57u, sub_004D7C57); /* call 0x004D7C57 */

loc_004D7D32: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7D37
 * Original: 0x004D7D37 - 0x004D7D50 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7D37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7D37: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7D4B; /* je: equal / zero */

loc_004D7D40: ;
    ecx = MEM32(0x90E500);
    PUSH32(esp, 0x004D7D4Bu); RECOMP_ABI_CALL(0x004D7C91u, sub_004D7C91); /* call 0x004D7C91 */

loc_004D7D4B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7D50
 * Original: 0x004D7D50 - 0x004D7D6B (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D7D50: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D7D66; /* je: equal / zero */

loc_004D7D59: ;
    eax = MEM32(0x90E500);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D7D66u); RECOMP_ABI_CALL(0x004C80F3u, sub_004C80F3); /* call 0x004C80F3 */

loc_004D7D66: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D7D6B
 * Original: 0x004D7D6B - 0x004D7D87 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7D6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7D6B: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86B9B8;
    if (CMP_EQ(_fa, _fb)) goto loc_004D7D7F; /* je: equal / zero */

loc_004D7D7A: ;
    PUSH32(esp, 0x004D7D7Fu); RECOMP_ABI_CALL(0x004D7C91u, sub_004D7C91); /* call 0x004D7C91 */

loc_004D7D7F: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D7D87
 * Original: 0x004D7D87 - 0x004D7D9A (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7D87(void)
{

loc_004D7D87: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86BA30);
    MEM32(0x90E500) = eax;
    PUSH32(esp, 0x004D7D99u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D7D99: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D7D9A
 * Original: 0x004D7D9A - 0x004D7DB6 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D7D9A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7D9A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D7DA2u); RECOMP_ABI_CALL(0x004D7D6Bu, sub_004D7D6B); /* call 0x004D7D6B */

loc_004D7DA2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D7DB0; /* je: equal / zero */

loc_004D7DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D7DAFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D7DAF: ;
    POP32(esp, ecx);

loc_004D7DB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D7DB6
 * Original: 0x004D7DB6 - 0x004D7E95 (223 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D7DB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7DB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7DC5u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D7DC5: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(0x8D7E0C));
    ecx = ebp + -16;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7DD6u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7DD6: ;
    PUSH32(esp, MEM32(0x8D7E10));
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7DE4u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7DE4: ;
    PUSH32(esp, MEM32(0x8D7E14));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7DF2u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7DF2: ;
    PUSH32(esp, MEM32(0x8D7E18));
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E00u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7E00: ;
    esi = MEM32(ebp + 8);
    ecx = ZX8(MEM8(esi + 2));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esi));
    SET_LO8(eax, MEM8(esi + 1));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ZX8(MEM8(esi + 3));
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E22u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D7E22: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E2Du); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7E2D: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E36u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7E36: ;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E41u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7E41: ;
    eax = esi + 0x44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E4Au); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7E4A: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E55u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7E55: ;
    _fb = (uint32_t)(0x144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x144;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E61u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7E61: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E6Cu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7E6C: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E77u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D7E77: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E7Fu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D7E7F: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E87u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D7E87: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7E8Fu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D7E8F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D7E95
 * Original: 0x004D7E95 - 0x004D814F (698 bytes, 209 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D7E95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D7E95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7EA4u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D7EA4: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(0x8D7E1C));
    ecx = ebp + -60;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7EB5u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7EB5: ;
    PUSH32(esp, MEM32(0x8D7E20));
    ecx = ebp + -56;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7EC3u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7EC3: ;
    PUSH32(esp, MEM32(0x8D7E24));
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7ED1u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7ED1: ;
    PUSH32(esp, MEM32(0x8D7E28));
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7EDFu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7EDF: ;
    PUSH32(esp, MEM32(0x8D7E2C));
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7EEDu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7EED: ;
    PUSH32(esp, MEM32(0x8D7E30));
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7EFBu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7EFB: ;
    PUSH32(esp, MEM32(0x8D7E34));
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F09u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F09: ;
    PUSH32(esp, MEM32(0x8D7E38));
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F17u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F17: ;
    PUSH32(esp, MEM32(0x8D7E3C));
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F25u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F25: ;
    PUSH32(esp, MEM32(0x8D7E40));
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F33u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F33: ;
    PUSH32(esp, MEM32(0x8D7E44));
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F41u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F41: ;
    PUSH32(esp, MEM32(0x8D7E48));
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F4Fu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F4F: ;
    PUSH32(esp, MEM32(0x8D7E4C));
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F5Du); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F5D: ;
    PUSH32(esp, MEM32(0x8D7E50));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F6Bu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F6B: ;
    PUSH32(esp, MEM32(0x8D7E54));
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F79u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D7F79: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F82u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7F82: ;
    PUSH32(esp, eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F8Du); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7F8D: ;
    eax = esi + 0x33;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7F96u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7F96: ;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FA1u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7FA1: ;
    eax = esi + 0xCC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FADu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7FAD: ;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FB8u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7FB8: ;
    eax = esi + 0xFF;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FC4u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7FC4: ;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FCFu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7FCF: ;
    eax = esi + 0x132;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FDEu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7FDE: ;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FE9u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D7FE9: ;
    eax = esi + 0x18F;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D7FF5u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D7FF5: ;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8000u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D8000: ;
    eax = esi + 0x165;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D800Cu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D800C: ;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8017u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D8017: ;
    eax = esi + 0x184;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8023u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8023: ;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D802Eu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D802E: ;
    eax = esi + 0x1F5;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D803Du); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D803D: ;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8048u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D8048: ;
    eax = esi + 0x209;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8054u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8054: ;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D805Fu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D805F: ;
    PUSH32(esp, MEM32(esi + 0x220));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D806Au); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D806A: ;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8075u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D8075: ;
    PUSH32(esp, MEM32(esi + 0x224));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8080u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D8080: ;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D808Bu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D808B: ;
    eax = esi + 0x66;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8097u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8097: ;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80A2u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D80A2: ;
    PUSH32(esp, MEM32(esi + 0x228));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80ADu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D80AD: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80B8u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D80B8: ;
    PUSH32(esp, MEM32(esi + 0x22C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80C3u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D80C3: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80CEu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D80CE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80D9u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D80D9: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80E1u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D80E1: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80E9u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D80E9: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80F1u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D80F1: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D80F9u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D80F9: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8101u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8101: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8109u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8109: ;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8111u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8111: ;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8119u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8119: ;
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8121u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8121: ;
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8129u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8129: ;
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8131u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8131: ;
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8139u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8139: ;
    ecx = ebp + -56;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8141u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8141: ;
    ecx = ebp + -60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8149u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8149: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D814F
 * Original: 0x004D814F - 0x004D83DB (652 bytes, 207 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D814F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D814F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D815Du); RECOMP_ABI_CALL(0x005070C0u, sub_005070C0); /* call 0x005070C0 */

loc_004D815D: ;
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8165u); RECOMP_ABI_CALL(0x00504400u, sub_00504400); /* call 0x00504400 */

loc_004D8165: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D83D7; /* je: equal / zero */

loc_004D816D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8177u); RECOMP_ABI_CALL(0x005070C0u, sub_005070C0); /* call 0x005070C0 */

loc_004D8177: ;
    POP32(esp, ecx);
    PUSH32(esp, MEM32(0x8D7E1C));
    ecx = ebp + -52;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8188u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8188: ;
    PUSH32(esp, MEM32(0x8D7E20));
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8196u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8196: ;
    PUSH32(esp, MEM32(0x8D7E24));
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D81A4u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D81A4: ;
    PUSH32(esp, MEM32(0x8D7E28));
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D81B2u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D81B2: ;
    PUSH32(esp, MEM32(0x8D7E2C));
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D81C0u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D81C0: ;
    PUSH32(esp, MEM32(0x8D7E30));
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D81CEu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D81CE: ;
    PUSH32(esp, MEM32(0x8D7E34));
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D81DCu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D81DC: ;
    PUSH32(esp, MEM32(0x8D7E38));
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D81EAu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D81EA: ;
    PUSH32(esp, MEM32(0x8D7E3C));
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D81F8u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D81F8: ;
    PUSH32(esp, MEM32(0x8D7E40));
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8206u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8206: ;
    PUSH32(esp, MEM32(0x8D7E44));
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8214u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8214: ;
    PUSH32(esp, MEM32(0x8D7E48));
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8222u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8222: ;
    PUSH32(esp, MEM32(0x8D7E4C));
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8230u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8230: ;
    edi = 0x90E508;
    PUSH32(esp, edi);
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8240u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8240: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8249u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D8249: ;
    PUSH32(esp, 0x90E53B);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8258u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8258: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8261u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D8261: ;
    PUSH32(esp, 0x90E5D4);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8270u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8270: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8279u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D8279: ;
    PUSH32(esp, 0x90E607);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8288u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8288: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8291u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D8291: ;
    PUSH32(esp, 0x90E63A);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82A0u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D82A0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82A9u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D82A9: ;
    PUSH32(esp, 0x90E697);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82B8u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D82B8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82C1u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D82C1: ;
    PUSH32(esp, 0x90E66D);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82D0u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D82D0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82D9u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D82D9: ;
    PUSH32(esp, 0x90E68C);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82E8u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D82E8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D82F1u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D82F1: ;
    PUSH32(esp, 0x90E6FD);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8300u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8300: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8309u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D8309: ;
    PUSH32(esp, 0x90E711);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8318u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8318: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8321u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D8321: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D832Bu); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D832B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8334u); RECOMP_ABI_CALL(0x0050C4B0u, sub_0050C4B0); /* call 0x0050C4B0 */

loc_004D8334: ;
    MEM32(0x90E728) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8343u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8343: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D834Cu); RECOMP_ABI_CALL(0x0050C4B0u, sub_0050C4B0); /* call 0x0050C4B0 */

loc_004D834C: ;
    MEM32(0x90E72C) = eax;
    PUSH32(esp, 0x90E56E);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8360u); RECOMP_ABI_CALL(0x00505880u, sub_00505880); /* call 0x00505880 */

loc_004D8360: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8369u); RECOMP_ABI_CALL(0x0050D580u, sub_0050D580); /* call 0x0050D580 */

loc_004D8369: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8371u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8371: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8379u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8379: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8381u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8381: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8389u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8389: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8391u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8391: ;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8399u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8399: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D83A1u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D83A1: ;
    ecx = ebp + -32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D83A9u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D83A9: ;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D83B1u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D83B1: ;
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D83B9u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D83B9: ;
    ecx = ebp + -44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D83C1u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D83C1: ;
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D83C9u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D83C9: ;
    ecx = ebp + -52;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D83D1u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D83D1: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D83D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D83DB
 * Original: 0x004D83DB - 0x004D83EF (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D83DB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D83DB: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x86BA50;
    MEM8(eax + 4) = LO8(ecx);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004D83EF
 * Original: 0x004D83EF - 0x004D841A (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D83EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D83EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D83F7u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D83F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004D8403u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D8403: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8413; /* je: equal / zero */

loc_004D840A: ;
    ecx = eax;
    PUSH32(esp, 0x004D8411u); RECOMP_ABI_CALL(0x004C1EE4u, sub_004C1EE4); /* call 0x004C1EE4 */

loc_004D8411: ;
    goto loc_004D8415;

loc_004D8413: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D8415: ;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D841A
 * Original: 0x004D841A - 0x004D845B (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D841A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D841A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8431; /* je: equal / zero */

loc_004D8425: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    MEM8(esi + 4) = LO8(ebx);
    PUSH32(esp, 0x004D8431u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D8431: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D843E; /* je: equal / zero */

loc_004D8438: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D843Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D843Cu); } /* indirect call */
    }

loc_004D843E: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    MEM32(esi + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_004D8455; /* je: equal / zero */

loc_004D8446: ;
    PUSH32(esp, 0x004D844Bu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D844B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D8455u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8452u); } /* indirect call */
    }

loc_004D8455: ;
    MEM32(esi + 0xC) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8463
 * Original: 0x004D8463 - 0x004D8491 (46 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8463(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8463: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D8476u); RECOMP_ABI_CALL(0x004C1F6Cu, sub_004C1F6C); /* call 0x004C1F6C */

loc_004D8476: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D848B; /* je: equal / zero */

loc_004D847A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    MEM8(esi + 4) = 1;
    PUSH32(esp, 0x004D8487u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D8487: ;
    SET_LO8(eax, 1);
    goto loc_004D848D;

loc_004D848B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004D848D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D84D1
 * Original: 0x004D84D1 - 0x004D8518 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D84D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D84D1: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D84E9; /* je: equal / zero */

loc_004D84DA: ;
    PUSH32(esp, 0x004D84DFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D84DF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0xC));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D84E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D84E6u); } /* indirect call */
    }

loc_004D84E9: ;
    PUSH32(esp, 0x004D84EEu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D84EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D84FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D84FDu); } /* indirect call */
    }

loc_004D84FF: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x004D8511u); RECOMP_ABI_CALL(0x004C204Cu, sub_004C204C); /* call 0x004C204C */

loc_004D8511: ;
    eax = MEM32(esi + 0xC);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8518
 * Original: 0x004D8518 - 0x004D8532 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8518(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8518: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D852Cu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D852C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D8532
 * Original: 0x004D8532 - 0x004D854B (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8532(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8532: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8546; /* je: equal / zero */

loc_004D853B: ;
    ecx = MEM32(0x90E738);
    PUSH32(esp, 0x004D8546u); RECOMP_ABI_CALL(0x004D83EFu, sub_004D83EF); /* call 0x004D83EF */

loc_004D8546: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D854B
 * Original: 0x004D854B - 0x004D8564 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D854B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D854B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D855F; /* je: equal / zero */

loc_004D8554: ;
    ecx = MEM32(0x90E738);
    PUSH32(esp, 0x004D855Fu); RECOMP_ABI_CALL(0x004D841Au, sub_004D841A); /* call 0x004D841A */

loc_004D855F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8564
 * Original: 0x004D8564 - 0x004D85A9 (69 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D8564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8564: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8578; /* jne: not equal / not zero */

loc_004D8571: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8576u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D8576: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D8578: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8580u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D8580: ;
    PUSH32(esp, 0);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8589u); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D8589: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D859Fu); RECOMP_ABI_CALL(0x004C1F59u, sub_004C1F59); /* call 0x004C1F59 */

loc_004D859F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D85A5u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D85A5: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D85A9
 * Original: 0x004D85A9 - 0x004D85DC (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D85A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D85A9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D85B7; /* jne: not equal / not zero */

loc_004D85B2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D85B7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D85BEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D85BE: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D85C7u); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D85C7: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E738);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D85D4u); RECOMP_ABI_CALL(0x004D8463u, sub_004D8463); /* call 0x004D8463 */

loc_004D85D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D85DAu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D85DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D85DC
 * Original: 0x004D85DC - 0x004D85FF (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D85DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D85DC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D85EA; /* jne: not equal / not zero */

loc_004D85E5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D85EA: ;
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D85F7u); RECOMP_ABI_CALL(0x004C1F9Au, sub_004C1F9A); /* call 0x004C1F9A */

loc_004D85F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D85FDu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D85FD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D85FF
 * Original: 0x004D85FF - 0x004D862B (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D85FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D85FF: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D860D; /* jne: not equal / not zero */

loc_004D8608: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D860D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D8614u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D8614: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D8623u); RECOMP_ABI_CALL(0x004C1FADu, sub_004C1FAD); /* call 0x004C1FAD */

loc_004D8623: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8629u); RECOMP_ABI_CALL(0x004D7DB6u, sub_004D7DB6); /* call 0x004D7DB6 */

loc_004D8629: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D862B
 * Original: 0x004D862B - 0x004D865C (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D862B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D862B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8657; /* je: equal / zero */

loc_004D8634: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D863Cu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D863C: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D8645u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D8645: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D8656u); RECOMP_ABI_CALL(0x004C1FC0u, sub_004C1FC0); /* call 0x004C1FC0 */

loc_004D8656: ;
    POP32(esp, esi);

loc_004D8657: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D865C
 * Original: 0x004D865C - 0x004D867F (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D865C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D865C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D866A; /* jne: not equal / not zero */

loc_004D8665: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D866A: ;
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D8677u); RECOMP_ABI_CALL(0x004C1FF3u, sub_004C1FF3); /* call 0x004C1FF3 */

loc_004D8677: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D867Du); RECOMP_ABI_CALL(0x004D7E95u, sub_004D7E95); /* call 0x004D7E95 */

loc_004D867D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D867F
 * Original: 0x004D867F - 0x004D86B0 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D867F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D867F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D86AB; /* je: equal / zero */

loc_004D8688: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D8690u); RECOMP_ABI_CALL(0x004D814Fu, sub_004D814F); /* call 0x004D814F */

loc_004D8690: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D8699u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D8699: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D86AAu); RECOMP_ABI_CALL(0x004C2006u, sub_004C2006); /* call 0x004C2006 */

loc_004D86AA: ;
    POP32(esp, esi);

loc_004D86AB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D86B0
 * Original: 0x004D86B0 - 0x004D86D3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D86B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D86B0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D86BE; /* jne: not equal / not zero */

loc_004D86B9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D86BE: ;
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D86CBu); RECOMP_ABI_CALL(0x004C205Fu, sub_004C205F); /* call 0x004C205F */

loc_004D86CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D86D1u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D86D1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D86D3
 * Original: 0x004D86D3 - 0x004D8704 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D86D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D86D3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D86FF; /* je: equal / zero */

loc_004D86DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D86E4u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D86E4: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D86EDu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D86ED: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D86FEu); RECOMP_ABI_CALL(0x004C2072u, sub_004C2072); /* call 0x004C2072 */

loc_004D86FE: ;
    POP32(esp, esi);

loc_004D86FF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8704
 * Original: 0x004D8704 - 0x004D874A (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8704(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8704: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8712; /* jne: not equal / not zero */

loc_004D870D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D8712: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x004D871Bu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D871B: ;
    PUSH32(esp, 1);
    esi = eax;
    PUSH32(esp, 0x004D8724u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D8724: ;
    PUSH32(esp, 0);
    edi = eax;
    PUSH32(esp, 0x004D872Du); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D872D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x90E738);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D8740u); RECOMP_ABI_CALL(0x004C2039u, sub_004C2039); /* call 0x004C2039 */

loc_004D8740: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8746u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D8746: ;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D874A
 * Original: 0x004D874A - 0x004D8774 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D874A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D874A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8758; /* jne: not equal / not zero */

loc_004D8753: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D8758: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D875Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D875F: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E738);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D876Cu); RECOMP_ABI_CALL(0x004D84D1u, sub_004D84D1); /* call 0x004D84D1 */

loc_004D876C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8772u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8772: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8774
 * Original: 0x004D8774 - 0x004D8790 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8774(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8774: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86BA50;
    if (CMP_EQ(_fa, _fb)) goto loc_004D8788; /* je: equal / zero */

loc_004D8783: ;
    PUSH32(esp, 0x004D8788u); RECOMP_ABI_CALL(0x004D841Au, sub_004D841A); /* call 0x004D841A */

loc_004D8788: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8790
 * Original: 0x004D8790 - 0x004D87A3 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8790(void)
{

loc_004D8790: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86BB18);
    MEM32(0x90E738) = eax;
    PUSH32(esp, 0x004D87A2u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D87A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D87A3
 * Original: 0x004D87A3 - 0x004D87BF (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D87A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D87A3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D87ABu); RECOMP_ABI_CALL(0x004D8774u, sub_004D8774); /* call 0x004D8774 */

loc_004D87AB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D87B9; /* je: equal / zero */

loc_004D87B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D87B8u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D87B8: ;
    POP32(esp, ecx);

loc_004D87B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D87BF
 * Original: 0x004D87BF - 0x004D87CC (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D87BF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D87BF: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86BB88;
    esp += 4; return; /* ret */

}

/**
 * sub_004D87CC
 * Original: 0x004D87CC - 0x004D87FF (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D87CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D87CC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D87D4u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D87D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x004D87E0u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D87E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D87F0; /* je: equal / zero */

loc_004D87E7: ;
    ecx = eax;
    PUSH32(esp, 0x004D87EEu); RECOMP_ABI_CALL(0x004C5117u, sub_004C5117); /* call 0x004C5117 */

loc_004D87EE: ;
    goto loc_004D87F2;

loc_004D87F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D87F2: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D87FDu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D87FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D881F
 * Original: 0x004D881F - 0x004D8839 (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D881F(void)
{

loc_004D881F: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D8827u); RECOMP_ABI_CALL(0x004C1070u, sub_004C1070); /* call 0x004C1070 */

loc_004D8827: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D882Du); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D882D: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8839
 * Original: 0x004D8839 - 0x004D8858 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8839(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8839: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D8845u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D8845: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8852; /* je: equal / zero */

loc_004D884C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D8852u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8850u); } /* indirect call */
    }

loc_004D8852: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8858
 * Original: 0x004D8858 - 0x004D8872 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8858(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8858: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D886Cu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D886C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D8872
 * Original: 0x004D8872 - 0x004D888B (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8872(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8872: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8886; /* je: equal / zero */

loc_004D887B: ;
    ecx = MEM32(0x90E73C);
    PUSH32(esp, 0x004D8886u); RECOMP_ABI_CALL(0x004D87CCu, sub_004D87CC); /* call 0x004D87CC */

loc_004D8886: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D888B
 * Original: 0x004D888B - 0x004D88A6 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D888B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D888B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D88A1; /* je: equal / zero */

loc_004D8894: ;
    eax = MEM32(0x90E73C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D88A1u); RECOMP_ABI_CALL(0x004C5480u, sub_004C5480); /* call 0x004C5480 */

loc_004D88A1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D88A6
 * Original: 0x004D88A6 - 0x004D88C1 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D88A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D88A6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D88BC; /* je: equal / zero */

loc_004D88AF: ;
    eax = MEM32(0x90E73C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D88BCu); RECOMP_ABI_CALL(0x004C54BBu, sub_004C54BB); /* call 0x004C54BB */

loc_004D88BC: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D88C1
 * Original: 0x004D88C1 - 0x004D88DC (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D88C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D88C1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D88D7; /* je: equal / zero */

loc_004D88CA: ;
    eax = MEM32(0x90E73C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D88D7u); RECOMP_ABI_CALL(0x004C5555u, sub_004C5555); /* call 0x004C5555 */

loc_004D88D7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D88DC
 * Original: 0x004D88DC - 0x004D8900 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D88DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D88DC: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D88ED; /* jne: not equal / not zero */

loc_004D88E6: ;
    PUSH32(esp, 0x004D88EBu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D88EB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D88ED: ;
    ecx = MEM32(0x90E73C);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D88FCu); RECOMP_ABI_CALL(0x004D881Fu, sub_004D881F); /* call 0x004D881F */

loc_004D88FC: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8900
 * Original: 0x004D8900 - 0x004D8919 (25 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8900: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8914; /* je: equal / zero */

loc_004D8909: ;
    ecx = MEM32(0x90E73C);
    PUSH32(esp, 0x004D8914u); RECOMP_ABI_CALL(0x004D8839u, sub_004D8839); /* call 0x004D8839 */

loc_004D8914: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8919
 * Original: 0x004D8919 - 0x004D8934 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8919(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8919: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D892F; /* je: equal / zero */

loc_004D8922: ;
    eax = MEM32(0x90E73C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D892Fu); RECOMP_ABI_CALL(0x004C53E3u, sub_004C53E3); /* call 0x004C53E3 */

loc_004D892F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8934
 * Original: 0x004D8934 - 0x004D8950 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8934(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8934: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86BB88;
    if (CMP_EQ(_fa, _fb)) goto loc_004D8948; /* je: equal / zero */

loc_004D8943: ;
    PUSH32(esp, 0x004D8948u); RECOMP_ABI_CALL(0x004D8839u, sub_004D8839); /* call 0x004D8839 */

loc_004D8948: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8966
 * Original: 0x004D8966 - 0x004D8983 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8966(void)
{

loc_004D8966: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D8971u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D896Eu); } /* indirect call */
    }

loc_004D8971: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8977u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8977: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8983
 * Original: 0x004D8983 - 0x004D89A8 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8983(void)
{

loc_004D8983: ;
    PUSH32(esp, 0x004D8988u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D8988: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D898Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D898Cu); } /* indirect call */
    }

loc_004D898F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D899Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8997u); } /* indirect call */
    }

loc_004D899A: ;
    PUSH32(esp, eax);
    ecx = 0x90E454;
    PUSH32(esp, 0x004D89A5u); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004D89A5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D89A8
 * Original: 0x004D89A8 - 0x004D89CE (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D89A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D89A8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D89B6; /* jne: not equal / not zero */

loc_004D89B1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D89B6: ;
    eax = MEM32(0x90E73C);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004D89C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D89C3u); } /* indirect call */
    }

loc_004D89C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D89CCu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D89CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D89CE
 * Original: 0x004D89CE - 0x004D89F4 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D89CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D89CE: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D89DC; /* jne: not equal / not zero */

loc_004D89D7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D89DC: ;
    eax = MEM32(0x90E73C);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004D89ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D89E9u); } /* indirect call */
    }

loc_004D89EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D89F2u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D89F2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D89F4
 * Original: 0x004D89F4 - 0x004D8A18 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D89F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D89F4: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8A05; /* jne: not equal / not zero */

loc_004D89FE: ;
    PUSH32(esp, 0x004D8A03u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D8A03: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D8A05: ;
    ecx = MEM32(0x90E73C);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8A14u); RECOMP_ABI_CALL(0x004D8966u, sub_004D8966); /* call 0x004D8966 */

loc_004D8A14: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8A18
 * Original: 0x004D8A18 - 0x004D8A3A (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8A18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8A18: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8A35; /* je: equal / zero */

loc_004D8A21: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D8A28u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D8A28: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E73C);
    PUSH32(esp, 0x004D8A35u); RECOMP_ABI_CALL(0x004D8983u, sub_004D8983); /* call 0x004D8983 */

loc_004D8A35: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8A3A
 * Original: 0x004D8A3A - 0x004D8A56 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8A3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8A3A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D8A42u); RECOMP_ABI_CALL(0x004D8934u, sub_004D8934); /* call 0x004D8934 */

loc_004D8A42: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D8A50; /* je: equal / zero */

loc_004D8A49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D8A4Fu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D8A4F: ;
    POP32(esp, ecx);

loc_004D8A50: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8A56
 * Original: 0x004D8A56 - 0x004D8A69 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8A56(void)
{

loc_004D8A56: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86BC38);
    MEM32(0x90E73C) = eax;
    PUSH32(esp, 0x004D8A68u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D8A68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D8A69
 * Original: 0x004D8A69 - 0x004D8A76 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8A69(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8A69: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86BC98;
    esp += 4; return; /* ret */

}

/**
 * sub_004D8A76
 * Original: 0x004D8A76 - 0x004D8AA9 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8A76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8A76: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D8A7Eu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D8A7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x004D8A8Au); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D8A8A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8A9A; /* je: equal / zero */

loc_004D8A91: ;
    ecx = eax;
    PUSH32(esp, 0x004D8A98u); RECOMP_ABI_CALL(0x004C55BEu, sub_004C55BE); /* call 0x004C55BE */

loc_004D8A98: ;
    goto loc_004D8A9C;

loc_004D8A9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D8A9C: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D8AA7u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D8AA7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8AD1
 * Original: 0x004D8AD1 - 0x004D8AE0 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8AD1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004D8AD1: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D8AD9u); RECOMP_ABI_CALL(0x004C1082u, sub_004C1082); /* call 0x004C1082 */

loc_004D8AD9: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_004D8AE0
 * Original: 0x004D8AE0 - 0x004D8AFA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8AE0(void)
{

loc_004D8AE0: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D8AE8u); RECOMP_ABI_CALL(0x004C5CBCu, sub_004C5CBC); /* call 0x004C5CBC */

loc_004D8AE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8AEEu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8AEE: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8AFA
 * Original: 0x004D8AFA - 0x004D8B14 (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8AFA(void)
{

loc_004D8AFA: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D8B02u); RECOMP_ABI_CALL(0x004C1094u, sub_004C1094); /* call 0x004C1094 */

loc_004D8B02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8B08u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8B08: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8B14
 * Original: 0x004D8B14 - 0x004D8B2E (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8B14(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004D8B14: ;
    PUSH32(esp, 0x004D8B19u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D8B19: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D8B20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8B1Du); } /* indirect call */
    }

loc_004D8B20: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x004D8B27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8B24u); } /* indirect call */
    }

loc_004D8B27: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_004D8B2E
 * Original: 0x004D8B2E - 0x004D8B4D (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8B2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8B2E: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D8B3Au); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D8B3A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8B47; /* je: equal / zero */

loc_004D8B41: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D8B47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8B45u); } /* indirect call */
    }

loc_004D8B47: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8B4D
 * Original: 0x004D8B4D - 0x004D8B67 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8B4D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8B4D: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D8B61u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D8B61: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D8B67
 * Original: 0x004D8B67 - 0x004D8B88 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8B67(void)
{

loc_004D8B67: ;
    PUSH32(esp, 0x004D8B6Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D8B6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D8B73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8B70u); } /* indirect call */
    }

loc_004D8B73: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D8B7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8B7Bu); } /* indirect call */
    }

loc_004D8B7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8B84u); RECOMP_ABI_CALL(0x004C5DAFu, sub_004C5DAF); /* call 0x004C5DAF */

loc_004D8B84: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8B88
 * Original: 0x004D8B88 - 0x004D8BA1 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8B88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8B88: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8B9C; /* je: equal / zero */

loc_004D8B91: ;
    ecx = MEM32(0x90E740);
    PUSH32(esp, 0x004D8B9Cu); RECOMP_ABI_CALL(0x004D8A76u, sub_004D8A76); /* call 0x004D8A76 */

loc_004D8B9C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8BA1
 * Original: 0x004D8BA1 - 0x004D8BBC (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8BA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8BA1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8BB7; /* je: equal / zero */

loc_004D8BAA: ;
    eax = MEM32(0x90E740);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D8BB7u); RECOMP_ABI_CALL(0x004CD6A8u, sub_004CD6A8); /* call 0x004CD6A8 */

loc_004D8BB7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8BBC
 * Original: 0x004D8BBC - 0x004D8BD7 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8BBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8BBC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8BD2; /* je: equal / zero */

loc_004D8BC5: ;
    eax = MEM32(0x90E740);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D8BD2u); RECOMP_ABI_CALL(0x004C5C37u, sub_004C5C37); /* call 0x004C5C37 */

loc_004D8BD2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8BD7
 * Original: 0x004D8BD7 - 0x004D8BF8 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8BD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8BD7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8BE5; /* jne: not equal / not zero */

loc_004D8BE0: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D8BE5: ;
    ecx = MEM32(0x90E740);
    PUSH32(esp, 0x004D8BF0u); RECOMP_ABI_CALL(0x004D8AD1u, sub_004D8AD1); /* call 0x004D8AD1 */

loc_004D8BF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8BF6u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D8BF6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8BF8
 * Original: 0x004D8BF8 - 0x004D8C13 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8BF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8BF8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8C0E; /* je: equal / zero */

loc_004D8C01: ;
    eax = MEM32(0x90E740);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D8C0Eu); RECOMP_ABI_CALL(0x004C5D4Cu, sub_004C5D4C); /* call 0x004C5D4C */

loc_004D8C0E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8C13
 * Original: 0x004D8C13 - 0x004D8C2E (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8C13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8C13: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8C29; /* je: equal / zero */

loc_004D8C1C: ;
    eax = MEM32(0x90E740);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D8C29u); RECOMP_ABI_CALL(0x004C5C7Du, sub_004C5C7D); /* call 0x004C5C7D */

loc_004D8C29: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8C2E
 * Original: 0x004D8C2E - 0x004D8C52 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8C2E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8C2E: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8C3F; /* jne: not equal / not zero */

loc_004D8C38: ;
    PUSH32(esp, 0x004D8C3Du); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D8C3D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D8C3F: ;
    ecx = MEM32(0x90E740);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8C4Eu); RECOMP_ABI_CALL(0x004D8AE0u, sub_004D8AE0); /* call 0x004D8AE0 */

loc_004D8C4E: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8C52
 * Original: 0x004D8C52 - 0x004D8C6D (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8C52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8C52: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8C68; /* je: equal / zero */

loc_004D8C5B: ;
    eax = MEM32(0x90E740);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D8C68u); RECOMP_ABI_CALL(0x004C593Cu, sub_004C593C); /* call 0x004C593C */

loc_004D8C68: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8C6D
 * Original: 0x004D8C6D - 0x004D8C91 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8C6D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8C6D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8C7E; /* jne: not equal / not zero */

loc_004D8C77: ;
    PUSH32(esp, 0x004D8C7Cu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D8C7C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D8C7E: ;
    ecx = MEM32(0x90E740);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8C8Du); RECOMP_ABI_CALL(0x004D8AFAu, sub_004D8AFA); /* call 0x004D8AFA */

loc_004D8C8D: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8C91
 * Original: 0x004D8C91 - 0x004D8CB2 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8C91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8C91: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8C9F; /* jne: not equal / not zero */

loc_004D8C9A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D8C9F: ;
    ecx = MEM32(0x90E740);
    PUSH32(esp, 0x004D8CAAu); RECOMP_ABI_CALL(0x004D8B14u, sub_004D8B14); /* call 0x004D8B14 */

loc_004D8CAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8CB0u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D8CB0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8CB2
 * Original: 0x004D8CB2 - 0x004D8CCB (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8CB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8CB2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8CC6; /* je: equal / zero */

loc_004D8CBB: ;
    ecx = MEM32(0x90E740);
    PUSH32(esp, 0x004D8CC6u); RECOMP_ABI_CALL(0x004D8B2Eu, sub_004D8B2E); /* call 0x004D8B2E */

loc_004D8CC6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D8CCB
 * Original: 0x004D8CCB - 0x004D8CF1 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8CCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8CCB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8CE8; /* je: equal / zero */

loc_004D8CD4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D8CDBu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D8CDB: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E740);
    PUSH32(esp, 0x004D8CE8u); RECOMP_ABI_CALL(0x004D8B67u, sub_004D8B67); /* call 0x004D8B67 */

loc_004D8CE8: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8CF1
 * Original: 0x004D8CF1 - 0x004D8D0D (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8CF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8CF1: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86BC98;
    if (CMP_EQ(_fa, _fb)) goto loc_004D8D05; /* je: equal / zero */

loc_004D8D00: ;
    PUSH32(esp, 0x004D8D05u); RECOMP_ABI_CALL(0x004D8B2Eu, sub_004D8B2E); /* call 0x004D8B2E */

loc_004D8D05: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8D0D
 * Original: 0x004D8D0D - 0x004D8D2A (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8D0D(void)
{

loc_004D8D0D: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D8D18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8D15u); } /* indirect call */
    }

loc_004D8D18: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8D1Eu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D8D1E: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8D35
 * Original: 0x004D8D35 - 0x004D8D59 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8D35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8D35: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8D46; /* jne: not equal / not zero */

loc_004D8D3F: ;
    PUSH32(esp, 0x004D8D44u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D8D44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D8D46: ;
    ecx = MEM32(0x90E740);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D8D55u); RECOMP_ABI_CALL(0x004D8D0Du, sub_004D8D0D); /* call 0x004D8D0D */

loc_004D8D55: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D8D59
 * Original: 0x004D8D59 - 0x004D8D8B (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D8D59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8D59: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D8D6D; /* jne: not equal / not zero */

loc_004D8D66: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8D6Bu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D8D6B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D8D6D: ;
    eax = MEM32(0x90E740);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004D8D7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8D7Au); } /* indirect call */
    }

loc_004D8D7D: ;
    MEM8(ebp + -4) = LO8(eax);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8D88u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D8D88: ;
    POP32(esp, ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D8D8B
 * Original: 0x004D8D8B - 0x004D8DA7 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8D8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8D8B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D8D93u); RECOMP_ABI_CALL(0x004D8CF1u, sub_004D8CF1); /* call 0x004D8CF1 */

loc_004D8D93: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D8DA1; /* je: equal / zero */

loc_004D8D9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D8DA0u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D8DA0: ;
    POP32(esp, ecx);

loc_004D8DA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8DA7
 * Original: 0x004D8DA7 - 0x004D8DBA (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8DA7(void)
{

loc_004D8DA7: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86BD58);
    MEM32(0x90E740) = eax;
    PUSH32(esp, 0x004D8DB9u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D8DB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D8DBA
 * Original: 0x004D8DBA - 0x004D8DC4 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8DBA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8DBA: ;
    eax = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004D8DC4
 * Original: 0x004D8DC4 - 0x004D8DC5 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8DC4(void)
{

loc_004D8DC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D8DC5
 * Original: 0x004D8DC5 - 0x004D8E36 (113 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8DC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8DC5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x10;

loc_004D8DD3: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8DE2; /* je: equal / zero */

loc_004D8DD7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D8DD3; /* jb: below (unsigned <) */

loc_004D8DE0: ;
    goto loc_004D8E30;

loc_004D8DE2: ;
    PUSH32(esp, 0x004D8DE7u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D8DE7: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004D8DF1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D8DF1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8E07; /* je: equal / zero */

loc_004D8DF8: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    PUSH32(esp, 0x004D8E05u); RECOMP_ABI_CALL(0x004CA47Du, sub_004CA47D); /* call 0x004CA47D */

loc_004D8E05: ;
    goto loc_004D8E09;

loc_004D8E07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D8E09: ;
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86ABE8);
    ebx = esi + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x004D8E22u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D8E22: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D8E2Eu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D8E2E: ;
    eax = ebx;

loc_004D8E30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8E36
 * Original: 0x004D8E36 - 0x004D8E7B (69 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8E36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8E36: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 4;

loc_004D8E40: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004D8E4Au); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004D8E4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004D8E5B; /* je: equal / zero */

loc_004D8E50: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D8E40; /* jb: below (unsigned <) */

loc_004D8E59: ;
    goto loc_004D8E75;

loc_004D8E5B: ;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D8E6D; /* je: equal / zero */

loc_004D8E67: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D8E6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8E6Bu); } /* indirect call */
    }

loc_004D8E6D: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 4) = 0;

loc_004D8E75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8E7B
 * Original: 0x004D8E7B - 0x004D8EB2 (55 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8E7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D8E7B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 4;

loc_004D8E88: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004D8E92u); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004D8E92: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004D8EA3; /* je: equal / zero */

loc_004D8E99: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D8E88; /* jb: below (unsigned <) */

loc_004D8EA1: ;
    goto loc_004D8EA9;

loc_004D8EA3: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = MEM32(edi + esi);

loc_004D8EA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8EB2
 * Original: 0x004D8EB2 - 0x004D8ECC (26 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8EB2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8EB2: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D8EC6u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D8EC6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D8ECC
 * Original: 0x004D8ECC - 0x004D8EDF (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8ECC(void)
{

loc_004D8ECC: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D8ED5u); RECOMP_ABI_CALL(0x004D8E7Bu, sub_004D8E7B); /* call 0x004D8E7B */

loc_004D8ED5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D8EDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8ED9u); } /* indirect call */
    }

loc_004D8EDC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D8EDF
 * Original: 0x004D8EDF - 0x004D8EF6 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8EDF(void)
{

loc_004D8EDF: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D8EE8u); RECOMP_ABI_CALL(0x004D8E7Bu, sub_004D8E7B); /* call 0x004D8E7B */

loc_004D8EE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004D8EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8EF0u); } /* indirect call */
    }

loc_004D8EF3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D8EF6
 * Original: 0x004D8EF6 - 0x004D8F0D (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8EF6(void)
{

loc_004D8EF6: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D8EFFu); RECOMP_ABI_CALL(0x004D8E7Bu, sub_004D8E7B); /* call 0x004D8E7B */

loc_004D8EFF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004D8F0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8F07u); } /* indirect call */
    }

loc_004D8F0A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D8F0D
 * Original: 0x004D8F0D - 0x004D8F24 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D8F0D(void)
{

loc_004D8F0D: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D8F16u); RECOMP_ABI_CALL(0x004D8E7Bu, sub_004D8E7B); /* call 0x004D8E7B */

loc_004D8F16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x004D8F21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D8F1Eu); } /* indirect call */
    }

loc_004D8F21: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D8F24
 * Original: 0x004D8F24 - 0x004D9110 (492 bytes, 162 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D8F24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D8F24: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F32u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D8F32: ;
    POP32(esp, ecx);
    ecx = ebp + -4;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F3Du); RECOMP_ABI_CALL(0x00504C30u, sub_00504C30); /* call 0x00504C30 */

loc_004D8F3D: ;
    PUSH32(esp, 0x86BE10);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F4Au); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8F4A: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F56u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D8F56: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F5Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8F5E: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F68u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D8F68: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F73u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D8F73: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86BE08);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F83u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8F83: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F8Fu); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D8F8F: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F97u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8F97: ;
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8F9Fu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D8F9F: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FAAu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D8FAA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86BE00);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FBAu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8FBA: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FC6u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D8FC6: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FCEu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D8FCE: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FD8u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D8FD8: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FE3u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D8FE3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86BDF8);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FF3u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D8FF3: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D8FFFu); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D8FFF: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9007u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D9007: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9011u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D9011: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D901Cu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D901C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86BDF0);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D902Cu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D902C: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9038u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D9038: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9040u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D9040: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D904Au); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D904A: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9055u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D9055: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86BDE8);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9065u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D9065: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9071u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D9071: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9079u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D9079: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D9083u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D9083: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D908Eu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D908E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86BDDC);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D909Eu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D909E: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90AAu); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D90AA: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90B2u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D90B2: ;
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90BAu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D90BA: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90C5u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D90C5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86BDD0);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90D5u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D90D5: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90E1u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D90E1: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90E9u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D90E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90F4u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D90F4: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D90FFu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D90FF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D910Au); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D910A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D9110
 * Original: 0x004D9110 - 0x004D913A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9110: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D911E; /* jne: not equal / not zero */

loc_004D9119: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D911E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9125u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D9125: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9132u); RECOMP_ABI_CALL(0x004D8DC5u, sub_004D8DC5); /* call 0x004D8DC5 */

loc_004D9132: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9138u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9138: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D913A
 * Original: 0x004D913A - 0x004D915C (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D913A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D913A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9157; /* je: equal / zero */

loc_004D9143: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D914Au); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D914A: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E744);
    PUSH32(esp, 0x004D9157u); RECOMP_ABI_CALL(0x004D8E36u, sub_004D8E36); /* call 0x004D8E36 */

loc_004D9157: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D915C
 * Original: 0x004D915C - 0x004D9186 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D915C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D915C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D916A; /* jne: not equal / not zero */

loc_004D9165: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D916A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9171u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9171: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D917Eu); RECOMP_ABI_CALL(0x004D8ECCu, sub_004D8ECC); /* call 0x004D8ECC */

loc_004D917E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9184u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D9184: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9186
 * Original: 0x004D9186 - 0x004D91B9 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9186(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9186: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D9194; /* jne: not equal / not zero */

loc_004D918F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D9194: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D919Bu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D919B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D91A4u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D91A4: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D91B1u); RECOMP_ABI_CALL(0x004D8EDFu, sub_004D8EDF); /* call 0x004D8EDF */

loc_004D91B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D91B7u); RECOMP_ABI_CALL(0x004D8F24u, sub_004D8F24); /* call 0x004D8F24 */

loc_004D91B7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D91B9
 * Original: 0x004D91B9 - 0x004D91EC (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D91B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D91B9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D91C7; /* jne: not equal / not zero */

loc_004D91C2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D91C7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D91CEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D91CE: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D91D7u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D91D7: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D91E4u); RECOMP_ABI_CALL(0x004D8EF6u, sub_004D8EF6); /* call 0x004D8EF6 */

loc_004D91E4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D91EAu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D91EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D91EC
 * Original: 0x004D91EC - 0x004D9217 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D91EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D91EC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9212; /* je: equal / zero */

loc_004D91F5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D91FCu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D91FC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D9205u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D9205: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E744);
    PUSH32(esp, 0x004D9212u); RECOMP_ABI_CALL(0x004D8F0Du, sub_004D8F0D); /* call 0x004D8F0D */

loc_004D9212: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9217
 * Original: 0x004D9217 - 0x004D9236 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9217(void)
{

loc_004D9217: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4D8DBA);
    esi = ecx;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x10);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esi) = 0x86BE14;
    PUSH32(esp, 0x004D9232u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004D9232: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9236
 * Original: 0x004D9236 - 0x004D9275 (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9236(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9236: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0xA);
    MEM32(esi) = 0x86BE14;
    edi = esi + 0x10;
    POP32(esp, ebx);

loc_004D9247: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9253; /* je: equal / zero */

loc_004D924D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D9253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9251u); } /* indirect call */
    }

loc_004D9253: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004D9247; /* jne: not equal / not zero */

loc_004D9259: ;
    PUSH32(esp, 0x4D8DC4);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x10);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D926Bu); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004D926B: ;
    POP32(esp, edi);
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9275
 * Original: 0x004D9275 - 0x004D9288 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9275(void)
{

loc_004D9275: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86BE94);
    MEM32(0x90E744) = eax;
    PUSH32(esp, 0x004D9287u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D9287: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D9288
 * Original: 0x004D9288 - 0x004D92A4 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9288(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D9288: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D9290u); RECOMP_ABI_CALL(0x004D9236u, sub_004D9236); /* call 0x004D9236 */

loc_004D9290: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D929E; /* je: equal / zero */

loc_004D9297: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D929Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D929D: ;
    POP32(esp, ecx);

loc_004D929E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D92A4
 * Original: 0x004D92A4 - 0x004D92B1 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D92A4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D92A4: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86BECC;
    esp += 4; return; /* ret */

}

/**
 * sub_004D92B1
 * Original: 0x004D92B1 - 0x004D92E4 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D92B1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D92B1: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D92B9u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D92B9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x004D92C5u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D92C5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D92D5; /* je: equal / zero */

loc_004D92CC: ;
    ecx = eax;
    PUSH32(esp, 0x004D92D3u); RECOMP_ABI_CALL(0x004CB5C0u, sub_004CB5C0); /* call 0x004CB5C0 */

loc_004D92D3: ;
    goto loc_004D92D7;

loc_004D92D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D92D7: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D92E2u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D92E2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D92F4
 * Original: 0x004D92F4 - 0x004D9313 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D92F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D92F4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D9300u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D9300: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D930D; /* je: equal / zero */

loc_004D9307: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D930Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D930Bu); } /* indirect call */
    }

loc_004D930D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9313
 * Original: 0x004D9313 - 0x004D933D (42 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9313: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D9327u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D9327: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004CB7FD(); return; /* tail jmp 0x004CB7FD */

}

/**
 * sub_004D933D
 * Original: 0x004D933D - 0x004D9368 (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D933D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D933D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D9343u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D9343: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x004D934Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9347u); } /* indirect call */
    }

loc_004D934A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x004D9351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D934Eu); } /* indirect call */
    }

loc_004D9351: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D935Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9357u); } /* indirect call */
    }

loc_004D935A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9366; /* je: equal / zero */

loc_004D935E: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_004D9366: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D9368
 * Original: 0x004D9368 - 0x004D9381 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9368: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D937C; /* je: equal / zero */

loc_004D9371: ;
    ecx = MEM32(0x90E748);
    PUSH32(esp, 0x004D937Cu); RECOMP_ABI_CALL(0x004D92B1u, sub_004D92B1); /* call 0x004D92B1 */

loc_004D937C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9381
 * Original: 0x004D9381 - 0x004D939C (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9381(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9381: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9397; /* je: equal / zero */

loc_004D938A: ;
    eax = MEM32(0x90E748);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D9397u); RECOMP_ABI_CALL(0x004CB78Au, sub_004CB78A); /* call 0x004CB78A */

loc_004D9397: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D939C
 * Original: 0x004D939C - 0x004D93B7 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D939C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D939C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D93B2; /* je: equal / zero */

loc_004D93A5: ;
    eax = MEM32(0x90E748);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D93B2u); RECOMP_ABI_CALL(0x004CB7AEu, sub_004CB7AE); /* call 0x004CB7AE */

loc_004D93B2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D93B7
 * Original: 0x004D93B7 - 0x004D93D0 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D93B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D93B7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D93CB; /* je: equal / zero */

loc_004D93C0: ;
    ecx = MEM32(0x90E748);
    PUSH32(esp, 0x004D93CBu); RECOMP_ABI_CALL(0x004D92F4u, sub_004D92F4); /* call 0x004D92F4 */

loc_004D93CB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D93D0
 * Original: 0x004D93D0 - 0x004D93EB (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D93D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D93D0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D93E6; /* je: equal / zero */

loc_004D93D9: ;
    eax = MEM32(0x90E748);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D93E6u); RECOMP_ABI_CALL(0x004CB7CBu, sub_004CB7CB); /* call 0x004CB7CB */

loc_004D93E6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D93EB
 * Original: 0x004D93EB - 0x004D9406 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D93EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D93EB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9401; /* je: equal / zero */

loc_004D93F4: ;
    eax = MEM32(0x90E748);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D9401u); RECOMP_ABI_CALL(0x004CB7FDu, sub_004CB7FD); /* call 0x004CB7FD */

loc_004D9401: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D9406
 * Original: 0x004D9406 - 0x004D941F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9406(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D9406: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D941A; /* je: equal / zero */

loc_004D940F: ;
    ecx = MEM32(0x90E748);
    PUSH32(esp, 0x004D941Au); RECOMP_ABI_CALL(0x004D933Du, sub_004D933D); /* call 0x004D933D */

loc_004D941A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D941F
 * Original: 0x004D941F - 0x004D943B (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D941F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D941F: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86BECC;
    if (CMP_EQ(_fa, _fb)) goto loc_004D9433; /* je: equal / zero */

loc_004D942E: ;
    PUSH32(esp, 0x004D9433u); RECOMP_ABI_CALL(0x004D92F4u, sub_004D92F4); /* call 0x004D92F4 */

loc_004D9433: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D943B
 * Original: 0x004D943B - 0x004D9458 (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D943B(void)
{

loc_004D943B: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D9446u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9443u); } /* indirect call */
    }

loc_004D9446: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D944Cu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D944C: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D9458
 * Original: 0x004D9458 - 0x004D947D (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D9458(void)
{

loc_004D9458: ;
    PUSH32(esp, 0x004D945Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D945D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D9464u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D9461u); } /* indirect call */
    }

loc_004D9464: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D946Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D946Cu); } /* indirect call */
    }

loc_004D946F: ;
    PUSH32(esp, eax);
    ecx = 0x90E460;
    PUSH32(esp, 0x004D947Au); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004D947A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D947D
 * Original: 0x004D947D - 0x004D94A1 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D947D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D947D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D948E; /* jne: not equal / not zero */

loc_004D9487: ;
    PUSH32(esp, 0x004D948Cu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D948C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D948E: ;
    ecx = MEM32(0x90E748);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D949Du); RECOMP_ABI_CALL(0x004D943Bu, sub_004D943B); /* call 0x004D943B */

loc_004D949D: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D94A1
 * Original: 0x004D94A1 - 0x004D94C3 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D94A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D94A1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D94BE; /* je: equal / zero */

loc_004D94AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D94B1u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D94B1: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E748);
    PUSH32(esp, 0x004D94BEu); RECOMP_ABI_CALL(0x004D9458u, sub_004D9458); /* call 0x004D9458 */

loc_004D94BE: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D94C3
 * Original: 0x004D94C3 - 0x004D94DF (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D94C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D94C3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D94CBu); RECOMP_ABI_CALL(0x004D941Fu, sub_004D941F); /* call 0x004D941F */

loc_004D94CB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D94D9; /* je: equal / zero */

loc_004D94D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D94D8u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D94D8: ;
    POP32(esp, ecx);

loc_004D94D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D94DF
 * Original: 0x004D94DF - 0x004D94F2 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D94DF(void)
{

loc_004D94DF: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86BF38);
    MEM32(0x90E748) = eax;
    PUSH32(esp, 0x004D94F1u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D94F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D94F2
 * Original: 0x004D94F2 - 0x004D94FF (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D94F2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D94F2: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86BF88;
    esp += 4; return; /* ret */

}

/**
 * sub_004D94FF
 * Original: 0x004D94FF - 0x004D9532 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D94FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D94FF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D9507u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D9507: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x004D9513u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D9513: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D9523; /* je: equal / zero */

loc_004D951A: ;
    ecx = eax;
    PUSH32(esp, 0x004D9521u); RECOMP_ABI_CALL(0x004CB857u, sub_004CB857); /* call 0x004CB857 */

loc_004D9521: ;
    goto loc_004D9525;

loc_004D9523: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D9525: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D9530u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D9530: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D954A
 * Original: 0x004D954A - 0x004D9564 (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D954A(void)
{

loc_004D954A: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D9552u); RECOMP_ABI_CALL(0x004CBC2Fu, sub_004CBC2F); /* call 0x004CBC2F */

loc_004D9552: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D9558u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D9558: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}
