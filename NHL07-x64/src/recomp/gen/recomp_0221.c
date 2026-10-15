/**
 * nhl_07_recomp - Recompiled code chunk 221
 * Functions: 250 (0x004D3FD5 - 0x004D6887)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004D3FD5
 * Original: 0x004D3FD5 - 0x004D3FFC (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3FD5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3FD5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D3FE9; /* jne: not equal / not zero */

loc_004D3FE2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3FE7u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D3FE7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D3FE9: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D3FF8u); RECOMP_ABI_CALL(0x004D3B31u, sub_004D3B31); /* call 0x004D3B31 */

loc_004D3FF8: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D3FFC
 * Original: 0x004D3FFC - 0x004D4023 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D3FFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D3FFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4010; /* jne: not equal / not zero */

loc_004D4009: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D400Eu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D400E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D4010: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D401Fu); RECOMP_ABI_CALL(0x004D3BB1u, sub_004D3BB1); /* call 0x004D3BB1 */

loc_004D401F: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D4023
 * Original: 0x004D4023 - 0x004D4045 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4023: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4031; /* jne: not equal / not zero */

loc_004D402C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D4031: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D403Du); RECOMP_ABI_CALL(0x004D3BF9u, sub_004D3BF9); /* call 0x004D3BF9 */

loc_004D403D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4043u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4043: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4045
 * Original: 0x004D4045 - 0x004D4067 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4045(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4045: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4053; /* jne: not equal / not zero */

loc_004D404E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D4053: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D405Fu); RECOMP_ABI_CALL(0x004D3C05u, sub_004D3C05); /* call 0x004D3C05 */

loc_004D405F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4065u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4065: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4067
 * Original: 0x004D4067 - 0x004D408E (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4067(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4067: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D407B; /* jne: not equal / not zero */

loc_004D4074: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4079u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4079: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D407B: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D408Au); RECOMP_ABI_CALL(0x004D3C11u, sub_004D3C11); /* call 0x004D3C11 */

loc_004D408A: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D408E
 * Original: 0x004D408E - 0x004D40B0 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D408E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D408E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D409C; /* jne: not equal / not zero */

loc_004D4097: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D409C: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D40A8u); RECOMP_ABI_CALL(0x004D3C2Du, sub_004D3C2D); /* call 0x004D3C2D */

loc_004D40A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D40AEu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D40AE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D40B0
 * Original: 0x004D40B0 - 0x004D40E0 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D40B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D40B0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D40DB; /* je: equal / zero */

loc_004D40B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D40C1u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D40C1: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D40CAu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D40CA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D40DAu); RECOMP_ABI_CALL(0x004CE51Bu, sub_004CE51B); /* call 0x004CE51B */

loc_004D40DA: ;
    POP32(esp, esi);

loc_004D40DB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D40E0
 * Original: 0x004D40E0 - 0x004D4110 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D40E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D40E0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D410B; /* je: equal / zero */

loc_004D40E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D40F1u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D40F1: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D40FAu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D40FA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D410Au); RECOMP_ABI_CALL(0x004CE54Du, sub_004CE54D); /* call 0x004CE54D */

loc_004D410A: ;
    POP32(esp, esi);

loc_004D410B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4110
 * Original: 0x004D4110 - 0x004D4133 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4110: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D412E; /* je: equal / zero */

loc_004D4119: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4120u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D4120: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D412Eu); RECOMP_ABI_CALL(0x004CE57Fu, sub_004CE57F); /* call 0x004CE57F */

loc_004D412E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4133
 * Original: 0x004D4133 - 0x004D4156 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4133(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4133: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4151; /* je: equal / zero */

loc_004D413C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4143u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D4143: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D4151u); RECOMP_ABI_CALL(0x004CE5ADu, sub_004CE5AD); /* call 0x004CE5AD */

loc_004D4151: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4145
 * Original: 0x004D4145 - 0x004D4156 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4145(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4145: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D4151u); RECOMP_ABI_CALL(0x004CE5ADu, sub_004CE5AD); /* call 0x004CE5AD */

loc_004D4151: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4149
 * Original: 0x004D4149 - 0x004D4156 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4149(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4149: ;
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D4151u); RECOMP_ABI_CALL(0x004CE5ADu, sub_004CE5AD); /* call 0x004CE5AD */

loc_004D4151: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4156
 * Original: 0x004D4156 - 0x004D4170 (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4156(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4156: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D416B; /* je: equal / zero */

loc_004D415F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, 0x004D416Bu); RECOMP_ABI_CALL(0x004C7FBBu, sub_004C7FBB); /* call 0x004C7FBB */

loc_004D416B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4170
 * Original: 0x004D4170 - 0x004D419B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4170: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D417E; /* jne: not equal / not zero */

loc_004D4179: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D417E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4185u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D4185: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D4193u); RECOMP_ABI_CALL(0x004CE205u, sub_004CE205); /* call 0x004CE205 */

loc_004D4193: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4199u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4199: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D419B
 * Original: 0x004D419B - 0x004D41C2 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D419B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D419B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D41AF; /* jne: not equal / not zero */

loc_004D41A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D41ADu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D41AD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D41AF: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D41BEu); RECOMP_ABI_CALL(0x004D3D30u, sub_004D3D30); /* call 0x004D3D30 */

loc_004D41BE: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D41C2
 * Original: 0x004D41C2 - 0x004D41E9 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D41C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D41C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D41D6; /* jne: not equal / not zero */

loc_004D41CF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D41D4u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D41D4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D41D6: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D41E5u); RECOMP_ABI_CALL(0x004D3C94u, sub_004D3C94); /* call 0x004D3C94 */

loc_004D41E5: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D41E9
 * Original: 0x004D41E9 - 0x004D4208 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D41E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D41E9: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D41F7; /* jne: not equal / not zero */

loc_004D41F2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D41F7: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, MEM32(eax + 0x30));
    PUSH32(esp, 0x004D4206u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4206: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4208
 * Original: 0x004D4208 - 0x004D422A (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4208: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4216; /* jne: not equal / not zero */

loc_004D4211: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D4216: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D4222u); RECOMP_ABI_CALL(0x004D3D7Fu, sub_004D3D7F); /* call 0x004D3D7F */

loc_004D4222: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4228u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D4228: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D422A
 * Original: 0x004D422A - 0x004D4244 (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D422A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D422A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D423F; /* je: equal / zero */

loc_004D4233: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D423Fu); RECOMP_ABI_CALL(0x004CB173u, sub_004CB173); /* call 0x004CB173 */

loc_004D423F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4244
 * Original: 0x004D4244 - 0x004D425E (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4244(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4244: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4259; /* je: equal / zero */

loc_004D424D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D4259u); RECOMP_ABI_CALL(0x004CB1A9u, sub_004CB1A9); /* call 0x004CB1A9 */

loc_004D4259: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D425E
 * Original: 0x004D425E - 0x004D4280 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D425E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D425E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D426C; /* jne: not equal / not zero */

loc_004D4267: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D426C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D4278u); RECOMP_ABI_CALL(0x004CB049u, sub_004CB049); /* call 0x004CB049 */

loc_004D4278: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D427Eu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D427E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4280
 * Original: 0x004D4280 - 0x004D429A (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4280: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4295; /* je: equal / zero */

loc_004D4289: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D4295u); RECOMP_ABI_CALL(0x004CB163u, sub_004CB163); /* call 0x004CB163 */

loc_004D4295: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D429A
 * Original: 0x004D429A - 0x004D42BC (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D429A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D429A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D42A8; /* jne: not equal / not zero */

loc_004D42A3: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D42A8: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004D42B4u); RECOMP_ABI_CALL(0x004D3D6Cu, sub_004D3D6C); /* call 0x004D3D6C */

loc_004D42B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D42BAu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D42BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D42BC
 * Original: 0x004D42BC - 0x004D42D6 (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D42BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D42BC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D42D1; /* je: equal / zero */

loc_004D42C5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D42D1u); RECOMP_ABI_CALL(0x004CB1BEu, sub_004CB1BE); /* call 0x004CB1BE */

loc_004D42D1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D42D6
 * Original: 0x004D42D6 - 0x004D42F0 (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D42D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D42D6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D42EB; /* je: equal / zero */

loc_004D42DF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D42EBu); RECOMP_ABI_CALL(0x004CB1CEu, sub_004CB1CE); /* call 0x004CB1CE */

loc_004D42EB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D42F0
 * Original: 0x004D42F0 - 0x004D430F (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D42F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D42F0: ;
    eax = ecx;
    MEM32(eax + 4) = 0x8694A4;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86A29C;
    MEM32(eax + 4) = 0x86A294;
    esp += 4; return; /* ret */

}

/**
 * sub_004D430F
 * Original: 0x004D430F - 0x004D4317 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D430F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D430F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_004D4532(); return; /* tail jmp 0x004D4532 */

}

/**
 * sub_004D4317
 * Original: 0x004D4317 - 0x004D433B (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4317(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4317: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86A29C;
    MEM32(esi + 4) = 0x86A294;
    if (CMP_EQ(_fa, _fb)) goto loc_004D4332; /* je: equal / zero */

loc_004D432D: ;
    PUSH32(esp, 0x004D4332u); RECOMP_ABI_CALL(0x004D39C1u, sub_004D39C1); /* call 0x004D39C1 */

loc_004D4332: ;
    MEM32(esi + 4) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D433B
 * Original: 0x004D433B - 0x004D439C (97 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D433B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D433B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax + 0x18;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D4356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4353u); } /* indirect call */
    }

loc_004D4356: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4361u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D4361: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D438D; /* jbe: below or equal (unsigned <=) */

loc_004D4367: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + 0x18;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D4379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4376u); } /* indirect call */
    }

loc_004D4379: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4388u); RECOMP_ABI_CALL(0x004DB83Du, sub_004DB83D); /* call 0x004DB83D */

loc_004D4388: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D4367; /* jb: below (unsigned <) */

loc_004D438D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D4343
 * Original: 0x004D4343 - 0x004D439C (89 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4343(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4343: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax + 0x18;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D4356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4353u); } /* indirect call */
    }

loc_004D4356: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp + -4;
    PUSH32(esp, 0x004D4361u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D4361: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D438D; /* jbe: below or equal (unsigned <=) */

loc_004D4367: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + 0x18;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D4379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4376u); } /* indirect call */
    }

loc_004D4379: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0x004D4388u); RECOMP_ABI_CALL(0x004DB83Du, sub_004DB83D); /* call 0x004DB83D */

loc_004D4388: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D4367; /* jb: below (unsigned <) */

loc_004D438D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D439C
 * Original: 0x004D439C - 0x004D4434 (152 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D439C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D439C: ;
    PUSH32(esp, ebp);
    ebp = esp + -148;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, esi);
    MEM32(ebp + 0x90) = eax;
    PUSH32(esp, edi);
    eax = ebp + -117;
    PUSH32(esp, eax);
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xA0));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x004D43CFu); RECOMP_ABI_CALL(0x004CE4A8u, sub_004CE4A8); /* call 0x004CE4A8 */

loc_004D43CF: ;
    PUSH32(esp, MEM32(ebp + -116));
    ecx = ebp + -124;
    PUSH32(esp, 0x004D43DAu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D43DA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D4412; /* jbe: below or equal (unsigned <=) */

loc_004D43E1: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x100);
    eax = ebp + -112;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xA0));
    PUSH32(esp, 0x004D43F9u); RECOMP_ABI_CALL(0x004CE60Fu, sub_004CE60F); /* call 0x004CE60F */

loc_004D43F9: ;
    eax = ebp + -112;
    MEM32(ebp + -128) = eax;
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -124;
    PUSH32(esp, 0x004D440Cu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D440C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -116) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D43E1; /* jb: below (unsigned <) */

loc_004D4412: ;
    ecx = MEM32(ebp + -124);
    eax = MEM32(ebp + 0x9C);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x004D442Au); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D442A: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x94;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D4434
 * Original: 0x004D4434 - 0x004D4493 (95 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4434(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4434: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4451u); RECOMP_ABI_CALL(0x004CE4A8u, sub_004CE4A8); /* call 0x004CE4A8 */

loc_004D4451: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D445Cu); RECOMP_ABI_CALL(0x004DB780u, sub_004DB780); /* call 0x004DB780 */

loc_004D445C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D4485; /* jbe: below or equal (unsigned <=) */

loc_004D4463: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D446Fu); RECOMP_ABI_CALL(0x004CE5DBu, sub_004CE5DB); /* call 0x004CE5DB */

loc_004D446F: ;
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D447Fu); RECOMP_ABI_CALL(0x004DB7A2u, sub_004DB7A2); /* call 0x004DB7A2 */

loc_004D447F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D4463; /* jb: below (unsigned <) */

loc_004D4485: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D4493
 * Original: 0x004D4493 - 0x004D44D2 (63 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4493(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4493: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D44A7; /* jne: not equal / not zero */

loc_004D44A0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D44A5u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D44A5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D44A7: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D44B8u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D44B8: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D44C1u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D44C1: ;
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 8); PUSH32(esp, 0x004D44CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D44C9u); } /* indirect call */
    }

loc_004D44CC: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D44D2
 * Original: 0x004D44D2 - 0x004D4502 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D44D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D44D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D44E6; /* jne: not equal / not zero */

loc_004D44DF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D44E4u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D44E4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D44E6: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D44EDu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D44ED: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D44FEu); RECOMP_ABI_CALL(0x004D439Cu, sub_004D439C); /* call 0x004D439C */

loc_004D44FE: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D4502
 * Original: 0x004D4502 - 0x004D4532 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4502: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4516; /* jne: not equal / not zero */

loc_004D450F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4514u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4514: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D4516: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D451Du); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D451D: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D452Eu); RECOMP_ABI_CALL(0x004D4434u, sub_004D4434); /* call 0x004D4434 */

loc_004D452E: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D4532
 * Original: 0x004D4532 - 0x004D454E (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4532(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4532: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D453Au); RECOMP_ABI_CALL(0x004D4317u, sub_004D4317); /* call 0x004D4317 */

loc_004D453A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D4548; /* je: equal / zero */

loc_004D4541: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D4547u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D4547: ;
    POP32(esp, ecx);

loc_004D4548: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D454E
 * Original: 0x004D454E - 0x004D4561 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D454E(void)
{

loc_004D454E: ;
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004D455Au); RECOMP_ABI_CALL(0x004D439Cu, sub_004D439C); /* call 0x004D439C */

loc_004D455A: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4561
 * Original: 0x004D4561 - 0x004D4574 (19 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4561(void)
{

loc_004D4561: ;
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x004D456Du); RECOMP_ABI_CALL(0x004D4434u, sub_004D4434); /* call 0x004D4434 */

loc_004D456D: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4574
 * Original: 0x004D4574 - 0x004D459B (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4574(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4574: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4588; /* jne: not equal / not zero */

loc_004D4581: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4586u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4586: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D4588: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4597u); RECOMP_ABI_CALL(0x004D454Eu, sub_004D454E); /* call 0x004D454E */

loc_004D4597: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D459B
 * Original: 0x004D459B - 0x004D45C2 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D459B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D459B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D45AF; /* jne: not equal / not zero */

loc_004D45A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D45ADu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D45AD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004D45AF: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D45BEu); RECOMP_ABI_CALL(0x004D4561u, sub_004D4561); /* call 0x004D4561 */

loc_004D45BE: ;
    eax = MEM32(eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D45C2
 * Original: 0x004D45C2 - 0x004D45CD (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D45C2(void)
{

loc_004D45C2: ;
    PUSH32(esp, 0x86A540);
    PUSH32(esp, 0x004D45CCu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D45CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D45CD
 * Original: 0x004D45CD - 0x004D45DA (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D45CD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D45CD: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86A688;
    esp += 4; return; /* ret */

}

/**
 * sub_004D45DA
 * Original: 0x004D45DA - 0x004D460F (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D45DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D45DA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D45E2u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D45E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x004D45EEu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D45EE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4600; /* je: equal / zero */

loc_004D45F5: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D45FEu); RECOMP_ABI_CALL(0x004C9BD9u, sub_004C9BD9); /* call 0x004C9BD9 */

loc_004D45FE: ;
    goto loc_004D4602;

loc_004D4600: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D4602: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D460Du); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D460D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D460F
 * Original: 0x004D460F - 0x004D462E (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D460F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D460F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D461Bu); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D461B: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4628; /* je: equal / zero */

loc_004D4622: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D4628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4626u); } /* indirect call */
    }

loc_004D4628: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4636
 * Original: 0x004D4636 - 0x004D4683 (77 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4636(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4636: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D464Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D464C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004D4653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4650u); } /* indirect call */
    }

loc_004D4653: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    ecx = ebp + -132;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x004D4663u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4660u); } /* indirect call */
    }

loc_004D4663: ;
    eax = ebp + -132;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D466Fu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D466F: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D467Fu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D467F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4683
 * Original: 0x004D4683 - 0x004D46E9 (102 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4683(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4683: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4699u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D4699: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x004D46A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D469Du); } /* indirect call */
    }

loc_004D46A0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F);
    ecx = ebp + -132;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x004D46B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D46ADu); } /* indirect call */
    }

loc_004D46B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D46B5u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_004D46B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004D46BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D46B9u); } /* indirect call */
    }

loc_004D46BB: ;
    edx = MEM32(eax);
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004D46C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D46C6u); } /* indirect call */
    }

loc_004D46C9: ;
    eax = ebp + -132;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D46D5u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D46D5: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D46E5u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D46E5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D46E9
 * Original: 0x004D46E9 - 0x004D4703 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D46E9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D46E9: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D46FDu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D46FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D4703
 * Original: 0x004D4703 - 0x004D471C (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4703(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4703: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4717; /* je: equal / zero */

loc_004D470C: ;
    ecx = MEM32(0x90E4C8);
    PUSH32(esp, 0x004D4717u); RECOMP_ABI_CALL(0x004D45DAu, sub_004D45DA); /* call 0x004D45DA */

loc_004D4717: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D471C
 * Original: 0x004D471C - 0x004D4737 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D471C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D471C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4732; /* je: equal / zero */

loc_004D4725: ;
    eax = MEM32(0x90E4C8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D4732u); RECOMP_ABI_CALL(0x004C160Du, sub_004C160D); /* call 0x004C160D */

loc_004D4732: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4737
 * Original: 0x004D4737 - 0x004D475B (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4737(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4737: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4748; /* jne: not equal / not zero */

loc_004D4741: ;
    PUSH32(esp, 0x004D4746u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4746: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D4748: ;
    ecx = MEM32(0x90E4C8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4757u); RECOMP_ABI_CALL(0x004D4636u, sub_004D4636); /* call 0x004D4636 */

loc_004D4757: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D475B
 * Original: 0x004D475B - 0x004D477F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D475B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D475B: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D476C; /* jne: not equal / not zero */

loc_004D4765: ;
    PUSH32(esp, 0x004D476Au); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D476A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D476C: ;
    ecx = MEM32(0x90E4C8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D477Bu); RECOMP_ABI_CALL(0x004D4683u, sub_004D4683); /* call 0x004D4683 */

loc_004D477B: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D477F
 * Original: 0x004D477F - 0x004D4798 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D477F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D477F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4793; /* je: equal / zero */

loc_004D4788: ;
    ecx = MEM32(0x90E4C8);
    PUSH32(esp, 0x004D4793u); RECOMP_ABI_CALL(0x004D460Fu, sub_004D460F); /* call 0x004D460F */

loc_004D4793: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4798
 * Original: 0x004D4798 - 0x004D47B4 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4798(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4798: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86A688;
    if (CMP_EQ(_fa, _fb)) goto loc_004D47AC; /* je: equal / zero */

loc_004D47A7: ;
    PUSH32(esp, 0x004D47ACu); RECOMP_ABI_CALL(0x004D460Fu, sub_004D460F); /* call 0x004D460F */

loc_004D47AC: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D47B4
 * Original: 0x004D47B4 - 0x004D47C7 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D47B4(void)
{

loc_004D47B4: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86A6DC);
    MEM32(0x90E4C8) = eax;
    PUSH32(esp, 0x004D47C6u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D47C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D47C7
 * Original: 0x004D47C7 - 0x004D47E3 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D47C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D47C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D47CFu); RECOMP_ABI_CALL(0x004D4798u, sub_004D4798); /* call 0x004D4798 */

loc_004D47CF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D47DD; /* je: equal / zero */

loc_004D47D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D47DCu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D47DC: ;
    POP32(esp, ecx);

loc_004D47DD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D47E3
 * Original: 0x004D47E3 - 0x004D47F0 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D47E3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D47E3: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86A70C;
    esp += 4; return; /* ret */

}

/**
 * sub_004D47F0
 * Original: 0x004D47F0 - 0x004D482B (59 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D47F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D47F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D47F8u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D47F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x004D4804u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D4804: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D481A; /* je: equal / zero */

loc_004D480B: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x004D4818u); RECOMP_ABI_CALL(0x004CB37Eu, sub_004CB37E); /* call 0x004CB37E */

loc_004D4818: ;
    goto loc_004D481C;

loc_004D481A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D481C: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D4827u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D4827: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D482B
 * Original: 0x004D482B - 0x004D484D (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D482B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D482B: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D483Fu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D483F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D484D
 * Original: 0x004D484D - 0x004D486F (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D484D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D484D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D486A; /* je: equal / zero */

loc_004D4856: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D485Du); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D485D: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4CC);
    PUSH32(esp, 0x004D486Au); RECOMP_ABI_CALL(0x004D47F0u, sub_004D47F0); /* call 0x004D47F0 */

loc_004D486A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D486F
 * Original: 0x004D486F - 0x004D48DB (108 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D486F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D486F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D488E; /* je: equal / zero */

loc_004D4878: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D487Fu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D487F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4CC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D488Eu); RECOMP_ABI_CALL(0x004CB480u, sub_004CB480); /* call 0x004CB480 */

loc_004D488E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1C)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

    ecx = MEM32(ecx + 0x20);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_004D48DB
 * Original: 0x004D48DB - 0x004D4905 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D48DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D48DB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004D48E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D48E6u); } /* indirect call */
    }

loc_004D48E9: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D48F2u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D48F2: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D48FF; /* je: equal / zero */

loc_004D48F9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D48FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D48FDu); } /* indirect call */
    }

loc_004D48FF: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D491B
 * Original: 0x004D491B - 0x004D493C (33 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D491B(void)
{

loc_004D491B: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D492Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4927u); } /* indirect call */
    }

loc_004D492A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4930u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D4930: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D493C
 * Original: 0x004D493C - 0x004D495D (33 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D493C(void)
{

loc_004D493C: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D494Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4948u); } /* indirect call */
    }

loc_004D494B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4951u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D4951: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D495D
 * Original: 0x004D495D - 0x004D497D (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D495D(void)
{

loc_004D495D: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004D496Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4969u); } /* indirect call */
    }

loc_004D496C: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4976u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D4976: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D497D
 * Original: 0x004D497D - 0x004D499D (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D497D(void)
{

loc_004D497D: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004D498Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4989u); } /* indirect call */
    }

loc_004D498C: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4996u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D4996: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D49B3
 * Original: 0x004D49B3 - 0x004D49CC (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D49B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D49B3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D49C7; /* je: equal / zero */

loc_004D49BC: ;
    ecx = MEM32(0x90E4CC);
    PUSH32(esp, 0x004D49C7u); RECOMP_ABI_CALL(0x004D48DBu, sub_004D48DB); /* call 0x004D48DB */

loc_004D49C7: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D49CC
 * Original: 0x004D49CC - 0x004D49F2 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D49CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D49CC: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D49DA; /* jne: not equal / not zero */

loc_004D49D5: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D49DA: ;
    eax = MEM32(0x90E4CC);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D49EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D49E7u); } /* indirect call */
    }

loc_004D49EA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D49F0u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D49F0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D49F2
 * Original: 0x004D49F2 - 0x004D4A22 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D49F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D49F2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4A00; /* jne: not equal / not zero */

loc_004D49FB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D4A00: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4A07u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4A07: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4CC);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004D4A1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4A17u); } /* indirect call */
    }

loc_004D4A1A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4A20u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4A20: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4A22
 * Original: 0x004D4A22 - 0x004D4A50 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4A22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4A22: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4A33; /* jne: not equal / not zero */

loc_004D4A2C: ;
    PUSH32(esp, 0x004D4A31u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4A31: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D4A33: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4A3Au); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4A3A: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4CC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4A4Cu); RECOMP_ABI_CALL(0x004D491Bu, sub_004D491B); /* call 0x004D491B */

loc_004D4A4C: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4A50
 * Original: 0x004D4A50 - 0x004D4A7E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4A50: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4A61; /* jne: not equal / not zero */

loc_004D4A5A: ;
    PUSH32(esp, 0x004D4A5Fu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4A5F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D4A61: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4A68u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4A68: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4CC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4A7Au); RECOMP_ABI_CALL(0x004D493Cu, sub_004D493C); /* call 0x004D493C */

loc_004D4A7A: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4A7E
 * Original: 0x004D4A7E - 0x004D4AAC (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4A7E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4A7E: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4A8F; /* jne: not equal / not zero */

loc_004D4A88: ;
    PUSH32(esp, 0x004D4A8Du); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4A8D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D4A8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4A96u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4A96: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4CC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4AA8u); RECOMP_ABI_CALL(0x004D495Du, sub_004D495D); /* call 0x004D495D */

loc_004D4AA8: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4AAC
 * Original: 0x004D4AAC - 0x004D4ADA (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4AAC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4AAC: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4ABD; /* jne: not equal / not zero */

loc_004D4AB6: ;
    PUSH32(esp, 0x004D4ABBu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4ABB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D4ABD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4AC4u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4AC4: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4CC);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4AD6u); RECOMP_ABI_CALL(0x004D497Du, sub_004D497D); /* call 0x004D497D */

loc_004D4AD6: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4ADA
 * Original: 0x004D4ADA - 0x004D4B0A (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4ADA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4ADA: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4AE8; /* jne: not equal / not zero */

loc_004D4AE3: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D4AE8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4AEFu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4AEF: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4CC);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x004D4B02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4AFFu); } /* indirect call */
    }

loc_004D4B02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4B08u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4B08: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4B0A
 * Original: 0x004D4B0A - 0x004D4B3A (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4B0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4B0A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4B18; /* jne: not equal / not zero */

loc_004D4B13: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D4B18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4B1Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4B1F: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4CC);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004D4B32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4B2Fu); } /* indirect call */
    }

loc_004D4B32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4B38u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4B38: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4B3A
 * Original: 0x004D4B3A - 0x004D4B56 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4B3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4B3A: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86A70C;
    if (CMP_EQ(_fa, _fb)) goto loc_004D4B4E; /* je: equal / zero */

loc_004D4B49: ;
    PUSH32(esp, 0x004D4B4Eu); RECOMP_ABI_CALL(0x004D48DBu, sub_004D48DB); /* call 0x004D48DB */

loc_004D4B4E: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4B56
 * Original: 0x004D4B56 - 0x004D4B69 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4B56(void)
{

loc_004D4B56: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86A7E0);
    MEM32(0x90E4CC) = eax;
    PUSH32(esp, 0x004D4B68u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D4B68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D4B69
 * Original: 0x004D4B69 - 0x004D4B85 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4B69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4B69: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D4B71u); RECOMP_ABI_CALL(0x004D4B3Au, sub_004D4B3A); /* call 0x004D4B3A */

loc_004D4B71: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D4B7F; /* je: equal / zero */

loc_004D4B78: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D4B7Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D4B7E: ;
    POP32(esp, ecx);

loc_004D4B7F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4B85
 * Original: 0x004D4B85 - 0x004D4B92 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4B85(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4B85: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86A840;
    esp += 4; return; /* ret */

}

/**
 * sub_004D4B92
 * Original: 0x004D4B92 - 0x004D4BC5 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4B92(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4B92: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D4B9Au); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D4B9A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x004D4BA6u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D4BA6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4BB6; /* je: equal / zero */

loc_004D4BAD: ;
    ecx = eax;
    PUSH32(esp, 0x004D4BB4u); RECOMP_ABI_CALL(0x004CBD0Du, sub_004CBD0D); /* call 0x004CBD0D */

loc_004D4BB4: ;
    goto loc_004D4BB8;

loc_004D4BB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D4BB8: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D4BC3u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D4BC3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4BC5
 * Original: 0x004D4BC5 - 0x004D4BE4 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4BC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4BC5: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D4BD1u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D4BD1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4BDE; /* je: equal / zero */

loc_004D4BD8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D4BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4BDCu); } /* indirect call */
    }

loc_004D4BDE: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4BF8
 * Original: 0x004D4BF8 - 0x004D4C04 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4BF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4BF8: ;
    PUSH32(esp, 0x004D4BFDu); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004D4BFD: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_004D4C27
 * Original: 0x004D4C27 - 0x004D4C41 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4C27(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4C27: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D4C3Bu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D4C3B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D4C41
 * Original: 0x004D4C41 - 0x004D4C51 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4C41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4C41: ;
    ecx = MEM32(0x90E4D0);
    PUSH32(esp, 0x004D4C4Cu); RECOMP_ABI_CALL(0x004D4B92u, sub_004D4B92); /* call 0x004D4B92 */

loc_004D4C4C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4C51
 * Original: 0x004D4C51 - 0x004D4C61 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4C51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4C51: ;
    ecx = MEM32(0x90E4D0);
    PUSH32(esp, 0x004D4C5Cu); RECOMP_ABI_CALL(0x004D4BC5u, sub_004D4BC5); /* call 0x004D4BC5 */

loc_004D4C5C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4C61
 * Original: 0x004D4C61 - 0x004D4C73 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4C61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4C61: ;
    eax = MEM32(0x90E4D0);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D4C6Eu); RECOMP_ABI_CALL(0x004C20E8u, sub_004C20E8); /* call 0x004C20E8 */

loc_004D4C6E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4C73
 * Original: 0x004D4C73 - 0x004D4C91 (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4C73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4C73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4C7Bu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4C7B: ;
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x004D4C83u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004D4C83: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x004D4C8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4C88u); } /* indirect call */
    }

loc_004D4C8B: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4C91
 * Original: 0x004D4C91 - 0x004D4CA4 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4C91(void)
{

loc_004D4C91: ;
    ecx = MEM32(0x90E4D0);
    PUSH32(esp, 0x004D4C9Cu); RECOMP_ABI_CALL(0x004D4BF8u, sub_004D4BF8); /* call 0x004D4BF8 */

loc_004D4C9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4CA2u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4CA2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4CA4
 * Original: 0x004D4CA4 - 0x004D4CC5 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4CA4(void)
{

loc_004D4CA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4CACu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4CAC: ;
    POP32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x004D4CB4u); RECOMP_ABI_CALL(0x004DC976u, sub_004DC976); /* call 0x004DC976 */

loc_004D4CB4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x004D4CBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4CB9u); } /* indirect call */
    }

loc_004D4CBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4CC2u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D4CC2: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4CC5
 * Original: 0x004D4CC5 - 0x004D4CD6 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4CC5(void)
{

loc_004D4CC5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4CCCu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4CCC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4CD3u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D4CD3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4CD6
 * Original: 0x004D4CD6 - 0x004D4CE3 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4CD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4CD6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D4CDDu); RECOMP_ABI_CALL(0x004D0790u, sub_004D0790); /* call 0x004D0790 */

loc_004D4CDD: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4CE3
 * Original: 0x004D4CE3 - 0x004D4CF0 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4CE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4CE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4CEAu); RECOMP_ABI_CALL(0x004D0790u, sub_004D0790); /* call 0x004D0790 */

loc_004D4CEA: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4CF0
 * Original: 0x004D4CF0 - 0x004D4D0C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86A840;
    if (CMP_EQ(_fa, _fb)) goto loc_004D4D04; /* je: equal / zero */

loc_004D4CFF: ;
    PUSH32(esp, 0x004D4D04u); RECOMP_ABI_CALL(0x004D4BC5u, sub_004D4BC5); /* call 0x004D4BC5 */

loc_004D4D04: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4D0C
 * Original: 0x004D4D0C - 0x004D4D1F (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4D0C(void)
{

loc_004D4D0C: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86A8D8);
    MEM32(0x90E4D0) = eax;
    PUSH32(esp, 0x004D4D1Eu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D4D1E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D4D1F
 * Original: 0x004D4D1F - 0x004D4D3B (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4D1F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4D1F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D4D27u); RECOMP_ABI_CALL(0x004D4CF0u, sub_004D4CF0); /* call 0x004D4CF0 */

loc_004D4D27: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D4D35; /* je: equal / zero */

loc_004D4D2E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D4D34u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D4D34: ;
    POP32(esp, ecx);

loc_004D4D35: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4D43
 * Original: 0x004D4D43 - 0x004D4D5C (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4D43(void)
{

loc_004D4D43: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D4D4Bu); RECOMP_ABI_CALL(0x004C14F3u, sub_004C14F3); /* call 0x004C14F3 */

loc_004D4D4B: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4D55u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D4D55: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4D4F
 * Original: 0x004D4D4F - 0x004D4D5C (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4D4F(void)
{

loc_004D4D4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4D55u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D4D55: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4D5C
 * Original: 0x004D4D5C - 0x004D4D79 (29 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4D5C(void)
{

loc_004D4D5C: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D4D68u); RECOMP_ABI_CALL(0x004C1506u, sub_004C1506); /* call 0x004C1506 */

loc_004D4D68: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4D72u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D4D72: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D4D7E
 * Original: 0x004D4D7E - 0x004D4D8F (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4D7E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4D7E: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86A928;
    MEM8(eax + 4) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_004D4D8F
 * Original: 0x004D4D8F - 0x004D4DC4 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4D8F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4D8F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D4D97u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D4D97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x004D4DA3u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D4DA3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4DB5; /* je: equal / zero */

loc_004D4DAA: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D4DB3u); RECOMP_ABI_CALL(0x004C8D97u, sub_004C8D97); /* call 0x004C8D97 */

loc_004D4DB3: ;
    goto loc_004D4DB7;

loc_004D4DB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D4DB7: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D4DC2u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D4DC2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4DC4
 * Original: 0x004D4DC4 - 0x004D4DE3 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4DC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4DC4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D4DD0u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D4DD0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4DDD; /* je: equal / zero */

loc_004D4DD7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D4DDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4DDBu); } /* indirect call */
    }

loc_004D4DDD: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4DEB
 * Original: 0x004D4DEB - 0x004D4E05 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4DEB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4DEB: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D4DFFu); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D4DFF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D4E05
 * Original: 0x004D4E05 - 0x004D4E52 (77 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4E05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4E05: ;
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
    PUSH32(esp, 0x004D4E23u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D4E23: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4E34u); RECOMP_ABI_CALL(0x004C909Bu, sub_004C909B); /* call 0x004C909B */

loc_004D4E34: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4E3Du); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D4E3D: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4E4Eu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D4E4E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4E6A
 * Original: 0x004D4E6A - 0x004D4E84 (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4E6A(void)
{

loc_004D4E6A: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x004D4E72u); RECOMP_ABI_CALL(0x004C14BBu, sub_004C14BB); /* call 0x004C14BB */

loc_004D4E72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4E78u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D4E78: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4E84
 * Original: 0x004D4E84 - 0x004D4ED2 (78 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4E84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4E84: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D4E8Fu); RECOMP_ABI_CALL(0x004CDA11u, sub_004CDA11); /* call 0x004CDA11 */

loc_004D4E8F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4EBB; /* je: equal / zero */

loc_004D4E93: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x004D4E9Bu); RECOMP_ABI_CALL(0x004C14BFu, sub_004C14BF); /* call 0x004C14BF */

loc_004D4E9B: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4EA4u); RECOMP_ABI_CALL(0x004CD9AAu, sub_004CD9AA); /* call 0x004CD9AA */

loc_004D4EA4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D4EABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D4EA8u); } /* indirect call */
    }

loc_004D4EAB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4EB5u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D4EB5: ;
    eax = MEM32(esp + 8);
    goto loc_004D4ECE;

loc_004D4EBB: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x004D4EC5u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D4EC5: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = ecx;

loc_004D4ECE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4ED2
 * Original: 0x004D4ED2 - 0x004D4F1F (77 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D4ED2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4ED2: ;
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
    PUSH32(esp, 0x004D4EF0u); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D4EF0: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64);
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4F01u); RECOMP_ABI_CALL(0x004C90BBu, sub_004C90BB); /* call 0x004C90BB */

loc_004D4F01: ;
    eax = ebp + -104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4F0Au); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D4F0A: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D4F1Bu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D4F1B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D4F1F
 * Original: 0x004D4F1F - 0x004D4F38 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4F1F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4F1F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4F33; /* je: equal / zero */

loc_004D4F28: ;
    ecx = MEM32(0x90E4D4);
    PUSH32(esp, 0x004D4F33u); RECOMP_ABI_CALL(0x004D4D8Fu, sub_004D4D8F); /* call 0x004D4D8F */

loc_004D4F33: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4F38
 * Original: 0x004D4F38 - 0x004D4F51 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4F38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4F38: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4F4C; /* je: equal / zero */

loc_004D4F41: ;
    ecx = MEM32(0x90E4D4);
    PUSH32(esp, 0x004D4F4Cu); RECOMP_ABI_CALL(0x004D4DC4u, sub_004D4DC4); /* call 0x004D4DC4 */

loc_004D4F4C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4F51
 * Original: 0x004D4F51 - 0x004D4F6C (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4F51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4F51: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4F67; /* je: equal / zero */

loc_004D4F5A: ;
    eax = MEM32(0x90E4D4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D4F67u); RECOMP_ABI_CALL(0x004C9075u, sub_004C9075); /* call 0x004C9075 */

loc_004D4F67: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4F6C
 * Original: 0x004D4F6C - 0x004D4F90 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4F6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4F6C: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4F7D; /* jne: not equal / not zero */

loc_004D4F76: ;
    PUSH32(esp, 0x004D4F7Bu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D4F7B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D4F7D: ;
    ecx = MEM32(0x90E4D4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4F8Cu); RECOMP_ABI_CALL(0x004D4E05u, sub_004D4E05); /* call 0x004D4E05 */

loc_004D4F8C: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4F90
 * Original: 0x004D4F90 - 0x004D4FB3 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4F90: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D4F9E; /* jne: not equal / not zero */

loc_004D4F99: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D4F9E: ;
    eax = MEM32(0x90E4D4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D4FABu); RECOMP_ABI_CALL(0x004C14BFu, sub_004C14BF); /* call 0x004C14BF */

loc_004D4FAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D4FB1u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D4FB1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D4FB3
 * Original: 0x004D4FB3 - 0x004D4FD7 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4FB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4FB3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4FD2; /* je: equal / zero */

loc_004D4FBC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4FC3u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D4FC3: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4D4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D4FD2u); RECOMP_ABI_CALL(0x004CD9C5u, sub_004CD9C5); /* call 0x004CD9C5 */

loc_004D4FD2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4FD7
 * Original: 0x004D4FD7 - 0x004D4FFB (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4FD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D4FD7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D4FF6; /* je: equal / zero */

loc_004D4FE0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D4FE7u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D4FE7: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4D4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D4FF6u); RECOMP_ABI_CALL(0x004C90D5u, sub_004C90D5); /* call 0x004C90D5 */

loc_004D4FF6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D4FFB
 * Original: 0x004D4FFB - 0x004D501F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D4FFB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D4FFB: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D500C; /* jne: not equal / not zero */

loc_004D5005: ;
    PUSH32(esp, 0x004D500Au); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D500A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D500C: ;
    ecx = MEM32(0x90E4D4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D501Bu); RECOMP_ABI_CALL(0x004D4E6Au, sub_004D4E6A); /* call 0x004D4E6A */

loc_004D501B: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D501F
 * Original: 0x004D501F - 0x004D5043 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D501F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D501F: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5030; /* jne: not equal / not zero */

loc_004D5029: ;
    PUSH32(esp, 0x004D502Eu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D502E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D5030: ;
    ecx = MEM32(0x90E4D4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D503Fu); RECOMP_ABI_CALL(0x004D4E84u, sub_004D4E84); /* call 0x004D4E84 */

loc_004D503F: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5043
 * Original: 0x004D5043 - 0x004D5067 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5043(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5043: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5054; /* jne: not equal / not zero */

loc_004D504D: ;
    PUSH32(esp, 0x004D5052u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D5052: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D5054: ;
    ecx = MEM32(0x90E4D4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5063u); RECOMP_ABI_CALL(0x004D4ED2u, sub_004D4ED2); /* call 0x004D4ED2 */

loc_004D5063: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5067
 * Original: 0x004D5067 - 0x004D5082 (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5067(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5067: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D507D; /* je: equal / zero */

loc_004D5070: ;
    eax = MEM32(0x90E4D4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D507Du); RECOMP_ABI_CALL(0x004C14DAu, sub_004C14DA); /* call 0x004C14DA */

loc_004D507D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D5082
 * Original: 0x004D5082 - 0x004D50A6 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5082(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5082: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5093; /* jne: not equal / not zero */

loc_004D508C: ;
    PUSH32(esp, 0x004D5091u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D5091: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D5093: ;
    ecx = MEM32(0x90E4D4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D50A2u); RECOMP_ABI_CALL(0x004D4D43u, sub_004D4D43); /* call 0x004D4D43 */

loc_004D50A2: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D50A6
 * Original: 0x004D50A6 - 0x004D50D4 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D50A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D50A6: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D50B7; /* jne: not equal / not zero */

loc_004D50B0: ;
    PUSH32(esp, 0x004D50B5u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D50B5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D50B7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D50BEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D50BE: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4D4);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D50D0u); RECOMP_ABI_CALL(0x004D4D5Cu, sub_004D4D5C); /* call 0x004D4D5C */

loc_004D50D0: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D50D4
 * Original: 0x004D50D4 - 0x004D50EF (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D50D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D50D4: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D50E2; /* jne: not equal / not zero */

loc_004D50DD: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D50E2: ;
    PUSH32(esp, 0x004D50E7u); RECOMP_ABI_CALL(0x004C1532u, sub_004C1532); /* call 0x004C1532 */

loc_004D50E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D50EDu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D50ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D50EF
 * Original: 0x004D50EF - 0x004D510B (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D50EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D50EF: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86A928;
    if (CMP_EQ(_fa, _fb)) goto loc_004D5103; /* je: equal / zero */

loc_004D50FE: ;
    PUSH32(esp, 0x004D5103u); RECOMP_ABI_CALL(0x004D4DC4u, sub_004D4DC4); /* call 0x004D4DC4 */

loc_004D5103: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D510B
 * Original: 0x004D510B - 0x004D51C8 (189 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D510B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D510B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5125u); RECOMP_ABI_CALL(0x004C91A5u, sub_004C91A5); /* call 0x004C91A5 */

loc_004D5125: ;
    ecx = MEM32(edi + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D512Du); RECOMP_ABI_CALL(0x004CD99Au, sub_004CD99A); /* call 0x004CD99A */

loc_004D512D: ;
    PUSH32(esp, 0x64);
    MEM32(ebp + -112) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -104;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D513Eu); RECOMP_ABI_CALL(0x005CFEF0u, sub_005CFEF0); /* call 0x005CFEF0 */

loc_004D513E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -112));
    ecx = ebp + -116;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D514Cu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D514C: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D51B2; /* jbe: below or equal (unsigned <=) */

loc_004D5151: ;
    PUSH32(esp, esi);

loc_004D5152: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D515Bu); RECOMP_ABI_CALL(0x004CD9AAu, sub_004CD9AA); /* call 0x004CD9AA */

loc_004D515B: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D5164u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5161u); } /* indirect call */
    }

loc_004D5164: ;
    MEM32(ebp + -108) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xDC); PUSH32(esp, 0x004D5171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D516Bu); } /* indirect call */
    }

loc_004D5171: ;
    MEM32(ebp + -120) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x004D517Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5178u); } /* indirect call */
    }

loc_004D517E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -120));
    eax = ebp + -104;
    PUSH32(esp, MEM32(ebp + -108));
    PUSH32(esp, 0x86A930);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5195u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D5195: ;
    eax = ebp + -104;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -108) = eax;
    eax = ebp + -108;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -116;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D51ABu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D51AB: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + -112) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D5152; /* jb: below (unsigned <) */

loc_004D51B1: ;
    POP32(esp, esi);

loc_004D51B2: ;
    ecx = MEM32(ebp + -116);
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D51C4u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D51C4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D51C8
 * Original: 0x004D51C8 - 0x004D51EC (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D51C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D51C8: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D51D9; /* jne: not equal / not zero */

loc_004D51D2: ;
    PUSH32(esp, 0x004D51D7u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D51D7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D51D9: ;
    ecx = MEM32(0x90E4D4);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D51E8u); RECOMP_ABI_CALL(0x004D510Bu, sub_004D510B); /* call 0x004D510B */

loc_004D51E8: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D51EC
 * Original: 0x004D51EC - 0x004D5208 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D51EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D51EC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D51F4u); RECOMP_ABI_CALL(0x004D50EFu, sub_004D50EF); /* call 0x004D50EF */

loc_004D51F4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D5202; /* je: equal / zero */

loc_004D51FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D5201u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D5201: ;
    POP32(esp, ecx);

loc_004D5202: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D5208
 * Original: 0x004D5208 - 0x004D521B (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5208(void)
{

loc_004D5208: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86AA40);
    MEM32(0x90E4D4) = eax;
    PUSH32(esp, 0x004D521Au); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D521A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D521B
 * Original: 0x004D521B - 0x004D5228 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D521B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D521B: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86AAC0;
    esp += 4; return; /* ret */

}

/**
 * sub_004D5228
 * Original: 0x004D5228 - 0x004D525D (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5228(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5228: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D5230u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D5230: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x004D523Cu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D523C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D524E; /* je: equal / zero */

loc_004D5243: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D524Cu); RECOMP_ABI_CALL(0x004C69E3u, sub_004C69E3); /* call 0x004C69E3 */

loc_004D524C: ;
    goto loc_004D5250;

loc_004D524E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D5250: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D525Bu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D525B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5241
 * Original: 0x004D5241 - 0x004D525D (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5241(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5241: ;
    if (_flags /* je: equal / zero */) goto loc_004D524E;

loc_004D5243: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x004D524Cu); RECOMP_ABI_CALL(0x004C69E3u, sub_004C69E3); /* call 0x004C69E3 */

loc_004D524C: ;
    goto loc_004D5250;

loc_004D524E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D5250: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D525Bu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D525B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D525D
 * Original: 0x004D525D - 0x004D527C (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D525D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D525D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D5269u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D5269: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5276; /* je: equal / zero */

loc_004D5270: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D5276u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5274u); } /* indirect call */
    }

loc_004D5276: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D527C
 * Original: 0x004D527C - 0x004D52A6 (42 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D527C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D527C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D5290u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D5290: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_004C1367(); return; /* tail jmp 0x004C1367 */

}

/**
 * sub_004D52A6
 * Original: 0x004D52A6 - 0x004D52D6 (48 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D52A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D52A6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D52D2; /* je: equal / zero */

loc_004D52B0: ;
    PUSH32(esp, 0x004D52B5u); RECOMP_ABI_CALL(0x004C6B7Bu, sub_004C6B7B); /* call 0x004C6B7B */

loc_004D52B5: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004D52D2; /* jle: less or equal (signed <=) */

loc_004D52BC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004D52D2; /* jge: greater or equal (signed >=) */

loc_004D52C2: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(esi + 4);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x004D52D2u); RECOMP_ABI_CALL(0x004C6BECu, sub_004C6BEC); /* call 0x004C6BEC */

loc_004D52D2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D52D6
 * Original: 0x004D52D6 - 0x004D52F3 (29 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D52D6(void)
{

loc_004D52D6: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D52E2u); RECOMP_ABI_CALL(0x004C6AD5u, sub_004C6AD5); /* call 0x004C6AD5 */

loc_004D52E2: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D52ECu); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D52EC: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D52F3
 * Original: 0x004D52F3 - 0x004D5310 (29 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D52F3(void)
{

loc_004D52F3: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0x004D52FFu); RECOMP_ABI_CALL(0x004C6B82u, sub_004C6B82); /* call 0x004C6B82 */

loc_004D52FF: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5309u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D5309: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D5310
 * Original: 0x004D5310 - 0x004D5329 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5310: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5324; /* je: equal / zero */

loc_004D5319: ;
    ecx = MEM32(0x90E4D8);
    PUSH32(esp, 0x004D5324u); RECOMP_ABI_CALL(0x004D5228u, sub_004D5228); /* call 0x004D5228 */

loc_004D5324: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D5329
 * Original: 0x004D5329 - 0x004D5342 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5329(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5329: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D533D; /* je: equal / zero */

loc_004D5332: ;
    ecx = MEM32(0x90E4D8);
    PUSH32(esp, 0x004D533Du); RECOMP_ABI_CALL(0x004D525Du, sub_004D525D); /* call 0x004D525D */

loc_004D533D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D5342
 * Original: 0x004D5342 - 0x004D536D (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5342(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5342: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5368; /* je: equal / zero */

loc_004D534B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5352u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5352: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D535Bu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D535B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4D8);
    PUSH32(esp, 0x004D5368u); RECOMP_ABI_CALL(0x004D52A6u, sub_004D52A6); /* call 0x004D52A6 */

loc_004D5368: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D536D
 * Original: 0x004D536D - 0x004D5390 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D536D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D536D: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D537B; /* jne: not equal / not zero */

loc_004D5376: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D537B: ;
    eax = MEM32(0x90E4D8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D5388u); RECOMP_ABI_CALL(0x004C1367u, sub_004C1367); /* call 0x004C1367 */

loc_004D5388: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D538Eu); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D538E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5390
 * Original: 0x004D5390 - 0x004D53B4 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5390: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D53AF; /* je: equal / zero */

loc_004D5399: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D53A0u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D53A0: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4D8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D53AFu); RECOMP_ABI_CALL(0x004C6B3Fu, sub_004C6B3F); /* call 0x004C6B3F */

loc_004D53AF: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D53B4
 * Original: 0x004D53B4 - 0x004D53E2 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D53B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D53B4: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D53C5; /* jne: not equal / not zero */

loc_004D53BE: ;
    PUSH32(esp, 0x004D53C3u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D53C3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D53C5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D53CCu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D53CC: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4D8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D53DEu); RECOMP_ABI_CALL(0x004D52D6u, sub_004D52D6); /* call 0x004D52D6 */

loc_004D53DE: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D53E2
 * Original: 0x004D53E2 - 0x004D5410 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D53E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D53E2: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D53F3; /* jne: not equal / not zero */

loc_004D53EC: ;
    PUSH32(esp, 0x004D53F1u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D53F1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D53F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D53FAu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D53FA: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4D8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D540Cu); RECOMP_ABI_CALL(0x004D52F3u, sub_004D52F3); /* call 0x004D52F3 */

loc_004D540C: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5410
 * Original: 0x004D5410 - 0x004D542C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5410: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86AAC0;
    if (CMP_EQ(_fa, _fb)) goto loc_004D5424; /* je: equal / zero */

loc_004D541F: ;
    PUSH32(esp, 0x004D5424u); RECOMP_ABI_CALL(0x004D525Du, sub_004D525D); /* call 0x004D525D */

loc_004D5424: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D542C
 * Original: 0x004D542C - 0x004D547C (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D542C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D542C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D543Eu); RECOMP_ABI_CALL(0x004C6B7Bu, sub_004C6B7B); /* call 0x004C6B7B */

loc_004D543E: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5449u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D5449: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D546D; /* jbe: below or equal (unsigned <=) */

loc_004D544F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5458u); RECOMP_ABI_CALL(0x004C6BB7u, sub_004C6BB7); /* call 0x004C6BB7 */

loc_004D5458: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5468u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D5468: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D544F; /* jb: below (unsigned <) */

loc_004D546D: ;
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
 * sub_004D547C
 * Original: 0x004D547C - 0x004D54CC (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D547C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D547C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D548Eu); RECOMP_ABI_CALL(0x004C6B7Bu, sub_004C6B7B); /* call 0x004C6B7B */

loc_004D548E: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5499u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D5499: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D54BD; /* jbe: below or equal (unsigned <=) */

loc_004D549F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D54A8u); RECOMP_ABI_CALL(0x004C6B82u, sub_004C6B82); /* call 0x004C6B82 */

loc_004D54A8: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D54B8u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D54B8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D549F; /* jb: below (unsigned <) */

loc_004D54BD: ;
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
 * sub_004D54CC
 * Original: 0x004D54CC - 0x004D551C (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D54CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D54CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D54DEu); RECOMP_ABI_CALL(0x004C6ACEu, sub_004C6ACE); /* call 0x004C6ACE */

loc_004D54DE: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D54E9u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D54E9: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D550D; /* jbe: below or equal (unsigned <=) */

loc_004D54EF: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D54F8u); RECOMP_ABI_CALL(0x004C6B0Au, sub_004C6B0A); /* call 0x004C6B0A */

loc_004D54F8: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5508u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D5508: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D54EF; /* jb: below (unsigned <) */

loc_004D550D: ;
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
 * sub_004D551C
 * Original: 0x004D551C - 0x004D556C (80 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D551C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D551C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D552Eu); RECOMP_ABI_CALL(0x004C6ACEu, sub_004C6ACE); /* call 0x004C6ACE */

loc_004D552E: ;
    ebx = eax;
    PUSH32(esp, ebx);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5539u); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D5539: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D555D; /* jbe: below or equal (unsigned <=) */

loc_004D553F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5548u); RECOMP_ABI_CALL(0x004C6AD5u, sub_004C6AD5); /* call 0x004C6AD5 */

loc_004D5548: ;
    MEM32(ebp + -8) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5558u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D5558: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D553F; /* jb: below (unsigned <) */

loc_004D555D: ;
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
 * sub_004D556C
 * Original: 0x004D556C - 0x004D5588 (28 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D556C(void)
{

loc_004D556C: ;
    ecx = MEM32(0x90E438);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004D5577u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5574u); } /* indirect call */
    }

loc_004D5577: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5581u); RECOMP_ABI_CALL(0x004D0118u, sub_004D0118); /* call 0x004D0118 */

loc_004D5581: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D5588
 * Original: 0x004D5588 - 0x004D55AD (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5588(void)
{

loc_004D5588: ;
    PUSH32(esp, 0x004D558Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_004D558D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x004D5594u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5591u); } /* indirect call */
    }

loc_004D5594: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D559Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D559Cu); } /* indirect call */
    }

loc_004D559F: ;
    PUSH32(esp, eax);
    ecx = 0x90E438;
    PUSH32(esp, 0x004D55AAu); RECOMP_ABI_CALL(0x004AFE27u, sub_004AFE27); /* call 0x004AFE27 */

loc_004D55AA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D55AD
 * Original: 0x004D55AD - 0x004D55D1 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D55AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D55AD: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D55BE; /* jne: not equal / not zero */

loc_004D55B7: ;
    PUSH32(esp, 0x004D55BCu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D55BC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D55BE: ;
    ecx = MEM32(0x90E4D8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D55CDu); RECOMP_ABI_CALL(0x004D542Cu, sub_004D542C); /* call 0x004D542C */

loc_004D55CD: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D55D1
 * Original: 0x004D55D1 - 0x004D55F5 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D55D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D55D1: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D55E2; /* jne: not equal / not zero */

loc_004D55DB: ;
    PUSH32(esp, 0x004D55E0u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D55E0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D55E2: ;
    ecx = MEM32(0x90E4D8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D55F1u); RECOMP_ABI_CALL(0x004D547Cu, sub_004D547C); /* call 0x004D547C */

loc_004D55F1: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D55F5
 * Original: 0x004D55F5 - 0x004D5619 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D55F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D55F5: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5606; /* jne: not equal / not zero */

loc_004D55FF: ;
    PUSH32(esp, 0x004D5604u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D5604: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D5606: ;
    ecx = MEM32(0x90E4D8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5615u); RECOMP_ABI_CALL(0x004D556Cu, sub_004D556C); /* call 0x004D556C */

loc_004D5615: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5619
 * Original: 0x004D5619 - 0x004D563D (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5619(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5619: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D562A; /* jne: not equal / not zero */

loc_004D5623: ;
    PUSH32(esp, 0x004D5628u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D5628: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D562A: ;
    ecx = MEM32(0x90E4D8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5639u); RECOMP_ABI_CALL(0x004D54CCu, sub_004D54CC); /* call 0x004D54CC */

loc_004D5639: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D563D
 * Original: 0x004D563D - 0x004D5661 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D563D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D563D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D564E; /* jne: not equal / not zero */

loc_004D5647: ;
    PUSH32(esp, 0x004D564Cu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D564C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D564E: ;
    ecx = MEM32(0x90E4D8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D565Du); RECOMP_ABI_CALL(0x004D551Cu, sub_004D551C); /* call 0x004D551C */

loc_004D565D: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5661
 * Original: 0x004D5661 - 0x004D5683 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5661(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5661: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D567E; /* je: equal / zero */

loc_004D566A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5671u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5671: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4D8);
    PUSH32(esp, 0x004D567Eu); RECOMP_ABI_CALL(0x004D5588u, sub_004D5588); /* call 0x004D5588 */

loc_004D567E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D5683
 * Original: 0x004D5683 - 0x004D569F (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5683(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5683: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D568Bu); RECOMP_ABI_CALL(0x004D5410u, sub_004D5410); /* call 0x004D5410 */

loc_004D568B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D5699; /* je: equal / zero */

loc_004D5692: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D5698u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D5698: ;
    POP32(esp, ecx);

loc_004D5699: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D569F
 * Original: 0x004D569F - 0x004D56B2 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D569F(void)
{

loc_004D569F: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86AB78);
    MEM32(0x90E4D8) = eax;
    PUSH32(esp, 0x004D56B1u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D56B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D56B2
 * Original: 0x004D56B2 - 0x004D56BC (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D56B2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D56B2: ;
    eax = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004D56BC
 * Original: 0x004D56BC - 0x004D56BD (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D56BC(void)
{

loc_004D56BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D56BD
 * Original: 0x004D56BD - 0x004D5787 (202 bytes, 84 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D56BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D56BD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_004D571B; /* je: equal / zero */

loc_004D56CE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D56D3u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D56D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D56DDu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D56DD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D56F5; /* je: equal / zero */

loc_004D56E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D56F3u); RECOMP_ABI_CALL(0x004C4E94u, sub_004C4E94); /* call 0x004C4E94 */

loc_004D56F3: ;
    goto loc_004D56F7;

loc_004D56F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D56F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x86ABE8);
    esi = edi + 8;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    MEM32(edi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D570Bu); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D570B: ;
    ecx = MEM32(edi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5717u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D5717: ;
    eax = esi;
    goto loc_004D5780;

loc_004D571B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi + 0x24;

loc_004D5721: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5730; /* je: equal / zero */

loc_004D5725: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D5721; /* jb: below (unsigned <) */

loc_004D572E: ;
    goto loc_004D5780;

loc_004D5730: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5735u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D5735: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D573Fu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D573F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5757; /* je: equal / zero */

loc_004D5746: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5755u); RECOMP_ABI_CALL(0x004C4E94u, sub_004C4E94); /* call 0x004C4E94 */

loc_004D5755: ;
    goto loc_004D5759;

loc_004D5757: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D5759: ;
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
    ebx = esi + 8;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5772u); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D5772: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D577Eu); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D577E: ;
    eax = ebx;

loc_004D5780: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D5787
 * Original: 0x004D5787 - 0x004D57D5 (78 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5787(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5787: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 8;

loc_004D5791: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004D579Bu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004D579B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004D57AC; /* je: equal / zero */

loc_004D57A1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D5791; /* jb: below (unsigned <) */

loc_004D57AA: ;
    goto loc_004D57CF;

loc_004D57AC: ;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x004D57BAu); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D57BA: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D57C7; /* je: equal / zero */

loc_004D57C1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D57C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D57C5u); } /* indirect call */
    }

loc_004D57C7: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 8) = 0;

loc_004D57CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D57D5
 * Original: 0x004D57D5 - 0x004D580D (56 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D57D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D57D5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi + 8;

loc_004D57E2: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004D57ECu); RECOMP_ABI_CALL(0x005CFF90u, sub_005CFF90); /* call 0x005CFF90 */

loc_004D57EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004D57FD; /* je: equal / zero */

loc_004D57F2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D57E2; /* jb: below (unsigned <) */

loc_004D57FB: ;
    goto loc_004D5804;

loc_004D57FD: ;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebp = MEM32(esi + edi + 0x14);

loc_004D5804: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D580D
 * Original: 0x004D580D - 0x004D5827 (26 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D580D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D580D: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D5821u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D5821: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D5827
 * Original: 0x004D5827 - 0x004D583E (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5827(void)
{

loc_004D5827: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D5830u); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D5830: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = eax;
    PUSH32(esp, 0x004D583Bu); RECOMP_ABI_CALL(0x004C4F54u, sub_004C4F54); /* call 0x004C4F54 */

loc_004D583B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D583E
 * Original: 0x004D583E - 0x004D587A (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D583E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D583E: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D584C; /* jne: not equal / not zero */

loc_004D5847: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D584C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x004D5853u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5853: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D585Cu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D585C: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5865u); RECOMP_ABI_CALL(0x004D07B4u, sub_004D07B4); /* call 0x004D07B4 */

loc_004D5865: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5872u); RECOMP_ABI_CALL(0x004D56BDu, sub_004D56BD); /* call 0x004D56BD */

loc_004D5872: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5878u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D5878: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D587A
 * Original: 0x004D587A - 0x004D589C (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D587A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D587A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5897; /* je: equal / zero */

loc_004D5883: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D588Au); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D588A: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, 0x004D5897u); RECOMP_ABI_CALL(0x004D5787u, sub_004D5787); /* call 0x004D5787 */

loc_004D5897: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D589C
 * Original: 0x004D589C - 0x004D58CE (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D589C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D589C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D58C2; /* je: equal / zero */

loc_004D58A5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D58ACu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D58AC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D58B5u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D58B5: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, 0x004D58C2u); RECOMP_ABI_CALL(0x004D5827u, sub_004D5827); /* call 0x004D5827 */

loc_004D58C2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D58CE
 * Original: 0x004D58CE - 0x004D58ED (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D58CE(void)
{

loc_004D58CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4D56B2);
    esi = ecx;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    eax = esi + 8;
    PUSH32(esp, eax);
    MEM32(esi) = 0x86ABF0;
    PUSH32(esp, 0x004D58E9u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_004D58E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D58ED
 * Original: 0x004D58ED - 0x004D592C (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D58ED(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D58ED: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 2);
    MEM32(esi) = 0x86ABF0;
    edi = esi + 0x14;
    POP32(esp, ebx);

loc_004D58FE: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D590A; /* je: equal / zero */

loc_004D5904: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D590Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5908u); } /* indirect call */
    }

loc_004D590A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_004D58FE; /* jne: not equal / not zero */

loc_004D5910: ;
    PUSH32(esp, 0x4D56BC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5922u); RECOMP_ABI_CALL(0x00029295u, sub_00029295); /* call 0x00029295 */

loc_004D5922: ;
    POP32(esp, edi);
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D592C
 * Original: 0x004D592C - 0x004D5940 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D592C(void)
{

loc_004D592C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D5935u); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D5935: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x004D593Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D593Au); } /* indirect call */
    }

loc_004D593D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D5940
 * Original: 0x004D5940 - 0x004D5984 (68 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D5940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5956u); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D5956: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x10));
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004D5967u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5964u); } /* indirect call */
    }

loc_004D5967: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5970u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D5970: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5980u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D5980: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D5984
 * Original: 0x004D5984 - 0x004D599C (24 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5984(void)
{

loc_004D5984: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D598Du); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D598D: ;
    ecx = MEM32(eax + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D5999u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5996u); } /* indirect call */
    }

loc_004D5999: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D599C
 * Original: 0x004D599C - 0x004D59B4 (24 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D599C(void)
{

loc_004D599C: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D59A5u); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D59A5: ;
    ecx = MEM32(eax + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D59B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D59AEu); } /* indirect call */
    }

loc_004D59B1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D59B4
 * Original: 0x004D59B4 - 0x004D59CC (24 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D59B4(void)
{

loc_004D59B4: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D59BDu); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D59BD: ;
    ecx = MEM32(eax + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004D59C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D59C6u); } /* indirect call */
    }

loc_004D59C9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D59CC
 * Original: 0x004D59CC - 0x004D59E8 (28 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D59CC(void)
{

loc_004D59CC: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D59D5u); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D59D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004D59E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D59E2u); } /* indirect call */
    }

loc_004D59E5: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D59E8
 * Original: 0x004D59E8 - 0x004D5A00 (24 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D59E8(void)
{

loc_004D59E8: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x004D59F1u); RECOMP_ABI_CALL(0x004D57D5u, sub_004D57D5); /* call 0x004D57D5 */

loc_004D59F1: ;
    ecx = MEM32(eax + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004D59FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D59FAu); } /* indirect call */
    }

loc_004D59FD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D5A00
 * Original: 0x004D5A00 - 0x004D5A2A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5A00: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5A0E; /* jne: not equal / not zero */

loc_004D5A09: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D5A0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5A15u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5A15: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5A22u); RECOMP_ABI_CALL(0x004D592Cu, sub_004D592C); /* call 0x004D592C */

loc_004D5A22: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5A28u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D5A28: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5A2A
 * Original: 0x004D5A2A - 0x004D5A61 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5A2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5A2A: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5A3B; /* jne: not equal / not zero */

loc_004D5A34: ;
    PUSH32(esp, 0x004D5A39u); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D5A39: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D5A3B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5A42u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D5A42: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5A4Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5A4B: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5A5Du); RECOMP_ABI_CALL(0x004D5940u, sub_004D5940); /* call 0x004D5940 */

loc_004D5A5D: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5A61
 * Original: 0x004D5A61 - 0x004D5A94 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5A61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5A61: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5A6F; /* jne: not equal / not zero */

loc_004D5A6A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D5A6F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5A76u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D5A76: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5A7Fu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5A7F: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5A8Cu); RECOMP_ABI_CALL(0x004D5984u, sub_004D5984); /* call 0x004D5984 */

loc_004D5A8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5A92u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D5A92: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5A94
 * Original: 0x004D5A94 - 0x004D5AC7 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5A94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5A94: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5AA2; /* jne: not equal / not zero */

loc_004D5A9D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D5AA2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5AA9u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D5AA9: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5AB2u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5AB2: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5ABFu); RECOMP_ABI_CALL(0x004D599Cu, sub_004D599C); /* call 0x004D599C */

loc_004D5ABF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5AC5u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D5AC5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5AC7
 * Original: 0x004D5AC7 - 0x004D5AFA (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5AC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5AC7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5AD5; /* jne: not equal / not zero */

loc_004D5AD0: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D5AD5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5ADCu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D5ADC: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5AE5u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5AE5: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5AF2u); RECOMP_ABI_CALL(0x004D59B4u, sub_004D59B4); /* call 0x004D59B4 */

loc_004D5AF2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5AF8u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D5AF8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5AFA
 * Original: 0x004D5AFA - 0x004D5B36 (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5AFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5AFA: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5B08; /* jne: not equal / not zero */

loc_004D5B03: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D5B08: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x004D5B0Fu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D5B0F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5B18u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D5B18: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5B21u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5B21: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5B2Eu); RECOMP_ABI_CALL(0x004D59CCu, sub_004D59CC); /* call 0x004D59CC */

loc_004D5B2E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5B34u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5B34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5B36
 * Original: 0x004D5B36 - 0x004D5B69 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5B36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5B36: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5B44; /* jne: not equal / not zero */

loc_004D5B3F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D5B44: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5B4Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5B4B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5B54u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5B54: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5B61u); RECOMP_ABI_CALL(0x004D59E8u, sub_004D59E8); /* call 0x004D59E8 */

loc_004D5B61: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D5B67u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5B67: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5B69
 * Original: 0x004D5B69 - 0x004D5B85 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5B69(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5B69: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D5B71u); RECOMP_ABI_CALL(0x004D58EDu, sub_004D58ED); /* call 0x004D58ED */

loc_004D5B71: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D5B7F; /* je: equal / zero */

loc_004D5B78: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D5B7Eu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D5B7E: ;
    POP32(esp, ecx);

loc_004D5B7F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D5B85
 * Original: 0x004D5B85 - 0x004D5B98 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5B85(void)
{

loc_004D5B85: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86AC80);
    MEM32(0x90E4DC) = eax;
    PUSH32(esp, 0x004D5B97u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D5B97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D5B98
 * Original: 0x004D5B98 - 0x004D5BA5 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5B98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5B98: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86ACD8;
    esp += 4; return; /* ret */

}

/**
 * sub_004D5BA5
 * Original: 0x004D5BA5 - 0x004D5BE4 (63 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5BA5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5BA5: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D5BADu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D5BAD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004D5BB9u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D5BB9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5BD3; /* je: equal / zero */

loc_004D5BC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004D5BD1u); RECOMP_ABI_CALL(0x004C4D54u, sub_004C4D54); /* call 0x004C4D54 */

loc_004D5BD1: ;
    goto loc_004D5BD5;

loc_004D5BD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D5BD5: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x004D5BE0u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D5BE0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D5BE4
 * Original: 0x004D5BE4 - 0x004D5C03 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5BE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5BE4: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D5BF0u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D5BF0: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5BFD; /* je: equal / zero */

loc_004D5BF7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D5BFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5BFBu); } /* indirect call */
    }

loc_004D5BFD: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5C03
 * Original: 0x004D5C03 - 0x004D5C25 (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5C03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5C03: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D5C17u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D5C17: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D5C25
 * Original: 0x004D5C25 - 0x004D5DCB (422 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D5C25(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5C25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C32u); RECOMP_ABI_CALL(0x00508130u, sub_00508130); /* call 0x00508130 */

loc_004D5C32: ;
    POP32(esp, ecx);
    ecx = ebp + -4;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C3Du); RECOMP_ABI_CALL(0x00504C30u, sub_00504C30); /* call 0x00504C30 */

loc_004D5C3D: ;
    PUSH32(esp, 0x86AD10);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C4Au); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D5C4A: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C56u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D5C56: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C5Eu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5C5E: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C66u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5C66: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C71u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D5C71: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86AD08);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C81u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D5C81: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C8Du); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D5C8D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C95u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5C95: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5C9Du); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5C9D: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CA8u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D5CA8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86AD00);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CB8u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D5CB8: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CC4u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D5CC4: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CCCu); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5CCC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CD4u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5CD4: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CDFu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D5CDF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86ACF8);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CEFu); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D5CEF: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5CFBu); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D5CFB: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D03u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5D03: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D0Bu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5D0B: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D16u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D5D16: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86ACF0);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D26u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D5D26: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D32u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D5D32: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D3Au); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5D3A: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D42u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5D42: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D4Du); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D5D4D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86ACE8);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D5Du); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D5D5D: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D69u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D5D69: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D71u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5D71: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D79u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5D79: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D84u); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D5D84: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x86ACE0);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5D94u); RECOMP_ABI_CALL(0x00504C60u, sub_00504C60); /* call 0x00504C60 */

loc_004D5D94: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5DA0u); RECOMP_ABI_CALL(0x00504CD0u, sub_00504CD0); /* call 0x00504CD0 */

loc_004D5DA0: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5DA8u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5DA8: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5DB0u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D5DB0: ;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5DBBu); RECOMP_ABI_CALL(0x005058B0u, sub_005058B0); /* call 0x005058B0 */

loc_004D5DBB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5DC6u); RECOMP_ABI_CALL(0x00504C90u, sub_00504C90); /* call 0x00504C90 */

loc_004D5DC6: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004D5DCB
 * Original: 0x004D5DCB - 0x004D5DF6 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5DCB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5DCB: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5DF1; /* je: equal / zero */

loc_004D5DD4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D5DDBu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5DDB: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5DE4u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5DE4: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4E0);
    PUSH32(esp, 0x004D5DF1u); RECOMP_ABI_CALL(0x004D5BA5u, sub_004D5BA5); /* call 0x004D5BA5 */

loc_004D5DF1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D5DF6
 * Original: 0x004D5DF6 - 0x004D5E0F (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5DF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5DF6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5E0A; /* je: equal / zero */

loc_004D5DFF: ;
    ecx = MEM32(0x90E4E0);
    PUSH32(esp, 0x004D5E0Au); RECOMP_ABI_CALL(0x004D5BE4u, sub_004D5BE4); /* call 0x004D5BE4 */

loc_004D5E0A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D5E0F
 * Original: 0x004D5E0F - 0x004D5E3A (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5E0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D5E0F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D5E2E; /* je: equal / zero */

loc_004D5E18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D5E1Fu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D5E1F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4E0);
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x004D5E2Eu); RECOMP_ABI_CALL(0x004C4E14u, sub_004C4E14); /* call 0x004C4E14 */

loc_004D5E2E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5E3A
 * Original: 0x004D5E3A - 0x004D5E56 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5E3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5E3A: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    MEM32(esi) = 0x86ACD8;
    if (CMP_EQ(_fa, _fb)) goto loc_004D5E4E; /* je: equal / zero */

loc_004D5E49: ;
    PUSH32(esp, 0x004D5E4Eu); RECOMP_ABI_CALL(0x004D5BE4u, sub_004D5BE4); /* call 0x004D5BE4 */

loc_004D5E4E: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D5E8D
 * Original: 0x004D5E8D - 0x004D5F8F (258 bytes, 96 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D5E8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5E8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D5EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5EAAu); } /* indirect call */
    }

loc_004D5EAD: ;
    ebx = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5EBBu); RECOMP_ABI_CALL(0x004DB7FCu, sub_004DB7FC); /* call 0x004DB7FC */

loc_004D5EBB: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & edi;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004D5F78; /* jbe: below or equal (unsigned <=) */

loc_004D5EC6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -20));
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x004D5ED0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5ECDu); } /* indirect call */
    }

loc_004D5ED0: ;
    MEM32(ebp + -32) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5EE0u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D5EE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -20));
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x004D5EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5EE8u); } /* indirect call */
    }

loc_004D5EEB: ;
    MEM32(ebp + -36) = eax;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5EFBu); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D5EFB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -20));
    eax = MEM32(esi);
    ecx = ebp + -60;
    PUSH32(esp, ecx);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x004D5F0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5F07u); } /* indirect call */
    }

loc_004D5F0A: ;
    PUSH32(esp, MEM32(ebp + -56));
    eax = ebp + -16;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5F1Du); RECOMP_ABI_CALL(0x004E3665u, sub_004E3665); /* call 0x004E3665 */

loc_004D5F1D: ;
    eax = ebp + -16;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -40) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5F33u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D5F33: ;
    eax = MEM32(ebp + -52);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004D5F4F; /* je: equal / zero */

loc_004D5F3A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_004D5F46; /* je: equal / zero */

loc_004D5F3D: ;
    MEM32(ebp + -28) = 0x7ED98C;
    goto loc_004D5F56;

loc_004D5F46: ;
    MEM32(ebp + -28) = 0x7ED954;
    goto loc_004D5F56;

loc_004D5F4F: ;
    MEM32(ebp + -28) = 0x7ED92C;

loc_004D5F56: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5F63u); RECOMP_ABI_CALL(0x004DB81Eu, sub_004DB81E); /* call 0x004DB81E */

loc_004D5F63: ;
    ecx = ebp + -60;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5F6Cu); RECOMP_ABI_CALL(0x006083D3u, sub_006083D3); /* call 0x006083D3 */

loc_004D5F6C: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004D5EC6; /* jb: below (unsigned <) */

loc_004D5F78: ;
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D5F8Bu); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D5F8B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D5FB0
 * Original: 0x004D5FB0 - 0x004D5FCA (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5FB0(void)
{

loc_004D5FB0: ;
    eax = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x004D5FC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5FC0u); } /* indirect call */
    }

loc_004D5FC3: ;
    eax = MEM32(esp + 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D5FD5
 * Original: 0x004D5FD5 - 0x004D5FEA (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D5FD5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D5FD5: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x004D5FE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D5FDDu); } /* indirect call */
    }

loc_004D5FE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D5FE9; /* jne: not equal / not zero */

loc_004D5FE4: ;
    eax = 0x86AD18;

loc_004D5FE9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D6000
 * Original: 0x004D6000 - 0x004D6026 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6000: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D600E; /* jne: not equal / not zero */

loc_004D6009: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D600E: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x004D601Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D601Bu); } /* indirect call */
    }

loc_004D601E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6024u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6024: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6026
 * Original: 0x004D6026 - 0x004D604C (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6026(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6026: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6034; /* jne: not equal / not zero */

loc_004D602F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6034: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004D6044u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6041u); } /* indirect call */
    }

loc_004D6044: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D604Au); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D604A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D604C
 * Original: 0x004D604C - 0x004D6072 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D604C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D604C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D605A; /* jne: not equal / not zero */

loc_004D6055: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D605A: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x004D606Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6067u); } /* indirect call */
    }

loc_004D606A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6070u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6070: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6072
 * Original: 0x004D6072 - 0x004D6098 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6072(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6072: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6080; /* jne: not equal / not zero */

loc_004D607B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6080: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004D6090u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D608Du); } /* indirect call */
    }

loc_004D6090: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6096u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6096: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6098
 * Original: 0x004D6098 - 0x004D60BE (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6098(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6098: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D60A6; /* jne: not equal / not zero */

loc_004D60A1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D60A6: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x004D60B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D60B3u); } /* indirect call */
    }

loc_004D60B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D60BCu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D60BC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D60BE
 * Original: 0x004D60BE - 0x004D60E2 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D60BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D60BE: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D60CF; /* jne: not equal / not zero */

loc_004D60C8: ;
    PUSH32(esp, 0x004D60CDu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D60CD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D60CF: ;
    ecx = MEM32(0x90E4E0);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D60DEu); RECOMP_ABI_CALL(0x004D5E8Du, sub_004D5E8D); /* call 0x004D5E8D */

loc_004D60DE: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D60E2
 * Original: 0x004D60E2 - 0x004D611F (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D60E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D60E2: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D60F0; /* jne: not equal / not zero */

loc_004D60EB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D60F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D60F8u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D60F8: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x004D6101u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6101: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x90E4E0);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004D6116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6113u); } /* indirect call */
    }

loc_004D6116: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D611Cu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D611C: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D611F
 * Original: 0x004D611F - 0x004D6145 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D611F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D611F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D612D; /* jne: not equal / not zero */

loc_004D6128: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D612D: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x004D613Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D613Au); } /* indirect call */
    }

loc_004D613D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6143u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6143: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6145
 * Original: 0x004D6145 - 0x004D616B (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6145(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6145: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6153; /* jne: not equal / not zero */

loc_004D614E: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6153: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x004D6163u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6160u); } /* indirect call */
    }

loc_004D6163: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6169u); RECOMP_ABI_CALL(0x004D0808u, sub_004D0808); /* call 0x004D0808 */

loc_004D6169: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D616B
 * Original: 0x004D616B - 0x004D61B3 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D616B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D616B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_004D6180; /* jne: not equal / not zero */

loc_004D6179: ;
    PUSH32(esp, 0x004D617Eu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D617E: ;
    goto loc_004D61AD;

loc_004D6180: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6187u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6187: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4E0);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6199u); RECOMP_ABI_CALL(0x004D5FB0u, sub_004D5FB0); /* call 0x004D5FB0 */

loc_004D6199: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 7);
    POP32(esp, ecx);
    esi = eax;
    edi = esp;
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
    PUSH32(esp, 0x004D61AAu); RECOMP_ABI_CALL(0x004D5C25u, sub_004D5C25); /* call 0x004D5C25 */

loc_004D61AA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004D61AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_004D61B3
 * Original: 0x004D61B3 - 0x004D61F0 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D61B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D61B3: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D61C1; /* jne: not equal / not zero */

loc_004D61BC: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D61C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D61C9u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D61C9: ;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x004D61D2u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D61D2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(0x90E4E0);
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x1C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x004D61E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D61E4u); } /* indirect call */
    }

loc_004D61E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D61EDu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D61ED: ;
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D61F0
 * Original: 0x004D61F0 - 0x004D6211 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D61F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D61F0: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D61FE; /* jne: not equal / not zero */

loc_004D61F9: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D61FE: ;
    ecx = MEM32(0x90E4E0);
    PUSH32(esp, 0x004D6209u); RECOMP_ABI_CALL(0x004D5FD5u, sub_004D5FD5); /* call 0x004D5FD5 */

loc_004D6209: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D620Fu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D620F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6211
 * Original: 0x004D6211 - 0x004D6237 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6211(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6211: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D621F; /* jne: not equal / not zero */

loc_004D621A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D621F: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x004D622Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D622Cu); } /* indirect call */
    }

loc_004D622F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6235u); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D6235: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6237
 * Original: 0x004D6237 - 0x004D625D (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6237(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6237: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6245; /* jne: not equal / not zero */

loc_004D6240: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6245: ;
    eax = MEM32(0x90E4E0);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x004D6255u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D6252u); } /* indirect call */
    }

loc_004D6255: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D625Bu); RECOMP_ABI_CALL(0x004D080Du, sub_004D080D); /* call 0x004D080D */

loc_004D625B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D625D
 * Original: 0x004D625D - 0x004D6279 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D625D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D625D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D6265u); RECOMP_ABI_CALL(0x004D5E3Au, sub_004D5E3A); /* call 0x004D5E3A */

loc_004D6265: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D6273; /* je: equal / zero */

loc_004D626C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D6272u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D6272: ;
    POP32(esp, ecx);

loc_004D6273: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D6279
 * Original: 0x004D6279 - 0x004D628C (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6279(void)
{

loc_004D6279: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86AE40);
    MEM32(0x90E4E0) = eax;
    PUSH32(esp, 0x004D628Bu); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D628B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D628C
 * Original: 0x004D628C - 0x004D62C7 (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D628C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D628C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7B891F;
    PUSH32(esp, edi);
    MEM32(esi) = 0x86AED0;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x004D62AAu); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D62AA: ;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, 0x004D62B9u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D62B9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x18) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D62C7
 * Original: 0x004D62C7 - 0x004D6306 (63 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D62C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D62C7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D62CFu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D62CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004D62DBu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D62DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D62F5; /* je: equal / zero */

loc_004D62E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x004D62F3u); RECOMP_ABI_CALL(0x004C4AF0u, sub_004C4AF0); /* call 0x004C4AF0 */

loc_004D62F3: ;
    goto loc_004D62F7;

loc_004D62F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D62F7: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x004D6302u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D6302: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D6306
 * Original: 0x004D6306 - 0x004D6325 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6306(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6306: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D6312u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D6312: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D631F; /* je: equal / zero */

loc_004D6319: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D631Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D631Du); } /* indirect call */
    }

loc_004D631F: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6325
 * Original: 0x004D6325 - 0x004D6377 (82 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6325(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6325: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D6339u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D6339: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    eax = MEM32(ecx + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D6377
 * Original: 0x004D6377 - 0x004D63BE (71 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D6377(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_004D6377: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = esi + 8;
    PUSH32(esp, eax);
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D63A1u); RECOMP_ABI_CALL(0x004C4BB8u, sub_004C4BB8); /* call 0x004C4BB8 */

loc_004D63A1: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D63A9u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D63A9: ;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(esi + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D63B4u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D63B4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D63C6
 * Original: 0x004D63C6 - 0x004D63F1 (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D63C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D63C6: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D63EC; /* je: equal / zero */

loc_004D63CF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x004D63D6u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D63D6: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D63DFu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D63DF: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4E4);
    PUSH32(esp, 0x004D63ECu); RECOMP_ABI_CALL(0x004D62C7u, sub_004D62C7); /* call 0x004D62C7 */

loc_004D63EC: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D63F1
 * Original: 0x004D63F1 - 0x004D640A (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D63F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D63F1: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6405; /* je: equal / zero */

loc_004D63FA: ;
    ecx = MEM32(0x90E4E4);
    PUSH32(esp, 0x004D6405u); RECOMP_ABI_CALL(0x004D6306u, sub_004D6306); /* call 0x004D6306 */

loc_004D6405: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D640A
 * Original: 0x004D640A - 0x004D642C (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D640A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D640A: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6427; /* je: equal / zero */

loc_004D6413: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D641Au); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D641A: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4E4);
    PUSH32(esp, 0x004D6427u); RECOMP_ABI_CALL(0x004D6377u, sub_004D6377); /* call 0x004D6377 */

loc_004D6427: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D642C
 * Original: 0x004D642C - 0x004D644F (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D642C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D642C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D643A; /* jne: not equal / not zero */

loc_004D6435: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D643A: ;
    eax = MEM32(0x90E4E4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D6447u); RECOMP_ABI_CALL(0x004C4BB0u, sub_004C4BB0); /* call 0x004C4BB0 */

loc_004D6447: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D644Du); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D644D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D644F
 * Original: 0x004D644F - 0x004D6474 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D644F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D644F: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D645D; /* jne: not equal / not zero */

loc_004D6458: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D645D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6464u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6464: ;
    eax = MEM32(0x90E4E4);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, 0x004D6471u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6471: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6474
 * Original: 0x004D6474 - 0x004D6499 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6474(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6474: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6482; /* jne: not equal / not zero */

loc_004D647D: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6482: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6489u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6489: ;
    eax = MEM32(0x90E4E4);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0x004D6496u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6496: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6499
 * Original: 0x004D6499 - 0x004D64B8 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6499(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6499: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D64A7; /* jne: not equal / not zero */

loc_004D64A2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D64A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D64AEu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D64AE: ;
    eax = MEM32(0x90E4E4);
    eax = MEM32(eax + 0xC);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D64B8
 * Original: 0x004D64B8 - 0x004D64DD (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D64B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D64B8: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D64C6; /* jne: not equal / not zero */

loc_004D64C1: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D64C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D64CDu); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D64CD: ;
    eax = MEM32(0x90E4E4);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, 0x004D64DAu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D64DA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D64DD
 * Original: 0x004D64DD - 0x004D6502 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D64DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D64DD: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D64EB; /* jne: not equal / not zero */

loc_004D64E6: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D64EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D64F2u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D64F2: ;
    eax = MEM32(0x90E4E4);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D64FFu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D64FF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6502
 * Original: 0x004D6502 - 0x004D6521 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6502: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6510; /* jne: not equal / not zero */

loc_004D650B: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6510: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6517u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D6517: ;
    eax = MEM32(0x90E4E4);
    eax = MEM32(eax + 0x18);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6521
 * Original: 0x004D6521 - 0x004D6545 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6521(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6521: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D6540; /* je: equal / zero */

loc_004D652A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D6531u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D6531: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4E4);
    ecx = MEM32(eax + 0x1C);
    PUSH32(esp, 0x004D6540u); RECOMP_ABI_CALL(0x004C4BEFu, sub_004C4BEF); /* call 0x004C4BEF */

loc_004D6540: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6545
 * Original: 0x004D6545 - 0x004D6561 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6545(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6545: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    MEM32(esi) = 0x86AED0;
    if (CMP_EQ(_fa, _fb)) goto loc_004D6559; /* je: equal / zero */

loc_004D6554: ;
    PUSH32(esp, 0x004D6559u); RECOMP_ABI_CALL(0x004D6306u, sub_004D6306); /* call 0x004D6306 */

loc_004D6559: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6561
 * Original: 0x004D6561 - 0x004D6574 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6561(void)
{

loc_004D6561: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86AF98);
    MEM32(0x90E4E4) = eax;
    PUSH32(esp, 0x004D6573u); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D6573: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D6574
 * Original: 0x004D6574 - 0x004D6590 (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6574(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6574: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D657Cu); RECOMP_ABI_CALL(0x004D6545u, sub_004D6545); /* call 0x004D6545 */

loc_004D657C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D658A; /* je: equal / zero */

loc_004D6583: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D6589u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D6589: ;
    POP32(esp, ecx);

loc_004D658A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D6590
 * Original: 0x004D6590 - 0x004D659D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6590: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86AFF8;
    esp += 4; return; /* ret */

}

/**
 * sub_004D659D
 * Original: 0x004D659D - 0x004D65D8 (59 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D659D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D659D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D65A5u); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D65A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x004D65B1u); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D65B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D65C7; /* je: equal / zero */

loc_004D65B8: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x004D65C5u); RECOMP_ABI_CALL(0x004C490Du, sub_004C490D); /* call 0x004C490D */

loc_004D65C5: ;
    goto loc_004D65C9;

loc_004D65C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D65C9: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D65D4u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D65D4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D6600
 * Original: 0x004D6600 - 0x004D6648 (72 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D6600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6600: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(ecx + 4);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x80);
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6628u); RECOMP_ABI_CALL(0x004C4A31u, sub_004C4A31); /* call 0x004C4A31 */

loc_004D6628: ;
    eax = ebp + -132;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6634u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6634: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6644u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D6644: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D6648
 * Original: 0x004D6648 - 0x004D6684 (60 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004D6648(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6648: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x8E19F0);
    ecx = MEM32(ecx + 4);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0x18);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6667u); RECOMP_ABI_CALL(0x004C4A61u, sub_004C4A61); /* call 0x004C4A61 */

loc_004D6667: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6670u); RECOMP_ABI_CALL(0x004D0821u, sub_004D0821); /* call 0x004D0821 */

loc_004D6670: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004D6680u); RECOMP_ABI_CALL(0x005CFF80u, sub_005CFF80); /* call 0x005CFF80 */

loc_004D6680: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004D6684
 * Original: 0x004D6684 - 0x004D66A3 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6684(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D6684: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D6690u); RECOMP_ABI_CALL(0x004C1895u, sub_004C1895); /* call 0x004C1895 */

loc_004D6690: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D669D; /* je: equal / zero */

loc_004D6697: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004D669Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004D669Bu); } /* indirect call */
    }

loc_004D669D: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D66A3
 * Original: 0x004D66A3 - 0x004D66C5 (34 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D66A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D66A3: ;
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, 0x004D66B7u); RECOMP_ABI_CALL(0x004D0020u, sub_004D0020); /* call 0x004D0020 */

loc_004D66B7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004D66C5
 * Original: 0x004D66C5 - 0x004D66E7 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D66C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D66C5: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D66E2; /* je: equal / zero */

loc_004D66CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D66D5u); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D66D5: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = MEM32(0x90E4E8);
    PUSH32(esp, 0x004D66E2u); RECOMP_ABI_CALL(0x004D659Du, sub_004D659D); /* call 0x004D659D */

loc_004D66E2: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D66E7
 * Original: 0x004D66E7 - 0x004D6700 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D66E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D66E7: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D66FB; /* je: equal / zero */

loc_004D66F0: ;
    ecx = MEM32(0x90E4E8);
    PUSH32(esp, 0x004D66FBu); RECOMP_ABI_CALL(0x004D6684u, sub_004D6684); /* call 0x004D6684 */

loc_004D66FB: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D6700
 * Original: 0x004D6700 - 0x004D6723 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6700: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D670E; /* jne: not equal / not zero */

loc_004D6709: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D670E: ;
    eax = MEM32(0x90E4E8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D671Bu); RECOMP_ABI_CALL(0x004C49D1u, sub_004C49D1); /* call 0x004C49D1 */

loc_004D671B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6721u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6721: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6723
 * Original: 0x004D6723 - 0x004D6746 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6723(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6723: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6731; /* jne: not equal / not zero */

loc_004D672C: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6731: ;
    eax = MEM32(0x90E4E8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D673Eu); RECOMP_ABI_CALL(0x004C49E9u, sub_004C49E9); /* call 0x004C49E9 */

loc_004D673E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6744u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6744: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6746
 * Original: 0x004D6746 - 0x004D6769 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6746(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6746: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6754; /* jne: not equal / not zero */

loc_004D674F: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6754: ;
    eax = MEM32(0x90E4E8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6761u); RECOMP_ABI_CALL(0x004C4A01u, sub_004C4A01); /* call 0x004C4A01 */

loc_004D6761: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6767u); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D6767: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D6769
 * Original: 0x004D6769 - 0x004D678C (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6769(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6769: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D6777; /* jne: not equal / not zero */

loc_004D6772: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D6777: ;
    eax = MEM32(0x90E4E8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D6784u); RECOMP_ABI_CALL(0x004C4A19u, sub_004C4A19); /* call 0x004C4A19 */

loc_004D6784: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D678Au); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D678A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D678C
 * Original: 0x004D678C - 0x004D67AF (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D678C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D678C: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D679A; /* jne: not equal / not zero */

loc_004D6795: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

loc_004D679A: ;
    eax = MEM32(0x90E4E8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D67A7u); RECOMP_ABI_CALL(0x004C4A29u, sub_004C4A29); /* call 0x004C4A29 */

loc_004D67A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D67ADu); RECOMP_ABI_CALL(0x004D0803u, sub_004D0803); /* call 0x004D0803 */

loc_004D67AD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D67AF
 * Original: 0x004D67AF - 0x004D67DD (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D67AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D67AF: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D67C0; /* jne: not equal / not zero */

loc_004D67B9: ;
    PUSH32(esp, 0x004D67BEu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D67BE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D67C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D67C7u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D67C7: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4E8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D67D9u); RECOMP_ABI_CALL(0x004D6600u, sub_004D6600); /* call 0x004D6600 */

loc_004D67D9: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D67DD
 * Original: 0x004D67DD - 0x004D680B (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D67DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D67DD: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004D67EE; /* jne: not equal / not zero */

loc_004D67E7: ;
    PUSH32(esp, 0x004D67ECu); RECOMP_ABI_CALL(0x004D07EBu, sub_004D07EB); /* call 0x004D07EB */

loc_004D67EC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_004D67EE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D67F5u); RECOMP_ABI_CALL(0x004D077Fu, sub_004D077F); /* call 0x004D077F */

loc_004D67F5: ;
    POP32(esp, ecx);
    ecx = MEM32(0x90E4E8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004D6807u); RECOMP_ABI_CALL(0x004D6648u, sub_004D6648); /* call 0x004D6648 */

loc_004D6807: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004D680B
 * Original: 0x004D680B - 0x004D682F (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D680B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D680B: ;
    _fa = (uint32_t)(MEM8(0x8D7DF4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8D7DF4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D682A; /* je: equal / zero */

loc_004D6814: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x004D681Bu); RECOMP_ABI_CALL(0x004D08ACu, sub_004D08AC); /* call 0x004D08AC */

loc_004D681B: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x90E4E8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x004D682Au); RECOMP_ABI_CALL(0x004C4A7Cu, sub_004C4A7C); /* call 0x004C4A7C */

loc_004D682A: ;
    g_seh_ebp = ebp; sub_004D07EB(); return; /* tail jmp 0x004D07EB */

}

/**
 * sub_004D682F
 * Original: 0x004D682F - 0x004D684B (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D682F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D682F: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi) = 0x86AFF8;
    if (CMP_EQ(_fa, _fb)) goto loc_004D6843; /* je: equal / zero */

loc_004D683E: ;
    PUSH32(esp, 0x004D6843u); RECOMP_ABI_CALL(0x004D6684u, sub_004D6684); /* call 0x004D6684 */

loc_004D6843: ;
    MEM32(esi) = 0x8694A4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004D684B
 * Original: 0x004D684B - 0x004D685E (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D684B(void)
{

loc_004D684B: ;
    eax = ecx + 0xC;
    PUSH32(esp, 0x86B098);
    MEM32(0x90E4E8) = eax;
    PUSH32(esp, 0x004D685Du); RECOMP_ABI_CALL(0x004D0838u, sub_004D0838); /* call 0x004D0838 */

loc_004D685D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004D685E
 * Original: 0x004D685E - 0x004D687A (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D685E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D685E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D6866u); RECOMP_ABI_CALL(0x004D682Fu, sub_004D682F); /* call 0x004D682F */

loc_004D6866: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004D6874; /* je: equal / zero */

loc_004D686D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x004D6873u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_004D6873: ;
    POP32(esp, ecx);

loc_004D6874: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004D687A
 * Original: 0x004D687A - 0x004D6887 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D687A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004D687A: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x86B210;
    esp += 4; return; /* ret */

}

/**
 * sub_004D6887
 * Original: 0x004D6887 - 0x004D68C1 (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004D6887(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004D6887: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004D688Fu); RECOMP_ABI_CALL(0x004DC94Au, sub_004DC94A); /* call 0x004DC94A */

loc_004D688F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x004D689Bu); RECOMP_ABI_CALL(0x004DD57Du, sub_004DD57D); /* call 0x004DD57D */

loc_004D689B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004D68AB; /* je: equal / zero */

loc_004D68A2: ;
    ecx = eax;
    PUSH32(esp, 0x004D68A9u); RECOMP_ABI_CALL(0x004C7543u, sub_004C7543); /* call 0x004C7543 */

loc_004D68A9: ;
    goto loc_004D68AD;

loc_004D68AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004D68AD: ;
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x004D68B8u); RECOMP_ABI_CALL(0x004C1880u, sub_004C1880); /* call 0x004C1880 */

loc_004D68B8: ;
    ecx = MEM32(esi + 4);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004C7794(); return; /* tail jmp 0x004C7794 */

}
