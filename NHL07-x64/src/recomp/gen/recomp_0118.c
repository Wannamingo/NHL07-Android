/**
 * nhl_07_recomp - Recompiled code chunk 118
 * Functions: 250 (0x00189850 - 0x0018AD90)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00189850
 * Original: 0x00189850 - 0x0018985C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189850: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018985B; /* je: equal / zero */

loc_00189856: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018985B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189860
 * Original: 0x00189860 - 0x00189865 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189860: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189870
 * Original: 0x00189870 - 0x00189875 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189870: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189880
 * Original: 0x00189880 - 0x00189899 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189880: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A68);
    PUSH32(esp, 0x00189892u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189892: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001898A0
 * Original: 0x001898A0 - 0x001898AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898A0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001898AB; /* je: equal / zero */

loc_001898A6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_001898AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001898B0
 * Original: 0x001898B0 - 0x001898B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898B0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_001898C0
 * Original: 0x001898C0 - 0x001898C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898C0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_001898D0
 * Original: 0x001898D0 - 0x001898E9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001898D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1390);
    PUSH32(esp, 0x001898E2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_001898E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001898F0
 * Original: 0x001898F0 - 0x001898FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001898F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001898F0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001898FB; /* je: equal / zero */

loc_001898F6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_001898FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189900
 * Original: 0x00189900 - 0x00189905 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189900: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189910
 * Original: 0x00189910 - 0x00189915 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189910: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189920
 * Original: 0x00189920 - 0x00189939 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189920: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FF0);
    PUSH32(esp, 0x00189932u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189932: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189940
 * Original: 0x00189940 - 0x0018994C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189940: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018994B; /* je: equal / zero */

loc_00189946: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018994B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189950
 * Original: 0x00189950 - 0x00189970 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189950: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189960; /* jge: greater or equal (signed >=) */

loc_00189958: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_00189960: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x76 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018996A; /* jle: less or equal (signed <=) */

loc_00189965: ;
    eax = 0x76;

loc_0018996A: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189980
 * Original: 0x00189980 - 0x00189985 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189980: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189990
 * Original: 0x00189990 - 0x00189995 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189990: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_001899A0
 * Original: 0x001899A0 - 0x001899D3 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001899A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001899AF; /* jge: greater or equal (signed >=) */

loc_001899AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001899B9;

loc_001899AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x76) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x76 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001899B9; /* jle: less or equal (signed <=) */

loc_001899B4: ;
    eax = 0x76;

loc_001899B9: ;
    ecx = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1388);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x001899CAu); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_001899CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001899E0
 * Original: 0x001899E0 - 0x001899EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001899E0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001899EB; /* je: equal / zero */

loc_001899E6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_001899EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001899F0
 * Original: 0x001899F0 - 0x001899F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001899F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001899F0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189A00
 * Original: 0x00189A00 - 0x00189A05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189A00: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189A10
 * Original: 0x00189A10 - 0x00189A29 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A50);
    PUSH32(esp, 0x00189A22u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189A22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189A30
 * Original: 0x00189A30 - 0x00189A3C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189A30: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189A3B; /* je: equal / zero */

loc_00189A36: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189A3B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189A40
 * Original: 0x00189A40 - 0x00189A45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189A40: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189A50
 * Original: 0x00189A50 - 0x00189A55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189A50: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189A60
 * Original: 0x00189A60 - 0x00189A79 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189A60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F17F0);
    PUSH32(esp, 0x00189A72u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189A72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189A80
 * Original: 0x00189A80 - 0x00189A8C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189A80: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189A8B; /* je: equal / zero */

loc_00189A86: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189A8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189A90
 * Original: 0x00189A90 - 0x00189A95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189A90: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189AA0
 * Original: 0x00189AA0 - 0x00189AA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189AA0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189AB0
 * Original: 0x00189AB0 - 0x00189AC9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1748);
    PUSH32(esp, 0x00189AC2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189AC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189AD0
 * Original: 0x00189AD0 - 0x00189ADC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189AD0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189ADB; /* je: equal / zero */

loc_00189AD6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189ADB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189AE0
 * Original: 0x00189AE0 - 0x00189B02 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189AE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189AF0; /* jge: greater or equal (signed >=) */

loc_00189AE8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_00189AF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189AFC; /* jle: less or equal (signed <=) */

loc_00189AF7: ;
    eax = 0x3E8;

loc_00189AFC: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189B10
 * Original: 0x00189B10 - 0x00189B32 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189B10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189B20; /* jge: greater or equal (signed >=) */

loc_00189B18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

loc_00189B20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189B2C; /* jle: less or equal (signed <=) */

loc_00189B27: ;
    eax = 0x3E8;

loc_00189B2C: ;
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189B40
 * Original: 0x00189B40 - 0x00189B62 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189B40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189B50; /* jge: greater or equal (signed >=) */

loc_00189B48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

loc_00189B50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189B5C; /* jle: less or equal (signed <=) */

loc_00189B57: ;
    eax = 0x3E8;

loc_00189B5C: ;
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189B70
 * Original: 0x00189B70 - 0x00189B75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189B70: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189B80
 * Original: 0x00189B80 - 0x00189B85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189B80: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189B90
 * Original: 0x00189B90 - 0x00189BFB (107 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189B90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00189B9F; /* jge: greater or equal (signed >=) */

loc_00189B9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00189BAB;

loc_00189B9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189BAB; /* jle: less or equal (signed <=) */

loc_00189BA6: ;
    eax = 0x3E8;

loc_00189BAB: ;
    ecx = esi + 4;
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189BBC; /* jge: greater or equal (signed >=) */

loc_00189BB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00189BC8;

loc_00189BBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189BC8; /* jle: less or equal (signed <=) */

loc_00189BC3: ;
    eax = 0x3E8;

loc_00189BC8: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189BD7; /* jge: greater or equal (signed >=) */

loc_00189BD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00189BE3;

loc_00189BD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189BE3; /* jle: less or equal (signed <=) */

loc_00189BDE: ;
    eax = 0x3E8;

loc_00189BE3: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F0EE0);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x00189BF2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189BF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00189C20
 * Original: 0x00189C20 - 0x00189C2C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C20: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C2B; /* je: equal / zero */

loc_00189C26: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189C2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189C30
 * Original: 0x00189C30 - 0x00189C42 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189C30: ;
    eax = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C41; /* je: equal / zero */

loc_00189C38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00189C41u); RECOMP_ABI_CALL(0x00596DA9u, sub_00596DA9); /* call 0x00596DA9 */

loc_00189C41: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189C50
 * Original: 0x00189C50 - 0x00189C55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C50: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189C60
 * Original: 0x00189C60 - 0x00189C65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C60: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189C70
 * Original: 0x00189C70 - 0x00189C89 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F12D8);
    PUSH32(esp, 0x00189C82u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189C82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189C90
 * Original: 0x00189C90 - 0x00189C9C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189C90: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189C9B; /* je: equal / zero */

loc_00189C96: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189C9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189CA0
 * Original: 0x00189CA0 - 0x00189CA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189CA0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189CB0
 * Original: 0x00189CB0 - 0x00189CB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189CB0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189CC0
 * Original: 0x00189CC0 - 0x00189CD9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1158);
    PUSH32(esp, 0x00189CD2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189CD2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189CE0
 * Original: 0x00189CE0 - 0x00189CEC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189CE0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189CEB; /* je: equal / zero */

loc_00189CE6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189CEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189CF0
 * Original: 0x00189CF0 - 0x00189CF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189CF0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189D00
 * Original: 0x00189D00 - 0x00189D05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D00: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189D10
 * Original: 0x00189D10 - 0x00189D29 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11A0);
    PUSH32(esp, 0x00189D22u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189D22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189D30
 * Original: 0x00189D30 - 0x00189D3C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D30: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D3B; /* je: equal / zero */

loc_00189D36: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189D3B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189D40
 * Original: 0x00189D40 - 0x00189D45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D40: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189D50
 * Original: 0x00189D50 - 0x00189D55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D50: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189D60
 * Original: 0x00189D60 - 0x00189D79 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189D60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14D8);
    PUSH32(esp, 0x00189D72u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189D72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189D80
 * Original: 0x00189D80 - 0x00189D8C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D80: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189D8B; /* je: equal / zero */

loc_00189D86: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189D8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189D90
 * Original: 0x00189D90 - 0x00189D95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D90: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189DA0
 * Original: 0x00189DA0 - 0x00189DA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189DA0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189DB0
 * Original: 0x00189DB0 - 0x00189DC9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11C8);
    PUSH32(esp, 0x00189DC2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189DC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189DD0
 * Original: 0x00189DD0 - 0x00189DDC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189DD0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189DDB; /* je: equal / zero */

loc_00189DD6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189DDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189DE0
 * Original: 0x00189DE0 - 0x00189DE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189DE0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189DF0
 * Original: 0x00189DF0 - 0x00189DF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189DF0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189E00
 * Original: 0x00189E00 - 0x00189E19 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189E00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1520);
    PUSH32(esp, 0x00189E12u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189E12: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189E20
 * Original: 0x00189E20 - 0x00189E2C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E20: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189E2B; /* je: equal / zero */

loc_00189E26: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189E2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189E30
 * Original: 0x00189E30 - 0x00189E35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E30: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189E40
 * Original: 0x00189E40 - 0x00189E45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E40: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189E50
 * Original: 0x00189E50 - 0x00189E69 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A70);
    PUSH32(esp, 0x00189E62u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189E62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189E70
 * Original: 0x00189E70 - 0x00189E7C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189E70: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189E7B; /* je: equal / zero */

loc_00189E76: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189E7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189E80
 * Original: 0x00189E80 - 0x00189EA2 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189E80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00189E90; /* jge: greater or equal (signed >=) */

loc_00189E88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_00189E90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189E9C; /* jle: less or equal (signed <=) */

loc_00189E97: ;
    eax = 0x3E8;

loc_00189E9C: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189EB0
 * Original: 0x00189EB0 - 0x00189EB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189EB0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189EC0
 * Original: 0x00189EC0 - 0x00189EC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189EC0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189ED0
 * Original: 0x00189ED0 - 0x00189F05 (53 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189ED0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00189EDF; /* jge: greater or equal (signed >=) */

loc_00189EDB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00189EEB;

loc_00189EDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00189EEB; /* jle: less or equal (signed <=) */

loc_00189EE6: ;
    eax = 0x3E8;

loc_00189EEB: ;
    ecx = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1810);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x00189EFCu); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189EFC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00189F20
 * Original: 0x00189F20 - 0x00189F2C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189F20: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189F2B; /* je: equal / zero */

loc_00189F26: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189F2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189F30
 * Original: 0x00189F30 - 0x00189F35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189F30: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189F40
 * Original: 0x00189F40 - 0x00189F45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189F40: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189F50
 * Original: 0x00189F50 - 0x00189F69 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1768);
    PUSH32(esp, 0x00189F62u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189F62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189F70
 * Original: 0x00189F70 - 0x00189F7C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189F70: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189F7B; /* je: equal / zero */

loc_00189F76: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189F7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189F80
 * Original: 0x00189F80 - 0x00189F85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189F80: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189F90
 * Original: 0x00189F90 - 0x00189F95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189F90: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189FA0
 * Original: 0x00189FA0 - 0x00189FB9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1230);
    PUSH32(esp, 0x00189FB2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_00189FB2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00189FC0
 * Original: 0x00189FC0 - 0x00189FCC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189FC0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00189FCB; /* je: equal / zero */

loc_00189FC6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_00189FCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00189FD0
 * Original: 0x00189FD0 - 0x00189FD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189FD0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_00189FE0
 * Original: 0x00189FE0 - 0x00189FE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189FE0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_00189FF0
 * Original: 0x00189FF0 - 0x0018A009 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00189FF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0FA8);
    PUSH32(esp, 0x0018A002u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A002: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A010
 * Original: 0x0018A010 - 0x0018A01C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A010: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A01B; /* je: equal / zero */

loc_0018A016: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A01B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A020
 * Original: 0x0018A020 - 0x0018A025 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A020: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A030
 * Original: 0x0018A030 - 0x0018A035 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A030: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A040
 * Original: 0x0018A040 - 0x0018A059 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A040: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1140);
    PUSH32(esp, 0x0018A052u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A052: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A060
 * Original: 0x0018A060 - 0x0018A06C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A060: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A06B; /* je: equal / zero */

loc_0018A066: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A06B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A070
 * Original: 0x0018A070 - 0x0018A075 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A070: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A080
 * Original: 0x0018A080 - 0x0018A085 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A080: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A090
 * Original: 0x0018A090 - 0x0018A0A9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F16C8);
    PUSH32(esp, 0x0018A0A2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A0A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A0B0
 * Original: 0x0018A0B0 - 0x0018A0BC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A0B0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A0BB; /* je: equal / zero */

loc_0018A0B6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A0BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A0C0
 * Original: 0x0018A0C0 - 0x0018A0C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A0C0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A0D0
 * Original: 0x0018A0D0 - 0x0018A0D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A0D0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A0E0
 * Original: 0x0018A0E0 - 0x0018A0F9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1150);
    PUSH32(esp, 0x0018A0F2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A0F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A100
 * Original: 0x0018A100 - 0x0018A10C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A100: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A10B; /* je: equal / zero */

loc_0018A106: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A10B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A110
 * Original: 0x0018A110 - 0x0018A115 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A110: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A120
 * Original: 0x0018A120 - 0x0018A125 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A120: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A130
 * Original: 0x0018A130 - 0x0018A149 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1578);
    PUSH32(esp, 0x0018A142u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A142: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A150
 * Original: 0x0018A150 - 0x0018A15C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A150: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A15B; /* je: equal / zero */

loc_0018A156: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A15B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A160
 * Original: 0x0018A160 - 0x0018A165 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A160: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A170
 * Original: 0x0018A170 - 0x0018A175 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A170: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A180
 * Original: 0x0018A180 - 0x0018A199 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1800);
    PUSH32(esp, 0x0018A192u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A192: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A1A0
 * Original: 0x0018A1A0 - 0x0018A1AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A1A0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A1AB; /* je: equal / zero */

loc_0018A1A6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A1AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A1B0
 * Original: 0x0018A1B0 - 0x0018A1B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A1B0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A1C0
 * Original: 0x0018A1C0 - 0x0018A1C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A1C0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A1D0
 * Original: 0x0018A1D0 - 0x0018A1E9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A1D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1720);
    PUSH32(esp, 0x0018A1E2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A1E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A1F0
 * Original: 0x0018A1F0 - 0x0018A1FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A1F0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A1FB; /* je: equal / zero */

loc_0018A1F6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A1FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A200
 * Original: 0x0018A200 - 0x0018A205 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A200: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A210
 * Original: 0x0018A210 - 0x0018A215 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A210: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A220
 * Original: 0x0018A220 - 0x0018A239 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1248);
    PUSH32(esp, 0x0018A232u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A232: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A240
 * Original: 0x0018A240 - 0x0018A24C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A240: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A24B; /* je: equal / zero */

loc_0018A246: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A24B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A250
 * Original: 0x0018A250 - 0x0018A255 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A250: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A260
 * Original: 0x0018A260 - 0x0018A265 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A260: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A270
 * Original: 0x0018A270 - 0x0018A289 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A270: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15D0);
    PUSH32(esp, 0x0018A282u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A282: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A290
 * Original: 0x0018A290 - 0x0018A29C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A290: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A29B; /* je: equal / zero */

loc_0018A296: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A29B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A2A0
 * Original: 0x0018A2A0 - 0x0018A2A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A2A0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A2B0
 * Original: 0x0018A2B0 - 0x0018A2B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A2B0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A2C0
 * Original: 0x0018A2C0 - 0x0018A2D9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14B8);
    PUSH32(esp, 0x0018A2D2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A2D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A2E0
 * Original: 0x0018A2E0 - 0x0018A2EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A2E0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A2EB; /* je: equal / zero */

loc_0018A2E6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A2EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A2F0
 * Original: 0x0018A2F0 - 0x0018A2F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A2F0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A300
 * Original: 0x0018A300 - 0x0018A305 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A300: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A310
 * Original: 0x0018A310 - 0x0018A329 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EA8);
    PUSH32(esp, 0x0018A322u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A322: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A330
 * Original: 0x0018A330 - 0x0018A33C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A330: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A33B; /* je: equal / zero */

loc_0018A336: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A33B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A340
 * Original: 0x0018A340 - 0x0018A345 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A340: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A350
 * Original: 0x0018A350 - 0x0018A355 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A350: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A360
 * Original: 0x0018A360 - 0x0018A379 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A360: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1050);
    PUSH32(esp, 0x0018A372u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A372: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A380
 * Original: 0x0018A380 - 0x0018A38C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A380: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A38B; /* je: equal / zero */

loc_0018A386: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A38B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A390
 * Original: 0x0018A390 - 0x0018A395 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A390: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A3A0
 * Original: 0x0018A3A0 - 0x0018A3A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A3A0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A3B0
 * Original: 0x0018A3B0 - 0x0018A3C9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A3B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1488);
    PUSH32(esp, 0x0018A3C2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A3C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A3D0
 * Original: 0x0018A3D0 - 0x0018A3DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A3D0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A3DB; /* je: equal / zero */

loc_0018A3D6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A3DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A3E0
 * Original: 0x0018A3E0 - 0x0018A3E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A3E0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A3F0
 * Original: 0x0018A3F0 - 0x0018A3F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A3F0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A400
 * Original: 0x0018A400 - 0x0018A419 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A400: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1690);
    PUSH32(esp, 0x0018A412u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A412: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A420
 * Original: 0x0018A420 - 0x0018A42C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A420: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A42B; /* je: equal / zero */

loc_0018A426: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A42B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A430
 * Original: 0x0018A430 - 0x0018A435 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A430: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A440
 * Original: 0x0018A440 - 0x0018A445 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A440: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A450
 * Original: 0x0018A450 - 0x0018A469 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15A0);
    PUSH32(esp, 0x0018A462u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A462: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A470
 * Original: 0x0018A470 - 0x0018A47C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A470: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A47B; /* je: equal / zero */

loc_0018A476: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A47B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A480
 * Original: 0x0018A480 - 0x0018A485 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A480: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A490
 * Original: 0x0018A490 - 0x0018A495 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A490: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A4A0
 * Original: 0x0018A4A0 - 0x0018A4B9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0EB0);
    PUSH32(esp, 0x0018A4B2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A4B2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A4C0
 * Original: 0x0018A4C0 - 0x0018A4CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A4C0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A4CB; /* je: equal / zero */

loc_0018A4C6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A4CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A4D0
 * Original: 0x0018A4D0 - 0x0018A4D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A4D0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A4E0
 * Original: 0x0018A4E0 - 0x0018A4E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A4E0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A4F0
 * Original: 0x0018A4F0 - 0x0018A509 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A4F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B10);
    PUSH32(esp, 0x0018A502u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A502: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A510
 * Original: 0x0018A510 - 0x0018A51C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A510: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A51B; /* je: equal / zero */

loc_0018A516: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A51B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A520
 * Original: 0x0018A520 - 0x0018A525 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A520: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A530
 * Original: 0x0018A530 - 0x0018A535 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A530: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A540
 * Original: 0x0018A540 - 0x0018A559 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A540: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15B0);
    PUSH32(esp, 0x0018A552u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A552: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A560
 * Original: 0x0018A560 - 0x0018A56C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A560: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A56B; /* je: equal / zero */

loc_0018A566: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A56B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A570
 * Original: 0x0018A570 - 0x0018A575 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A570: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A580
 * Original: 0x0018A580 - 0x0018A585 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A580: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A590
 * Original: 0x0018A590 - 0x0018A5A9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A590: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1370);
    PUSH32(esp, 0x0018A5A2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A5A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A5B0
 * Original: 0x0018A5B0 - 0x0018A5BC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A5B0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A5BB; /* je: equal / zero */

loc_0018A5B6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A5BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A5C0
 * Original: 0x0018A5C0 - 0x0018A5C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A5C0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A5D0
 * Original: 0x0018A5D0 - 0x0018A5D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A5D0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A5E0
 * Original: 0x0018A5E0 - 0x0018A5F9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A5E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1A40);
    PUSH32(esp, 0x0018A5F2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A5F2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A600
 * Original: 0x0018A600 - 0x0018A60C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A600: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A60B; /* je: equal / zero */

loc_0018A606: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A60B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A610
 * Original: 0x0018A610 - 0x0018A615 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A610: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A620
 * Original: 0x0018A620 - 0x0018A625 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A620: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A630
 * Original: 0x0018A630 - 0x0018A649 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A630: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11D8);
    PUSH32(esp, 0x0018A642u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A642: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A650
 * Original: 0x0018A650 - 0x0018A65C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A650: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A65B; /* je: equal / zero */

loc_0018A656: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A65B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A660
 * Original: 0x0018A660 - 0x0018A665 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A660: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A670
 * Original: 0x0018A670 - 0x0018A675 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A670: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A680
 * Original: 0x0018A680 - 0x0018A699 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A680: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1220);
    PUSH32(esp, 0x0018A692u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A692: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A6A0
 * Original: 0x0018A6A0 - 0x0018A6AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A6A0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A6AB; /* je: equal / zero */

loc_0018A6A6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A6AB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A6B0
 * Original: 0x0018A6B0 - 0x0018A6B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A6B0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A6C0
 * Original: 0x0018A6C0 - 0x0018A6C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A6C0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A6D0
 * Original: 0x0018A6D0 - 0x0018A6E9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A6D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1590);
    PUSH32(esp, 0x0018A6E2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A6E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A6F0
 * Original: 0x0018A6F0 - 0x0018A6FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A6F0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A6FB; /* je: equal / zero */

loc_0018A6F6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A6FB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A700
 * Original: 0x0018A700 - 0x0018A705 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A700: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A710
 * Original: 0x0018A710 - 0x0018A715 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A710: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A720
 * Original: 0x0018A720 - 0x0018A739 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A720: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F15D8);
    PUSH32(esp, 0x0018A732u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A732: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A740
 * Original: 0x0018A740 - 0x0018A74C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A740: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A74B; /* je: equal / zero */

loc_0018A746: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A74B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A750
 * Original: 0x0018A750 - 0x0018A755 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A750: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A760
 * Original: 0x0018A760 - 0x0018A765 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A760: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A770
 * Original: 0x0018A770 - 0x0018A789 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1530);
    PUSH32(esp, 0x0018A782u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A782: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A790
 * Original: 0x0018A790 - 0x0018A79C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A790: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A79B; /* je: equal / zero */

loc_0018A796: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A79B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A7A0
 * Original: 0x0018A7A0 - 0x0018A7A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A7A0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A7B0
 * Original: 0x0018A7B0 - 0x0018A7B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A7B0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A7C0
 * Original: 0x0018A7C0 - 0x0018A7D9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1AA0);
    PUSH32(esp, 0x0018A7D2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A7D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A7E0
 * Original: 0x0018A7E0 - 0x0018A7EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A7E0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A7EB; /* je: equal / zero */

loc_0018A7E6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A7EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A7F0
 * Original: 0x0018A7F0 - 0x0018A810 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A7F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A800; /* jge: greater or equal (signed >=) */

loc_0018A7F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_0018A800: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018A80A; /* jle: less or equal (signed <=) */

loc_0018A805: ;
    eax = 0x14;

loc_0018A80A: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A820
 * Original: 0x0018A820 - 0x0018A825 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A820: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A830
 * Original: 0x0018A830 - 0x0018A835 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A830: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A840
 * Original: 0x0018A840 - 0x0018A873 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A840: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0018A84F; /* jge: greater or equal (signed >=) */

loc_0018A84B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0018A859;

loc_0018A84F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018A859; /* jle: less or equal (signed <=) */

loc_0018A854: ;
    eax = 0x14;

loc_0018A859: ;
    ecx = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1238);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0018A86Au); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A86A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A880
 * Original: 0x0018A880 - 0x0018A88C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A880: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A88B; /* je: equal / zero */

loc_0018A886: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A88B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A890
 * Original: 0x0018A890 - 0x0018A895 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A890: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A8A0
 * Original: 0x0018A8A0 - 0x0018A8A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A8A0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A8B0
 * Original: 0x0018A8B0 - 0x0018A8C9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A8B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1680);
    PUSH32(esp, 0x0018A8C2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A8C2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A8D0
 * Original: 0x0018A8D0 - 0x0018A8DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A8D0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A8DB; /* je: equal / zero */

loc_0018A8D6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A8DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A8E0
 * Original: 0x0018A8E0 - 0x0018A8E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A8E0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A8F0
 * Original: 0x0018A8F0 - 0x0018A8F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A8F0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A900
 * Original: 0x0018A900 - 0x0018A919 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1718);
    PUSH32(esp, 0x0018A912u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A912: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A920
 * Original: 0x0018A920 - 0x0018A92C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A920: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A92B; /* je: equal / zero */

loc_0018A926: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A92B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A930
 * Original: 0x0018A930 - 0x0018A935 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A930: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A940
 * Original: 0x0018A940 - 0x0018A945 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A940: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A950
 * Original: 0x0018A950 - 0x0018A969 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A950: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1730);
    PUSH32(esp, 0x0018A962u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A962: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A970
 * Original: 0x0018A970 - 0x0018A97C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A970: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018A97B; /* je: equal / zero */

loc_0018A976: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018A97B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A980
 * Original: 0x0018A980 - 0x0018A9A0 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A980: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0018A990; /* jge: greater or equal (signed >=) */

loc_0018A988: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

loc_0018A990: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018A99A; /* jle: less or equal (signed <=) */

loc_0018A995: ;
    eax = 0x14;

loc_0018A99A: ;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018A9B0
 * Original: 0x0018A9B0 - 0x0018A9B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A9B0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018A9C0
 * Original: 0x0018A9C0 - 0x0018A9C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018A9C0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018A9D0
 * Original: 0x0018A9D0 - 0x0018AA03 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018A9D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0018A9DF; /* jge: greater or equal (signed >=) */

loc_0018A9DB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0018A9E9;

loc_0018A9DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0018A9E9; /* jle: less or equal (signed <=) */

loc_0018A9E4: ;
    eax = 0x14;

loc_0018A9E9: ;
    ecx = esi + 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F1068);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0018A9FAu); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018A9FA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0018AA10
 * Original: 0x0018AA10 - 0x0018AA1C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA10: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA1B; /* je: equal / zero */

loc_0018AA16: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AA1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AA20
 * Original: 0x0018AA20 - 0x0018AA25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA20: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AA30
 * Original: 0x0018AA30 - 0x0018AA35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA30: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AA40
 * Original: 0x0018AA40 - 0x0018AA59 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E98);
    PUSH32(esp, 0x0018AA52u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AA52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AA60
 * Original: 0x0018AA60 - 0x0018AA6C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA60: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AA6B; /* je: equal / zero */

loc_0018AA66: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AA6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AA70
 * Original: 0x0018AA70 - 0x0018AA75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA70: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AA80
 * Original: 0x0018AA80 - 0x0018AA85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AA80: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AA90
 * Original: 0x0018AA90 - 0x0018AAA9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F190C);
    PUSH32(esp, 0x0018AAA2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AAA2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AAB0
 * Original: 0x0018AAB0 - 0x0018AABC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AAB0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AABB; /* je: equal / zero */

loc_0018AAB6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AABB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AAC0
 * Original: 0x0018AAC0 - 0x0018AAC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AAC0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AAD0
 * Original: 0x0018AAD0 - 0x0018AAD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AAD0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AAE0
 * Original: 0x0018AAE0 - 0x0018AAF9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AAE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F0E60);
    PUSH32(esp, 0x0018AAF2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AAF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AB00
 * Original: 0x0018AB00 - 0x0018AB0C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB00: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AB0B; /* je: equal / zero */

loc_0018AB06: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AB0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AB10
 * Original: 0x0018AB10 - 0x0018AB15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB10: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AB20
 * Original: 0x0018AB20 - 0x0018AB25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB20: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AB30
 * Original: 0x0018AB30 - 0x0018AB49 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AB30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1858);
    PUSH32(esp, 0x0018AB42u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AB42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AB50
 * Original: 0x0018AB50 - 0x0018AB5C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB50: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AB5B; /* je: equal / zero */

loc_0018AB56: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AB5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AB60
 * Original: 0x0018AB60 - 0x0018AB65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB60: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AB70
 * Original: 0x0018AB70 - 0x0018AB75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB70: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AB80
 * Original: 0x0018AB80 - 0x0018AB99 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AB80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1250);
    PUSH32(esp, 0x0018AB92u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AB92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018ABA0
 * Original: 0x0018ABA0 - 0x0018ABAC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABA0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ABAB; /* je: equal / zero */

loc_0018ABA6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018ABAB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ABB0
 * Original: 0x0018ABB0 - 0x0018ABB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABB0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018ABC0
 * Original: 0x0018ABC0 - 0x0018ABC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABC0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018ABD0
 * Original: 0x0018ABD0 - 0x0018ABE9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ABD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F10A0);
    PUSH32(esp, 0x0018ABE2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018ABE2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018ABF0
 * Original: 0x0018ABF0 - 0x0018ABFC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ABF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ABF0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ABFB; /* je: equal / zero */

loc_0018ABF6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018ABFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AC00
 * Original: 0x0018AC00 - 0x0018AC05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC00: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AC10
 * Original: 0x0018AC10 - 0x0018AC15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC10: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AC20
 * Original: 0x0018AC20 - 0x0018AC39 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F11A8);
    PUSH32(esp, 0x0018AC32u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AC32: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AC40
 * Original: 0x0018AC40 - 0x0018AC4C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC40: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AC4B; /* je: equal / zero */

loc_0018AC46: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AC4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AC50
 * Original: 0x0018AC50 - 0x0018AC55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC50: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AC60
 * Original: 0x0018AC60 - 0x0018AC65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC60: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AC70
 * Original: 0x0018AC70 - 0x0018AC89 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AC70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1128);
    PUSH32(esp, 0x0018AC82u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AC82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AC90
 * Original: 0x0018AC90 - 0x0018AC9C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AC90: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AC9B; /* je: equal / zero */

loc_0018AC96: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AC9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ACA0
 * Original: 0x0018ACA0 - 0x0018ACA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ACA0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018ACB0
 * Original: 0x0018ACB0 - 0x0018ACB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ACB0: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018ACC0
 * Original: 0x0018ACC0 - 0x0018ACD9 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018ACC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1B58);
    PUSH32(esp, 0x0018ACD2u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018ACD2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018ACE0
 * Original: 0x0018ACE0 - 0x0018ACEC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ACE0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018ACEB; /* je: equal / zero */

loc_0018ACE6: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018ACEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ACF0
 * Original: 0x0018ACF0 - 0x0018ACF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ACF0: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AD00
 * Original: 0x0018AD00 - 0x0018AD05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AD00: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AD10
 * Original: 0x0018AD10 - 0x0018AD29 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F1290);
    PUSH32(esp, 0x0018AD22u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AD22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AD30
 * Original: 0x0018AD30 - 0x0018AD3C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AD30: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD3B; /* je: equal / zero */

loc_0018AD36: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AD3B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AD40
 * Original: 0x0018AD40 - 0x0018AD45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AD40: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}

/**
 * sub_0018AD50
 * Original: 0x0018AD50 - 0x0018AD55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AD50: ;
    g_seh_ebp = ebp; sub_00596C8F(); return; /* tail jmp 0x00596C8F */

}

/**
 * sub_0018AD60
 * Original: 0x0018AD60 - 0x0018AD79 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0018AD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8F14A8);
    PUSH32(esp, 0x0018AD72u); RECOMP_ABI_CALL(0x00597096u, sub_00597096); /* call 0x00597096 */

loc_0018AD72: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AD80
 * Original: 0x0018AD80 - 0x0018AD8C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AD80: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0018AD8B; /* je: equal / zero */

loc_0018AD86: ;
    g_seh_ebp = ebp; sub_00596D8F(); return; /* tail jmp 0x00596D8F */

loc_0018AD8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018AD90
 * Original: 0x0018AD90 - 0x0018AD95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AD90: ;
    g_seh_ebp = ebp; sub_00596C74(); return; /* tail jmp 0x00596C74 */

}
