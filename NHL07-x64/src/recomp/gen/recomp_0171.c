/**
 * nhl_07_recomp - Recompiled code chunk 171
 * Functions: 250 (0x0036A9C0 - 0x00374030)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0036A9C0
 * Original: 0x0036A9C0 - 0x0036A9C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A9C0(void)
{

loc_0036A9C0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A9D0
 * Original: 0x0036A9D0 - 0x0036A9ED (29 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A9D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A9E1u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036A9E1: ;
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
 * sub_0036AA00
 * Original: 0x0036AA00 - 0x0036AA09 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA00(void)
{

loc_0036AA00: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AA10
 * Original: 0x0036AA10 - 0x0036AA1C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AA10: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036AA1B; /* je: equal / zero */

loc_0036AA16: ;
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_0036AA1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AA20
 * Original: 0x0036AA20 - 0x0036AA3D (29 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AA20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AA31u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036AA31: ;
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
 * sub_0036AA50
 * Original: 0x0036AA50 - 0x0036AA5D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA50(void)
{

loc_0036AA50: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AA5Au); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0036AA5A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AA60
 * Original: 0x0036AA60 - 0x0036AA6D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA60(void)
{

loc_0036AA60: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AA6Au); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_0036AA6A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AA70
 * Original: 0x0036AA70 - 0x0036AA7D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA70(void)
{

loc_0036AA70: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AA7Au); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0036AA7A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AA80
 * Original: 0x0036AA80 - 0x0036AA8D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA80(void)
{

loc_0036AA80: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AA8Au); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0036AA8A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AA90
 * Original: 0x0036AA90 - 0x0036AA9D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AA90(void)
{

loc_0036AA90: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AA9Au); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_0036AA9A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AAA0
 * Original: 0x0036AAA0 - 0x0036AAA9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AAA0(void)
{

loc_0036AAA0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AAB0
 * Original: 0x0036AAB0 - 0x0036AABC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AAB0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036AABB; /* je: equal / zero */

loc_0036AAB6: ;
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_0036AABB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AAC0
 * Original: 0x0036AAC0 - 0x0036AAC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AAC0(void)
{

loc_0036AAC0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036AAD0
 * Original: 0x0036AAD0 - 0x0036AAD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AAD0(void)
{

loc_0036AAD0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036AAE0
 * Original: 0x0036AAE0 - 0x0036AAFD (29 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AAE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AAF1u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036AAF1: ;
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
 * sub_0036AB10
 * Original: 0x0036AB10 - 0x0036AB19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB10(void)
{

loc_0036AB10: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AB20
 * Original: 0x0036AB20 - 0x0036AB2C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AB20: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036AB2B; /* je: equal / zero */

loc_0036AB26: ;
    g_seh_ebp = ebp; sub_004DD5FD(); return; /* tail jmp 0x004DD5FD */

loc_0036AB2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AB30
 * Original: 0x0036AB30 - 0x0036AB4D (29 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AB30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AB41u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036AB41: ;
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
 * sub_0036AB60
 * Original: 0x0036AB60 - 0x0036AB64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB60(void)
{

loc_0036AB60: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0036AB70
 * Original: 0x0036AB70 - 0x0036AB78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AB70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DB8CE(); return; /* tail jmp 0x004DB8CE */

}

/**
 * sub_0036AB80
 * Original: 0x0036AB80 - 0x0036AB84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB80(void)
{

loc_0036AB80: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0036AB90
 * Original: 0x0036AB90 - 0x0036AB98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AB90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004DB8CE(); return; /* tail jmp 0x004DB8CE */

}

/**
 * sub_0036ABA0
 * Original: 0x0036ABA0 - 0x0036ABC3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ABA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036ABC1; /* je: equal / zero */

loc_0036ABA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036ABAFu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_0036ABAF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036ABC1; /* jne: not equal / not zero */

loc_0036ABB6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036ABBEu); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_0036ABBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036ABC1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036ABD0
 * Original: 0x0036ABD0 - 0x0036ABD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ABD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036ABD0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00032296(); return; /* tail jmp 0x00032296 */

}

/**
 * sub_0036ABE0
 * Original: 0x0036ABE0 - 0x0036ABE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ABE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036ABE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00032296(); return; /* tail jmp 0x00032296 */

}

/**
 * sub_0036ABF0
 * Original: 0x0036ABF0 - 0x0036ABF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ABF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036ABF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00016D07(); return; /* tail jmp 0x00016D07 */

}

/**
 * sub_0036AC00
 * Original: 0x0036AC00 - 0x0036AC08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AC00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00016D07(); return; /* tail jmp 0x00016D07 */

}

/**
 * sub_0036AC10
 * Original: 0x0036AC10 - 0x0036AC18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AC10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00016D07(); return; /* tail jmp 0x00016D07 */

}

/**
 * sub_0036AC20
 * Original: 0x0036AC20 - 0x0036AC41 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0036AC28u); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_0036AC28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036AC3B; /* je: equal / zero */

loc_0036AC2F: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036AC3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036AC38u); } /* indirect call */
    }

loc_0036AC3B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AC50
 * Original: 0x0036AC50 - 0x0036AC5F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC50(void)
{

loc_0036AC50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AC70
 * Original: 0x0036AC70 - 0x0036AC80 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC70(void)
{

loc_0036AC70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AC90
 * Original: 0x0036AC90 - 0x0036ACA0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC90(void)
{

loc_0036AC90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax + eax * 2;
    SET_LO8(eax, MEM8(ecx + eax * 4 + 8));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036ACB0
 * Original: 0x0036ACB0 - 0x0036ACD1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ACB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ACB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0036ACB8u); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_0036ACB8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036ACCB; /* je: equal / zero */

loc_0036ACBF: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036ACCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036ACC8u); } /* indirect call */
    }

loc_0036ACCB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036ACE0
 * Original: 0x0036ACE0 - 0x0036AD0B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ACE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ACE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0036ACEFu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036ACEF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0036ACFDu); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036ACFD: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AD06u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036AD06: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036AD20
 * Original: 0x0036AD20 - 0x0036AD92 (114 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AD20: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0x830C80);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0036AD41u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036AD41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x0036AD4Du); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036AD4D: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E0470);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0036AD5Eu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0036AD5E: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036AD6Du); RECOMP_ABI_CALL(0x0001F47Fu, sub_0001F47F); /* call 0x0001F47F */

loc_0036AD6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0036AD7Eu); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036AD7E: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0036AD87u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036AD87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036ADB0
 * Original: 0x0036ADB0 - 0x0036ADDB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ADB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ADB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0036ADBFu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036ADBF: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    ecx = esi;
    PUSH32(esp, 0x0036ADCDu); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036ADCD: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036ADD6u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036ADD6: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036ADF0
 * Original: 0x0036ADF0 - 0x0036AE43 (83 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ADF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ADF0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AE02u); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036AE02: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7B891F);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0036AE12u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0036AE12: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036AE21u); RECOMP_ABI_CALL(0x0001F47Fu, sub_0001F47F); /* call 0x0001F47F */

loc_0036AE21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1A);
    ecx = esi;
    PUSH32(esp, 0x0036AE32u); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036AE32: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AE3Bu); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036AE3B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036AE60
 * Original: 0x0036AE60 - 0x0036AE8B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AE60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AE6Fu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036AE6F: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    ecx = esi;
    PUSH32(esp, 0x0036AE7Du); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036AE7D: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AE86u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036AE86: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036AEA0
 * Original: 0x0036AEA0 - 0x0036AEE2 (66 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AEA0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AEAFu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036AEAF: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x830CA8);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0036AEC4u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0036AEC4: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C);
    ecx = esi;
    PUSH32(esp, 0x0036AED2u); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036AED2: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AEDBu); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036AEDB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AF00
 * Original: 0x0036AF00 - 0x0036AF40 (64 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AF00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AF0Fu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036AF0F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0470);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0036AF22u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0036AF22: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x27);
    ecx = esi;
    PUSH32(esp, 0x0036AF30u); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036AF30: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AF39u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036AF39: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AF50
 * Original: 0x0036AF50 - 0x0036AFCD (125 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AF50: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x830CB8);
    edx = MEM32(0x830CC0);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x830CBC);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x830CC8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x830CC4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x830CCC);
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 4;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x0036AF9Cu); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036AF9C: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036AFABu); RECOMP_ABI_CALL(0x0001F47Fu, sub_0001F47F); /* call 0x0001F47F */

loc_0036AFAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0036AFBCu); RECOMP_ABI_CALL(0x0002A1DBu, sub_0002A1DB); /* call 0x0002A1DB */

loc_0036AFBC: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036AFC5u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036AFC5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036AFF0
 * Original: 0x0036AFF0 - 0x0036B10F (287 bytes, 90 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AFF0: ;
    ecx = MEM32(0x9001DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B10E; /* je: equal / zero */

loc_0036AFFE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX16(MEM16(esi + 0x44));
    edx = eax + -29;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x92 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036B10D; /* ja: above (unsigned >) */

loc_0036B016: ;
    edx = ZX8(MEM8(edx + 0x36B15C));
    { uint32_t _jt = MEM32(edx * 4 + 0x36B110); /* switch: 19 entries, 19 targets */
    if (_jt == 0x0036B024u) goto loc_0036B024;
    if (_jt == 0x0036B02Au) goto loc_0036B02A;
    if (_jt == 0x0036B036u) goto loc_0036B036;
    if (_jt == 0x0036B042u) goto loc_0036B042;
    if (_jt == 0x0036B04Eu) goto loc_0036B04E;
    if (_jt == 0x0036B05Au) goto loc_0036B05A;
    if (_jt == 0x0036B063u) goto loc_0036B063;
    if (_jt == 0x0036B06Cu) goto loc_0036B06C;
    if (_jt == 0x0036B075u) goto loc_0036B075;
    if (_jt == 0x0036B0AFu) goto loc_0036B0AF;
    if (_jt == 0x0036B0B5u) goto loc_0036B0B5;
    if (_jt == 0x0036B0BBu) goto loc_0036B0BB;
    if (_jt == 0x0036B0C4u) goto loc_0036B0C4;
    if (_jt == 0x0036B0CDu) goto loc_0036B0CD;
    if (_jt == 0x0036B0F5u) goto loc_0036B0F5;
    if (_jt == 0x0036B0FBu) goto loc_0036B0FB;
    if (_jt == 0x0036B101u) goto loc_0036B101;
    if (_jt == 0x0036B107u) goto loc_0036B107;
    if (_jt == 0x0036B10Du) goto loc_0036B10D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036B024: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002661C(); return; /* tail jmp 0x0002661C */

loc_0036B02A: ;
    PUSH32(esp, 0x7DE67C);
    PUSH32(esp, 0x0036B034u); RECOMP_ABI_CALL(0x00019642u, sub_00019642); /* call 0x00019642 */

loc_0036B034: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B036: ;
    PUSH32(esp, 0x7DE674);
    PUSH32(esp, 0x0036B040u); RECOMP_ABI_CALL(0x00019642u, sub_00019642); /* call 0x00019642 */

loc_0036B040: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B042: ;
    PUSH32(esp, 0x7E045C);
    PUSH32(esp, 0x0036B04Cu); RECOMP_ABI_CALL(0x0001A5E2u, sub_0001A5E2); /* call 0x0001A5E2 */

loc_0036B04C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B04E: ;
    PUSH32(esp, 0x7E0454);
    PUSH32(esp, 0x0036B058u); RECOMP_ABI_CALL(0x0001A5E2u, sub_0001A5E2); /* call 0x0001A5E2 */

loc_0036B058: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B05A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036B061u); RECOMP_ABI_CALL(0x0002CA3Au, sub_0002CA3A); /* call 0x0002CA3A */

loc_0036B061: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B063: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036B06Au); RECOMP_ABI_CALL(0x0002CA3Au, sub_0002CA3A); /* call 0x0002CA3A */

loc_0036B06A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B06C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0036B073u); RECOMP_ABI_CALL(0x0002CA3Au, sub_0002CA3A); /* call 0x0002CA3A */

loc_0036B073: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B075: ;
    ecx = esi;
    PUSH32(esp, 0x0036B07Cu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_0036B07C: ;
    eax = ZX8(MEM8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036B10D; /* ja: above (unsigned >) */

loc_0036B089: ;
    eax = ZX8(MEM8(eax + 0x36B1FC));
    { uint32_t _jt = MEM32(eax * 4 + 0x36B1F0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0036B097u) goto loc_0036B097;
    if (_jt == 0x0036B0A3u) goto loc_0036B0A3;
    if (_jt == 0x0036B10Du) goto loc_0036B10D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036B097: ;
    ecx = MEM32(0x9001DC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00023D31(); return; /* tail jmp 0x00023D31 */

loc_0036B0A3: ;
    ecx = MEM32(0x9001DC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000251CC(); return; /* tail jmp 0x000251CC */

loc_0036B0AF: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002D025(); return; /* tail jmp 0x0002D025 */

loc_0036B0B5: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000363AF(); return; /* tail jmp 0x000363AF */

loc_0036B0BB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036B0C2u); RECOMP_ABI_CALL(0x00015F51u, sub_00015F51); /* call 0x00015F51 */

loc_0036B0C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B0C4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036B0CBu); RECOMP_ABI_CALL(0x00015F51u, sub_00015F51); /* call 0x00015F51 */

loc_0036B0CB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B0CD: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0036B0D4u); RECOMP_ABI_CALL(0x0001901Bu, sub_0001901B); /* call 0x0001901B */

loc_0036B0D4: ;
    ecx = eax;
    PUSH32(esp, 0x0036B0DBu); RECOMP_ABI_CALL(0x0001DF30u, sub_0001DF30); /* call 0x0001DF30 */

loc_0036B0DB: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0036B0E2u); RECOMP_ABI_CALL(0x0001901Bu, sub_0001901B); /* call 0x0001901B */

loc_0036B0E2: ;
    ecx = eax;
    PUSH32(esp, 0x0036B0E9u); RECOMP_ABI_CALL(0x0001DF30u, sub_0001DF30); /* call 0x0001DF30 */

loc_0036B0E9: ;
    ecx = MEM32(0x9001DC);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00036580(); return; /* tail jmp 0x00036580 */

loc_0036B0F5: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000148B3(); return; /* tail jmp 0x000148B3 */

loc_0036B0FB: ;
    MEM8(ecx + 0x20) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B101: ;
    MEM8(ecx + 0x20) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B107: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036B10Du); RECOMP_ABI_CALL(0x00031922u, sub_00031922); /* call 0x00031922 */

loc_0036B10D: ;
    POP32(esp, esi);

loc_0036B10E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036B2E0
 * Original: 0x0036B2E0 - 0x0036B386 (166 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036B2E0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 5;
    esi = 0x830CD4;
    edi = esp + 0x1C;
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
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    ecx = esp + 0x14;
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    PUSH32(esp, 0x0036B302u); RECOMP_ABI_CALL(0x00012E23u, sub_00012E23); /* call 0x00012E23 */

loc_0036B302: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xD) = eax;
    ecx = esp + 0xC;
    MEM16(esp + 0x11) = LO16(eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = 0x7FAD14;
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, 0x0036B32Cu); RECOMP_ABI_CALL(0x00037223u, sub_00037223); /* call 0x00037223 */

loc_0036B32C: ;
    eax = MEM32(esp + 0x3C);
    esi = esp + 0xC;

loc_0036B334: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036B35C; /* jne: not equal / not zero */

loc_0036B33E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B358; /* je: equal / zero */

loc_0036B342: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036B35C; /* jne: not equal / not zero */

loc_0036B34E: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0036B334; /* jne: not equal / not zero */

loc_0036B358: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036B361;

loc_0036B35C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036B361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = esp + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0036B379; /* jne: not equal / not zero */

loc_0036B36C: ;
    PUSH32(esp, 0x0036B371u); RECOMP_ABI_CALL(0x00030F4Fu, sub_00030F4F); /* call 0x00030F4F */

loc_0036B371: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0036B379: ;
    PUSH32(esp, 0x0036B37Eu); RECOMP_ABI_CALL(0x00030F4Fu, sub_00030F4F); /* call 0x00030F4F */

loc_0036B37E: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036B3B0
 * Original: 0x0036B3B0 - 0x0036B3CF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B3B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F58C;
    if (TEST_Z(_fa, _fb)) goto loc_0036B3C9; /* je: equal / zero */

loc_0036B3C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B3C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B3C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B3C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B3E0
 * Original: 0x0036B3E0 - 0x0036B3FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B3E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F5A4;
    if (TEST_Z(_fa, _fb)) goto loc_0036B3F9; /* je: equal / zero */

loc_0036B3F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B3F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B3F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B3F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B410
 * Original: 0x0036B410 - 0x0036B43D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x82F5F4;
    PUSH32(esp, 0x0036B424u); RECOMP_ABI_CALL(0x004AD997u, sub_004AD997); /* call 0x004AD997 */

loc_0036B424: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x830D04;
    MEM32(edi) = 0x830CF0;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B450
 * Original: 0x0036B450 - 0x0036B453 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B450(void)
{

loc_0036B450: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036B460
 * Original: 0x0036B460 - 0x0036B468 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B460: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000318EB(); return; /* tail jmp 0x000318EB */

}

/**
 * sub_0036B470
 * Original: 0x0036B470 - 0x0036B4AB (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B470: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x830D04;
    MEM32(edi) = 0x830CF0;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B48F; /* je: equal / zero */

loc_0036B48A: ;
    PUSH32(esp, 0x0036B48Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036B48F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B49B; /* je: equal / zero */

loc_0036B496: ;
    PUSH32(esp, 0x0036B49Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036B49B: ;
    ecx = edi;
    PUSH32(esp, 0x0036B4A2u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_0036B4A2: ;
    POP32(esp, edi);
    MEM32(esi) = 0x82F5F4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B4C0
 * Original: 0x0036B4C0 - 0x0036B50C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B4C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036B4CEu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036B4CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0036B4DDu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036B4DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0036B4E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B4E1u); } /* indirect call */
    }

loc_0036B4E4: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B50A; /* je: equal / zero */

loc_0036B4EB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(ebx + 8); PUSH32(esp, 0x0036B4F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B4F1u); } /* indirect call */
    }

loc_0036B4F4: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036B4FFu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036B4FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;
    POP32(esp, ebx);

loc_0036B50A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B520
 * Original: 0x0036B520 - 0x0036B524 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B520(void)
{

loc_0036B520: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B530
 * Original: 0x0036B530 - 0x0036B54D (29 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036B542u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036B542: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036B560
 * Original: 0x0036B560 - 0x0036B57F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B560: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F6E0;
    if (TEST_Z(_fa, _fb)) goto loc_0036B579; /* je: equal / zero */

loc_0036B570: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B576u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B576: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B579: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B590
 * Original: 0x0036B590 - 0x0036B5AF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B590: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F808;
    if (TEST_Z(_fa, _fb)) goto loc_0036B5A9; /* je: equal / zero */

loc_0036B5A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B5A6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B5A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B5A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B5C0
 * Original: 0x0036B5C0 - 0x0036B5DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B5C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F718;
    if (TEST_Z(_fa, _fb)) goto loc_0036B5D9; /* je: equal / zero */

loc_0036B5D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B5D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B5D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B5D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B5F0
 * Original: 0x0036B5F0 - 0x0036B60F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B5F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F72C;
    if (TEST_Z(_fa, _fb)) goto loc_0036B609; /* je: equal / zero */

loc_0036B600: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B606u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B609: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B620
 * Original: 0x0036B620 - 0x0036B665 (69 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B620: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 8;
    edi = esi + 4;
    MEM32(esi) = 0x82FA24;
    MEM32(edi) = 0x82FA60;
    MEM32(ecx) = 0x82FA14;
    PUSH32(esp, 0x0036B641u); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_0036B641: ;
    ecx = edi;
    PUSH32(esp, 0x0036B648u); RECOMP_ABI_CALL(0x004AD93Du, sub_004AD93D); /* call 0x004AD93D */

loc_0036B648: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x82F9E4;
    if (TEST_Z(_fa, _fb)) goto loc_0036B65E; /* je: equal / zero */

loc_0036B655: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B65Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B65B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B65E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B680
 * Original: 0x0036B680 - 0x0036B69F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B680: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FAA8;
    if (TEST_Z(_fa, _fb)) goto loc_0036B699; /* je: equal / zero */

loc_0036B690: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B696u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B696: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B699: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B6B0
 * Original: 0x0036B6B0 - 0x0036B6CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B6B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F64C;
    if (TEST_Z(_fa, _fb)) goto loc_0036B6C9; /* je: equal / zero */

loc_0036B6C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B6C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B6C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B6C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B6E0
 * Original: 0x0036B6E0 - 0x0036B6E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B6E0(void)
{

loc_0036B6E0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B6F0
 * Original: 0x0036B6F0 - 0x0036B6F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B6F0(void)
{

loc_0036B6F0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B700
 * Original: 0x0036B700 - 0x0036B71F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B700: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FF9C;
    if (TEST_Z(_fa, _fb)) goto loc_0036B719; /* je: equal / zero */

loc_0036B710: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B716u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036B716: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036B719: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B730
 * Original: 0x0036B730 - 0x0036B7FC (204 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B730: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036B736u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036B736: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B7FA; /* je: equal / zero */

loc_0036B73E: ;
    PUSH32(esp, 0x0036B743u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036B743: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0036B74Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B747u); } /* indirect call */
    }

loc_0036B74A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B7FA; /* je: equal / zero */

loc_0036B752: ;
    PUSH32(esp, 0x0036B757u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036B757: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0036B75Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B75Bu); } /* indirect call */
    }

loc_0036B75E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036B765u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B762u); } /* indirect call */
    }

loc_0036B765: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B7FA; /* je: equal / zero */

loc_0036B76D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036B773u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036B773: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0036B77Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B777u); } /* indirect call */
    }

loc_0036B77A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036B781u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B77Eu); } /* indirect call */
    }

loc_0036B781: ;
    ecx = MEM32(eax + 0x14);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 4) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0036B7F9; /* jbe: below or equal (unsigned <=) */

loc_0036B78E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax + 8;

loc_0036B794: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0036B79Cu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0036B79C: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036B7A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B7A2u); } /* indirect call */
    }

loc_0036B7A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036B7ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B7A9u); } /* indirect call */
    }

loc_0036B7AC: ;
    ecx = MEM32(0x9001D8);
    esi = eax;

loc_0036B7B4: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036B7D8; /* jne: not equal / not zero */

loc_0036B7BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B7D4; /* je: equal / zero */

loc_0036B7C0: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036B7D8; /* jne: not equal / not zero */

loc_0036B7CA: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0036B7B4; /* jne: not equal / not zero */

loc_0036B7D4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036B7DD;

loc_0036B7D8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036B7DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B7ED; /* je: equal / zero */

loc_0036B7E1: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036B7E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B7E5u); } /* indirect call */
    }

loc_0036B7E8: ;
    MEM32(0x8FE150) = eax;

loc_0036B7ED: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0036B794; /* jb: below (unsigned <) */

loc_0036B7F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0036B7F9: ;
    POP32(esp, ebp);

loc_0036B7FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B830
 * Original: 0x0036B830 - 0x0036B88E (94 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x82F73C;
    PUSH32(esp, 0x0036B846u); RECOMP_ABI_CALL(0x004DD94Cu, sub_004DD94C); /* call 0x004DD94C */

loc_0036B846: ;
    ebx = esi + 8;
    ecx = ebx;
    PUSH32(esp, 0x0036B850u); RECOMP_ABI_CALL(0x004DD91Fu, sub_004DD91F); /* call 0x004DD91F */

loc_0036B850: ;
    ebp = esi + 0xC;
    ecx = ebp;
    PUSH32(esp, 0x0036B85Au); RECOMP_ABI_CALL(0x004DD8F2u, sub_004DD8F2); /* call 0x004DD8F2 */

loc_0036B85A: ;
    MEM32(esi) = 0x830D44;
    MEM32(edi) = 0x830D34;
    MEM32(ebx) = 0x830D28;
    MEM32(ebp) = 0x830D18;
    MEM32(esi + 0x10) = 0;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 0xFFFFFFFFu;
    MEM32(0x900268) = esi;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B8B0
 * Original: 0x0036B8B0 - 0x0036B8B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B8B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000275CB(); return; /* tail jmp 0x000275CB */

}

/**
 * sub_0036B8C0
 * Original: 0x0036B8C0 - 0x0036B8C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B8C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000275CB(); return; /* tail jmp 0x000275CB */

}

/**
 * sub_0036B8D0
 * Original: 0x0036B8D0 - 0x0036B8D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B8D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_000275CB(); return; /* tail jmp 0x000275CB */

}

/**
 * sub_0036B8E0
 * Original: 0x0036B8E0 - 0x0036B93E (94 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B8E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ebx = esi + 8;
    ebp = esi + 0xC;
    MEM32(esi) = 0x830D44;
    MEM32(edi) = 0x830D34;
    MEM32(ebx) = 0x830D28;
    MEM32(ebp) = 0x830D18;
    MEM32(0x900268) = 0;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B91E; /* je: equal / zero */

loc_0036B919: ;
    PUSH32(esp, 0x0036B91Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036B91E: ;
    ecx = ebp;
    PUSH32(esp, 0x0036B925u); RECOMP_ABI_CALL(0x004DD8FBu, sub_004DD8FB); /* call 0x004DD8FB */

loc_0036B925: ;
    ecx = ebx;
    PUSH32(esp, 0x0036B92Cu); RECOMP_ABI_CALL(0x004DD928u, sub_004DD928); /* call 0x004DD928 */

loc_0036B92C: ;
    ecx = edi;
    PUSH32(esp, 0x0036B933u); RECOMP_ABI_CALL(0x004DD955u, sub_004DD955); /* call 0x004DD955 */

loc_0036B933: ;
    POP32(esp, edi);
    MEM32(esi) = 0x82F73C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B960
 * Original: 0x0036B960 - 0x0036B97C (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B960: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036B96Eu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036B96E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B990
 * Original: 0x0036B990 - 0x0036B9AC (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B990: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036B99Eu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036B99E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036B9C0
 * Original: 0x0036B9C0 - 0x0036BE70 (1200 bytes, 435 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B9C0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036B9CCu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036B9CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036B9D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B9D0u); } /* indirect call */
    }

loc_0036B9D3: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x8631F4);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036B9EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B9E7u); } /* indirect call */
    }

loc_0036B9EA: ;
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BA01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B9FEu); } /* indirect call */
    }

loc_0036BA01: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BA18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BA15u); } /* indirect call */
    }

loc_0036BA18: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BA31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BA2Eu); } /* indirect call */
    }

loc_0036BA31: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BA4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BA47u); } /* indirect call */
    }

loc_0036BA4A: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BA63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BA60u); } /* indirect call */
    }

loc_0036BA63: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BA7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BA79u); } /* indirect call */
    }

loc_0036BA7C: ;
    MEM32(esp + 0x14) = eax;
    eax = 1;
    MEM32(esp + 0x24) = 2;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = 0x82E398;
    PUSH32(esp, 0x0036BAA2u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_0036BAA2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036BAA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BAA6u); } /* indirect call */
    }

loc_0036BAA9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0036BAB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BAADu); } /* indirect call */
    }

loc_0036BAB0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BAE4; /* je: equal / zero */

loc_0036BAB6: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0036BABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BABAu); } /* indirect call */
    }

loc_0036BABD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BAE4; /* jne: not equal / not zero */

loc_0036BAC1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0036BAC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BAC5u); } /* indirect call */
    }

loc_0036BAC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BAE4; /* jne: not equal / not zero */

loc_0036BACC: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = ecx;
    ecx = 3;
    eax = 1;
    MEM32(esp + 0x18) = ecx;
    goto loc_0036BAEC;

loc_0036BAE4: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);

loc_0036BAEC: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x1C));
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036BAFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BAFBu); } /* indirect call */
    }

loc_0036BAFE: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0x82E3C0);
    PUSH32(esp, 3);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036BB11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB0Eu); } /* indirect call */
    }

loc_0036BB11: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82E428);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0036BB25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB22u); } /* indirect call */
    }

loc_0036BB25: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82E450);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036BB39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB36u); } /* indirect call */
    }

loc_0036BB39: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x82E410);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0036BB4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB4Au); } /* indirect call */
    }

loc_0036BB4D: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x82E3F8);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036BB61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB5Eu); } /* indirect call */
    }

loc_0036BB61: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x82E3E0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0036BB75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB72u); } /* indirect call */
    }

loc_0036BB75: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BE12; /* je: equal / zero */

loc_0036BB7D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0036BB84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB81u); } /* indirect call */
    }

loc_0036BB84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BE12; /* jne: not equal / not zero */

loc_0036BB8C: ;
    ebp = MEM32(esp + 0x38);
    eax = MEM32(ebp);
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x38) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036BB9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BB9Bu); } /* indirect call */
    }

loc_0036BB9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BBA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BBA5u); } /* indirect call */
    }

loc_0036BBA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BE12; /* je: equal / zero */

loc_0036BBB0: ;
    PUSH32(esp, 0x0036BBB5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036BBB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036BBBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BBB9u); } /* indirect call */
    }

loc_0036BBBC: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x8631F4);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BBD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BBD0u); } /* indirect call */
    }

loc_0036BBD3: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0036BBDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BBD9u); } /* indirect call */
    }

loc_0036BBDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036BC2E; /* je: equal / zero */

loc_0036BBE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BC2E; /* je: equal / zero */

loc_0036BBEA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036BBF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BBEEu); } /* indirect call */
    }

loc_0036BBF1: ;
    ecx = MEM32(0x8C4E7C);
    edx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BC06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC03u); } /* indirect call */
    }

loc_0036BC06: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036BC0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC0Au); } /* indirect call */
    }

loc_0036BC0D: ;
    ecx = MEM32(0x8C4E80);
    edx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BC22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC1Fu); } /* indirect call */
    }

loc_0036BC22: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036BC29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC26u); } /* indirect call */
    }

loc_0036BC29: ;
    goto loc_0036BE12;

loc_0036BC2E: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BC35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC32u); } /* indirect call */
    }

loc_0036BC35: ;
    eax = MEM32(0x8C4E8C);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BC49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC46u); } /* indirect call */
    }

loc_0036BC49: ;
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(0x8C4E90);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BC5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC5Cu); } /* indirect call */
    }

loc_0036BC5F: ;
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    ebx = eax;
    eax = MEM32(0x8C4E94);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BC75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC72u); } /* indirect call */
    }

loc_0036BC75: ;
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    ebp = eax;
    eax = MEM32(0x8C4E98);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BC8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC88u); } /* indirect call */
    }

loc_0036BC8B: ;
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x8C4E9C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BCA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCA0u); } /* indirect call */
    }

loc_0036BCA3: ;
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x8C4EA0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BCBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCB8u); } /* indirect call */
    }

loc_0036BCBB: ;
    edx = MEM32(edi);
    MEM32(esp + 0x38) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 2 (32-bit) */
    ecx = edi;
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0036BD36; /* jne: not equal / not zero */

loc_0036BCCC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BCCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCCCu); } /* indirect call */
    }

loc_0036BCCF: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036BCD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCD3u); } /* indirect call */
    }

loc_0036BCD6: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BCDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCDCu); } /* indirect call */
    }

loc_0036BCDF: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036BCE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCE3u); } /* indirect call */
    }

loc_0036BCE6: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BCF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCEDu); } /* indirect call */
    }

loc_0036BCF0: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036BCF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BCF5u); } /* indirect call */
    }

loc_0036BCF8: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD02u); } /* indirect call */
    }

loc_0036BD05: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036BD0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD09u); } /* indirect call */
    }

loc_0036BD0C: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD16u); } /* indirect call */
    }

loc_0036BD19: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036BD20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD1Du); } /* indirect call */
    }

loc_0036BD20: ;
    edi = MEM32(esp + 0x38);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD2Au); } /* indirect call */
    }

loc_0036BD2D: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036BD34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD31u); } /* indirect call */
    }

loc_0036BD34: ;
    goto loc_0036BD9E;

loc_0036BD36: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD36u); } /* indirect call */
    }

loc_0036BD39: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BD40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD3Du); } /* indirect call */
    }

loc_0036BD40: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD46u); } /* indirect call */
    }

loc_0036BD49: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BD50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD4Du); } /* indirect call */
    }

loc_0036BD50: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD57u); } /* indirect call */
    }

loc_0036BD5A: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BD62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD5Fu); } /* indirect call */
    }

loc_0036BD62: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD6Cu); } /* indirect call */
    }

loc_0036BD6F: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BD76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD73u); } /* indirect call */
    }

loc_0036BD76: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD80u); } /* indirect call */
    }

loc_0036BD83: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BD8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD87u); } /* indirect call */
    }

loc_0036BD8A: ;
    edi = MEM32(esp + 0x38);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BD97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD94u); } /* indirect call */
    }

loc_0036BD97: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BD9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BD9Bu); } /* indirect call */
    }

loc_0036BD9E: ;
    eax = MEM32(0x86DB98);
    ecx = MEM32(0x86DB94);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BDB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BDAFu); } /* indirect call */
    }

loc_0036BDB2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036BDB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BDB6u); } /* indirect call */
    }

loc_0036BDB9: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036BDC1u); RECOMP_ABI_CALL(0x00027602u, sub_00027602); /* call 0x00027602 */

loc_0036BDC1: ;
    ecx = MEM32(0x8C4E7C);
    edx = MEM32(0x8631FC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BDDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BDD8u); } /* indirect call */
    }

loc_0036BDDB: ;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036BDE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BDE2u); } /* indirect call */
    }

loc_0036BDE5: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BDECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BDE9u); } /* indirect call */
    }

loc_0036BDEC: ;
    ecx = MEM32(0x8C4E80);
    edx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BE01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BDFEu); } /* indirect call */
    }

loc_0036BE01: ;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036BE0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE08u); } /* indirect call */
    }

loc_0036BE0B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036BE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE0Fu); } /* indirect call */
    }

loc_0036BE12: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x8631F4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BE27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE24u); } /* indirect call */
    }

loc_0036BE27: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036BE2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE2Bu); } /* indirect call */
    }

loc_0036BE2E: ;
    ecx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF38);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BE41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE3Eu); } /* indirect call */
    }

loc_0036BE41: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BE4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE47u); } /* indirect call */
    }

loc_0036BE4A: ;
    ecx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EFFC);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036BE5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE5Au); } /* indirect call */
    }

loc_0036BE5D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036BE66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BE63u); } /* indirect call */
    }

loc_0036BE66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BFA0
 * Original: 0x0036BFA0 - 0x0036BFE4 (68 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BFA0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0036BFAB; /* je: equal / zero */

loc_0036BFA6: ;
    esi = ecx + 8;
    goto loc_0036BFAD;

loc_0036BFAB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036BFAD: ;
    PUSH32(esp, 0x0036BFB2u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036BFB2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0036BFB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BFB6u); } /* indirect call */
    }

loc_0036BFB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BFD1; /* je: equal / zero */

loc_0036BFBD: ;
    ecx = eax + 8;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x0036BFCEu); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_0036BFCE: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0036BFD1: ;
    eax = esp + 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0x0036BFE1u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_0036BFE1: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C000
 * Original: 0x0036C000 - 0x0036C009 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C000(void)
{

loc_0036C000: ;
    eax = ecx;
    MEM32(eax) = 0x830D8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0036C010
 * Original: 0x0036C010 - 0x0036C02F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C010: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FDF8;
    if (TEST_Z(_fa, _fb)) goto loc_0036C029; /* je: equal / zero */

loc_0036C020: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C026u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036C026: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C029: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C040
 * Original: 0x0036C040 - 0x0036C05F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C040: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F604;
    if (TEST_Z(_fa, _fb)) goto loc_0036C059; /* je: equal / zero */

loc_0036C050: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C056u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036C056: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C059: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C070
 * Original: 0x0036C070 - 0x0036C08F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C070: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F618;
    if (TEST_Z(_fa, _fb)) goto loc_0036C089; /* je: equal / zero */

loc_0036C080: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C086u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036C086: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C089: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C0A0
 * Original: 0x0036C0A0 - 0x0036C0BF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C0A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FFD8;
    if (TEST_Z(_fa, _fb)) goto loc_0036C0B9; /* je: equal / zero */

loc_0036C0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C0B6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036C0B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C0B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C0D0
 * Original: 0x0036C0D0 - 0x0036C109 (57 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C0D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x830314;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0036C0EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C0EAu); } /* indirect call */
    }

loc_0036C0ED: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x82FEA8;
    if (TEST_Z(_fa, _fb)) goto loc_0036C103; /* je: equal / zero */

loc_0036C0FA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C100u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036C100: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C103: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C120
 * Original: 0x0036C120 - 0x0036C159 (57 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C120: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x901154);
    esi = ecx;
    PUSH32(esp, 0x0036C139u); RECOMP_ABI_CALL(0x0001A98Eu, sub_0001A98E); /* call 0x0001A98E */

loc_0036C139: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C14B; /* je: equal / zero */

loc_0036C140: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x901154;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0036C14B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036C153u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C151u); } /* indirect call */
    }

loc_0036C153: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036C170
 * Original: 0x0036C170 - 0x0036C18A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C170: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x900FE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C17Fu); RECOMP_ABI_CALL(0x0002251Cu, sub_0002251C); /* call 0x0002251C */

loc_0036C17F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x900FE0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C190
 * Original: 0x0036C190 - 0x0036C1DA (74 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C190: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0036C19Bu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036C19B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C1A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C19Fu); } /* indirect call */
    }

loc_0036C1A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036C1B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C1B5u); } /* indirect call */
    }

loc_0036C1B8: ;
    PUSH32(esp, 0x100);
    edx = esp + 4;
    PUSH32(esp, 0x901190);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036C1CCu); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036C1CC: ;
    eax = 0x901190;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036C1F0
 * Original: 0x0036C1F0 - 0x0036C230 (64 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C1F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0036C1F8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036C1F8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C1FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C1FCu); } /* indirect call */
    }

loc_0036C1FF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036C212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C20Fu); } /* indirect call */
    }

loc_0036C212: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E02D0);
    PUSH32(esp, 0x9011E0);
    PUSH32(esp, 0x0036C225u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036C225: ;
    eax = 0x9011E0;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036C240
 * Original: 0x0036C240 - 0x0036C25A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C240: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x901318);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C24Fu); RECOMP_ABI_CALL(0x0001D10Cu, sub_0001D10C); /* call 0x0001D10C */

loc_0036C24F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x901318;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C260
 * Original: 0x0036C260 - 0x0036C2A5 (69 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C260: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0036C26Eu); RECOMP_ABI_CALL(0x0002A94Cu, sub_0002A94C); /* call 0x0002A94C */

loc_0036C26E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036C298; /* jl: less (signed <) */

loc_0036C275: ;
    eax = MEM32(eax * 8 + 0x900684);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C291; /* je: equal / zero */

loc_0036C284: ;
    ecx = eax;

loc_0036C286: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C286; /* jne: not equal / not zero */

loc_0036C291: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036C298: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036C2A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C29Du); } /* indirect call */
    }

loc_0036C2A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C2C0
 * Original: 0x0036C2C0 - 0x0036C2F7 (55 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C2C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0036C2D4u); RECOMP_ABI_CALL(0x0001DFBCu, sub_0001DFBC); /* call 0x0001DFBC */

loc_0036C2D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036C2E8; /* jl: less (signed <) */

loc_0036C2DB: ;
    eax = MEM32(eax * 8 + 0x8C58B0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0036C2E8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0036C2F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C2EEu); } /* indirect call */
    }

loc_0036C2F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036C310
 * Original: 0x0036C310 - 0x0036C362 (82 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C310: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0036C324u); RECOMP_ABI_CALL(0x0001DFBCu, sub_0001DFBC); /* call 0x0001DFBC */

loc_0036C324: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036C353; /* jl: less (signed <) */

loc_0036C32B: ;
    eax = MEM32(eax * 8 + 0x8C58B4);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C34B; /* je: equal / zero */

loc_0036C33A: ;
    ecx = eax;
    /* nop */

loc_0036C340: ;
    eax = MEM32(ecx + 0x34);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C340; /* jne: not equal / not zero */

loc_0036C34B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0036C353: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036C35Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C359u); } /* indirect call */
    }

loc_0036C35C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036C380
 * Original: 0x0036C380 - 0x0036C3C2 (66 bytes, 30 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C380: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0036C394u); RECOMP_ABI_CALL(0x0001DFBCu, sub_0001DFBC); /* call 0x0001DFBC */

loc_0036C394: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036C3B2; /* jl: less (signed <) */

loc_0036C39F: ;
    edx = MEM32(eax * 8 + 0x8C58B4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    eax = MEM32(ecx + edx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0036C3B2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036C3BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C3B9u); } /* indirect call */
    }

loc_0036C3BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036C3E0
 * Original: 0x0036C3E0 - 0x0036C416 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C3E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C3E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(esi) = 0x82FE78;
    PUSH32(esp, 0x0036C3F4u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_0036C3F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x830DB0;
    MEM32(edi) = 0x830DA4;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C430
 * Original: 0x0036C430 - 0x0036C436 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C430(void)
{

loc_0036C430: ;
    eax = MEM32(0x86571C);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C440
 * Original: 0x0036C440 - 0x0036C448 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C440: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0001FACE(); return; /* tail jmp 0x0001FACE */

}

/**
 * sub_0036C450
 * Original: 0x0036C450 - 0x0036C4AF (95 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C450: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x830DB0;
    MEM32(edi) = 0x830DA4;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C46F; /* je: equal / zero */

loc_0036C46A: ;
    PUSH32(esp, 0x0036C46Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036C46F: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C47B; /* je: equal / zero */

loc_0036C476: ;
    PUSH32(esp, 0x0036C47Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036C47B: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C487; /* je: equal / zero */

loc_0036C482: ;
    PUSH32(esp, 0x0036C487u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036C487: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C493; /* je: equal / zero */

loc_0036C48E: ;
    PUSH32(esp, 0x0036C493u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036C493: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C49F; /* je: equal / zero */

loc_0036C49A: ;
    PUSH32(esp, 0x0036C49Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0036C49F: ;
    ecx = edi;
    PUSH32(esp, 0x0036C4A6u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_0036C4A6: ;
    POP32(esp, edi);
    MEM32(esi) = 0x82FE78;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C4D0
 * Original: 0x0036C4D0 - 0x0036C7A2 (722 bytes, 239 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C4D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0036C4DBu); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036C4DB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036C4E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C4DFu); } /* indirect call */
    }

loc_0036C4E2: ;
    esi = eax;
    PUSH32(esp, 0x0036C4E9u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036C4E9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C4F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C4EDu); } /* indirect call */
    }

loc_0036C4F0: ;
    ecx = MEM32(0x8C4E84);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E470);
    PUSH32(esp, 0x82E3AC);
    PUSH32(esp, 5);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x83094C);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036C516u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C513u); } /* indirect call */
    }

loc_0036C516: ;
    eax = MEM32(0x8C4EA0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E3D0);
    PUSH32(esp, 0x82E3C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x830E10);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C539u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C536u); } /* indirect call */
    }

loc_0036C539: ;
    eax = MEM32(0x8C4E8C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E43C);
    PUSH32(esp, 0x82E428);
    PUSH32(esp, 5);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x830E00);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C55Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C559u); } /* indirect call */
    }

loc_0036C55C: ;
    eax = MEM32(0x8C4E90);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E460);
    PUSH32(esp, 0x82E450);
    PUSH32(esp, 4);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x830DF8);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C57Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C57Cu); } /* indirect call */
    }

loc_0036C57F: ;
    eax = MEM32(0x8C4E94);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E41C);
    PUSH32(esp, 0x82E410);
    PUSH32(esp, 3);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x830DEC);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C5A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C59Fu); } /* indirect call */
    }

loc_0036C5A2: ;
    eax = MEM32(0x8C4E98);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E404);
    PUSH32(esp, 0x82E3F8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x82364C);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C5C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C5C2u); } /* indirect call */
    }

loc_0036C5C5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E3EC);
    PUSH32(esp, 0x82E3E0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x830DE0);
    eax = MEM32(0x8C4E9C);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C5E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C5E5u); } /* indirect call */
    }

loc_0036C5E8: ;
    eax = MEM32(0x8631F4);
    ecx = MEM32(0x865714);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x865688);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82E284);
    PUSH32(esp, 2);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0036C60Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C60Cu); } /* indirect call */
    }

loc_0036C60F: ;
    edx = MEM32(esi);
    ebp = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0036C619u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C616u); } /* indirect call */
    }

loc_0036C619: ;
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x0036C622u); RECOMP_ABI_CALL(0x004C3FB1u, sub_004C3FB1); /* call 0x004C3FB1 */

loc_0036C622: ;
    esi = eax;
    eax = MEM32(0x8C4E84);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0036C633u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036C633: ;
    ecx = MEM32(0x8C4EA0);
    PUSH32(esp, 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0036C643u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036C643: ;
    edx = MEM32(0x8C4E8C);
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0036C653u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036C653: ;
    eax = MEM32(0x8C4E90);
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0036C662u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036C662: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x0036C66Bu); RECOMP_ABI_CALL(0x004C3FB1u, sub_004C3FB1); /* call 0x004C3FB1 */

loc_0036C66B: ;
    ecx = MEM32(0x8C4E94);
    PUSH32(esp, 0x32);
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0036C67Du); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036C67D: ;
    edx = MEM32(0x8C4E98);
    PUSH32(esp, 0x3C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0036C68Du); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036C68D: ;
    eax = MEM32(0x8C4E9C);
    PUSH32(esp, 0x46);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0036C69Cu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036C69C: ;
    eax = MEM32(0x865548);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C6ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C6A8u); } /* indirect call */
    }

loc_0036C6AB: ;
    ecx = MEM32(edi + 8);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036C6B7u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C6B7: ;
    MEM32(edi + 8) = esi;
    edx = MEM32(0x86554C);
    eax = MEM32(0x8C4E7C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0036C6D9u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_0036C6D9: ;
    eax = MEM32(0x86554C);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = MEM32(0x8C4E80);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C6F5u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_0036C6F5: ;
    ecx = MEM32(0x86554C);
    edx = MEM32(0x8C4E80);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 0x82EFFC);
    PUSH32(esp, 0x0036C717u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_0036C717: ;
    ecx = MEM32(0x865548);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036C727u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C724u); } /* indirect call */
    }

loc_0036C727: ;
    edx = MEM32(edi + 0xC);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036C733u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C733: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = esi;
    eax = MEM32(0x86554C);
    PUSH32(esp, eax);
    eax = MEM32(0x8C4E7C);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0036C754u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_0036C754: ;
    ecx = MEM32(0x86554C);
    eax = MEM32(0x8C4E80);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C771u); RECOMP_ABI_CALL(0x004C380Cu, sub_004C380C); /* call 0x004C380C */

loc_0036C771: ;
    eax = MEM32(0x865548);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C77Du); } /* indirect call */
    }

loc_0036C780: ;
    ecx = MEM32(edi + 0x10);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036C78Cu); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C78C: ;
    MEM32(edi + 0x10) = esi;
    eax = MEM32(edi + 8);
    edx = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036C79Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C79Au); } /* indirect call */
    }

loc_0036C79D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C860
 * Original: 0x0036C860 - 0x0036C941 (225 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0036C86Au); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036C86A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036C871u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C86Eu); } /* indirect call */
    }

loc_0036C871: ;
    esi = eax;
    PUSH32(esp, 0x0036C878u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036C878: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036C87Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C87Cu); } /* indirect call */
    }

loc_0036C87F: ;
    ecx = MEM32(0x8C4E84);
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036C88Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C88Cu); } /* indirect call */
    }

loc_0036C88F: ;
    eax = MEM32(0x8C4EA0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C89Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C899u); } /* indirect call */
    }

loc_0036C89C: ;
    eax = MEM32(0x8C4E8C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C8A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C8A6u); } /* indirect call */
    }

loc_0036C8A9: ;
    eax = MEM32(0x8C4E90);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C8B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C8B3u); } /* indirect call */
    }

loc_0036C8B6: ;
    eax = MEM32(0x8C4E94);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C8C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C8C0u); } /* indirect call */
    }

loc_0036C8C3: ;
    eax = MEM32(0x8C4E98);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C8D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C8CDu); } /* indirect call */
    }

loc_0036C8D0: ;
    eax = MEM32(0x8C4E9C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036C8DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C8DAu); } /* indirect call */
    }

loc_0036C8DD: ;
    eax = MEM32(0x865714);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036C8EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C8E7u); } /* indirect call */
    }

loc_0036C8EA: ;
    eax = MEM32(0x865548);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036C8F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C8F4u); } /* indirect call */
    }

loc_0036C8F7: ;
    ecx = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036C903u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C903: ;
    MEM32(edi + 8) = esi;
    edx = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036C910u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C910: ;
    MEM32(edi + 0xC) = esi;
    eax = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C91Du); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C91D: ;
    MEM32(edi + 0x10) = esi;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036C92Au); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C92A: ;
    MEM32(edi + 0x14) = esi;
    PUSH32(esp, esi);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036C937u); RECOMP_ABI_CALL(0x004DD62Cu, sub_004DD62C); /* call 0x004DD62C */

loc_0036C937: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C980
 * Original: 0x0036C980 - 0x0036C9A4 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C980: ;
    ecx = MEM32(0x8C5420);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C9A3; /* je: equal / zero */

loc_0036C98C: ;
    ecx = 0x8C5420;

loc_0036C991: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C999; /* jne: not equal / not zero */

loc_0036C998: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036C999: ;
    edx = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C991; /* jne: not equal / not zero */

loc_0036C9A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036C9B0
 * Original: 0x0036C9B0 - 0x0036C9D9 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C9B0: ;
    ecx = MEM32(0x8C5420);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C9D8; /* je: equal / zero */

loc_0036C9BC: ;
    ecx = 0x8C5420;
    edx = 1;
    PUSH32(esp, esi);

loc_0036C9C7: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C9CD; /* jne: not equal / not zero */

loc_0036C9CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036C9CD: ;
    esi = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C9C7; /* jne: not equal / not zero */

loc_0036C9D7: ;
    POP32(esp, esi);

loc_0036C9D8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036C9F0
 * Original: 0x0036C9F0 - 0x0036CA0B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C9F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C9FCu); RECOMP_ABI_CALL(0x00030342u, sub_00030342); /* call 0x00030342 */

loc_0036C9FC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5440);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CA20
 * Original: 0x0036CA20 - 0x0036CA3B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CA20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036CA2Cu); RECOMP_ABI_CALL(0x00030342u, sub_00030342); /* call 0x00030342 */

loc_0036CA2C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5444);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CA50
 * Original: 0x0036CA50 - 0x0036CA8A (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CA50(void)
{

loc_0036CA50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036CA56u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036CA56: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036CA5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CA5Au); } /* indirect call */
    }

loc_0036CA5D: ;
    ecx = MEM32(0x865548);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036CA6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CA6Au); } /* indirect call */
    }

loc_0036CA6D: ;
    ecx = MEM32(0x90E424);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036CA78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CA75u); } /* indirect call */
    }

loc_0036CA78: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036CA83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CA80u); } /* indirect call */
    }

loc_0036CA83: ;
    eax = MEM32(0x865718);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036CAA0
 * Original: 0x0036CAA0 - 0x0036CF9E (1278 bytes, 472 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036CAA0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036CAACu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036CAAC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036CAB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CAB0u); } /* indirect call */
    }

loc_0036CAB3: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x8631F4);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CACAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CAC7u); } /* indirect call */
    }

loc_0036CACA: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x34) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CAE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CAE2u); } /* indirect call */
    }

loc_0036CAE5: ;
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CAFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CAF9u); } /* indirect call */
    }

loc_0036CAFC: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CB13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CB10u); } /* indirect call */
    }

loc_0036CB13: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CB2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CB29u); } /* indirect call */
    }

loc_0036CB2C: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CB45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CB42u); } /* indirect call */
    }

loc_0036CB45: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CB5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CB5Bu); } /* indirect call */
    }

loc_0036CB5E: ;
    esi = MEM32(esp + 0x34);
    edx = MEM32(ebp);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(esp + 0x2C) = 2;
    MEM32(esp + 0x20) = 0x82E398;
    MEM32(esp + 0x38) = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036CB86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CB83u); } /* indirect call */
    }

loc_0036CB86: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036CB90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CB8Du); } /* indirect call */
    }

loc_0036CB90: ;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x34) = 1;
    eax = MEM32(ebx);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036CBA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBA4u); } /* indirect call */
    }

loc_0036CBA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0036CBADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBAAu); } /* indirect call */
    }

loc_0036CBAD: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82E3C0);
    PUSH32(esp, 4);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036CBBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBBBu); } /* indirect call */
    }

loc_0036CBBE: ;
    eax = MEM32(edi);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036CBC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBC6u); } /* indirect call */
    }

loc_0036CBC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0036CBCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBCCu); } /* indirect call */
    }

loc_0036CBCF: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82E428);
    PUSH32(esp, 5);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036CBE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBDDu); } /* indirect call */
    }

loc_0036CBE0: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036CBEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBEAu); } /* indirect call */
    }

loc_0036CBED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0036CBF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBF0u); } /* indirect call */
    }

loc_0036CBF3: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82E450);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036CC06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC03u); } /* indirect call */
    }

loc_0036CC06: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036CC13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC10u); } /* indirect call */
    }

loc_0036CC13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0036CC19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC16u); } /* indirect call */
    }

loc_0036CC19: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82E410);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036CC2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC29u); } /* indirect call */
    }

loc_0036CC2C: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036CC39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC36u); } /* indirect call */
    }

loc_0036CC39: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0036CC3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC3Cu); } /* indirect call */
    }

loc_0036CC3F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82E3F8);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036CC52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC4Fu); } /* indirect call */
    }

loc_0036CC52: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036CC5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC5Cu); } /* indirect call */
    }

loc_0036CC5F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0036CC65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC62u); } /* indirect call */
    }

loc_0036CC65: ;
    esi = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82E3E0);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036CC7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CC77u); } /* indirect call */
    }

loc_0036CC7A: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036CC96; /* jne: not equal / not zero */

loc_0036CC83: ;
    edx = esp + 0x18;
    ecx = 1;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x34) = eax;
    goto loc_0036CCBD;

loc_0036CC96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036CCAE; /* jne: not equal / not zero */

loc_0036CC9B: ;
    edx = esp + 0x18;
    ecx = 1;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x34) = eax;
    goto loc_0036CCBD;

loc_0036CCAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_0036CCBD; /* jne: not equal / not zero */

loc_0036CCB7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = eax;

loc_0036CCBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x34));
    ebp = MEM32(esp + 0x30);
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0036CCD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CCD1u); } /* indirect call */
    }

loc_0036CCD4: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CCDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CCD9u); } /* indirect call */
    }

loc_0036CCDC: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CCE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CCE0u); } /* indirect call */
    }

loc_0036CCE3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CCEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CCE7u); } /* indirect call */
    }

loc_0036CCEA: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CCF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CCF0u); } /* indirect call */
    }

loc_0036CCF3: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CCFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CCF9u); } /* indirect call */
    }

loc_0036CCFC: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CD05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD02u); } /* indirect call */
    }

loc_0036CD05: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CD0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD09u); } /* indirect call */
    }

loc_0036CD0C: ;
    PUSH32(esp, 0x0036CD11u); RECOMP_ABI_CALL(0x004EB601u, sub_004EB601); /* call 0x004EB601 */

loc_0036CD11: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036CD18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD15u); } /* indirect call */
    }

loc_0036CD18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0036CD1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD1Cu); } /* indirect call */
    }

loc_0036CD1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036CF94; /* je: equal / zero */

loc_0036CD27: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0036CD2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD2Bu); } /* indirect call */
    }

loc_0036CD2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036CF94; /* jne: not equal / not zero */

loc_0036CD36: ;
    PUSH32(esp, 0x0036CD3Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036CD3B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036CD42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD3Fu); } /* indirect call */
    }

loc_0036CD42: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x8631F4);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CD59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD56u); } /* indirect call */
    }

loc_0036CD59: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036CD60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD5Du); } /* indirect call */
    }

loc_0036CD60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036CDB0; /* je: equal / zero */

loc_0036CD69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036CDB0; /* je: equal / zero */

loc_0036CD6E: ;
    ecx = MEM32(0x8C4E7C);
    edx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CD83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD80u); } /* indirect call */
    }

loc_0036CD83: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CD8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD87u); } /* indirect call */
    }

loc_0036CD8A: ;
    ecx = MEM32(0x8C4E80);
    edx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CD9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CD9Cu); } /* indirect call */
    }

loc_0036CD9F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CDA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CDA3u); } /* indirect call */
    }

loc_0036CDA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0036CDB0: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x8631F4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CDC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CDC2u); } /* indirect call */
    }

loc_0036CDC5: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CDDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CDD9u); } /* indirect call */
    }

loc_0036CDDC: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CDF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CDF0u); } /* indirect call */
    }

loc_0036CDF3: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CE0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE07u); } /* indirect call */
    }

loc_0036CE0A: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CE23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE20u); } /* indirect call */
    }

loc_0036CE23: ;
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CE3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE39u); } /* indirect call */
    }

loc_0036CE3C: ;
    MEM32(esp + 0x34) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 2 (32-bit) */
    eax = MEM32(edi);
    ecx = edi;
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0036CEB7; /* jne: not equal / not zero */

loc_0036CE4D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CE50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE4Du); } /* indirect call */
    }

loc_0036CE50: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CE57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE54u); } /* indirect call */
    }

loc_0036CE57: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CE60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE5Du); } /* indirect call */
    }

loc_0036CE60: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CE67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE64u); } /* indirect call */
    }

loc_0036CE67: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CE71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE6Eu); } /* indirect call */
    }

loc_0036CE71: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CE79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE76u); } /* indirect call */
    }

loc_0036CE79: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CE86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE83u); } /* indirect call */
    }

loc_0036CE86: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CE8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE8Au); } /* indirect call */
    }

loc_0036CE8D: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CE9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE97u); } /* indirect call */
    }

loc_0036CE9A: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CEA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CE9Eu); } /* indirect call */
    }

loc_0036CEA1: ;
    edi = MEM32(esp + 0x34);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CEAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEABu); } /* indirect call */
    }

loc_0036CEAE: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036CEB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEB2u); } /* indirect call */
    }

loc_0036CEB5: ;
    goto loc_0036CF1F;

loc_0036CEB7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CEBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEB7u); } /* indirect call */
    }

loc_0036CEBA: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CEC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEBEu); } /* indirect call */
    }

loc_0036CEC1: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CECAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEC7u); } /* indirect call */
    }

loc_0036CECA: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CECEu); } /* indirect call */
    }

loc_0036CED1: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CEDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CED8u); } /* indirect call */
    }

loc_0036CEDB: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CEE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEE0u); } /* indirect call */
    }

loc_0036CEE3: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CEF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEEDu); } /* indirect call */
    }

loc_0036CEF0: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CEF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CEF4u); } /* indirect call */
    }

loc_0036CEF7: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CF04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF01u); } /* indirect call */
    }

loc_0036CF04: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CF0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF08u); } /* indirect call */
    }

loc_0036CF0B: ;
    edi = MEM32(esp + 0x34);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CF18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF15u); } /* indirect call */
    }

loc_0036CF18: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CF1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF1Cu); } /* indirect call */
    }

loc_0036CF1F: ;
    ecx = MEM32(0x86DB98);
    edx = MEM32(0x86DB94);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CF34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF31u); } /* indirect call */
    }

loc_0036CF34: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036CF3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF38u); } /* indirect call */
    }

loc_0036CF3B: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036CF43u); RECOMP_ABI_CALL(0x00027602u, sub_00027602); /* call 0x00027602 */

loc_0036CF43: ;
    ecx = MEM32(0x8C4E7C);
    edx = MEM32(0x8631FC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CF5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF5Au); } /* indirect call */
    }

loc_0036CF5D: ;
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CF67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF64u); } /* indirect call */
    }

loc_0036CF67: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CF6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF6Bu); } /* indirect call */
    }

loc_0036CF6E: ;
    ecx = MEM32(0x8C4E80);
    edx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036CF83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF80u); } /* indirect call */
    }

loc_0036CF83: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036CF8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF8Au); } /* indirect call */
    }

loc_0036CF8D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036CF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CF91u); } /* indirect call */
    }

loc_0036CF94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036D0E0
 * Original: 0x0036D0E0 - 0x0036D0FF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D0E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FE5C;
    if (TEST_Z(_fa, _fb)) goto loc_0036D0F9; /* je: equal / zero */

loc_0036D0F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036D0F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036D0F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036D0F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D110
 * Original: 0x0036D110 - 0x0036D140 (48 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0036D11Eu); RECOMP_ABI_CALL(0x0002BBD0u, sub_0002BBD0); /* call 0x0002BBD0 */

loc_0036D11E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036D133; /* jle: less or equal (signed <=) */

loc_0036D125: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D12Bu); RECOMP_ABI_CALL(0x00021982u, sub_00021982); /* call 0x00021982 */

loc_0036D12B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036D133: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0036D13Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D138u); } /* indirect call */
    }

loc_0036D13B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D150
 * Original: 0x0036D150 - 0x0036D46A (794 bytes, 255 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036D150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D163u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036D163: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036D16Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D167u); } /* indirect call */
    }

loc_0036D16A: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 8) = 0;
    ecx = 0x1F;
    edi = esp + 9;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830F70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D192u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036D192: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D19Bu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036D19B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D1A2u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036D1A2: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E470);
    PUSH32(esp, 0x82E3AC);
    PUSH32(esp, 5);
    PUSH32(esp, 0x830F50);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036D1C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D1C3u); } /* indirect call */
    }

loc_0036D1C6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x830F3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D1D7u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036D1D7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D1E0u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036D1E0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D1E7u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036D1E7: ;
    edx = MEM32(0x8C4EA0);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E3D0);
    PUSH32(esp, 0x82E3C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x830F1C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036D20Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D208u); } /* indirect call */
    }

loc_0036D20B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830F00);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D21Cu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036D21C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D225u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036D225: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D22Cu); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036D22C: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E43C);
    PUSH32(esp, 0x82E428);
    PUSH32(esp, 5);
    PUSH32(esp, 0x830EDC);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036D250u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D24Du); } /* indirect call */
    }

loc_0036D250: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x830ECC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D261u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036D261: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D26Au); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036D26A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D271u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036D271: ;
    edx = MEM32(0x8C4E90);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E460);
    PUSH32(esp, 0x82E450);
    PUSH32(esp, 4);
    PUSH32(esp, 0x830EB0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036D295u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D292u); } /* indirect call */
    }

loc_0036D295: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830E9C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D2A6u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036D2A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D2AFu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036D2AF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D2B6u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036D2B6: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E41C);
    PUSH32(esp, 0x82E410);
    PUSH32(esp, 3);
    PUSH32(esp, 0x830E80);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036D2DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D2D7u); } /* indirect call */
    }

loc_0036D2DA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x830E6C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D2EBu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036D2EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D2F4u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036D2F4: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D2FBu); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036D2FB: ;
    edx = MEM32(0x8C4E98);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E404);
    PUSH32(esp, 0x82E3F8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x830E50);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036D31Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D31Cu); } /* indirect call */
    }

loc_0036D31F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830E3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D330u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0036D330: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D339u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036D339: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D340u); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_0036D340: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82E3EC);
    PUSH32(esp, 0x82E3E0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x830E1C);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036D364u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D361u); } /* indirect call */
    }

loc_0036D364: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = MEM32(0x8656FC);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036D373u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D370u); } /* indirect call */
    }

loc_0036D373: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D37Au); RECOMP_ABI_CALL(0x004C3FB1u, sub_004C3FB1); /* call 0x004C3FB1 */

loc_0036D37A: ;
    ecx = MEM32(0x8C4E84);
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D38Cu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036D38C: ;
    edx = MEM32(0x8C4EA0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D39Cu); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036D39C: ;
    ecx = MEM32(0x8656FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036D3ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D3A9u); } /* indirect call */
    }

loc_0036D3AC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D3B3u); RECOMP_ABI_CALL(0x004C3FB1u, sub_004C3FB1); /* call 0x004C3FB1 */

loc_0036D3B3: ;
    edx = MEM32(0x8C4E8C);
    edi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D3C5u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036D3C5: ;
    eax = MEM32(0x8C4E90);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D3D4u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036D3D4: ;
    ecx = MEM32(0x8C4E94);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D3E4u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036D3E4: ;
    edx = MEM32(0x8C4E98);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D3F4u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036D3F4: ;
    eax = MEM32(0x8C4E9C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D403u); RECOMP_ABI_CALL(0x004C3E24u, sub_004C3E24); /* call 0x004C3E24 */

loc_0036D403: ;
    eax = MEM32(0x863160);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036D412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D40Fu); } /* indirect call */
    }

loc_0036D412: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D419u); RECOMP_ABI_CALL(0x004C3FB1u, sub_004C3FB1); /* call 0x004C3FB1 */

loc_0036D419: ;
    ecx = MEM32(0x863164);
    edi = eax;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D429u); RECOMP_ABI_CALL(0x004C3EDEu, sub_004C3EDE); /* call 0x004C3EDE */

loc_0036D429: ;
    edx = MEM32(0x863168);
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D437u); RECOMP_ABI_CALL(0x004C3EDEu, sub_004C3EDE); /* call 0x004C3EDE */

loc_0036D437: ;
    ecx = MEM32(0x863164);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036D445u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D442u); } /* indirect call */
    }

loc_0036D445: ;
    eax = MEM32(0x863168);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D452u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D44Fu); } /* indirect call */
    }

loc_0036D452: ;
    ecx = MEM32(0x90E424);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036D45Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D45Au); } /* indirect call */
    }

loc_0036D45D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036D464u); RECOMP_ABI_CALL(0x0003635Au, sub_0003635A); /* call 0x0003635A */

loc_0036D464: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0036D530
 * Original: 0x0036D530 - 0x0036D5C9 (153 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D530(void)
{

loc_0036D530: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036D53Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D539u); } /* indirect call */
    }

loc_0036D53C: ;
    ecx = eax;
    PUSH32(esp, 0x0036D543u); RECOMP_ABI_CALL(0x0002C0C6u, sub_0002C0C6); /* call 0x0002C0C6 */

loc_0036D543: ;
    PUSH32(esp, 0x0036D548u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036D548: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036D54Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D54Cu); } /* indirect call */
    }

loc_0036D54F: ;
    ecx = MEM32(0x863164);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036D55Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D55Cu); } /* indirect call */
    }

loc_0036D55F: ;
    eax = MEM32(0x863168);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D56Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D569u); } /* indirect call */
    }

loc_0036D56C: ;
    eax = MEM32(0x8C4E84);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D576u); } /* indirect call */
    }

loc_0036D579: ;
    eax = MEM32(0x8C4EA0);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D583u); } /* indirect call */
    }

loc_0036D586: ;
    eax = MEM32(0x8C4E8C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D593u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D590u); } /* indirect call */
    }

loc_0036D593: ;
    eax = MEM32(0x8C4E90);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D5A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D59Du); } /* indirect call */
    }

loc_0036D5A0: ;
    eax = MEM32(0x8C4E94);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D5ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D5AAu); } /* indirect call */
    }

loc_0036D5AD: ;
    eax = MEM32(0x8C4E98);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D5BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D5B7u); } /* indirect call */
    }

loc_0036D5BA: ;
    eax = MEM32(0x8C4E9C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036D5C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D5C4u); } /* indirect call */
    }

loc_0036D5C7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036D5F0
 * Original: 0x0036D5F0 - 0x0036D617 (39 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D5F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D5FAu); RECOMP_ABI_CALL(0x00032CAAu, sub_00032CAA); /* call 0x00032CAA */

loc_0036D5FA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036D612; /* jl: less (signed <) */

loc_0036D601: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D60Cu); RECOMP_ABI_CALL(0x0002BFB8u, sub_0002BFB8); /* call 0x0002BFB8 */

loc_0036D60C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0036D612: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036D620
 * Original: 0x0036D620 - 0x0036D653 (51 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D620: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D62Au); RECOMP_ABI_CALL(0x00032CAAu, sub_00032CAA); /* call 0x00032CAA */

loc_0036D62A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036D64C; /* jl: less (signed <) */

loc_0036D631: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = MEM32(eax + 0x8C5434);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D643; /* je: equal / zero */

loc_0036D63E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0036D640u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D63Eu); } /* indirect call */
    }

loc_0036D640: ;
    esp += 12; return; /* ret 8 */

loc_0036D643: ;
    eax = MEM32(eax + 0x8C5438);
    esp += 12; return; /* ret 8 */

loc_0036D64C: ;
    eax = MEM32(esp + 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036D660
 * Original: 0x0036D660 - 0x0036D699 (57 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D66Au); RECOMP_ABI_CALL(0x00032CAAu, sub_00032CAA); /* call 0x00032CAA */

loc_0036D66A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036D692; /* jl: less (signed <) */

loc_0036D671: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D68B; /* je: equal / zero */

loc_0036D67E: ;
    ecx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0036D685u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0036D683u); } /* indirect call */
    }

loc_0036D685: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036D68B: ;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

loc_0036D692: ;
    eax = MEM32(esp + 0xC);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036D6B0
 * Original: 0x0036D6B0 - 0x0036D70A (90 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D6B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0036D6BEu); RECOMP_ABI_CALL(0x00032CAAu, sub_00032CAA); /* call 0x00032CAA */

loc_0036D6BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036D6EE; /* jl: less (signed <) */

loc_0036D6C5: ;
    ecx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x8C5448); PUSH32(esp, 0x0036D6D8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0036D6D2u); } /* indirect call */
    }

loc_0036D6D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D6E6u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0036D6E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0036D6EE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0036D705u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D702u); } /* indirect call */
    }

loc_0036D705: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036D720
 * Original: 0x0036D720 - 0x0036D7FB (219 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D720: ;
    eax = MEM32(0x865718);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    edx = ecx;
    esi = ebp;

loc_0036D730: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D754; /* jne: not equal / not zero */

loc_0036D738: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D750; /* je: equal / zero */

loc_0036D73C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D754; /* jne: not equal / not zero */

loc_0036D746: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0036D730; /* jne: not equal / not zero */

loc_0036D750: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036D759;

loc_0036D754: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036D759: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0036D775; /* jne: not equal / not zero */

loc_0036D75D: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036D768u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D765u); } /* indirect call */
    }

loc_0036D768: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0036D76Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D76Cu); } /* indirect call */
    }

loc_0036D76F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0036D775: ;
    esi = MEM32(0x8631FC);
    eax = ebp;
    /* nop */

loc_0036D780: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D7A4; /* jne: not equal / not zero */

loc_0036D788: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D7A0; /* je: equal / zero */

loc_0036D78C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D7A4; /* jne: not equal / not zero */

loc_0036D796: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0036D780; /* jne: not equal / not zero */

loc_0036D7A0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036D7A9;

loc_0036D7A4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036D7A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0036D7E6; /* je: equal / zero */

loc_0036D7AE: ;
    edi = 0x830FA0;
    esi = ebp;
    ecx = 0x14;
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
    if ((_flags != 0)) goto loc_0036D7E6; /* je: equal / zero */

loc_0036D7C0: ;
    edi = 0x830F84;
    esi = ebp;
    ecx = 0x18;
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
    if ((_flags != 0)) goto loc_0036D7E6; /* je: equal / zero */

loc_0036D7D2: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0036D7DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D7DCu); } /* indirect call */
    }

loc_0036D7DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0036D7E6: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036D7F1u); RECOMP_ABI_CALL(0x0003395Cu, sub_0003395C); /* call 0x0003395C */

loc_0036D7F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036D840
 * Original: 0x0036D840 - 0x0036D927 (231 bytes, 99 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D840: ;
    eax = MEM32(0x865718);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    edx = ecx;
    esi = ebp;

loc_0036D850: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D874; /* jne: not equal / not zero */

loc_0036D858: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D870; /* je: equal / zero */

loc_0036D85C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D874; /* jne: not equal / not zero */

loc_0036D866: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0036D850; /* jne: not equal / not zero */

loc_0036D870: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036D879;

loc_0036D874: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036D879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0036D89A; /* jne: not equal / not zero */

loc_0036D87D: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036D888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D885u); } /* indirect call */
    }

loc_0036D888: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036D894u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D891u); } /* indirect call */
    }

loc_0036D894: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0036D89A: ;
    esi = MEM32(0x8631FC);
    eax = ebp;

loc_0036D8A2: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D8C6; /* jne: not equal / not zero */

loc_0036D8AA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D8C2; /* je: equal / zero */

loc_0036D8AE: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D8C6; /* jne: not equal / not zero */

loc_0036D8B8: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0036D8A2; /* jne: not equal / not zero */

loc_0036D8C2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036D8CB;

loc_0036D8C6: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0036D8CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0036D90D; /* je: equal / zero */

loc_0036D8D0: ;
    edi = 0x830FA0;
    esi = ebp;
    ecx = 0x14;
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
    if ((_flags != 0)) goto loc_0036D90D; /* je: equal / zero */

loc_0036D8E2: ;
    edi = 0x830F84;
    esi = ebp;
    ecx = 0x18;
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
    if ((_flags != 0)) goto loc_0036D90D; /* je: equal / zero */

loc_0036D8F4: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x0036D906u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D903u); } /* indirect call */
    }

loc_0036D906: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0036D90D: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036D91Du); RECOMP_ABI_CALL(0x0001C88Du, sub_0001C88D); /* call 0x0001C88D */

loc_0036D91D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036D960
 * Original: 0x0036D960 - 0x0036D99A (58 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D960: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0036D96Eu); RECOMP_ABI_CALL(0x00032CAAu, sub_00032CAA); /* call 0x00032CAA */

loc_0036D96E: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    if (CMP_L(_fas, _fbs)) goto loc_0036D98D; /* jl: less (signed <) */

loc_0036D97F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D985u); RECOMP_ABI_CALL(0x0001499Eu, sub_0001499E); /* call 0x0001499E */

loc_0036D985: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0036D98D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0036D995u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D992u); } /* indirect call */
    }

loc_0036D995: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036D9B0
 * Original: 0x0036D9B0 - 0x0036D9CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D9B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82F6BC;
    if (TEST_Z(_fa, _fb)) goto loc_0036D9C9; /* je: equal / zero */

loc_0036D9C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036D9C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036D9C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036D9C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D9E0
 * Original: 0x0036D9E0 - 0x0036DA6C (140 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D9E0(void)
{

loc_0036D9E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036D9E6u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036D9E6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036D9EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D9EAu); } /* indirect call */
    }

loc_0036D9ED: ;
    PUSH32(esp, 0x0036D9F2u); RECOMP_ABI_CALL(0x004C0342u, sub_004C0342); /* call 0x004C0342 */

loc_0036D9F2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036D9F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036D9F6u); } /* indirect call */
    }

loc_0036D9F9: ;
    ecx = MEM32(0x865548);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036DA09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA06u); } /* indirect call */
    }

loc_0036DA09: ;
    ecx = MEM32(0x90E424);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036DA14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA11u); } /* indirect call */
    }

loc_0036DA14: ;
    eax = MEM32(eax + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036DA1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA1Cu); } /* indirect call */
    }

loc_0036DA1F: ;
    PUSH32(esp, 0x0036DA24u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DA24: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DA2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA28u); } /* indirect call */
    }

loc_0036DA2B: ;
    ecx = MEM32(0x8C4E7C);
    edx = MEM32(0x8631FC);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036DA42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA3Fu); } /* indirect call */
    }

loc_0036DA42: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036DA49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA46u); } /* indirect call */
    }

loc_0036DA49: ;
    ecx = MEM32(0x8C4E80);
    edx = MEM32(0x8631FC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036DA5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA5Bu); } /* indirect call */
    }

loc_0036DA5E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036DA65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DA62u); } /* indirect call */
    }

loc_0036DA65: ;
    eax = MEM32(0x865718);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036DA90
 * Original: 0x0036DA90 - 0x0036DB3B (171 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036DA90: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036DA9Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036DA9F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DAA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DAA3u); } /* indirect call */
    }

loc_0036DAA6: ;
    ecx = esp + 0x18;
    edi = eax;
    PUSH32(esp, 0x0036DAB1u); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_0036DAB1: ;
    ebp = MEM32(esp + 0xCC);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0036DAC7u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_0036DAC7: ;
    ebx = (uint32_t)(int32_t)SMEM8(esp + 0xB4);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0036DAD8u); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_0036DAD8: ;
    esi = MEM32(esp + 0xD0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DAF8; /* jb: below (unsigned <) */

loc_0036DAE3: ;
    ecx = MEM32(esp + 0xD4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036DAF8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036DB07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DB04u); } /* indirect call */
    }

loc_0036DB07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036DB15; /* jae: above or equal (unsigned >=) */

loc_0036DB0C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = ecx;

loc_0036DB15: ;
    eax = MEM32(esp + 0xD4);
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x830FB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036DB2Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036DB2D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036DB70
 * Original: 0x0036DB70 - 0x0036DB76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DB70(void)
{

loc_0036DB70: ;
    eax = MEM32(0x8631FC);
    esp += 4; return; /* ret */

}

/**
 * sub_0036DB80
 * Original: 0x0036DB80 - 0x0036DB86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DB80(void)
{

loc_0036DB80: ;
    eax = MEM32(0x8631FC);
    esp += 4; return; /* ret */

}

/**
 * sub_0036DB90
 * Original: 0x0036DB90 - 0x0036DB96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DB90(void)
{

loc_0036DB90: ;
    eax = MEM32(0x8631FC);
    esp += 4; return; /* ret */

}

/**
 * sub_0036DBA0
 * Original: 0x0036DBA0 - 0x0036DBBC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DBA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DBA0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036DBAFu); RECOMP_ABI_CALL(0x00030342u, sub_00030342); /* call 0x00030342 */

loc_0036DBAF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5420);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036DBD0
 * Original: 0x0036DBD0 - 0x0036DBFB (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036DBD0: ;
    PUSH32(esp, 0x0036DBD5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DBD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DBDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DBD9u); } /* indirect call */
    }

loc_0036DBDC: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8631FC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DBEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DBECu); } /* indirect call */
    }

loc_0036DBEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DBF4; /* jne: not equal / not zero */

loc_0036DBF3: ;
    esp += 4; return; /* ret */

loc_0036DBF4: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x28)); return; /* indirect tail jmp */

}

/**
 * sub_0036DC10
 * Original: 0x0036DC10 - 0x0036DC82 (114 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DC10: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0036DC1Bu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DC1B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DC22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DC1Fu); } /* indirect call */
    }

loc_0036DC22: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DC35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DC32u); } /* indirect call */
    }

loc_0036DC35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DC40; /* je: equal / zero */

loc_0036DC39: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036DC40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DC3Du); } /* indirect call */
    }

loc_0036DC40: ;
    PUSH32(esp, 0x0036DC45u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036DC45: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DC4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DC49u); } /* indirect call */
    }

loc_0036DC4C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036DC62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DC5Fu); } /* indirect call */
    }

loc_0036DC62: ;
    PUSH32(esp, 0x100);
    edx = esp + 4;
    PUSH32(esp, 0x901450);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036DC76u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036DC76: ;
    eax = 0x901450;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036DCA0
 * Original: 0x0036DCA0 - 0x0036DD16 (118 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DCA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036DCA6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DCA6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DCADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DCAAu); } /* indirect call */
    }

loc_0036DCAD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DCC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DCBDu); } /* indirect call */
    }

loc_0036DCC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DCC8; /* jne: not equal / not zero */

loc_0036DCC4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036DCD1;

loc_0036DCC8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036DCCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DCCCu); } /* indirect call */
    }

loc_0036DCCF: ;
    esi = eax;

loc_0036DCD1: ;
    PUSH32(esp, 0x0036DCD6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DCD6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DCDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DCDAu); } /* indirect call */
    }

loc_0036DCDD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DCF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DCEDu); } /* indirect call */
    }

loc_0036DCF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DCFB; /* je: equal / zero */

loc_0036DCF4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036DCFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DCF8u); } /* indirect call */
    }

loc_0036DCFB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x9014A0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036DD0Cu); RECOMP_ABI_CALL(0x00023D36u, sub_00023D36); /* call 0x00023D36 */

loc_0036DD0C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x9014A0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036DD40
 * Original: 0x0036DD40 - 0x0036DD8A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DD40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036DD46u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DD46: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DD4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DD4Au); } /* indirect call */
    }

loc_0036DD4D: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DD60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DD5Du); } /* indirect call */
    }

loc_0036DD60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DD68; /* jne: not equal / not zero */

loc_0036DD64: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036DD71;

loc_0036DD68: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036DD6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DD6Cu); } /* indirect call */
    }

loc_0036DD6F: ;
    esi = eax;

loc_0036DD71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036DD77u); RECOMP_ABI_CALL(0x000377D7u, sub_000377D7); /* call 0x000377D7 */

loc_0036DD77: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x32);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi * 4 + 0x8C4EA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036DDA0
 * Original: 0x0036DDA0 - 0x0036DF52 (434 bytes, 169 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036DDA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036DDABu); RECOMP_ABI_CALL(0x000241D7u, sub_000241D7); /* call 0x000241D7 */

loc_0036DDAB: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036DDB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DDB6u); } /* indirect call */
    }

loc_0036DDB9: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0036DF49; /* jbe: below or equal (unsigned <=) */

loc_0036DDD0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0036DDE0;

loc_0036DDD5: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x1C);
    /* nop */

loc_0036DDE0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x0036DDEDu); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0036DDED: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036DDF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DDF3u); } /* indirect call */
    }

loc_0036DDF6: ;
    edi = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036DDFFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DDFCu); } /* indirect call */
    }

loc_0036DDFF: ;
    edx = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, 0x820FC8);
    ecx = edi;
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036DE14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE11u); } /* indirect call */
    }

loc_0036DE14: ;
    ebp = eax;
    PUSH32(esp, 0x0036DE1Bu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036DE1B: ;
    ecx = eax;
    PUSH32(esp, 0x0036DE22u); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_0036DE22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036DE2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE2Cu); } /* indirect call */
    }

loc_0036DE2F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82F32C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036DE3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE3Au); } /* indirect call */
    }

loc_0036DE3D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036DE46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE43u); } /* indirect call */
    }

loc_0036DE46: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82EFFC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036DE54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE51u); } /* indirect call */
    }

loc_0036DE54: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036DE9F; /* jge: greater or equal (signed >=) */

loc_0036DE5B: ;
    PUSH32(esp, 0x0036DE60u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DE60: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DE67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE64u); } /* indirect call */
    }

loc_0036DE67: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DE7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE77u); } /* indirect call */
    }

loc_0036DE7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DE8A; /* je: equal / zero */

loc_0036DE7E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036DE85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE82u); } /* indirect call */
    }

loc_0036DE85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DE96; /* je: equal / zero */

loc_0036DE8A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0036DE92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DE8Fu); } /* indirect call */
    }

loc_0036DE92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DE9F; /* je: equal / zero */

loc_0036DE96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = eax;

loc_0036DE9F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0036DEA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DEA5u); } /* indirect call */
    }

loc_0036DEA8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0036DEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DEADu); } /* indirect call */
    }

loc_0036DEB0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82EFAC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036DEBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DEBBu); } /* indirect call */
    }

loc_0036DEBE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0036DEC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DEC4u); } /* indirect call */
    }

loc_0036DEC7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82EF88);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036DED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DED2u); } /* indirect call */
    }

loc_0036DED5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0036DEE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DEDBu); } /* indirect call */
    }

loc_0036DEE1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DEF5; /* jne: not equal / not zero */

loc_0036DEE5: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0036DEECu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0036DEEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DF08; /* jne: not equal / not zero */

loc_0036DEF3: ;
    goto loc_0036DF2E;

loc_0036DEF5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DF2E; /* jne: not equal / not zero */

loc_0036DEFA: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0036DF01u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0036DF01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DF2E; /* jne: not equal / not zero */

loc_0036DF08: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82EFE4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0036DF16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DF13u); } /* indirect call */
    }

loc_0036DF16: ;
    esi = eax;
    PUSH32(esp, 0x0036DF1Du); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036DF1D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036DF24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DF21u); } /* indirect call */
    }

loc_0036DF24: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036DF2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DF2Bu); } /* indirect call */
    }

loc_0036DF2E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0036DDD5; /* jb: below (unsigned <) */

loc_0036DF46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0036DF49: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002A1E0(); return; /* tail jmp 0x0002A1E0 */

}

/**
 * sub_0036DFC0
 * Original: 0x0036DFC0 - 0x0036E009 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DFC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036DFC6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036DFC6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036DFCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DFCAu); } /* indirect call */
    }

loc_0036DFCD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036DFE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DFDDu); } /* indirect call */
    }

loc_0036DFE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DFE8; /* jne: not equal / not zero */

loc_0036DFE4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036DFF1;

loc_0036DFE8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036DFEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036DFECu); } /* indirect call */
    }

loc_0036DFEF: ;
    esi = eax;

loc_0036DFF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036DFF7u); RECOMP_ABI_CALL(0x000377D7u, sub_000377D7); /* call 0x000377D7 */

loc_0036DFF7: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x8C4EA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C4EA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036E020
 * Original: 0x0036E020 - 0x0036E0BF (159 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E020: ;
    PUSH32(esp, 0x0036E025u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E025: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E02Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E029u); } /* indirect call */
    }

loc_0036E02C: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E03Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E03Cu); } /* indirect call */
    }

loc_0036E03F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E04A; /* je: equal / zero */

loc_0036E043: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E04Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E047u); } /* indirect call */
    }

loc_0036E04A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036E051u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E051: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E058u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E055u); } /* indirect call */
    }

loc_0036E058: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E06Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E068u); } /* indirect call */
    }

loc_0036E06B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E073; /* jne: not equal / not zero */

loc_0036E06F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036E07C;

loc_0036E073: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E07Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E077u); } /* indirect call */
    }

loc_0036E07A: ;
    edi = eax;

loc_0036E07C: ;
    PUSH32(esp, 0x0036E081u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036E081: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E085u); } /* indirect call */
    }

loc_0036E088: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0036E092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E08Fu); } /* indirect call */
    }

loc_0036E092: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0036E09Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E098u); } /* indirect call */
    }

loc_0036E09B: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0036E0A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E0A1u); } /* indirect call */
    }

loc_0036E0A4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x9014EC);
    PUSH32(esp, 0x0036E0B4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036E0B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0x9014EC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036E0F0
 * Original: 0x0036E0F0 - 0x0036E142 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E0F0: ;
    PUSH32(esp, 0x0036E0F5u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E0F5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E0FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E0F9u); } /* indirect call */
    }

loc_0036E0FC: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E10Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E10Cu); } /* indirect call */
    }

loc_0036E10F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E127; /* jne: not equal / not zero */

loc_0036E113: ;
    PUSH32(esp, 0x9014F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036E11Eu); RECOMP_ABI_CALL(0x0001D10Cu, sub_0001D10C); /* call 0x0001D10C */

loc_0036E11E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x9014F8;
    esp += 4; return; /* ret */

loc_0036E127: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E12Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E12Bu); } /* indirect call */
    }

loc_0036E12E: ;
    PUSH32(esp, 0x9014F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036E139u); RECOMP_ABI_CALL(0x0001D10Cu, sub_0001D10C); /* call 0x0001D10C */

loc_0036E139: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x9014F8;
    esp += 4; return; /* ret */

}

/**
 * sub_0036E160
 * Original: 0x0036E160 - 0x0036E1FA (154 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0036E168u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E168: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E16Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E16Cu); } /* indirect call */
    }

loc_0036E16F: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E182u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E17Fu); } /* indirect call */
    }

loc_0036E182: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E18D; /* je: equal / zero */

loc_0036E186: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E18Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E18Au); } /* indirect call */
    }

loc_0036E18D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E193u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E193: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E19Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E197u); } /* indirect call */
    }

loc_0036E19A: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E1ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E1AAu); } /* indirect call */
    }

loc_0036E1AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E1B5; /* jne: not equal / not zero */

loc_0036E1B1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036E1BE;

loc_0036E1B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E1BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E1B9u); } /* indirect call */
    }

loc_0036E1BC: ;
    esi = eax;

loc_0036E1BE: ;
    PUSH32(esp, 0x0036E1C3u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0036E1C3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E1CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E1C7u); } /* indirect call */
    }

loc_0036E1CA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036E1D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E1D6u); } /* indirect call */
    }

loc_0036E1D9: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E02D0);
    PUSH32(esp, 0x901520);
    PUSH32(esp, 0x0036E1EDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0036E1ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x901520;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036E220
 * Original: 0x0036E220 - 0x0036E2C4 (164 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E220: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036E227u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E227: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E22Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E22Bu); } /* indirect call */
    }

loc_0036E22E: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E241u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E23Eu); } /* indirect call */
    }

loc_0036E241: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E249; /* jne: not equal / not zero */

loc_0036E245: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036E252;

loc_0036E249: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E250u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E24Du); } /* indirect call */
    }

loc_0036E250: ;
    edi = eax;

loc_0036E252: ;
    PUSH32(esp, 0x0036E257u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E257: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E25Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E25Bu); } /* indirect call */
    }

loc_0036E25E: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E271u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E26Eu); } /* indirect call */
    }

loc_0036E271: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E279; /* jne: not equal / not zero */

loc_0036E275: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036E282;

loc_0036E279: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E280u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E27Du); } /* indirect call */
    }

loc_0036E280: ;
    esi = eax;

loc_0036E282: ;
    PUSH32(esp, 0x0036E287u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E287: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E28Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E28Bu); } /* indirect call */
    }

loc_0036E28E: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EFFC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E2A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E29Eu); } /* indirect call */
    }

loc_0036E2A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E2AC; /* je: equal / zero */

loc_0036E2A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E2ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E2A9u); } /* indirect call */
    }

loc_0036E2AC: ;
    PUSH32(esp, 0x901548);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036E2B9u); RECOMP_ABI_CALL(0x00028BE7u, sub_00028BE7); /* call 0x00028BE7 */

loc_0036E2B9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0x901548;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036E2F0
 * Original: 0x0036E2F0 - 0x0036E361 (113 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E2F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E2F6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E2F6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E2FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E2FAu); } /* indirect call */
    }

loc_0036E2FD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E310u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E30Du); } /* indirect call */
    }

loc_0036E310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E318; /* jne: not equal / not zero */

loc_0036E314: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036E321;

loc_0036E318: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E31Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E31Cu); } /* indirect call */
    }

loc_0036E31F: ;
    esi = eax;

loc_0036E321: ;
    PUSH32(esp, 0x0036E326u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E326: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E32Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E32Au); } /* indirect call */
    }

loc_0036E32D: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E340u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E33Du); } /* indirect call */
    }

loc_0036E340: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0036E347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E344u); } /* indirect call */
    }

loc_0036E347: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E354; /* je: equal / zero */

loc_0036E34B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E35B; /* je: equal / zero */

loc_0036E34F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E35B; /* je: equal / zero */

loc_0036E354: ;
    eax = 0x7B891F;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036E35B: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00037246(); return; /* tail jmp 0x00037246 */

}

/**
 * sub_0036E380
 * Original: 0x0036E380 - 0x0036E3ED (109 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E380: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E386u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E386: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E38Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E38Au); } /* indirect call */
    }

loc_0036E38D: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E3A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E39Du); } /* indirect call */
    }

loc_0036E3A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E3A8; /* jne: not equal / not zero */

loc_0036E3A4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036E3B1;

loc_0036E3A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0036E3AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E3ACu); } /* indirect call */
    }

loc_0036E3AF: ;
    esi = eax;

loc_0036E3B1: ;
    PUSH32(esp, 0x0036E3B6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E3B6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0036E3BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E3BAu); } /* indirect call */
    }

loc_0036E3BD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036E3D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E3CDu); } /* indirect call */
    }

loc_0036E3D0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0036E3D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E3D4u); } /* indirect call */
    }

loc_0036E3D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E3E0; /* je: equal / zero */

loc_0036E3DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E3E6; /* jne: not equal / not zero */

loc_0036E3E0: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002C4F9(); return; /* tail jmp 0x0002C4F9 */

loc_0036E3E6: ;
    eax = 0x7B891F;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036E410
 * Original: 0x0036E410 - 0x0036E496 (134 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036E410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E410: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, 0x0036E419u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036E419: ;
    ecx = eax;
    PUSH32(esp, 0x0036E420u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_0036E420: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E491; /* je: equal / zero */

loc_0036E426: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0036E428: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    _fa = (uint32_t)(MEM8(esi + eax * 4 + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + eax * 4 + 1), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036E46A; /* je: equal / zero */

loc_0036E438: ;
    PUSH32(esp, 0x0036E43Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0036E43D: ;
    ebx = eax;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036E446u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E443u); } /* indirect call */
    }

loc_0036E446: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036E46A; /* jl: less (signed <) */

loc_0036E44B: ;
    ecx = MEM32(0x900268);
    eax = MEM32(ecx);
    edi = MEM32(esi + 0x48);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0036E459u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E456u); } /* indirect call */
    }

loc_0036E459: ;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E46A; /* jne: not equal / not zero */

loc_0036E463: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0036E46Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E467u); } /* indirect call */
    }

loc_0036E46A: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0036E477u); RECOMP_ABI_CALL(0x00027DAAu, sub_00027DAA); /* call 0x00027DAA */

loc_0036E477: ;
    ecx = MEM32(ebp + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E488; /* je: equal / zero */

loc_0036E481: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036E488u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E485u); } /* indirect call */
    }

loc_0036E488: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E428; /* jne: not equal / not zero */

loc_0036E48F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0036E491: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E4C0
 * Original: 0x0036E4C0 - 0x0036E4DF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E4C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82FF44;
    if (TEST_Z(_fa, _fb)) goto loc_0036E4D9; /* je: equal / zero */

loc_0036E4D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E4D6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036E4D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036E4D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E4F0
 * Original: 0x0036E4F0 - 0x0036E540 (80 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x8B22D0;
    MEM32(esi) = 0x830970;
    PUSH32(esp, 0x0036E503u); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_0036E503: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E51D; /* je: equal / zero */

loc_0036E507: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x0036E511u); RECOMP_ABI_CALL(0x0001F64Bu, sub_0001F64B); /* call 0x0001F64B */

loc_0036E511: ;
    PUSH32(esp, 0);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x0036E51Du); RECOMP_ABI_CALL(0x000354FFu, sub_000354FF); /* call 0x000354FF */

loc_0036E51D: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0x82FF68;
    if (TEST_Z(_fa, _fb)) goto loc_0036E53A; /* je: equal / zero */

loc_0036E531: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E537u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036E537: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036E53A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E560
 * Original: 0x0036E560 - 0x0036E5DA (122 bytes, 44 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E560: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0036E56Du); RECOMP_ABI_CALL(0x0059DE73u, sub_0059DE73); /* call 0x0059DE73 */

loc_0036E56D: ;
    PUSH32(esp, edi);
    ecx = esp + 8;
    PUSH32(esp, 0x0036E577u); RECOMP_ABI_CALL(0x0059E1E4u, sub_0059E1E4); /* call 0x0059E1E4 */

loc_0036E577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x9006B0);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_0036E5B2; /* jne: not equal / not zero */

loc_0036E58A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x830FCC);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036E595u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E592u); } /* indirect call */
    }

loc_0036E595: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E59Fu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0036E59F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0x0036E5ABu); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_0036E5AB: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036E5B2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x830FCC);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0036E5BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E5BAu); } /* indirect call */
    }

loc_0036E5BD: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0036E5CAu); RECOMP_ABI_CALL(0x0059DF4Fu, sub_0059DF4F); /* call 0x0059DF4F */

loc_0036E5CA: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036E5D3u); RECOMP_ABI_CALL(0x0059DEB2u, sub_0059DEB2); /* call 0x0059DEB2 */

loc_0036E5D3: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036E600
 * Original: 0x0036E600 - 0x0036E747 (327 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E600: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x831054);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0036E615u); RECOMP_ABI_CALL(0x000377EBu, sub_000377EB); /* call 0x000377EB */

loc_0036E615: ;
    MEM32(esi + 0xB4) = 0x8269BC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xB4;
    ebp = esi + 0xCC;
    PUSH32(esp, 0x10);
    ecx = ebp;
    MEM32(esi) = 0x83102C;
    MEM32(edi) = 0x831004;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xC8) = ebx;
    PUSH32(esp, 0x0036E65Au); RECOMP_ABI_CALL(0x00031F76u, sub_00031F76); /* call 0x00031F76 */

loc_0036E65A: ;
    ecx = esi + 0xD8;
    PUSH32(esp, 0x10);
    MEM32(ebp) = 0x82F49C;
    PUSH32(esp, 0x0036E66Eu); RECOMP_ABI_CALL(0x00031F76u, sub_00031F76); /* call 0x00031F76 */

loc_0036E66E: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0xD8) = 0x82F4AC;
    MEM32(esi + 0xE4) = ecx;
    PUSH32(esp, ebx);
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xEC) = ebx;
    MEM32(esi + 0xF0) = 0x8C;
    MEM8(esi + 0xF4) = 1;
    MEM32(esi + 0xF8) = ebx;
    MEM8(esi + 0xFC) = LO8(ebx);
    MEM8(esi + 0xFE) = 1;
    MEM8(esi + 0xF5) = LO8(ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(0x9006A4) = esi;
    PUSH32(esp, 0x0036E6CBu); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0036E6CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5204);
    PUSH32(esp, 0x0036E6D6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0036E6D6: ;
    edx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E6F3; /* je: equal / zero */

loc_0036E6DF: ;
    ecx = 0x1480;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 4;
    MEM32(edx) = 0x8309D8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_0036E6F5;

loc_0036E6F3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036E6F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esi + 0xC8) = edx;
    PUSH32(esp, 0x0036E704u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0036E704: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x0036E70Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0036E70C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E723; /* je: equal / zero */

loc_0036E713: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x830FEC);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0036E721u); RECOMP_ABI_CALL(0x000365E9u, sub_000365E9); /* call 0x000365E9 */

loc_0036E721: ;
    goto loc_0036E725;

loc_0036E723: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036E725: ;
    MEM32(esi + 0xBC) = eax;
    MEM8(eax + 0x44) = 1;
    eax = MEM32(esi + 0xBC);
    MEM8(eax + 0x46) = 1;
    PUSH32(esp, 0x0036E73Eu); RECOMP_ABI_CALL(0x005402D0u, sub_005402D0); /* call 0x005402D0 */

loc_0036E73E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036E7A0
 * Original: 0x0036E7A0 - 0x0036E852 (178 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E7A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC8);
    PUSH32(esp, edi);
    ebx = esi + 0xCC;
    edi = esi + 0xB4;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi) = 0x83102C;
    MEM32(edi) = 0x831004;
    PUSH32(esp, 0x0036E7CCu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_0036E7CC: ;
    ecx = MEM32(esi + 0xC8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E7DF; /* je: equal / zero */

loc_0036E7D8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036E7DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E7DCu); } /* indirect call */
    }

loc_0036E7DF: ;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 0xC8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0036E7FB; /* je: equal / zero */

loc_0036E7EF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036E7F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E7F3u); } /* indirect call */
    }

loc_0036E7F5: ;
    MEM32(esi + 0xC4) = ebp;

loc_0036E7FB: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0036E803u); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_0036E803: ;
    MEM32(0x9006A4) = ebp;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E819; /* je: equal / zero */

loc_0036E813: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036E819u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E817u); } /* indirect call */
    }

loc_0036E819: ;
    ecx = MEM32(esi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esi + 0xBC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0036E82F; /* je: equal / zero */

loc_0036E829: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036E82Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E82Du); } /* indirect call */
    }

loc_0036E82F: ;
    ecx = esi + 0xD8;
    MEM32(esi + 0xF8) = ebp;
    PUSH32(esp, 0x0036E840u); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_0036E840: ;
    ecx = ebx;
    PUSH32(esp, 0x0036E847u); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_0036E847: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00021932(); return; /* tail jmp 0x00021932 */

}

/**
 * sub_0036E880
 * Original: 0x0036E880 - 0x0036EABA (570 bytes, 165 insns)
 * Category: game_ui
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E880: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x870);
    MEM8(esi + 0xFD) = LO8(eax);
    PUSH32(esp, 0x0036E8A0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0036E8A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E8B7; /* je: equal / zero */

loc_0036E8A7: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0036E8B0u); RECOMP_ABI_CALL(0x0002D65Bu, sub_0002D65B); /* call 0x0002D65B */

loc_0036E8B0: ;
    MEM32(0x902534) = eax;
    goto loc_0036E8BD;

loc_0036E8B7: ;
    MEM32(0x902534) = ebx;

loc_0036E8BD: ;
    PUSH32(esp, 0x0036E8C2u); RECOMP_ABI_CALL(0x0001391Du, sub_0001391D); /* call 0x0001391D */

loc_0036E8C2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E8C8u); RECOMP_ABI_CALL(0x00020235u, sub_00020235); /* call 0x00020235 */

loc_0036E8C8: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0xE8);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    MEM32(0x9006B0) = edx;
    PUSH32(esp, 0x0036E8E2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0036E8E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E8FC; /* je: equal / zero */

loc_0036E8E9: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0036E8F5u); RECOMP_ABI_CALL(0x0002F3C0u, sub_0002F3C0); /* call 0x0002F3C0 */

loc_0036E8F5: ;
    MEM32(0x9006AC) = eax;
    goto loc_0036E902;

loc_0036E8FC: ;
    MEM32(0x9006AC) = ebx;

loc_0036E902: ;
    MEM32(0x915160) = 0x3688E0;
    MEM32(0x915164) = 0x368910;
    PUSH32(esp, 0x0036E91Bu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0036E91B: ;
    PUSH32(esp, 0x59D40F);
    PUSH32(esp, 0x59D322);
    ebp = eax;
    PUSH32(esp, 0x0036E92Cu); RECOMP_ABI_CALL(0x0059E22Eu, sub_0059E22E); /* call 0x0059E22E */

loc_0036E92C: ;
    MEM32(0x912778) = MEM32(0x912778) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(0x912778)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi + 0xFD));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E987; /* je: equal / zero */

loc_0036E940: ;
    PUSH32(esp, 0x0036E945u); RECOMP_ABI_CALL(0x0053F6E0u, sub_0053F6E0); /* call 0x0053F6E0 */

loc_0036E945: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x0036E956u); RECOMP_ABI_CALL(0x00544DF0u, sub_00544DF0); /* call 0x00544DF0 */

loc_0036E956: ;
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x83106C);
    PUSH32(esp, 0x0036E96Au); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_0036E96A: ;
    ecx = MEM32(esp + 0x70);
    edi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036E977u); RECOMP_ABI_CALL(0x00540740u, sub_00540740); /* call 0x00540740 */

loc_0036E977: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036E97Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036E97D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0036E985u); RECOMP_ABI_CALL(0x00540B60u, sub_00540B60); /* call 0x00540B60 */

loc_0036E985: ;
    goto loc_0036EA06;

loc_0036E987: ;
    PUSH32(esp, 0x0036E98Cu); RECOMP_ABI_CALL(0x0053F6F0u, sub_0053F6F0); /* call 0x0053F6F0 */

loc_0036E98C: ;
    ecx = MEM32(0x9006AC);
    PUSH32(esp, 0x100);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x831064);
    PUSH32(esp, 0x0036E9A6u); RECOMP_ABI_CALL(0x0002DAC0u, sub_0002DAC0); /* call 0x0002DAC0 */

loc_0036E9A6: ;
    ebx = MEM32(esp + 0x50);
    edi = eax;
    PUSH32(esp, 0x0036E9B1u); RECOMP_ABI_CALL(0x0036E560u, sub_0036E560); /* call 0x0036E560 */

loc_0036E9B1: ;
    ecx = MEM32(0x9006B0);
    MEM32(0x90069C) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0036E9C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036E9BFu); } /* indirect call */
    }

loc_0036E9C2: ;
    ecx = MEM32(esi + 0xE8);
    edx = MEM32(0x90069C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036E9D5u); RECOMP_ABI_CALL(0x000343B1u, sub_000343B1); /* call 0x000343B1 */

loc_0036E9D5: ;
    SET_LO8(ecx, MEM8(esp + 0x60));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E9EA; /* jne: not equal / not zero */

loc_0036E9E0: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    goto loc_0036E9F8;

loc_0036E9EA: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x356);
    PUSH32(esp, edx);

loc_0036E9F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x0036EA03u); RECOMP_ABI_CALL(0x00544DF0u, sub_00544DF0); /* call 0x00544DF0 */

loc_0036EA03: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036EA06: ;
    SET_LO8(edx, MEM8(esi + 0xFD));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036EA1Bu); RECOMP_ABI_CALL(0x00019C0Au, sub_00019C0A); /* call 0x00019C0A */

loc_0036EA1B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 0x0036EA27u); RECOMP_ABI_CALL(0x00014DE0u, sub_00014DE0); /* call 0x00014DE0 */

loc_0036EA27: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x300;
    MEM32(esp + 0x38) = 0x4B;
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x0036EA49u); RECOMP_ABI_CALL(0x00509760u, sub_00509760); /* call 0x00509760 */

loc_0036EA49: ;
    PUSH32(esp, 0x0036EA4Eu); RECOMP_ABI_CALL(0x00540090u, sub_00540090); /* call 0x00540090 */

loc_0036EA4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0036EA57u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0036EA57: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EA7A; /* je: equal / zero */

loc_0036EA60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x830A54);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0036EA6Fu); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_0036EA6F: ;
    MEM32(edi) = 0x830A48;
    MEM32(edi + 0x1C) = esi;
    goto loc_0036EA7C;

loc_0036EA7A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036EA7C: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xC0) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036EA93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036EA90u); } /* indirect call */
    }

loc_0036EA93: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0xCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036EAA9u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_0036EAA9: ;
    ecx = eax;
    PUSH32(esp, 0x0036EAB0u); RECOMP_ABI_CALL(0x00029759u, sub_00029759); /* call 0x00029759 */

loc_0036EAB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036EB50
 * Original: 0x0036EB50 - 0x0036EBFA (170 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036EB50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0036EB59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036EB56u); } /* indirect call */
    }

loc_0036EB59: ;
    ecx = MEM32(esi + 0xB8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EB6B; /* je: equal / zero */

loc_0036EB65: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036EB6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036EB69u); } /* indirect call */
    }

loc_0036EB6B: ;
    ecx = MEM32(0x9006AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xC0) = 6;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036EB95; /* je: equal / zero */

loc_0036EB87: ;
    PUSH32(esp, 0x0036EB8Cu); RECOMP_ABI_CALL(0x00022DFAu, sub_00022DFA); /* call 0x00022DFA */

loc_0036EB8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036EB92u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036EB92: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036EB95: ;
    eax = MEM32(0x90069C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x9006AC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0036EBB8; /* je: equal / zero */

loc_0036EBA4: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0036EBB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036EBADu); } /* indirect call */
    }

loc_0036EBB0: ;
    MEM32(0x90069C) = edi;
    goto loc_0036EBC2;

loc_0036EBB8: ;
    PUSH32(esp, 0x0036EBBDu); RECOMP_ABI_CALL(0x00540C00u, sub_00540C00); /* call 0x00540C00 */

loc_0036EBBD: ;
    PUSH32(esp, 0x0036EBC2u); RECOMP_ABI_CALL(0x0053F6F0u, sub_0053F6F0); /* call 0x0053F6F0 */

loc_0036EBC2: ;
    ecx = MEM32(0x902534);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036EBDC; /* je: equal / zero */

loc_0036EBCE: ;
    PUSH32(esp, 0x0036EBD3u); RECOMP_ABI_CALL(0x0001B50Au, sub_0001B50A); /* call 0x0001B50A */

loc_0036EBD3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036EBD9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036EBD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036EBDC: ;
    MEM32(0x902534) = edi;
    PUSH32(esp, 0x0036EBE7u); RECOMP_ABI_CALL(0x0001391Du, sub_0001391D); /* call 0x0001391D */

loc_0036EBE7: ;
    PUSH32(esp, 0x0036EBECu); RECOMP_ABI_CALL(0x000346B3u, sub_000346B3); /* call 0x000346B3 */

loc_0036EBEC: ;
    PUSH32(esp, 0x0036EBF1u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_0036EBF1: ;
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001B992(); return; /* tail jmp 0x0001B992 */

}

/**
 * sub_0036EC30
 * Original: 0x0036EC30 - 0x0036EC54 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EC30: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EC51; /* jne: not equal / not zero */

loc_0036EC39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036EC3Fu); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0036EC3F: ;
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x0036EC47u); RECOMP_ABI_CALL(0x00505D10u, sub_00505D10); /* call 0x00505D10 */

loc_0036EC47: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036EC4Du); RECOMP_ABI_CALL(0x00540370u, sub_00540370); /* call 0x00540370 */

loc_0036EC4D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0036EC51: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036EC60
 * Original: 0x0036EC60 - 0x0036ECA9 (73 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EC60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0036EC69u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036EC69: ;
    ecx = eax;
    PUSH32(esp, 0x0036EC70u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_0036EC70: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036ECA4; /* je: equal / zero */

loc_0036EC76: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    goto loc_0036EC80;

    /* nop */

loc_0036EC80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0036EC89u); RECOMP_ABI_CALL(0x00027DAAu, sub_00027DAA); /* call 0x00027DAA */

loc_0036EC89: ;
    eax = MEM32(edi + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EC9C; /* je: equal / zero */

loc_0036EC93: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036EC9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036EC99u); } /* indirect call */
    }

loc_0036EC9C: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EC80; /* jne: not equal / not zero */

loc_0036ECA3: ;
    POP32(esp, ebx);

loc_0036ECA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036ECC0
 * Original: 0x0036ECC0 - 0x0036ECD9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ECC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ECC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036ECCCu); RECOMP_ABI_CALL(0x00368D50u, sub_00368D50); /* call 0x00368D50 */

loc_0036ECCC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0036ECE0
 * Original: 0x0036ECE0 - 0x0036F04D (877 bytes, 325 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ECE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036ECE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0036ED3F; /* jle: less or equal (signed <=) */

loc_0036ECF8: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    /* nop */

loc_0036ED00: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    eax = MEM32(edx + ebp);
    ecx = edx + ebp;
    edi = eax + 1;
    /* nop */

loc_0036ED10: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036ED10; /* jne: not equal / not zero */

loc_0036ED17: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ecx + 4);
    esi = esi + eax * 2;
    PUSH32(esp, 0x0036ED24u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036ED24: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036ED2Eu); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036ED2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + eax + 3;
    if ((_fa != 0)) goto loc_0036ED00; /* jne: not equal / not zero */

loc_0036ED3B: ;
    edi = MEM32(esp + 0x1C);

loc_0036ED3F: ;
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036ED5D; /* je: equal / zero */

loc_0036ED47: ;
    PUSH32(esp, 0x0036ED4Cu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036ED4C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036ED56u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036ED56: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax + 1;

loc_0036ED5D: ;
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036ED7B; /* je: equal / zero */

loc_0036ED65: ;
    PUSH32(esp, 0x0036ED6Au); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036ED6A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036ED74u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036ED74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + eax + 1;

loc_0036ED7B: ;
    eax = MEM32(0x9006A4);
    SET_LO8(ecx, MEM8(eax + 0xFC));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    ecx = MEM32(0x9006B0);
    if (CMP_EQ(_fa, _fb)) goto loc_0036EDAE; /* je: equal / zero */

loc_0036ED96: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036EDA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036EDA3u); } /* indirect call */
    }

loc_0036EDA6: ;
    ebp = eax;
    MEM32(esp + 0x10) = ebp;
    goto loc_0036EDBF;

loc_0036EDAE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0036EDB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036EDB6u); } /* indirect call */
    }

loc_0036EDB9: ;
    MEM32(esp + 0x10) = eax;
    ebp = eax;

loc_0036EDBF: ;
    edx = MEM32(0x83108C);
    ecx = ebp;
    MEM32(ecx) = edx;
    eax = MEM32(0x831090);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x831094);
    MEM32(ecx + 8) = edx;
    SET_LO16(eax, MEM16(0x831098));
    ebx = ebp;
    MEM16(ecx + 0xC) = LO16(eax);
    ecx = ebx + 1;
    /* nop */

loc_0036EDF0: ;
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EDF0; /* jne: not equal / not zero */

loc_0036EDF7: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036EE6B; /* jle: less or equal (signed <=) */

loc_0036EDFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edi;
    goto loc_0036EE10;

loc_0036EE09: ;
    eax = MEM32(esp + 0x14);
    /* nop */

loc_0036EE10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036EE1D; /* jle: less or equal (signed <=) */

loc_0036EE14: ;
    MEM8(ebx + ebp) = 0x2C;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + ebp) = 0;

loc_0036EE1D: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    edi = MEM32(eax + edx);
    esi = ebx + ebp;
    PUSH32(esp, 0x0036EE2Eu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036EE2E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036EE37u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036EE37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EE53; /* je: equal / zero */

loc_0036EE3E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036EE53; /* jle: less or equal (signed <=) */

loc_0036EE44: ;
    _fa = (uint32_t)(MEM8(ecx + esi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + esi), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EE4E; /* jne: not equal / not zero */

loc_0036EE4A: ;
    MEM8(ecx + esi) = 0xA;

loc_0036EE4E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036EE44; /* jl: less (signed <) */

loc_0036EE53: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0036EE09; /* jne: not equal / not zero */

loc_0036EE6B: ;
    eax = MEM32(esp + 0x1C);
    MEM8(ebx + ebp) = 0x26;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ebx + ebp;
    MEM8(edi) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0036EF9E; /* jle: less or equal (signed <=) */

loc_0036EE82: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_0036EE92;

loc_0036EE8E: ;
    edx = MEM32(esp + 0x14);

loc_0036EE92: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(ebp);
    eax = MEM32(edx + eax);
    esi = eax;
    edi = edi;

loc_0036EEA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EEA0; /* jne: not equal / not zero */

loc_0036EEA7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0036EEB0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EEB0; /* jne: not equal / not zero */

loc_0036EEB8: ;
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
    ecx = MEM32(ebp);
    eax = MEM32(edx + ecx);
    esi = eax + 1;
    /* nop */

loc_0036EED0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EED0; /* jne: not equal / not zero */

loc_0036EED7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    MEM8(ebx + eax) = 0x3D;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ebx + eax;
    MEM8(edi) = LO8(ecx);
    eax = MEM32(ebp);
    SET_LO8(ecx, MEM8(eax + edx + 8));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EF41; /* je: equal / zero */

loc_0036EEF6: ;
    eax = MEM32(eax + 4);
    edx = eax;
    goto loc_0036EF00;

    /* nop */

loc_0036EF00: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EF00; /* jne: not equal / not zero */

loc_0036EF07: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0036EF10: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EF10; /* jne: not equal / not zero */

loc_0036EF18: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = edx;
    edx = MEM32(esp + 0x14);
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
    ecx = MEM32(ebp);
    eax = MEM32(edx + ecx + 4);
    edx = eax + 1;

loc_0036EF36: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EF36; /* jne: not equal / not zero */

loc_0036EF3D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0036EF6F;

loc_0036EF41: ;
    esi = MEM32(eax + 4);
    PUSH32(esp, 0x0036EF49u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036EF49: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036EF52u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036EF52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EF6F; /* je: equal / zero */

loc_0036EF59: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036EF6F; /* jle: less or equal (signed <=) */

loc_0036EF5F: ;
    /* nop */

loc_0036EF60: ;
    _fa = (uint32_t)(MEM8(ecx + edi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + edi), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EF6A; /* jne: not equal / not zero */

loc_0036EF66: ;
    MEM8(ecx + edi) = 0xA;

loc_0036EF6A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036EF60; /* jl: less (signed <) */

loc_0036EF6F: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    MEM8(ebx + eax) = 0x26;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = ebx + eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edi) = 0;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_0036EE8E; /* jne: not equal / not zero */

loc_0036EF9A: ;
    ebp = MEM32(esp + 0x10);

loc_0036EF9E: ;
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EFDE; /* je: equal / zero */

loc_0036EFA6: ;
    esi = ebx + ebp;
    PUSH32(esp, 0x0036EFAEu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036EFAE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036EFB7u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036EFB7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EFD3; /* je: equal / zero */

loc_0036EFBE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036EFD3; /* jle: less or equal (signed <=) */

loc_0036EFC4: ;
    _fa = (uint32_t)(MEM8(ecx + esi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + esi), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EFCE; /* jne: not equal / not zero */

loc_0036EFCA: ;
    MEM8(ecx + esi) = 0xA;

loc_0036EFCE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036EFC4; /* jl: less (signed <) */

loc_0036EFD3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + ebp) = 0x26;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + ebp) = 0;

loc_0036EFDE: ;
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F01E; /* je: equal / zero */

loc_0036EFE6: ;
    esi = ebx + ebp;
    PUSH32(esp, 0x0036EFEEu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0036EFEE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036EFF7u); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0036EFF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F013; /* je: equal / zero */

loc_0036EFFE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036F013; /* jle: less or equal (signed <=) */

loc_0036F004: ;
    _fa = (uint32_t)(MEM8(ecx + esi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + esi), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F00E; /* jne: not equal / not zero */

loc_0036F00A: ;
    MEM8(ecx + esi) = 0xA;

loc_0036F00E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036F004; /* jl: less (signed <) */

loc_0036F013: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + ebp) = 0x26;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + ebp) = 0;

loc_0036F01E: ;
    edi = ebx + ebp;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0036F022: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F022; /* jne: not equal / not zero */

loc_0036F02A: ;
    eax = MEM32(0x83107C);
    MEM32(edi) = eax;
    ecx = MEM32(0x831080);
    MEM32(edi + 4) = ecx;
    edx = MEM32(0x831084);
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036F130
 * Original: 0x0036F130 - 0x0036F16F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F130: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0036F13Du); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036F13D: ;
    ecx = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036F14Cu); RECOMP_ABI_CALL(0x0001F47Fu, sub_0001F47F); /* call 0x0001F47F */

loc_0036F14C: ;
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036F15Au); RECOMP_ABI_CALL(0x0036ECE0u, sub_0036ECE0); /* call 0x0036ECE0 */

loc_0036F15A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x0036F168u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036F168: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036F180
 * Original: 0x0036F180 - 0x0036F228 (168 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F180: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0036F18Du); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0036F18D: ;
    ecx = MEM32(esp + 0x14);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036F19Cu); RECOMP_ABI_CALL(0x0001AE4Du, sub_0001AE4D); /* call 0x0001AE4D */

loc_0036F19C: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036F212; /* jle: less or equal (signed <=) */

loc_0036F1A7: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    eax = edi;
    edx = eax + 1;

loc_0036F1B4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F1B4; /* jne: not equal / not zero */

loc_0036F1BB: ;
    ecx = MEM32(0x9006A4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(edx, MEM8(ecx + 0xFC));
    ecx = MEM32(0x9006B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0036F1E6; /* je: equal / zero */

loc_0036F1D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036F1E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F1E1u); } /* indirect call */
    }

loc_0036F1E4: ;
    goto loc_0036F1EF;

loc_0036F1E6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0036F1EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F1ECu); } /* indirect call */
    }

loc_0036F1EF: ;
    esi = eax;
    edx = esi;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);

loc_0036F1F8: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F1F8; /* jne: not equal / not zero */

loc_0036F202: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0036F20Bu); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036F20B: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036F212: ;
    esi = MEM32(0x8C58E8);
    ecx = esp + 4;
    PUSH32(esp, 0x0036F221u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0036F221: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036F260
 * Original: 0x0036F260 - 0x0036F27F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F260: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8309D8;
    if (TEST_Z(_fa, _fb)) goto loc_0036F279; /* je: equal / zero */

loc_0036F270: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036F276u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036F276: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036F279: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F290
 * Original: 0x0036F290 - 0x0036F2B4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F290: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x830A48;
    PUSH32(esp, 0x0036F29Eu); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_0036F29E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F2AE; /* je: equal / zero */

loc_0036F2A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036F2ABu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0036F2AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036F2AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F2C0
 * Original: 0x0036F2C0 - 0x0036F31C (92 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F2C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40000);
    PUSH32(esp, 0xD00000);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0036F2D7u); RECOMP_ABI_CALL(0x0002C31Eu, sub_0002C31E); /* call 0x0002C31E */

loc_0036F2D7: ;
    PUSH32(esp, 0x400);
    MEM32(esi) = 0x8310C4;
    MEM32(esi + 0xB4) = 0x83109C;
    MEM8(esi + 0x100) = 0;
    PUSH32(esp, 0x0036F2F8u); RECOMP_ABI_CALL(0x0053F850u, sub_0053F850); /* call 0x0053F850 */

loc_0036F2F8: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0036F307u); RECOMP_ABI_CALL(0x00031CDDu, sub_00031CDD); /* call 0x00031CDD */

loc_0036F307: ;
    edx = esi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036F313u); RECOMP_ABI_CALL(0x000189FEu, sub_000189FE); /* call 0x000189FE */

loc_0036F313: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036F340
 * Original: 0x0036F340 - 0x0036F5A4 (612 bytes, 189 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F340: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x8310C4;
    MEM32(edi + 0xB4) = 0x83109C;
    PUSH32(esp, 0x0036F359u); RECOMP_ABI_CALL(0x00014B1Au, sub_00014B1A); /* call 0x00014B1A */

loc_0036F359: ;
    eax = MEM32(0x9006E8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F392; /* je: equal / zero */

loc_0036F364: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F36Au); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F36A: ;
    ecx = eax;
    PUSH32(esp, 0x0036F371u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F371: ;
    ecx = MEM32(0x9006E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F37Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F379u); } /* indirect call */
    }

loc_0036F37C: ;
    ecx = MEM32(0x9006E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F38C; /* je: equal / zero */

loc_0036F386: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F38Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F38Au); } /* indirect call */
    }

loc_0036F38C: ;
    MEM32(0x9006E8) = esi;

loc_0036F392: ;
    eax = MEM32(0x9006EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F3C9; /* je: equal / zero */

loc_0036F39B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F3A1u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F3A1: ;
    ecx = eax;
    PUSH32(esp, 0x0036F3A8u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F3A8: ;
    ecx = MEM32(0x9006EC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F3B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F3B0u); } /* indirect call */
    }

loc_0036F3B3: ;
    ecx = MEM32(0x9006EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F3C3; /* je: equal / zero */

loc_0036F3BD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F3C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F3C1u); } /* indirect call */
    }

loc_0036F3C3: ;
    MEM32(0x9006EC) = esi;

loc_0036F3C9: ;
    eax = MEM32(0x9006E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F400; /* je: equal / zero */

loc_0036F3D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F3D8u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F3D8: ;
    ecx = eax;
    PUSH32(esp, 0x0036F3DFu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F3DF: ;
    ecx = MEM32(0x9006E0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F3EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F3E7u); } /* indirect call */
    }

loc_0036F3EA: ;
    ecx = MEM32(0x9006E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F3FA; /* je: equal / zero */

loc_0036F3F4: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F3FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F3F8u); } /* indirect call */
    }

loc_0036F3FA: ;
    MEM32(0x9006E0) = esi;

loc_0036F400: ;
    eax = MEM32(0x9006C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F437; /* je: equal / zero */

loc_0036F409: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F40Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F40F: ;
    ecx = eax;
    PUSH32(esp, 0x0036F416u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F416: ;
    ecx = MEM32(0x9006C8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F41Eu); } /* indirect call */
    }

loc_0036F421: ;
    ecx = MEM32(0x9006C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F431; /* je: equal / zero */

loc_0036F42B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F431u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F42Fu); } /* indirect call */
    }

loc_0036F431: ;
    MEM32(0x9006C8) = esi;

loc_0036F437: ;
    eax = MEM32(0x9006CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F46E; /* je: equal / zero */

loc_0036F440: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F446u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F446: ;
    ecx = eax;
    PUSH32(esp, 0x0036F44Du); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F44D: ;
    ecx = MEM32(0x9006CC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F458u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F455u); } /* indirect call */
    }

loc_0036F458: ;
    ecx = MEM32(0x9006CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F468; /* je: equal / zero */

loc_0036F462: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F468u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F466u); } /* indirect call */
    }

loc_0036F468: ;
    MEM32(0x9006CC) = esi;

loc_0036F46E: ;
    eax = MEM32(0x9006D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F4A5; /* je: equal / zero */

loc_0036F477: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F47Du); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F47D: ;
    ecx = eax;
    PUSH32(esp, 0x0036F484u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F484: ;
    ecx = MEM32(0x9006D0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F48Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F48Cu); } /* indirect call */
    }

loc_0036F48F: ;
    ecx = MEM32(0x9006D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F49F; /* je: equal / zero */

loc_0036F499: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F49Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F49Du); } /* indirect call */
    }

loc_0036F49F: ;
    MEM32(0x9006D0) = esi;

loc_0036F4A5: ;
    eax = MEM32(0x9006D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F4DC; /* je: equal / zero */

loc_0036F4AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F4B4u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F4B4: ;
    ecx = eax;
    PUSH32(esp, 0x0036F4BBu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F4BB: ;
    ecx = MEM32(0x9006D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F4C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F4C3u); } /* indirect call */
    }

loc_0036F4C6: ;
    ecx = MEM32(0x9006D4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F4D6; /* je: equal / zero */

loc_0036F4D0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F4D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F4D4u); } /* indirect call */
    }

loc_0036F4D6: ;
    MEM32(0x9006D4) = esi;

loc_0036F4DC: ;
    eax = MEM32(0x9006D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F513; /* je: equal / zero */

loc_0036F4E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F4EBu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F4EB: ;
    ecx = eax;
    PUSH32(esp, 0x0036F4F2u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F4F2: ;
    ecx = MEM32(0x9006D8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F4FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F4FAu); } /* indirect call */
    }

loc_0036F4FD: ;
    ecx = MEM32(0x9006D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F50D; /* je: equal / zero */

loc_0036F507: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F50Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F50Bu); } /* indirect call */
    }

loc_0036F50D: ;
    MEM32(0x9006D8) = esi;

loc_0036F513: ;
    eax = MEM32(0x9006DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F54A; /* je: equal / zero */

loc_0036F51C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F522u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F522: ;
    ecx = eax;
    PUSH32(esp, 0x0036F529u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F529: ;
    ecx = MEM32(0x9006DC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F534u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F531u); } /* indirect call */
    }

loc_0036F534: ;
    ecx = MEM32(0x9006DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F544; /* je: equal / zero */

loc_0036F53E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F544u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F542u); } /* indirect call */
    }

loc_0036F544: ;
    MEM32(0x9006DC) = esi;

loc_0036F54A: ;
    eax = MEM32(0x9006E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F581; /* je: equal / zero */

loc_0036F553: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F559u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F559: ;
    ecx = eax;
    PUSH32(esp, 0x0036F560u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F560: ;
    ecx = MEM32(0x9006E4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0036F56Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F568u); } /* indirect call */
    }

loc_0036F56B: ;
    ecx = MEM32(0x9006E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F57B; /* je: equal / zero */

loc_0036F575: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F57Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F579u); } /* indirect call */
    }

loc_0036F57B: ;
    MEM32(0x9006E4) = esi;

loc_0036F581: ;
    eax = MEM32(0x9006C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F59B; /* je: equal / zero */

loc_0036F58A: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F592u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0036F592: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x9006C4) = esi;

loc_0036F59B: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000228FF(); return; /* tail jmp 0x000228FF */

}

/**
 * sub_0036F640
 * Original: 0x0036F640 - 0x0036F687 (71 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0036F649u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036F649: ;
    ecx = eax;
    PUSH32(esp, 0x0036F650u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_0036F650: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F682; /* je: equal / zero */

loc_0036F656: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    goto loc_0036F660;

    /* nop */

loc_0036F660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0036F669u); RECOMP_ABI_CALL(0x00027DAAu, sub_00027DAA); /* call 0x00027DAA */

loc_0036F669: ;
    ecx = MEM32(edi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F67A; /* je: equal / zero */

loc_0036F673: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036F67Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F677u); } /* indirect call */
    }

loc_0036F67A: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F660; /* jne: not equal / not zero */

loc_0036F681: ;
    POP32(esp, ebx);

loc_0036F682: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F6A0
 * Original: 0x0036F6A0 - 0x0036F6EC (76 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F6A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0036F6A9u); RECOMP_ABI_CALL(0x00031B1Bu, sub_00031B1B); /* call 0x00031B1B */

loc_0036F6A9: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0036F6B2u); RECOMP_ABI_CALL(0x00013E0Eu, sub_00013E0E); /* call 0x00013E0E */

loc_0036F6B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F6C8; /* je: equal / zero */

loc_0036F6B6: ;
    ecx = esi;
    PUSH32(esp, 0x0036F6BDu); RECOMP_ABI_CALL(0x0001C518u, sub_0001C518); /* call 0x0001C518 */

loc_0036F6BD: ;
    ecx = esi;
    PUSH32(esp, 0x0036F6C4u); RECOMP_ABI_CALL(0x0002F9BAu, sub_0002F9BA); /* call 0x0002F9BA */

loc_0036F6C4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F6E7; /* je: equal / zero */

loc_0036F6C8: ;
    _fa = (uint32_t)(MEM32(edi + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F6E7; /* jne: not equal / not zero */

loc_0036F6D1: ;
    PUSH32(esp, 0x0036F6D6u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_0036F6D6: ;
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x0036F6DEu); RECOMP_ABI_CALL(0x00505D10u, sub_00505D10); /* call 0x00505D10 */

loc_0036F6DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036F6E4u); RECOMP_ABI_CALL(0x00540370u, sub_00540370); /* call 0x00540370 */

loc_0036F6E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036F6E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F700
 * Original: 0x0036F700 - 0x0036F83D (317 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F700: ;
    eax = MEM32(0x900704);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    MEM32(edi) = 0x831114;
    MEM32(edi + 0xB4) = 0x8310EC;
    PUSH32(esp, 0x0036F71Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F71F: ;
    ecx = eax;
    PUSH32(esp, 0x0036F726u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F726: ;
    ecx = MEM32(0x900704);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036F731u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F72Eu); } /* indirect call */
    }

loc_0036F731: ;
    ecx = MEM32(0x900704);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F743; /* je: equal / zero */

loc_0036F73D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036F743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F741u); } /* indirect call */
    }

loc_0036F743: ;
    ecx = MEM32(0x900700);
    PUSH32(esp, ecx);
    MEM32(0x900704) = esi;
    PUSH32(esp, 0x0036F755u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F755: ;
    ecx = eax;
    PUSH32(esp, 0x0036F75Cu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F75C: ;
    ecx = MEM32(0x900700);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036F767u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F764u); } /* indirect call */
    }

loc_0036F767: ;
    ecx = MEM32(0x900700);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F777; /* je: equal / zero */

loc_0036F771: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036F777u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F775u); } /* indirect call */
    }

loc_0036F777: ;
    ecx = MEM32(0x9006FC);
    PUSH32(esp, ecx);
    MEM32(0x900700) = esi;
    PUSH32(esp, 0x0036F789u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F789: ;
    ecx = eax;
    PUSH32(esp, 0x0036F790u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F790: ;
    ecx = MEM32(0x9006FC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036F79Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F798u); } /* indirect call */
    }

loc_0036F79B: ;
    ecx = MEM32(0x9006FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F7AB; /* je: equal / zero */

loc_0036F7A5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036F7ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F7A9u); } /* indirect call */
    }

loc_0036F7AB: ;
    ecx = MEM32(0x9006F4);
    PUSH32(esp, ecx);
    MEM32(0x9006FC) = esi;
    PUSH32(esp, 0x0036F7BDu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F7BD: ;
    ecx = eax;
    PUSH32(esp, 0x0036F7C4u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F7C4: ;
    ecx = MEM32(0x9006F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036F7CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F7CCu); } /* indirect call */
    }

loc_0036F7CF: ;
    ecx = MEM32(0x9006F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F7DF; /* je: equal / zero */

loc_0036F7D9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036F7DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F7DDu); } /* indirect call */
    }

loc_0036F7DF: ;
    ecx = MEM32(0x9006F8);
    PUSH32(esp, ecx);
    MEM32(0x9006F4) = esi;
    PUSH32(esp, 0x0036F7F1u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0036F7F1: ;
    ecx = eax;
    PUSH32(esp, 0x0036F7F8u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0036F7F8: ;
    ecx = MEM32(0x9006F8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036F803u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F800u); } /* indirect call */
    }

loc_0036F803: ;
    ecx = MEM32(0x9006F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F813; /* je: equal / zero */

loc_0036F80D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0036F813u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F811u); } /* indirect call */
    }

loc_0036F813: ;
    ecx = MEM32(0x900708);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(0x9006F8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0036F82F; /* je: equal / zero */

loc_0036F823: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0036F829u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F827u); } /* indirect call */
    }

loc_0036F829: ;
    MEM32(0x900708) = esi;

loc_0036F82F: ;
    PUSH32(esp, 0x0036F834u); RECOMP_ABI_CALL(0x00020A23u, sub_00020A23); /* call 0x00020A23 */

loc_0036F834: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000228FF(); return; /* tail jmp 0x000228FF */

}

/**
 * sub_0036F890
 * Original: 0x0036F890 - 0x0036F8EF (95 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F890: ;
    eax = MEM32(0x900708);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F8D3; /* je: equal / zero */

loc_0036F89F: ;
    SET_LO8(ecx, MEM8(0x90070C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F8D7; /* je: equal / zero */

loc_0036F8A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036F8AFu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036F8AF: ;
    ecx = eax;
    PUSH32(esp, 0x0036F8B6u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_0036F8B6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F8D2; /* je: equal / zero */

loc_0036F8BC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_0036F8C1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0036F8CAu); RECOMP_ABI_CALL(0x00027DAAu, sub_00027DAA); /* call 0x00027DAA */

loc_0036F8CA: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F8C1; /* jne: not equal / not zero */

loc_0036F8D1: ;
    POP32(esp, ebx);

loc_0036F8D2: ;
    POP32(esp, esi);

loc_0036F8D3: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0036F8D7: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F8D3; /* je: equal / zero */

loc_0036F8DE: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0036F8EBu); RECOMP_ABI_CALL(0x00027DAAu, sub_00027DAA); /* call 0x00027DAA */

loc_0036F8EB: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F910
 * Original: 0x0036F910 - 0x0036F92A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036F910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0036F918u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_0036F918: ;
    ecx = eax;
    PUSH32(esp, 0x0036F91Fu); RECOMP_ABI_CALL(0x000159D4u, sub_000159D4); /* call 0x000159D4 */

loc_0036F91F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x4C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036F930
 * Original: 0x0036F930 - 0x0036FBF2 (706 bytes, 206 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F930: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, 0x0036F93Cu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_0036F93C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F95E; /* jne: not equal / not zero */

loc_0036F943: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0036F94Eu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0036F94E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036F955u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F952u); } /* indirect call */
    }

loc_0036F955: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0036F95Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F95Bu); } /* indirect call */
    }

loc_0036F95E: ;
    SET_LO8(eax, MEM8(0x90070D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036F979; /* jne: not equal / not zero */

loc_0036F967: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0036F96Eu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0036F96E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FBE0; /* je: equal / zero */

loc_0036F979: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x90070D) = 0;
    PUSH32(esp, 0x0036F989u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0036F989: ;
    ecx = MEM32(0x8F9CCC);
    ebx = eax;
    PUSH32(esp, 0x0036F996u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0036F996: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0036F99Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F99Au); } /* indirect call */
    }

loc_0036F99D: ;
    esi = eax;
    PUSH32(esp, 0x0036F9A4u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036F9A4: ;
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    MEM32(ebx + ecx * 4 + 0x18C) = edx;
    PUSH32(esp, 0x0036F9B4u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036F9B4: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(eax + 4);
    MEM32(ebx + ecx * 4 + 0x18C) = edx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebx + 0x164;
    /* nop */

loc_0036F9D0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036F9DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F9D7u); } /* indirect call */
    }

loc_0036F9DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    MEM32(ebp + -16) = eax;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036F9E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F9E4u); } /* indirect call */
    }

loc_0036F9E7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    MEM32(ebp) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036F9F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F9F1u); } /* indirect call */
    }

loc_0036F9F4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    MEM32(ebp + 8) = eax;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036FA01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036F9FEu); } /* indirect call */
    }

loc_0036FA01: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036FA0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FA0Bu); } /* indirect call */
    }

loc_0036FA0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    MEM32(ebp + 0x10) = eax;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0036FA1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FA18u); } /* indirect call */
    }

loc_0036FA1B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0036FA28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FA25u); } /* indirect call */
    }

loc_0036FA28: ;
    MEM32(ebp + 0x20) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036F9D0; /* jl: less (signed <) */

loc_0036FA34: ;
    PUSH32(esp, 0x0036FA39u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0036FA39: ;
    esi = eax;
    PUSH32(esp, 0x0036FA40u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0036FA40: ;
    ecx = eax;
    PUSH32(esp, 0x0036FA47u); RECOMP_ABI_CALL(0x0001457Fu, sub_0001457F); /* call 0x0001457F */

loc_0036FA47: ;
    edi = eax;
    PUSH32(esp, 0x0036FA4Eu); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_0036FA4E: ;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x4B0);
    ecx = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0036FA5Fu); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_0036FA5F: ;
    ecx = SX16(LO16(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x3F8) = ebp;
    MEM32(ebx + 0x194) = edi;
    PUSH32(esp, edi);
    MEM32(ebx + 0x198) = edi;
    PUSH32(esp, 0x0036FA7Eu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_0036FA7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FB29; /* je: equal / zero */

loc_0036FA89: ;
    _fa = (uint32_t)(MEM32(ebx + 0x3F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x3F8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FB29; /* je: equal / zero */

loc_0036FA95: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FACE; /* jne: not equal / not zero */

loc_0036FA9F: ;
    MEM16(ebx + 0x13E) = LO16(edi);
    PUSH32(esp, 0x0036FAABu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036FAAB: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FABF; /* jne: not equal / not zero */

loc_0036FAAF: ;
    edx = MEM32(ebx + 4);
    MEM32(ebx + edx * 4 + 0x194) = 1;
    goto loc_0036FB34;

loc_0036FABF: ;
    eax = MEM32(ebx);
    MEM32(ebx + eax * 4 + 0x194) = 1;
    goto loc_0036FB34;

loc_0036FACE: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0036FAD5u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0036FAD5: ;
    ebp = MEM32(esi + 0x48);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ZX8(LO8(eax));
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_0036FB09; /* je: equal / zero */

loc_0036FAE9: ;
    MEM8(ebx + 0x13E) = 0;
    MEM32(ebx + 0x194) = edi;
    MEM8(ebx + 0x13F) = 1;
    MEM32(ebx + 0x198) = 1;
    goto loc_0036FB34;

loc_0036FB09: ;
    MEM8(ebx + 0x13E) = 1;
    MEM32(ebx + 0x194) = 1;
    MEM8(ebx + 0x13F) = 0;
    MEM32(ebx + 0x198) = edi;
    goto loc_0036FB34;

loc_0036FB29: ;
    esi = MEM32(esp + 0x10);
    MEM16(ebx + 0x13E) = LO16(edi);

loc_0036FB34: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FB3Au); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_0036FB3A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FB4F; /* jne: not equal / not zero */

loc_0036FB41: ;
    PUSH32(esp, 0x0036FB46u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_0036FB46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036FB4F; /* jl: less (signed <) */

loc_0036FB4B: ;
    SET_LO8(eax, 1);
    goto loc_0036FB51;

loc_0036FB4F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0036FB51: ;
    MEM8(ebx + 0x13D) = LO8(eax);
    PUSH32(esp, 0x0036FB5Cu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036FB5C: ;
    eax = MEM32(eax + 0x10);
    MEM32(ebx + 0x43C) = eax;
    PUSH32(esp, 0x0036FB6Au); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036FB6A: ;
    ecx = MEM32(eax + 0x18);
    MEM32(ebx + 0x440) = ecx;
    PUSH32(esp, 0x0036FB78u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_0036FB78: ;
    edx = MEM32(eax + 0x14);
    MEM32(ebx + 0x444) = edx;
    PUSH32(esp, 0x0036FB86u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_0036FB86: ;
    ecx = eax;
    PUSH32(esp, 0x0036FB8Du); RECOMP_ABI_CALL(0x000317CEu, sub_000317CE); /* call 0x000317CE */

loc_0036FB8D: ;
    PUSH32(esp, 0x0036FB92u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_0036FB92: ;
    ecx = eax;
    PUSH32(esp, 0x0036FB99u); RECOMP_ABI_CALL(0x00025348u, sub_00025348); /* call 0x00025348 */

loc_0036FB99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FB9Fu); RECOMP_ABI_CALL(0x000241D7u, sub_000241D7); /* call 0x000241D7 */

loc_0036FB9F: ;
    PUSH32(esp, 0x0036FBA4u); RECOMP_ABI_CALL(0x0002A1E0u, sub_0002A1E0); /* call 0x0002A1E0 */

loc_0036FBA4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FBAAu); RECOMP_ABI_CALL(0x00017B26u, sub_00017B26); /* call 0x00017B26 */

loc_0036FBAA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0036FBB4u); RECOMP_ABI_CALL(0x000187B5u, sub_000187B5); /* call 0x000187B5 */

loc_0036FBB4: ;
    PUSH32(esp, 0x0036FBB9u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036FBB9: ;
    PUSH32(esp, 0x0036FBBEu); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_0036FBBE: ;
    PUSH32(esp, 2);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x0036FBCBu); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_0036FBCB: ;
    eax = MEM32(0x8FC1D0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x21C) = 2;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0036FBE0: ;
    ecx = MEM32(0x8FC1D0);
    MEM32(ecx + 0x21C) = 2;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FCB0
 * Original: 0x0036FCB0 - 0x0036FD63 (179 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FCB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x0036FCBDu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0036FCBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FD5E; /* jne: not equal / not zero */

loc_0036FCC8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FCD0u); RECOMP_ABI_CALL(0x00014E4Eu, sub_00014E4E); /* call 0x00014E4E */

loc_0036FCD0: ;
    ebp = MEM32(eax + 4);
    edi = eax + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0036FCE2u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_0036FCE2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0036FCE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FCE5u); } /* indirect call */
    }

loc_0036FCE8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0036FCF1u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0036FCF1: ;
    _fa = (uint32_t)(MEM8(esi + 0x71)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x71), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FD4A; /* jne: not equal / not zero */

loc_0036FCF6: ;
    MEM8(esi + 0x71) = LO8(ebx);
    PUSH32(esp, 0x0036FCFEu); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_0036FCFE: ;
    ecx = eax;
    PUSH32(esp, 0x0036FD05u); RECOMP_ABI_CALL(0x000159D4u, sub_000159D4); /* call 0x000159D4 */

loc_0036FD05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x4C) = LO8(eax);
    edi = edi;

loc_0036FD10: ;
    PUSH32(esp, 0x0036FD15u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036FD15: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0036FD20u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_0036FD20: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036FD44; /* je: equal / zero */

loc_0036FD26: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036FD44; /* jne: not equal / not zero */

loc_0036FD2A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FD37; /* je: equal / zero */

loc_0036FD33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FD44; /* jne: not equal / not zero */

loc_0036FD37: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036FD3Du); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_0036FD3D: ;
    ecx = eax;
    PUSH32(esp, 0x0036FD44u); RECOMP_ABI_CALL(0x000218CEu, sub_000218CE); /* call 0x000218CE */

loc_0036FD44: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036FD10; /* jl: less (signed <) */

loc_0036FD4A: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x0036FD54u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_0036FD54: ;
    ecx = eax;
    PUSH32(esp, 0x0036FD5Bu); RECOMP_ABI_CALL(0x0002B57Cu, sub_0002B57C); /* call 0x0002B57C */

loc_0036FD5B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0036FD5E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036FD90
 * Original: 0x0036FD90 - 0x0036FE8E (254 bytes, 96 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FD90: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    ebp = ecx;
    PUSH32(esp, 0x0036FD9Du); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0036FD9D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FE87; /* jne: not equal / not zero */

loc_0036FDA8: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FDB5u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0036FDB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0036FDBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FDB9u); } /* indirect call */
    }

loc_0036FDBC: ;
    ebx = ZX8(MEM8(esp + 0x18));
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0036FDD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FDD2u); } /* indirect call */
    }

loc_0036FDD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FDEE; /* je: equal / zero */

loc_0036FDD9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036FDDFu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036FDDF: ;
    ecx = eax;
    PUSH32(esp, 0x0036FDE6u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_0036FDE6: ;
    MEM32(ebp + 0x2C) = eax;
    goto loc_0036FE6D;

loc_0036FDEE: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FE0E; /* je: equal / zero */

loc_0036FDF5: ;
    eax = MEM32(eax + 0x48);
    edx = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036FE0Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FE07u); } /* indirect call */
    }

loc_0036FE0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FE6D; /* jne: not equal / not zero */

loc_0036FE0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FE14u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036FE14: ;
    ecx = eax;
    PUSH32(esp, 0x0036FE1Bu); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_0036FE1B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FE41; /* je: equal / zero */

loc_0036FE21: ;
    eax = MEM32(esi + 0x48);
    edx = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036FE36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FE33u); } /* indirect call */
    }

loc_0036FE36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FE5F; /* jne: not equal / not zero */

loc_0036FE3A: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FE21; /* jne: not equal / not zero */

loc_0036FE41: ;
    PUSH32(esp, 0x0036FE46u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0036FE46: ;
    esi = eax;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0036FE50u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_0036FE50: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0036FE64; /* je: equal / zero */

loc_0036FE57: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036FE5Du); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_0036FE5D: ;
    goto loc_0036FE69;

loc_0036FE5F: ;
    MEM32(ebp + 0x2C) = esi;
    goto loc_0036FE6C;

loc_0036FE64: ;
    PUSH32(esp, 0x0036FE69u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_0036FE69: ;
    MEM32(ebp + 0x2C) = eax;

loc_0036FE6C: ;
    POP32(esp, esi);

loc_0036FE6D: ;
    edx = MEM32(ebp + 0x2C);
    eax = MEM32(edx + 0x48);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036FE7Eu); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_0036FE7E: ;
    ecx = eax;
    PUSH32(esp, 0x0036FE85u); RECOMP_ABI_CALL(0x000285E8u, sub_000285E8); /* call 0x000285E8 */

loc_0036FE85: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0036FE87: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036FED0
 * Original: 0x0036FED0 - 0x0036FEF3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FEF1; /* je: equal / zero */

loc_0036FED9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036FEDFu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_0036FEDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FEF1; /* jne: not equal / not zero */

loc_0036FEE6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036FEEEu); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_0036FEEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FEF1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FF00
 * Original: 0x0036FF00 - 0x0036FF54 (84 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FF00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    MEM32(esi) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0036FF1A; /* je: equal / zero */

loc_0036FF11: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FF17u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_0036FF17: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FF1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esi + 4) = LO8(ebx);
    MEM8(esi + 5) = LO8(ebx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x110) = ebx;
    MEM32(esi + 0x114) = ebx;
    MEM8(esi + 0x10) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0036FF4C; /* je: equal / zero */

loc_0036FF36: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FF3Cu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_0036FF3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FF4C; /* jne: not equal / not zero */

loc_0036FF43: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036FF49u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_0036FF49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FF4C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036FF70
 * Original: 0x0036FF70 - 0x0036FFB6 (70 bytes, 21 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FF70(void)
{

loc_0036FF70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x831148);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0036FF84u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_0036FF84: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x83113C;
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi + 0x20) = 1;
    MEM32(0x9001DC) = esi;
    PUSH32(esp, 0x0036FFA0u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0036FFA0: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 0x33A56);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0036FFB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FFADu); } /* indirect call */
    }

loc_0036FFB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036FFD0
 * Original: 0x0036FFD0 - 0x0036FFFD (45 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FFD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83113C;
    PUSH32(esp, 0x0036FFDEu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0036FFDE: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x33A56);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0036FFEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036FFE8u); } /* indirect call */
    }

loc_0036FFEB: ;
    ecx = esi;
    MEM32(0x9001DC) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000323C2(); return; /* tail jmp 0x000323C2 */

}

/**
 * sub_00370010
 * Original: 0x00370010 - 0x0037005F (79 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370010: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    MEM32(esi) = 0x830D04;
    MEM32(edi) = 0x830CF0;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037002F; /* je: equal / zero */

loc_0037002A: ;
    PUSH32(esp, 0x0037002Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0037002F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037003B; /* je: equal / zero */

loc_00370036: ;
    PUSH32(esp, 0x0037003Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0037003B: ;
    ecx = edi;
    PUSH32(esp, 0x00370042u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_00370042: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x82F5F4;
    if (TEST_Z(_fa, _fb)) goto loc_00370058; /* je: equal / zero */

loc_0037004F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370055u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00370055: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370058: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370026
 * Original: 0x00370026 - 0x0037005F (57 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370026(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370026: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037002F; /* je: equal / zero */

loc_0037002A: ;
    PUSH32(esp, 0x0037002Fu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0037002F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037003B; /* je: equal / zero */

loc_00370036: ;
    PUSH32(esp, 0x0037003Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0037003B: ;
    ecx = edi;
    PUSH32(esp, 0x00370042u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_00370042: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x82F5F4;
    if (TEST_Z(_fa, _fb)) goto loc_00370058; /* je: equal / zero */

loc_0037004F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370055u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00370055: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370058: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037002F
 * Original: 0x0037002F - 0x0037005F (48 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037002F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037002F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037003B; /* je: equal / zero */

loc_00370036: ;
    PUSH32(esp, 0x0037003Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0037003B: ;
    ecx = edi;
    PUSH32(esp, 0x00370042u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_00370042: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x82F5F4;
    if (TEST_Z(_fa, _fb)) goto loc_00370058; /* je: equal / zero */

loc_0037004F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370055u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00370055: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370058: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370036
 * Original: 0x00370036 - 0x0037005F (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370036(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370036: ;
    PUSH32(esp, 0x0037003Bu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0037003B: ;
    ecx = edi;
    PUSH32(esp, 0x00370042u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_00370042: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(esi) = 0x82F5F4;
    if (TEST_Z(_fa, _fb)) goto loc_00370058; /* je: equal / zero */

loc_0037004F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370055u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00370055: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370058: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370080
 * Original: 0x00370080 - 0x0037009E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00370088u); RECOMP_ABI_CALL(0x00034CC6u, sub_00034CC6); /* call 0x00034CC6 */

loc_00370088: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370098; /* je: equal / zero */

loc_0037008F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370095u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00370095: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370098: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003700B0
 * Original: 0x003700B0 - 0x003700CE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003700B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003700B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003700B8u); RECOMP_ABI_CALL(0x00026E00u, sub_00026E00); /* call 0x00026E00 */

loc_003700B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003700C8; /* je: equal / zero */

loc_003700BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003700C5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003700C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003700C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003700E0
 * Original: 0x003700E0 - 0x003709C2 (2274 bytes, 744 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003700E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003700E0: ;
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x16C));
    esp = esp - 0x16C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x901570);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 0xC) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_003709B2; /* jne: not equal / not zero */

loc_003700FA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00370102u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00370102: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0037010Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370106u); } /* indirect call */
    }

loc_0037010C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x246F5);
    PUSH32(esp, 0x0037011Cu); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0037011C: ;
    MEM8(esp + 0x8C) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0x8D;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x0037013Fu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0037013F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00370146u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370143u); } /* indirect call */
    }

loc_00370146: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0037015Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370157u); } /* indirect call */
    }

loc_0037015A: ;
    ebx = MEM32(esp + 0x180);
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00370168u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370165u); } /* indirect call */
    }

loc_00370168: ;
    MEM32(esp + 0x34) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0xFC) = 0;
    ecx = 0x1F;
    edi = esp + 0xFD;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8311A4);
    PUSH32(esp, 0x0037019Bu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0037019B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003701A4u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003701A4: ;
    ecx = eax;
    PUSH32(esp, 0x003701ABu); RECOMP_ABI_CALL(0x000262BBu, sub_000262BB); /* call 0x000262BB */

loc_003701AB: ;
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x100;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0380);
    PUSH32(esp, 0x9001E8);
    PUSH32(esp, 0x003701C7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003701C7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003701CFu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003701CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x003701D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003701D3u); } /* indirect call */
    }

loc_003701D6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003701DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003701DAu); } /* indirect call */
    }

loc_003701DD: ;
    edi = MEM32(eax + 0x14);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00370229; /* jbe: below or equal (unsigned <=) */

loc_003701E6: ;
    ebp = eax + 8;
    /* nop */

loc_003701F0: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00370201; /* je: equal / zero */

loc_003701F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    goto loc_00370209;

loc_00370201: ;
    MEM32(esp + 0x14) = 0;

loc_00370209: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00370211u); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_00370211: ;
    ecx = esp + 0x14;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00370220u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_00370220: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003701F0; /* jb: below (unsigned <) */

loc_00370225: ;
    ebp = MEM32(esp + 0x18);

loc_00370229: ;
    PUSH32(esp, 0x0037022Eu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0037022E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00370237; /* je: equal / zero */

loc_00370232: ;
    esi = ebp + 8;
    goto loc_00370239;

loc_00370237: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00370239: ;
    PUSH32(esp, 0x0037023Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0037023E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00370245u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370242u); } /* indirect call */
    }

loc_00370245: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037024E; /* je: equal / zero */

loc_00370249: ;
    ecx = eax + 8;
    goto loc_00370250;

loc_0037024E: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00370250: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x0037025Eu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0037025E: ;
    eax = MEM32(0x901570);
    edx = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(0x901570) = eax;
    MEM8(esp + 0x14) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00370275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370272u); } /* indirect call */
    }

loc_00370275: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0037027Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370279u); } /* indirect call */
    }

loc_0037027C: ;
    MEM32(0x9001D8) = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00370288u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370285u); } /* indirect call */
    }

loc_00370288: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0037028Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037028Cu); } /* indirect call */
    }

loc_0037028F: ;
    esi = eax;
    PUSH32(esp, 0x00370296u); RECOMP_ABI_CALL(0x0003672Eu, sub_0003672E); /* call 0x0003672E */

loc_00370296: ;
    eax = MEM32(0x9001D8);
    goto loc_003702A0;

    /* nop */

loc_003702A0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003702C4; /* jne: not equal / not zero */

loc_003702A8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003702C0; /* je: equal / zero */

loc_003702AC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003702C4; /* jne: not equal / not zero */

loc_003702B6: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003702A0; /* jne: not equal / not zero */

loc_003702C0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003702C9;

loc_003702C4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003702C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003702D2; /* jne: not equal / not zero */

loc_003702CD: ;
    MEM8(esp + 0x14) = 1;

loc_003702D2: ;
    PUSH32(esp, 0x003702D7u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_003702D7: ;
    ebp = eax;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x40C) = esi;
    MEM32(ebp + 0x18C) = esi;
    MEM32(ebp + 0x190) = esi;
    MEM32(ebp + 0x194) = esi;
    eax = MEM32(ebx);
    ecx = ebx;
    MEM32(esp + 0x20) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003702FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003702FBu); } /* indirect call */
    }

loc_003702FE: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00370339; /* jbe: below or equal (unsigned <=) */

loc_00370309: ;
    ebx = eax + 8;
    edi = ebp + 0x21C;

loc_00370312: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0037031Au); RECOMP_ABI_CALL(0x004DB8CEu, sub_004DB8CE); /* call 0x004DB8CE */

loc_0037031A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370321u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037031Eu); } /* indirect call */
    }

loc_00370321: ;
    edx = edi;

loc_00370323: ;
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
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00370323; /* jne: not equal / not zero */

loc_0037032D: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00370312; /* jb: below (unsigned <) */

loc_00370339: ;
    PUSH32(esp, 0x0037033Eu); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_0037033E: ;
    esi = MEM32(0x9001D8);
    eax = ebp + 0x21C;
    /* nop */

loc_00370350: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00370378; /* jne: not equal / not zero */

loc_0037035A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00370374; /* je: equal / zero */

loc_0037035E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00370378; /* jne: not equal / not zero */

loc_0037036A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00370350; /* jne: not equal / not zero */

loc_00370374: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0037037D;

loc_00370378: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0037037D: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037038F; /* jne: not equal / not zero */

loc_00370383: ;
    MEM32(ebp) = esi;
    MEM32(ebp + 4) = 1;
    goto loc_00370399;

loc_0037038F: ;
    MEM32(ebp) = 1;
    MEM32(ebp + 4) = esi;

loc_00370399: ;
    edx = MEM32(0x83119C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0x3D;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x831198);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(0x831194);
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x3C) = eax;
    eax = ebp + 0x3C4;
    edx = esp + 0x3C;
    MEM32(esp + 0x40) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003703D2: ;
    SET_LO8(ecx, MEM8(edx + eax));
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003703D2; /* jne: not equal / not zero */

loc_003703DC: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = 2;
    PUSH32(esp, 0x003703ECu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_003703EC: ;
    ecx = eax;
    PUSH32(esp, 0x003703F3u); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_003703F3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003703FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003703F9u); } /* indirect call */
    }

loc_003703FC: ;
    PUSH32(esp, 0x00370401u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00370401: ;
    ecx = eax;
    PUSH32(esp, 0x00370408u); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_00370408: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00370410u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037040Du); } /* indirect call */
    }

loc_00370410: ;
    PUSH32(esp, 0x00370415u); RECOMP_ABI_CALL(0x0002664Eu, sub_0002664E); /* call 0x0002664E */

loc_00370415: ;
    PUSH32(esp, 0x0037041Au); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0037041A: ;
    ecx = eax;
    PUSH32(esp, 0x00370421u); RECOMP_ABI_CALL(0x0003577Fu, sub_0003577F); /* call 0x0003577F */

loc_00370421: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0037042Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370427u); } /* indirect call */
    }

loc_0037042A: ;
    eax = 0x831184;
    ecx = ebp + 0xD8;
    MEM8(ebp + 0x134) = 0;
    MEM8(ebp + 0x135) = 1;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00370445: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00370445; /* jne: not equal / not zero */

loc_0037044F: ;
    ecx = MEM32(0x9001D8);
    edx = ebp + 0x98;
    goto loc_00370460;

    /* nop */

loc_00370460: ;
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
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00370460; /* jne: not equal / not zero */

loc_0037046A: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x3F8) = esi;
    PUSH32(esp, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_00370486; /* je: equal / zero */

loc_0037047A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x831174);
    PUSH32(esp, ecx);
    goto loc_0037048C;

loc_00370486: ;
    PUSH32(esp, 0x831164);
    PUSH32(esp, esi);

loc_0037048C: ;
    PUSH32(esp, 0x00370491u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_00370491: ;
    ecx = eax;
    PUSH32(esp, 0x00370498u); RECOMP_ABI_CALL(0x0002C5B2u, sub_0002C5B2); /* call 0x0002C5B2 */

loc_00370498: ;
    ecx = MEM32(0x8FC630);
    PUSH32(esp, 0x003704A3u); RECOMP_ABI_CALL(0x00037269u, sub_00037269); /* call 0x00037269 */

loc_003704A3: ;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x003704ACu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003704AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003704B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003704B0u); } /* indirect call */
    }

loc_003704B3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003704BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003704B7u); } /* indirect call */
    }

loc_003704BA: ;
    ebx = MEM32(esp + 0x20);
    ebp = eax;
    esi = 0x8C4E50;
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x410)) >> 32) & 1);
    ebx = ebx + 0x410;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003704D0;

    /* nop */

loc_003704D0: ;
    PUSH32(esp, 0x003704D5u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_003704D5: ;
    ecx = MEM32(esi);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003704E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003704DFu); } /* indirect call */
    }

loc_003704E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003704E9; /* je: equal / zero */

loc_003704E7: ;
    MEM32(ebx) = eax;

loc_003704E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C4E7C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C4E7C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003704D0; /* jl: less (signed <) */

loc_003704F7: ;
    ebp = MEM32(esp + 0x34);
    eax = MEM32(0x8C4E84);
    edx = MEM32(ebp);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x30) = 3;
    MEM8(esp + 0x1B) = 0;
    MEM32(esp + 0x24) = 5;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0037052Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037052Bu); } /* indirect call */
    }

loc_0037052E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_00370540; /* jne: not equal / not zero */

loc_00370537: ;
    MEM8(eax + 0x13C) = 1;
    goto loc_00370547;

loc_00370540: ;
    MEM8(eax + 0x13C) = 0;

loc_00370547: ;
    _fa = (uint32_t)(MEM32(eax + 0x3EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3EC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370556; /* je: equal / zero */

loc_0037054F: ;
    MEM8(eax + 0x13C) = 1;

loc_00370556: ;
    PUSH32(esp, 0x0037055Bu); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_0037055B: ;
    ecx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003705EC; /* jge: greater or equal (signed >=) */

loc_00370568: ;
    ebx = MEM32(esp + 0x30);
    /* nop */

loc_00370570: ;
    PUSH32(esp, 0x00370575u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00370575: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0037057Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370579u); } /* indirect call */
    }

loc_0037057C: ;
    PUSH32(esp, 0x00370581u); RECOMP_ABI_CALL(0x0003672Eu, sub_0003672E); /* call 0x0003672E */

loc_00370581: ;
    PUSH32(esp, 0x00370586u); RECOMP_ABI_CALL(0x0001A6FAu, sub_0001A6FA); /* call 0x0001A6FA */

loc_00370586: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0037058Du); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_0037058D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00370595u); RECOMP_ABI_CALL(0x0059E351u, sub_0059E351); /* call 0x0059E351 */

loc_00370595: ;
    eax = MEM32(0x8FE150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003707F6; /* je: equal / zero */

loc_003705A2: ;
    PUSH32(esp, 0x003705A7u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_003705A7: ;
    ecx = MEM32(0x8FC630);
    esi = MEM32(eax + 0x414);
    PUSH32(esp, 0x003705B8u); RECOMP_ABI_CALL(0x000147B9u, sub_000147B9); /* call 0x000147B9 */

loc_003705B8: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x8FC630);
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x003705D4u); RECOMP_ABI_CALL(0x00037269u, sub_00037269); /* call 0x00037269 */

loc_003705D4: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003707F6; /* ja: above (unsigned >) */

loc_003705DE: ;
    PUSH32(esp, 0x003705E3u); RECOMP_ABI_CALL(0x0002350Cu, sub_0002350C); /* call 0x0002350C */

loc_003705E3: ;
    edx = MEM32(eax + 0x2C);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00370570; /* jl: less (signed <) */

loc_003705EC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003705F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003705F0u); } /* indirect call */
    }

loc_003705F3: ;
    ecx = MEM32(esp + 0x180);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00370600u); RECOMP_ABI_CALL(0x00027FB7u, sub_00027FB7); /* call 0x00027FB7 */

loc_00370600: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0037060Eu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0037060E: ;
    PUSH32(esp, 0);
    ebx = eax;
    PUSH32(esp, 0x00370617u); RECOMP_ABI_CALL(0x000241D7u, sub_000241D7); /* call 0x000241D7 */

loc_00370617: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0037061Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0037061F: ;
    ecx = eax;
    PUSH32(esp, 0x00370626u); RECOMP_ABI_CALL(0x0001B4A1u, sub_0001B4A1); /* call 0x0001B4A1 */

loc_00370626: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0037062Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037062Au); } /* indirect call */
    }

loc_0037062D: ;
    PUSH32(esp, 0x00370632u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00370632: ;
    esi = eax;
    PUSH32(esp, 0x00370639u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00370639: ;
    ecx = eax;
    PUSH32(esp, 0x00370640u); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_00370640: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00370649u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370646u); } /* indirect call */
    }

loc_00370649: ;
    MEM32(esi + 0x140) = eax;
    PUSH32(esp, 0x00370654u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00370654: ;
    ecx = eax;
    PUSH32(esp, 0x0037065Bu); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_0037065B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00370664u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370661u); } /* indirect call */
    }

loc_00370664: ;
    MEM32(esi + 0x144) = eax;
    PUSH32(esp, 0x0037066Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0037066F: ;
    ecx = eax;
    PUSH32(esp, 0x00370676u); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_00370676: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0037067Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037067Cu); } /* indirect call */
    }

loc_0037067F: ;
    MEM32(esi + 0x148) = eax;
    PUSH32(esp, 0x0037068Au); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0037068A: ;
    ecx = eax;
    PUSH32(esp, 0x00370691u); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_00370691: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0037069Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370697u); } /* indirect call */
    }

loc_0037069A: ;
    MEM32(esi + 0x14C) = eax;
    PUSH32(esp, 0x003706A5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_003706A5: ;
    ecx = eax;
    PUSH32(esp, 0x003706ACu); RECOMP_ABI_CALL(0x000166C2u, sub_000166C2); /* call 0x000166C2 */

loc_003706AC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x003706B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003706B2u); } /* indirect call */
    }

loc_003706B5: ;
    MEM32(esi + 0x150) = eax;
    PUSH32(esp, 0x003706C0u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_003706C0: ;
    ecx = eax;
    PUSH32(esp, 0x003706C7u); RECOMP_ABI_CALL(0x0003577Fu, sub_0003577F); /* call 0x0003577F */

loc_003706C7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003706CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003706CBu); } /* indirect call */
    }

loc_003706CE: ;
    ecx = MEM32(0x8C4E8C);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003706DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003706DCu); } /* indirect call */
    }

loc_003706DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) eax = MEM32(esp + 0x38); /* cmove */
    edi = eax + eax * 4;
    eax = MEM32(esp + 0x20);
    edx = edi + 5;
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    eax = MEM32(0x8C4EA0);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370701u); } /* indirect call */
    }

loc_00370704: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370710; /* je: equal / zero */

loc_00370709: ;
    ecx = eax + eax;
    MEM32(esp + 0x1C) = ecx;

loc_00370710: ;
    eax = MEM32(0x8C4E90);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037071Du); } /* indirect call */
    }

loc_00370720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370729; /* je: equal / zero */

loc_00370725: ;
    MEM32(esp + 0x24) = eax;

loc_00370729: ;
    eax = MEM32(0x8C4E94);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370739u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370736u); } /* indirect call */
    }

loc_00370739: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370745; /* je: equal / zero */

loc_0037073E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x13) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */

loc_00370745: ;
    eax = MEM32(0x8C4E98);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370755u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370752u); } /* indirect call */
    }

loc_00370755: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370765; /* je: equal / zero */

loc_0037075A: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x2C) = eax;

loc_00370765: ;
    eax = MEM32(0x8C4E9C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370775u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370772u); } /* indirect call */
    }

loc_00370775: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00370785; /* je: equal / zero */

loc_0037077A: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x28) = eax;

loc_00370785: ;
    edx = MEM32(ebx + 4);
    esi = ebx + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370794u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370791u); } /* indirect call */
    }

loc_00370794: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0037079Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037079Bu); } /* indirect call */
    }

loc_0037079E: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003707ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003707A9u); } /* indirect call */
    }

loc_003707AC: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003707BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003707B7u); } /* indirect call */
    }

loc_003707BA: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(esi);
    eax = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    if ((_fa == 0)) goto loc_003708D0; /* je: equal / zero */

loc_003707CB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003708AF; /* je: equal / zero */

loc_003707D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003707D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003707D6u); } /* indirect call */
    }

loc_003707D9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003707E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003707E1u); } /* indirect call */
    }

loc_003707E4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003707EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003707ECu); } /* indirect call */
    }

loc_003707EF: ;
    PUSH32(esp, 0);
    goto loc_003708EF;

loc_003707F6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003707FDu); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_003707FD: ;
    ecx = eax;
    PUSH32(esp, 0x00370804u); RECOMP_ABI_CALL(0x00022FADu, sub_00022FAD); /* call 0x00022FAD */

loc_00370804: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0037080Fu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0037080F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00370816u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370813u); } /* indirect call */
    }

loc_00370816: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037081Eu); } /* indirect call */
    }

loc_00370821: ;
    PUSH32(esp, 0x00370826u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00370826: ;
    ecx = eax;
    PUSH32(esp, 0x0037082Du); RECOMP_ABI_CALL(0x0003577Fu, sub_0003577F); /* call 0x0003577F */

loc_0037082D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00370834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370831u); } /* indirect call */
    }

loc_00370834: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(0x8F9CCC);
    if (CMP_EQ(_fa, _fb)) goto loc_0037085D; /* je: equal / zero */

loc_00370842: ;
    PUSH32(esp, 0x00370847u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00370847: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0037084Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037084Bu); } /* indirect call */
    }

loc_0037084E: ;
    ecx = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(ecx + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    goto loc_00370876;

loc_0037085D: ;
    PUSH32(esp, 0x00370862u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00370862: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00370869u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370866u); } /* indirect call */
    }

loc_00370869: ;
    ecx = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(ecx + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);

loc_00370876: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037087Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037087Au); } /* indirect call */
    }

loc_0037087C: ;
    PUSH32(esp, 0x246F5);
    MEM32(0x901570) = 0;
    PUSH32(esp, 0x00370890u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_00370890: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00370898u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00370898: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x003708A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037089Cu); } /* indirect call */
    }

loc_003708A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x16C)) >> 32) & 1);
    esp = esp + 0x16C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003708AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003708B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003708B3u); } /* indirect call */
    }

loc_003708B6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003708C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003708BEu); } /* indirect call */
    }

loc_003708C1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003708CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003708C9u); } /* indirect call */
    }

loc_003708CC: ;
    PUSH32(esp, 0);
    goto loc_003708EF;

loc_003708D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003708D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003708D4u); } /* indirect call */
    }

loc_003708D7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003708E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003708DFu); } /* indirect call */
    }

loc_003708E2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003708EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003708EAu); } /* indirect call */
    }

loc_003708ED: ;
    PUSH32(esp, 1);

loc_003708EF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003708F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003708F5u); } /* indirect call */
    }

loc_003708F8: ;
    eax = ZX8(MEM8(esp + 0x13));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370904u); } /* indirect call */
    }

loc_00370907: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(ecx + 0x138)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x138), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00370918; /* jne: not equal / not zero */

loc_00370914: ;
    PUSH32(esp, 0);
    goto loc_0037092C;

loc_00370918: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037092A; /* jne: not equal / not zero */

loc_0037091D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00370928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370925u); } /* indirect call */
    }

loc_00370928: ;
    goto loc_00370935;

loc_0037092A: ;
    PUSH32(esp, 2);

loc_0037092C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00370935u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370932u); } /* indirect call */
    }

loc_00370935: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00370943u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370940u); } /* indirect call */
    }

loc_00370943: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ebx + 8;
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0037096D; /* je: equal / zero */

loc_00370950: ;
    edx = MEM32(esp + 0x18);
    eax = ZX8(MEM8(edx + 0x14));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00370961u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037095Fu); } /* indirect call */
    }

loc_00370961: ;
    eax = 0x200;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_00370988;

loc_0037096D: ;
    eax = MEM32(esp + 0x18);
    eax = ZX8(MEM8(eax + 0x14));
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037097Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037097Cu); } /* indirect call */
    }

loc_0037097E: ;
    eax = 0x100;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_00370988: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037098Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037098Cu); } /* indirect call */
    }

loc_0037098E: ;
    ecx = ebx;
    PUSH32(esp, 0x00370995u); RECOMP_ABI_CALL(0x00026ABDu, sub_00026ABD); /* call 0x00026ABD */

loc_00370995: ;
    PUSH32(esp, 0x0037099Au); RECOMP_ABI_CALL(0x0002A1E0u, sub_0002A1E0); /* call 0x0002A1E0 */

loc_0037099A: ;
    PUSH32(esp, 0x0037099Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0037099F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003709A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003709A3u); } /* indirect call */
    }

loc_003709A6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003709ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003709AAu); } /* indirect call */
    }

loc_003709AD: ;
    goto loc_0037087C;

loc_003709B2: ;
    MEM32(0x901570) = MEM32(0x901570) + 1;
    _fa = (uint32_t)(MEM32(0x901570)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x16C)) >> 32) & 1);
    esp = esp + 0x16C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370C00
 * Original: 0x00370C00 - 0x00370E8B (651 bytes, 111 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(0x90E7B4) = esi;
    MEM32(esi + 4) = 0x82FDAC;
    eax = esi + 4;
    MEM32(0x90E424) = eax;
    MEM32(esi + 8) = 0x82FF84;
    ecx = esi + 8;
    MEM32(0x90E7F4) = ecx;
    MEM32(esi + 0xC) = 0x82FF90;
    edx = esi + 0xC;
    MEM32(0x90E808) = edx;
    MEM32(ecx) = 0x831278;
    MEM32(esi) = 0x831208;
    MEM32(eax) = 0x8311CC;
    MEM32(edx) = 0x8311C0;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    MEM32(esi + 0x10) = 0x8302C0;
    PUSH32(esp, 0x00370C62u); RECOMP_ABI_CALL(0x0002137Eu, sub_0002137E); /* call 0x0002137E */

loc_00370C62: ;
    eax = 0x82F9D4;
    MEM32(esi + 0x30) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = 1;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = 2;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = 3;
    edi = esi + 0x58;
    MEM32(esi + 0x50) = 0x8301BC;
    ecx = edi;
    MEM32(esi + 0x54) = 0x82F5F4;
    PUSH32(esp, 0x00370CA5u); RECOMP_ABI_CALL(0x004AD997u, sub_004AD997); /* call 0x004AD997 */

loc_00370CA5: ;
    MEM32(edi) = 0x830CF0;
    MEM32(esi + 0x54) = 0x830D04;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = 0x82FFCC;
    MEM32(esi + 0x68) = 0x8302D4;
    MEM32(esi + 0x6C) = 0x8302B4;
    edi = esi + 0x78;
    MEM32(esi + 0x70) = 0x82FAB8;
    ecx = edi;
    MEM32(esi + 0x74) = 0x82F9F8;
    PUSH32(esp, 0x00370CE5u); RECOMP_ABI_CALL(0x004AD92Bu, sub_004AD92B); /* call 0x004AD92B */

loc_00370CE5: ;
    ebp = esi + 0x7C;
    ecx = ebp;
    PUSH32(esp, 0x00370CEFu); RECOMP_ABI_CALL(0x004DCA26u, sub_004DCA26); /* call 0x004DCA26 */

loc_00370CEF: ;
    MEM32(edi) = 0x82FA60;
    MEM32(esi + 0x74) = 0x82FA24;
    MEM32(ebp) = 0x82FA14;
    MEM32(esi + 0x80) = 0x82F9A0;
    MEM8(esi + 0x84) = LO8(ebx);
    MEM32(esi + 0xE4) = 0x82F7F4;
    MEM32(esi + 0xE8) = 0x82F5CC;
    MEM32(esi + 0xEC) = 0x82F598;
    MEM32(esi + 0xF0) = 0x8303A8;
    MEM32(esi + 0xF4) = 0x82FE08;
    MEM32(esi + 0xF8) = 0x7DFC0C;
    MEM32(esi + 0xFC) = 0x82FFC0;
    MEM32(esi + 0x100) = 0x830364;
    MEM32(esi + 0x104) = 0x82FE68;
    edi = esi + 0x110;
    MEM32(esi + 0x108) = 0x830D8C;
    ecx = edi;
    MEM32(esi + 0x10C) = 0x82FE78;
    PUSH32(esp, 0x00370D8Eu); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_00370D8E: ;
    MEM32(esi + 0x10C) = 0x830DB0;
    MEM32(edi) = 0x830DA4;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x118) = ebx;
    MEM32(esi + 0x11C) = ebx;
    MEM32(esi + 0x120) = ebx;
    MEM32(esi + 0x124) = ebx;
    MEM32(esi + 0x128) = 0x830970;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x130) = 0x82F81C;
    PUSH32(esp, 0x700);
    MEM32(esi + 0x134) = 0x8302E8;
    PUSH32(esp, 0x30);
    MEM32(esi + 0x138) = 0x830314;
    PUSH32(esp, 0x00370DF6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00370DF6: ;
    MEM32(esi + 0x13C) = eax;
    MEM32(esi + 0x140) = 0x8308E8;
    MEM32(esi + 0x144) = 0x82F6F4;
    edi = esi + 0x150;
    MEM32(esi + 0x148) = 0x82FC78;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    MEM32(esi + 0x14C) = 0x82FC20;
    PUSH32(esp, 0x00370E34u); RECOMP_ABI_CALL(0x004AD96Au, sub_004AD96A); /* call 0x004AD96A */

loc_00370E34: ;
    MEM32(esi + 0x144) = 0x82FD7C;
    MEM32(esi + 0x148) = 0x82FD28;
    MEM32(esi + 0x14C) = 0x82FCD0;
    MEM32(edi) = 0x82FDA0;
    MEM32(esi + 0x158) = ebx;
    MEM32(esi + 0x15C) = ebx;
    MEM32(esi + 0x154) = 0x82F54C;
    POP32(esp, edi);
    MEM32(esi + 0x194) = ebx;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x190) = 0x830730;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00370F30
 * Original: 0x00370F30 - 0x00370F37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370F30(void)
{

loc_00370F30: ;
    eax = ecx + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_00370F40
 * Original: 0x00370F40 - 0x00370F47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370F40(void)
{

loc_00370F40: ;
    eax = ecx + 0xFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00370F50
 * Original: 0x00370F50 - 0x00370F64 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00370F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370F50: ;
    eax = ecx + 0x140;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370F61; /* je: equal / zero */

loc_00370F5A: ;
    eax = ecx + 0x144;
    esp += 4; return; /* ret */

loc_00370F61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00370F70
 * Original: 0x00370F70 - 0x00370F84 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00370F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370F70: ;
    eax = ecx + 0x140;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370F81; /* je: equal / zero */

loc_00370F7A: ;
    eax = ecx + 0x148;
    esp += 4; return; /* ret */

loc_00370F81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00370F90
 * Original: 0x00370F90 - 0x00370F97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370F90(void)
{

loc_00370F90: ;
    eax = ecx + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00370FA0
 * Original: 0x00370FA0 - 0x00370FA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370FA0(void)
{

loc_00370FA0: ;
    eax = ecx + 0x12C;
    esp += 4; return; /* ret */

}

/**
 * sub_00370FB0
 * Original: 0x00370FB0 - 0x00370FB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370FB0(void)
{

loc_00370FB0: ;
    eax = ecx + 0x130;
    esp += 4; return; /* ret */

}

/**
 * sub_00370FC0
 * Original: 0x00370FC0 - 0x00370FC7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370FC0(void)
{

loc_00370FC0: ;
    eax = ecx + 0x134;
    esp += 4; return; /* ret */

}

/**
 * sub_00370FD0
 * Original: 0x00370FD0 - 0x00370FD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370FD0(void)
{

loc_00370FD0: ;
    eax = ecx + 0x13C;
    esp += 4; return; /* ret */

}

/**
 * sub_00370FE0
 * Original: 0x00370FE0 - 0x00370FE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370FE0(void)
{

loc_00370FE0: ;
    eax = ecx + 0x108;
    esp += 4; return; /* ret */

}

/**
 * sub_00370FF0
 * Original: 0x00370FF0 - 0x00370FF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370FF0(void)
{

loc_00370FF0: ;
    eax = ecx + 0x124;
    esp += 4; return; /* ret */

}

/**
 * sub_00371000
 * Original: 0x00371000 - 0x00371007 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371000(void)
{

loc_00371000: ;
    eax = ecx + 0x14C;
    esp += 4; return; /* ret */

}

/**
 * sub_00371010
 * Original: 0x00371010 - 0x00371017 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371010(void)
{

loc_00371010: ;
    eax = ecx + 0x184;
    esp += 4; return; /* ret */

}

/**
 * sub_00371020
 * Original: 0x00371020 - 0x00371024 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371020(void)
{

loc_00371020: ;
    eax = ecx + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_00371030
 * Original: 0x00371030 - 0x00371034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371030(void)
{

loc_00371030: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00371040
 * Original: 0x00371040 - 0x00371044 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371040(void)
{

loc_00371040: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00371050
 * Original: 0x00371050 - 0x00371054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371050(void)
{

loc_00371050: ;
    eax = ecx + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00371060
 * Original: 0x00371060 - 0x00371064 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371060(void)
{

loc_00371060: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00371070
 * Original: 0x00371070 - 0x00371074 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371070(void)
{

loc_00371070: ;
    eax = ecx + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00371080
 * Original: 0x00371080 - 0x00371084 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371080(void)
{

loc_00371080: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00371090
 * Original: 0x00371090 - 0x00371094 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371090(void)
{

loc_00371090: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_003710A0
 * Original: 0x003710A0 - 0x003710A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003710A0(void)
{

loc_003710A0: ;
    eax = ecx + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_003710B0
 * Original: 0x003710B0 - 0x003710B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003710B0(void)
{

loc_003710B0: ;
    eax = ecx + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_003710C0
 * Original: 0x003710C0 - 0x003710C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003710C0(void)
{

loc_003710C0: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_003710D0
 * Original: 0x003710D0 - 0x003710D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003710D0(void)
{

loc_003710D0: ;
    eax = ecx + 0xE8;
    esp += 4; return; /* ret */

}

/**
 * sub_003710E0
 * Original: 0x003710E0 - 0x003710E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003710E0(void)
{

loc_003710E0: ;
    eax = ecx + 0x144;
    esp += 4; return; /* ret */

}

/**
 * sub_003710F0
 * Original: 0x003710F0 - 0x003710F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003710F0(void)
{

loc_003710F0: ;
    eax = ecx + 0xEC;
    esp += 4; return; /* ret */

}

/**
 * sub_00371100
 * Original: 0x00371100 - 0x00371104 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371100(void)
{

loc_00371100: ;
    eax = ecx + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_00371110
 * Original: 0x00371110 - 0x00371117 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371110(void)
{

loc_00371110: ;
    eax = ecx + 0xE4;
    esp += 4; return; /* ret */

}

/**
 * sub_00371120
 * Original: 0x00371120 - 0x00371124 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371120(void)
{

loc_00371120: ;
    eax = ecx + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_00371130
 * Original: 0x00371130 - 0x00371137 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371130(void)
{

loc_00371130: ;
    eax = ecx + 0xF0;
    esp += 4; return; /* ret */

}

/**
 * sub_00371140
 * Original: 0x00371140 - 0x00371147 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371140(void)
{

loc_00371140: ;
    eax = ecx + 0xF4;
    esp += 4; return; /* ret */

}

/**
 * sub_00371150
 * Original: 0x00371150 - 0x00371157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371150(void)
{

loc_00371150: ;
    eax = ecx + 0xFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00371160
 * Original: 0x00371160 - 0x00371164 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371160(void)
{

loc_00371160: ;
    eax = ecx + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00371170
 * Original: 0x00371170 - 0x00371174 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371170(void)
{

loc_00371170: ;
    eax = ecx + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_00371180
 * Original: 0x00371180 - 0x00371188 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371180: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002D868(); return; /* tail jmp 0x0002D868 */

}

/**
 * sub_00371190
 * Original: 0x00371190 - 0x00371198 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371190: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002D868(); return; /* tail jmp 0x0002D868 */

}

/**
 * sub_003711A0
 * Original: 0x003711A0 - 0x003711A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003711A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003711A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002D868(); return; /* tail jmp 0x0002D868 */

}

/**
 * sub_003711B0
 * Original: 0x003711B0 - 0x003713FA (586 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003711B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003711B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x831208;
    MEM32(esi + 4) = 0x8311CC;
    MEM32(esi + 8) = 0x831278;
    MEM32(esi + 0xC) = 0x8311C0;
    MEM32(esi + 0x190) = 0x82FF9C;
    MEM32(esi + 0x154) = 0x82F528;
    ecx = esi + 0x150;
    PUSH32(esp, edi);
    MEM32(esi + 0x144) = 0x82FD7C;
    MEM32(esi + 0x148) = 0x82FD28;
    MEM32(esi + 0x14C) = 0x82FCD0;
    MEM32(ecx) = 0x82FDA0;
    PUSH32(esp, 0x00371213u); RECOMP_ABI_CALL(0x004AD973u, sub_004AD973); /* call 0x004AD973 */

loc_00371213: ;
    MEM32(esi + 0x14C) = 0x82FC20;
    MEM32(esi + 0x148) = 0x82FC78;
    MEM32(esi + 0x144) = 0x82F6F4;
    MEM32(esi + 0x140) = 0x82FF44;
    MEM32(esi + 0x138) = 0x830314;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    eax = MEM32(esi + 0x13C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0037125Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371259u); } /* indirect call */
    }

loc_0037125C: ;
    MEM32(esi + 0x138) = 0x82FEA8;
    MEM32(esi + 0x134) = 0x82FFD8;
    MEM32(esi + 0x130) = 0x82F808;
    ecx = 0x8B22D0;
    MEM32(esi + 0x128) = 0x830970;
    PUSH32(esp, 0x0037128Eu); RECOMP_ABI_CALL(0x0001BBAEu, sub_0001BBAE); /* call 0x0001BBAE */

loc_0037128E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003712A9; /* je: equal / zero */

loc_00371294: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x0037129Eu); RECOMP_ABI_CALL(0x0001F64Bu, sub_0001F64B); /* call 0x0001F64B */

loc_0037129E: ;
    PUSH32(esp, ebx);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x003712A9u); RECOMP_ABI_CALL(0x000354FFu, sub_000354FF); /* call 0x000354FF */

loc_003712A9: ;
    ecx = esi + 0x10C;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x128) = 0x82FF68;
    PUSH32(esp, 0x003712C4u); RECOMP_ABI_CALL(0x00026E00u, sub_00026E00); /* call 0x00026E00 */

loc_003712C4: ;
    MEM32(esi + 0x104) = 0x82FDE8;
    MEM32(esi + 0x100) = 0x82FE5C;
    MEM32(esi + 0xFC) = 0x82F63C;
    MEM32(esi + 0xF4) = 0x82F668;
    MEM32(esi + 0xF0) = 0x82F6BC;
    MEM32(esi + 0xEC) = 0x82F58C;
    MEM32(esi + 0xE8) = 0x82F5A4;
    MEM32(esi + 0xE4) = 0x82F6E0;
    MEM32(esi + 0x80) = 0x82F718;
    ecx = esi + 0x7C;
    edi = esi + 0x78;
    MEM32(esi + 0x74) = 0x82FA24;
    MEM32(edi) = 0x82FA60;
    MEM32(ecx) = 0x82FA14;
    PUSH32(esp, 0x0037133Cu); RECOMP_ABI_CALL(0x004DCA2Fu, sub_004DCA2F); /* call 0x004DCA2F */

loc_0037133C: ;
    ecx = edi;
    PUSH32(esp, 0x00371343u); RECOMP_ABI_CALL(0x004AD93Du, sub_004AD93D); /* call 0x004AD93D */

loc_00371343: ;
    MEM32(esi + 0x74) = 0x82F9E4;
    MEM32(esi + 0x70) = 0x82FAA8;
    MEM32(esi + 0x6C) = 0x82FDF8;
    MEM32(esi + 0x68) = 0x82F618;
    MEM32(esi + 0x64) = 0x82F62C;
    edi = esi + 0x58;
    MEM32(esi + 0x54) = 0x830D04;
    MEM32(edi) = 0x830CF0;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371382; /* je: equal / zero */

loc_0037137D: ;
    PUSH32(esp, 0x00371382u); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_00371382: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037138E; /* je: equal / zero */

loc_00371389: ;
    PUSH32(esp, 0x0037138Eu); RECOMP_ABI_CALL(0x004DD5FDu, sub_004DD5FD); /* call 0x004DD5FD */

loc_0037138E: ;
    ecx = edi;
    PUSH32(esp, 0x00371395u); RECOMP_ABI_CALL(0x004AD9A0u, sub_004AD9A0); /* call 0x004AD9A0 */

loc_00371395: ;
    MEM32(esi + 0x54) = 0x82F5F4;
    eax = 0x82F72C;
    MEM32(esi + 0x50) = 0x82F64C;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x38) = eax;
    ecx = esi + 0x14;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, 0x003713BCu); RECOMP_ABI_CALL(0x00034CC6u, sub_00034CC6); /* call 0x00034CC6 */

loc_003713BC: ;
    MEM32(esi + 0x10) = 0x82F604;
    MEM32(esi + 0xC) = 0x82FF90;
    MEM32(0x90E808) = ebx;
    MEM32(esi + 8) = 0x82FF84;
    MEM32(0x90E7F4) = ebx;
    MEM32(esi + 4) = 0x82FDAC;
    MEM32(0x90E424) = ebx;
    POP32(esp, edi);
    MEM32(esi) = 0x82F788;
    POP32(esp, esi);
    MEM32(0x90E7B4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00371490
 * Original: 0x00371490 - 0x003714B4 (36 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371490: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x901578);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003714A9u); RECOMP_ABI_CALL(0x00028BE7u, sub_00028BE7); /* call 0x00028BE7 */

loc_003714A9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x901578;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003714C0
 * Original: 0x003714C0 - 0x003716AF (495 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003714C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003714C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    esi = 0x8C543D;

loc_003714D0: ;
    ebx = MEM32(esi + -29);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037157E; /* je: equal / zero */

loc_003714DB: ;
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(edx, MEM8(esi + -1));
    ebp = MEM32(0x8631FC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x13) = LO8(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esi + -9);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00371505; /* je: equal / zero */

loc_00371501: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00371503u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371501u); } /* indirect call */
    }

loc_00371503: ;
    goto loc_00371508;

loc_00371505: ;
    eax = MEM32(esi + -5);

loc_00371508: ;
    _fa = (uint32_t)(MEM32(esi + -9)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + -9), 0 (32-bit) */
    edx = MEM32(esi + 0x13);
    ecx = MEM32(esi + -17);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00371521; /* jne: not equal / not zero */

loc_00371518: ;
    PUSH32(esp, 0x82E488);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    goto loc_00371527;

loc_00371521: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_00371527: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0037152Eu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_0037152E: ;
    SET_LO8(ecx, MEM8(esp + 0x37));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371576; /* je: equal / zero */

loc_00371539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371576; /* je: equal / zero */

loc_0037153D: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371561; /* je: equal / zero */

loc_00371545: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x00371559u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_00371559: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003714D0;

loc_00371561: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00371576u); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_00371576: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003714D0;

loc_0037157E: ;
    edx = MEM32(0x8C4E84);
    eax = MEM32(0x8631F4);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x82E398);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003715A1u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_003715A1: ;
    ecx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003715B9; /* je: equal / zero */

loc_003715B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = ecx;
    goto loc_003715C1;

loc_003715B9: ;
    MEM32(esp + 8) = 0;

loc_003715C1: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x003715CEu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_003715CE: ;
    edx = MEM32(0x8C4EA0);
    eax = MEM32(0x8631F4);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E3C0);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003715F1u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_003715F1: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x8631F4);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E428);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00371615u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_00371615: ;
    eax = MEM32(0x8C4E90);
    ecx = MEM32(0x8631F4);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E450);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0037163Bu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_0037163B: ;
    edx = MEM32(0x8C4E94);
    eax = MEM32(0x8631F4);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E410);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037165Eu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_0037165E: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x8631F4);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E3F8);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00371685u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_00371685: ;
    eax = MEM32(0x8C4E9C);
    ecx = MEM32(0x8631F4);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E3E0);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003716A8u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_003716A8: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00371730
 * Original: 0x00371730 - 0x0037187C (332 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371730: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00371742u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371742: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371746u); } /* indirect call */
    }

loc_00371749: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x8631F4);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00371760u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037175Du); } /* indirect call */
    }

loc_00371760: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037176D; /* je: equal / zero */

loc_00371764: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    goto loc_00371775;

loc_0037176D: ;
    MEM32(esp + 0x10) = 0;

loc_00371775: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x00371782u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_00371782: ;
    eax = MEM32(0x8C4E84);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00371796u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371793u); } /* indirect call */
    }

loc_00371796: ;
    eax = MEM32(0x8C4EA0);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003717AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003717A7u); } /* indirect call */
    }

loc_003717AA: ;
    eax = MEM32(0x8C4E8C);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003717BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003717BBu); } /* indirect call */
    }

loc_003717BE: ;
    eax = MEM32(0x8C4E90);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003717D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003717CFu); } /* indirect call */
    }

loc_003717D2: ;
    eax = MEM32(0x8C4E94);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003717E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003717E3u); } /* indirect call */
    }

loc_003717E6: ;
    eax = MEM32(0x8C4E98);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003717FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003717F7u); } /* indirect call */
    }

loc_003717FA: ;
    eax = MEM32(0x8C4E9C);
    ecx = MEM32(0x8631F4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0037180Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037180Bu); } /* indirect call */
    }

loc_0037180E: ;
    ebx = 0x8C5424;

loc_00371813: ;
    edi = MEM32(ebx + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371874; /* je: equal / zero */

loc_0037181A: ;
    SET_LO8(eax, MEM8(ebx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = MEM32(0x8631FC);
    if (CMP_EQ(_fa, _fb)) goto loc_00371866; /* je: equal / zero */

loc_00371827: ;
    PUSH32(esp, 0x0037182Cu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0037182C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371830u); } /* indirect call */
    }

loc_00371833: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0037183Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371839u); } /* indirect call */
    }

loc_0037183C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371866; /* je: equal / zero */

loc_00371840: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371851; /* je: equal / zero */

loc_00371848: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ecx;
    goto loc_00371859;

loc_00371851: ;
    MEM32(esp + 0x10) = 0;

loc_00371859: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x00371866u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_00371866: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0037186Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037186Cu); } /* indirect call */
    }

loc_0037186F: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00371813;

loc_00371874: ;
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
 * sub_003718D0
 * Original: 0x003718D0 - 0x003718EB (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003718D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003718D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003718DCu); RECOMP_ABI_CALL(0x00030342u, sub_00030342); /* call 0x00030342 */

loc_003718DC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5420);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371900
 * Original: 0x00371900 - 0x0037191B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371900: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037190Cu); RECOMP_ABI_CALL(0x00030342u, sub_00030342); /* call 0x00030342 */

loc_0037190C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = MEM32(eax + 0x8C5420);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371930
 * Original: 0x00371930 - 0x00371AB1 (385 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371930: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8C4E84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E3A0);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    esi = ecx;
    ecx = MEM32(0x863214);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00371957u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_00371957: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371967; /* je: equal / zero */

loc_0037195E: ;
    edx = esi + 0xC;
    MEM32(esp + 4) = edx;
    goto loc_0037196F;

loc_00371967: ;
    MEM32(esp + 4) = 0;

loc_0037196F: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    PUSH32(esp, 0x0037197Cu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_0037197C: ;
    edx = MEM32(0x8C4EA0);
    eax = MEM32(0x863214);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E3C0);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037199Fu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_0037199F: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x863214);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E428);
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003719C3u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_003719C3: ;
    eax = MEM32(0x8C4E90);
    ecx = MEM32(0x863214);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E450);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003719E9u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_003719E9: ;
    edx = MEM32(0x8C4E94);
    eax = MEM32(0x863214);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E410);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371A0Cu); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_00371A0C: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x863214);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E3F8);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00371A33u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_00371A33: ;
    eax = MEM32(0x8C4E9C);
    ecx = MEM32(0x863214);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x82E3E0);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00371A56u); RECOMP_ABI_CALL(0x004ADD1Eu, sub_004ADD1E); /* call 0x004ADD1E */

loc_00371A56: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00371A5Eu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371A5E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371A65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371A62u); } /* indirect call */
    }

loc_00371A65: ;
    ecx = MEM32(0x863174);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x863160);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371A7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371A77u); } /* indirect call */
    }

loc_00371A7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371A87; /* je: equal / zero */

loc_00371A7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = esi;
    goto loc_00371A8F;

loc_00371A87: ;
    MEM32(esp + 4) = 0;

loc_00371A8F: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = eax + 8;
    PUSH32(esp, 0x00371A9Cu); RECOMP_ABI_CALL(0x004DD750u, sub_004DD750); /* call 0x004DD750 */

loc_00371A9C: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00371AA7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371AA4u); } /* indirect call */
    }

loc_00371AA7: ;
    ecx = eax;
    PUSH32(esp, 0x00371AAEu); RECOMP_ABI_CALL(0x00019DF4u, sub_00019DF4); /* call 0x00019DF4 */

loc_00371AAE: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00371B20
 * Original: 0x00371B20 - 0x00371C49 (297 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371B20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00371B2Au); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371B2A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371B31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371B2Eu); } /* indirect call */
    }

loc_00371B31: ;
    ecx = MEM32(0x863174);
    edx = MEM32(0x863160);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00371B48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371B45u); } /* indirect call */
    }

loc_00371B48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371B55; /* je: equal / zero */

loc_00371B4C: ;
    ecx = edi + 0xC;
    MEM32(esp + 8) = ecx;
    goto loc_00371B5D;

loc_00371B55: ;
    MEM32(esp + 8) = 0;

loc_00371B5D: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = eax + 8;
    PUSH32(esp, 0x00371B6Au); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_00371B6A: ;
    ecx = MEM32(0x90E424);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00371B75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371B72u); } /* indirect call */
    }

loc_00371B75: ;
    ecx = eax;
    PUSH32(esp, 0x00371B7Cu); RECOMP_ABI_CALL(0x00032B3Du, sub_00032B3D); /* call 0x00032B3D */

loc_00371B7C: ;
    eax = MEM32(0x8C4E84);
    ecx = MEM32(0x863214);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371B8Du); } /* indirect call */
    }

loc_00371B90: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371B9D; /* je: equal / zero */

loc_00371B94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = edi;
    goto loc_00371BA5;

loc_00371B9D: ;
    MEM32(esp + 8) = 0;

loc_00371BA5: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = eax + 8;
    PUSH32(esp, 0x00371BB2u); RECOMP_ABI_CALL(0x004DD8B2u, sub_004DD8B2); /* call 0x004DD8B2 */

loc_00371BB2: ;
    ecx = MEM32(0x8C4E84);
    edx = MEM32(0x863214);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00371BC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371BC4u); } /* indirect call */
    }

loc_00371BC7: ;
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(0x863214);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00371BDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371BD9u); } /* indirect call */
    }

loc_00371BDC: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x863214);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00371BF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371BEEu); } /* indirect call */
    }

loc_00371BF1: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x863214);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00371C06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371C03u); } /* indirect call */
    }

loc_00371C06: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x863214);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00371C1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371C18u); } /* indirect call */
    }

loc_00371C1B: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x863214);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00371C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371C2Du); } /* indirect call */
    }

loc_00371C30: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x863214);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00371C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371C42u); } /* indirect call */
    }

loc_00371C45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00371CA0
 * Original: 0x00371CA0 - 0x00371D07 (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371CA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371CA6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371CA6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371CADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371CAAu); } /* indirect call */
    }

loc_00371CAD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371CC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371CBDu); } /* indirect call */
    }

loc_00371CC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371CC8; /* jne: not equal / not zero */

loc_00371CC4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00371CD1;

loc_00371CC8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00371CCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371CCCu); } /* indirect call */
    }

loc_00371CCF: ;
    esi = eax;

loc_00371CD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371CD7u); RECOMP_ABI_CALL(0x000377D7u, sub_000377D7); /* call 0x000377D7 */

loc_00371CD7: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xC8);
    _fb = (uint32_t)(0x8C4EA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x8C4EA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    eax = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00371D01; /* jl: less (signed <) */

loc_00371CEF: ;
    edx = MEM32(esp + 4);

loc_00371CF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371D04; /* je: equal / zero */

loc_00371CF7: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00371CF3; /* jge: greater or equal (signed >=) */

loc_00371D01: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00371D04: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00371D20
 * Original: 0x00371D20 - 0x00371D8D (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371D20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371D26u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371D26: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371D2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371D2Au); } /* indirect call */
    }

loc_00371D2D: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371D3Du); } /* indirect call */
    }

loc_00371D40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371D48; /* jne: not equal / not zero */

loc_00371D44: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00371D51;

loc_00371D48: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00371D4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371D4Cu); } /* indirect call */
    }

loc_00371D4F: ;
    esi = eax;

loc_00371D51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371D57u); RECOMP_ABI_CALL(0x000377D7u, sub_000377D7); /* call 0x000377D7 */

loc_00371D57: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC8);
    edx = MEM32(ecx + 0x8C4EA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00371D8B; /* jl: less (signed <) */

loc_00371D6E: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xC8);
    _fb = (uint32_t)(0x8C4EA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x8C4EA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00371D80: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00371D80; /* jge: greater or equal (signed >=) */

loc_00371D8B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00371DB0
 * Original: 0x00371DB0 - 0x00371E44 (148 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371DB0: ;
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00371DBBu); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371DBB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371DC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371DBFu); } /* indirect call */
    }

loc_00371DC2: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x820FC8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371DD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371DD2u); } /* indirect call */
    }

loc_00371DD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371DE0; /* je: equal / zero */

loc_00371DD9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00371DE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371DDDu); } /* indirect call */
    }

loc_00371DE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371DE6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371DE6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371DEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371DEAu); } /* indirect call */
    }

loc_00371DED: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371E00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371DFDu); } /* indirect call */
    }

loc_00371E00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371E08; /* jne: not equal / not zero */

loc_00371E04: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00371E11;

loc_00371E08: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00371E0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371E0Cu); } /* indirect call */
    }

loc_00371E0F: ;
    esi = eax;

loc_00371E11: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00371E1Au); RECOMP_ABI_CALL(0x00014197u, sub_00014197); /* call 0x00014197 */

loc_00371E1A: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00371E29u); RECOMP_ABI_CALL(0x00028FB6u, sub_00028FB6); /* call 0x00028FB6 */

loc_00371E29: ;
    esi = (uint32_t)(int32_t)SMEM8(esp + 0xA0);
    ecx = esp + 4;
    PUSH32(esp, 0x00371E3Au); RECOMP_ABI_CALL(0x00014D2Cu, sub_00014D2C); /* call 0x00014D2C */

loc_00371E3A: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00371E70
 * Original: 0x00371E70 - 0x00371EDE (110 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371E70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371E76u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371E76: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371E7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371E7Au); } /* indirect call */
    }

loc_00371E7D: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371E90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371E8Du); } /* indirect call */
    }

loc_00371E90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371E98; /* jne: not equal / not zero */

loc_00371E94: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00371EA1;

loc_00371E98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00371E9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371E9Cu); } /* indirect call */
    }

loc_00371E9F: ;
    esi = eax;

loc_00371EA1: ;
    PUSH32(esp, 0x00371EA6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00371EA6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00371EADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371EAAu); } /* indirect call */
    }

loc_00371EAD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00371EC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371EBDu); } /* indirect call */
    }

loc_00371EC0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00371EC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371EC4u); } /* indirect call */
    }

loc_00371EC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371ED0; /* je: equal / zero */

loc_00371ECB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371ED6; /* jne: not equal / not zero */

loc_00371ED0: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002C4F9(); return; /* tail jmp 0x0002C4F9 */

loc_00371ED6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00037246(); return; /* tail jmp 0x00037246 */

}

/**
 * sub_00371F00
 * Original: 0x00371F00 - 0x00371F4F (79 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371F00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40000);
    PUSH32(esp, 0xD00000);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00371F17u); RECOMP_ABI_CALL(0x0002C31Eu, sub_0002C31E); /* call 0x0002C31E */

loc_00371F17: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi) = 0x8312AC;
    MEM32(esi + 0xB4) = 0x831284;
    MEM8(esi + 0x100) = 0;
    PUSH32(esp, 0x00371F3Au); RECOMP_ABI_CALL(0x00033619u, sub_00033619); /* call 0x00033619 */

loc_00371F3A: ;
    edx = esi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00371F46u); RECOMP_ABI_CALL(0x000189FEu, sub_000189FE); /* call 0x000189FE */

loc_00371F46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371F70
 * Original: 0x00371F70 - 0x003720A7 (311 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x8312AC;
    MEM32(edi + 0xB4) = 0x831284;
    PUSH32(esp, 0x00371F89u); RECOMP_ABI_CALL(0x00014B1Au, sub_00014B1A); /* call 0x00014B1A */

loc_00371F89: ;
    eax = MEM32(0x900688);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371FC2; /* je: equal / zero */

loc_00371F94: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371F9Au); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00371F9A: ;
    ecx = eax;
    PUSH32(esp, 0x00371FA1u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_00371FA1: ;
    ecx = MEM32(0x900688);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00371FACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371FA9u); } /* indirect call */
    }

loc_00371FAC: ;
    ecx = MEM32(0x900688);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371FBC; /* je: equal / zero */

loc_00371FB6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00371FBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371FBAu); } /* indirect call */
    }

loc_00371FBC: ;
    MEM32(0x900688) = esi;

loc_00371FC2: ;
    eax = MEM32(0x90068C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371FF9; /* je: equal / zero */

loc_00371FCB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371FD1u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00371FD1: ;
    ecx = eax;
    PUSH32(esp, 0x00371FD8u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_00371FD8: ;
    ecx = MEM32(0x90068C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00371FE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371FE0u); } /* indirect call */
    }

loc_00371FE3: ;
    ecx = MEM32(0x90068C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371FF3; /* je: equal / zero */

loc_00371FED: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00371FF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00371FF1u); } /* indirect call */
    }

loc_00371FF3: ;
    MEM32(0x90068C) = esi;

loc_00371FF9: ;
    eax = MEM32(0x900690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372030; /* je: equal / zero */

loc_00372002: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00372008u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00372008: ;
    ecx = eax;
    PUSH32(esp, 0x0037200Fu); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0037200F: ;
    ecx = MEM32(0x900690);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0037201Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00372017u); } /* indirect call */
    }

loc_0037201A: ;
    ecx = MEM32(0x900690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037202A; /* je: equal / zero */

loc_00372024: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0037202Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00372028u); } /* indirect call */
    }

loc_0037202A: ;
    MEM32(0x900690) = esi;

loc_00372030: ;
    eax = MEM32(0x900694);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372067; /* je: equal / zero */

loc_00372039: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037203Fu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0037203F: ;
    ecx = eax;
    PUSH32(esp, 0x00372046u); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_00372046: ;
    ecx = MEM32(0x900694);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00372051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037204Eu); } /* indirect call */
    }

loc_00372051: ;
    ecx = MEM32(0x900694);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372061; /* je: equal / zero */

loc_0037205B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00372061u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037205Fu); } /* indirect call */
    }

loc_00372061: ;
    MEM32(0x900694) = esi;

loc_00372067: ;
    eax = MEM32(0x900698);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037209E; /* je: equal / zero */

loc_00372070: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00372076u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00372076: ;
    ecx = eax;
    PUSH32(esp, 0x0037207Du); RECOMP_ABI_CALL(0x0002D813u, sub_0002D813); /* call 0x0002D813 */

loc_0037207D: ;
    ecx = MEM32(0x900698);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00372088u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00372085u); } /* indirect call */
    }

loc_00372088: ;
    ecx = MEM32(0x900698);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372098; /* je: equal / zero */

loc_00372092: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00372098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00372096u); } /* indirect call */
    }

loc_00372098: ;
    MEM32(0x900698) = esi;

loc_0037209E: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000228FF(); return; /* tail jmp 0x000228FF */

}

/**
 * sub_00372100
 * Original: 0x00372100 - 0x0037220B (267 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372100: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00372106u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00372106: ;
    ecx = eax;
    PUSH32(esp, 0x0037210Du); RECOMP_ABI_CALL(0x00025E1Fu, sub_00025E1F); /* call 0x00025E1F */

loc_0037210D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00372116u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00372116: ;
    ecx = eax;
    PUSH32(esp, 0x0037211Du); RECOMP_ABI_CALL(0x0002FB63u, sub_0002FB63); /* call 0x0002FB63 */

loc_0037211D: ;
    PUSH32(esp, 0x00372122u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00372122: ;
    ecx = eax;
    PUSH32(esp, 0x00372129u); RECOMP_ABI_CALL(0x00023A34u, sub_00023A34); /* call 0x00023A34 */

loc_00372129: ;
    PUSH32(esp, 1);
    ecx = 0x8B22D0;
    PUSH32(esp, 0x00372135u); RECOMP_ABI_CALL(0x000354FFu, sub_000354FF); /* call 0x000354FF */

loc_00372135: ;
    ecx = 0x8B22D0;
    PUSH32(esp, 0x0037213Fu); RECOMP_ABI_CALL(0x0001D3CDu, sub_0001D3CD); /* call 0x0001D3CD */

loc_0037213F: ;
    PUSH32(esp, 0x00372144u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00372144: ;
    ecx = eax;
    PUSH32(esp, 0x0037214Bu); RECOMP_ABI_CALL(0x0003577Fu, sub_0003577F); /* call 0x0003577F */

loc_0037214B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00372152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037214Fu); } /* indirect call */
    }

loc_00372152: ;
    eax = MEM32(0x900268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372161; /* je: equal / zero */

loc_0037215B: ;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003721A1; /* je: equal / zero */

loc_00372161: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x19C);
    PUSH32(esp, 0x00372170u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00372170: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372185; /* je: equal / zero */

loc_00372177: ;
    ecx = eax;
    PUSH32(esp, 0x0037217Eu); RECOMP_ABI_CALL(0x00024079u, sub_00024079); /* call 0x00024079 */

loc_0037217E: ;
    MEM32(0x900270) = eax;
    goto loc_0037218B;

loc_00372185: ;
    MEM32(0x900270) = esi;

loc_0037218B: ;
    PUSH32(esp, 0x00372190u); RECOMP_ABI_CALL(0x004DC759u, sub_004DC759); /* call 0x004DC759 */

loc_00372190: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x166EF);
    PUSH32(esp, 0x0037219Eu); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0037219E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003721A1: ;
    PUSH32(esp, 0x003721A6u); RECOMP_ABI_CALL(0x004EAE40u, sub_004EAE40); /* call 0x004EAE40 */

loc_003721A6: ;
    PUSH32(esp, 0x003721ABu); RECOMP_ABI_CALL(0x004EB05Eu, sub_004EB05E); /* call 0x004EB05E */

loc_003721AB: ;
    PUSH32(esp, 0x003721B0u); RECOMP_ABI_CALL(0x004CE8B4u, sub_004CE8B4); /* call 0x004CE8B4 */

loc_003721B0: ;
    PUSH32(esp, 0x003721B5u); RECOMP_ABI_CALL(0x004EB715u, sub_004EB715); /* call 0x004EB715 */

loc_003721B5: ;
    PUSH32(esp, 0x003721BAu); RECOMP_ABI_CALL(0x004EB905u, sub_004EB905); /* call 0x004EB905 */

loc_003721BA: ;
    eax = MEM32(0x900268);
    PUSH32(esp, 0x830990);
    PUSH32(esp, 0x830AA4);
    MEM32(eax + 0x18) = esi;
    PUSH32(esp, 0x003721D1u); RECOMP_ABI_CALL(0x00505BB0u, sub_00505BB0); /* call 0x00505BB0 */

loc_003721D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003721D9u); RECOMP_ABI_CALL(0x00505B90u, sub_00505B90); /* call 0x00505B90 */

loc_003721D9: ;
    PUSH32(esp, 0x003721DEu); RECOMP_ABI_CALL(0x004CFA55u, sub_004CFA55); /* call 0x004CFA55 */

loc_003721DE: ;
    PUSH32(esp, 0x003721E3u); RECOMP_ABI_CALL(0x004EB115u, sub_004EB115); /* call 0x004EB115 */

loc_003721E3: ;
    PUSH32(esp, 0x003721E8u); RECOMP_ABI_CALL(0x004ECF68u, sub_004ECF68); /* call 0x004ECF68 */

loc_003721E8: ;
    PUSH32(esp, 0x003721EDu); RECOMP_ABI_CALL(0x004DC997u, sub_004DC997); /* call 0x004DC997 */

loc_003721ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003721F4; /* je: equal / zero */

loc_003721F1: ;
    esi = eax + 8;

loc_003721F4: ;
    PUSH32(esp, 0x003721F9u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003721F9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00372200u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003721FEu); } /* indirect call */
    }

loc_00372200: ;
    eax = MEM32(0x8FC1D0);
    MEM8(eax + 0x1D) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00372250
 * Original: 0x00372250 - 0x0037229C (76 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372250: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00372259u); RECOMP_ABI_CALL(0x00031B1Bu, sub_00031B1B); /* call 0x00031B1B */

loc_00372259: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00372262u); RECOMP_ABI_CALL(0x00013E0Eu, sub_00013E0E); /* call 0x00013E0E */

loc_00372262: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372278; /* je: equal / zero */

loc_00372266: ;
    ecx = esi;
    PUSH32(esp, 0x0037226Du); RECOMP_ABI_CALL(0x0001C518u, sub_0001C518); /* call 0x0001C518 */

loc_0037226D: ;
    ecx = esi;
    PUSH32(esp, 0x00372274u); RECOMP_ABI_CALL(0x0002F9BAu, sub_0002F9BA); /* call 0x0002F9BA */

loc_00372274: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372297; /* je: equal / zero */

loc_00372278: ;
    _fa = (uint32_t)(MEM32(edi + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372297; /* jne: not equal / not zero */

loc_00372281: ;
    PUSH32(esp, 0x00372286u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00372286: ;
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x0037228Eu); RECOMP_ABI_CALL(0x00505D10u, sub_00505D10); /* call 0x00505D10 */

loc_0037228E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00372294u); RECOMP_ABI_CALL(0x00540370u, sub_00540370); /* call 0x00540370 */

loc_00372294: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372297: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003722B0
 * Original: 0x003722B0 - 0x003722CE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003722B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003722B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003722B8u); RECOMP_ABI_CALL(0x000228FFu, sub_000228FF); /* call 0x000228FF */

loc_003722B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003722C8; /* je: equal / zero */

loc_003722BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003722C5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003722C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003722C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003722E0
 * Original: 0x003722E0 - 0x00372303 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003722E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003722E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372301; /* je: equal / zero */

loc_003722E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003722EFu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_003722EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372301; /* jne: not equal / not zero */

loc_003722F6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003722FEu); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_003722FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372301: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00372310
 * Original: 0x00372310 - 0x00372352 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372310: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00372323u); RECOMP_ABI_CALL(0x0036ECE0u, sub_0036ECE0); /* call 0x0036ECE0 */

loc_00372323: ;
    ecx = MEM32(esp + 0x18);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00372337u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00372337: ;
    eax = MEM32(0x8C58E8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037234F; /* je: equal / zero */

loc_00372343: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0037234Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037234Cu); } /* indirect call */
    }

loc_0037234F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00372370
 * Original: 0x00372370 - 0x003723CA (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372370: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0037237Du); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0037237D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00372391u); RECOMP_ABI_CALL(0x0036ECE0u, sub_0036ECE0); /* call 0x0036ECE0 */

loc_00372391: ;
    esi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003723A4u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_003723A4: ;
    eax = MEM32(0x8C58E8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003723BC; /* je: equal / zero */

loc_003723B0: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003723BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003723B9u); } /* indirect call */
    }

loc_003723BC: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003723C5u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_003723C5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003723E0
 * Original: 0x003723E0 - 0x0037241E (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003723E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003723E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037241C; /* jne: not equal / not zero */

loc_003723ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x003723F6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003723F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372414; /* je: equal / zero */

loc_003723FD: ;
    ecx = esi + 0xCC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0037240Cu); RECOMP_ABI_CALL(0x000376B0u, sub_000376B0); /* call 0x000376B0 */

loc_0037240C: ;
    MEM32(esi + 0xC4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00372414: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC4) = eax;

loc_0037241C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00372430
 * Original: 0x00372430 - 0x0037250D (221 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372430: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x114);
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00372503; /* je: equal / zero */

loc_0037244B: ;
    ebx = MEM32(esi + 8);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0x00372456u); RECOMP_ABI_CALL(0x0036E560u, sub_0036E560); /* call 0x0036E560 */

loc_00372456: ;
    ecx = MEM32(0x9006B0);
    edx = MEM32(ecx);
    edi = eax;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00372467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00372464u); } /* indirect call */
    }

loc_00372467: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00372475u); RECOMP_ABI_CALL(0x000267EDu, sub_000267ED); /* call 0x000267ED */

loc_00372475: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037248Au); RECOMP_ABI_CALL(0x00543E30u, sub_00543E30); /* call 0x00543E30 */

loc_0037248A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    SET_LO8(ebx, 1);
    MEM8(edi + 0xC) = LO8(ebx);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003724B3; /* je: equal / zero */

loc_003724AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003724B0u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_003724B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003724B3: ;
    PUSH32(esp, 0x003724B8u); RECOMP_ABI_CALL(0x00508210u, sub_00508210); /* call 0x00508210 */

loc_003724B8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003724BEu); RECOMP_ABI_CALL(0x00541580u, sub_00541580); /* call 0x00541580 */

loc_003724BE: ;
    eax = MEM32(0x9006A8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00372503; /* jle: less or equal (signed <=) */

loc_003724CC: ;
    edi = 0x8FE158;

loc_003724D1: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003724DCu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003724DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003724FA; /* je: equal / zero */

loc_003724E3: ;
    eax = MEM32(0x9006A8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x41;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003724D1; /* jl: less (signed <) */

loc_003724F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003724FA: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x41);
    MEM8(esi + 0x8FE198) = LO8(ebx);

loc_00372503: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00372550
 * Original: 0x00372550 - 0x00372666 (278 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372550: ;
    eax = MEM32(0x9006A8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    if (CMP_GE(_fas, _fbs)) goto loc_00372643; /* jge: greater or equal (signed >=) */

loc_0037256F: ;
    ecx = MEM32(esp + 0x10C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00372581u); RECOMP_ABI_CALL(0x000267EDu, sub_000267ED); /* call 0x000267ED */

loc_00372581: ;
    ecx = MEM32(0x9006AC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00372594u); RECOMP_ABI_CALL(0x00022C2Eu, sub_00022C2E); /* call 0x00022C2E */

loc_00372594: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372643; /* je: equal / zero */

loc_0037259C: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x118);
    PUSH32(esp, 0x003725ABu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003725AB: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003725CF; /* je: equal / zero */

loc_003725B4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003725C6; /* je: equal / zero */

loc_003725BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003725C3u); RECOMP_ABI_CALL(0x00509D50u, sub_00509D50); /* call 0x00509D50 */

loc_003725C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003725C6: ;
    ecx = esi;
    PUSH32(esp, 0x003725CDu); RECOMP_ABI_CALL(0x00028A2Fu, sub_00028A2F); /* call 0x00028A2F */

loc_003725CD: ;
    goto loc_003725D1;

loc_003725CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003725D1: ;
    ecx = MEM32(0x9006BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003725E7; /* je: equal / zero */

loc_003725DB: ;
    MEM32(ecx + 0x114) = eax;
    ecx = MEM32(0x9006BC);

loc_003725E7: ;
    MEM32(eax + 0x110) = ecx;
    ecx = MEM32(0x9006A8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x41);
    edx = esp + 8;
    esi = ecx + 0x8FE158;
    MEM8(ecx + 0x8FE198) = 0;
    ecx = edx;
    MEM32(0x9006BC) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00372610: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(esi + edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372610; /* jne: not equal / not zero */

loc_0037261A: ;
    esi = MEM32(0x9006A8);
    ecx = MEM32(0x9006AC);
    PUSH32(esp, 0);
    edx = eax + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2AE1F);
    eax = esp + 0x18;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(0x9006A8) = esi;
    PUSH32(esp, 0x00372643u); RECOMP_ABI_CALL(0x00034681u, sub_00034681); /* call 0x00034681 */

loc_00372643: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037265D; /* je: equal / zero */

loc_00372647: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037264Du); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_0037264D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037265D; /* jne: not equal / not zero */

loc_00372654: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0037265Au); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_0037265A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037265D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003726B0
 * Original: 0x003726B0 - 0x003726DA (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003726B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003726B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003726D7; /* jge: greater or equal (signed >=) */

loc_003726BB: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = eax + 0x104;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003726D4u); RECOMP_ABI_CALL(0x00031616u, sub_00031616); /* call 0x00031616 */

loc_003726D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003726D7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003726F0
 * Original: 0x003726F0 - 0x0037270E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003726F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003726F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003726F8u); RECOMP_ABI_CALL(0x0002B13Au, sub_0002B13A); /* call 0x0002B13A */

loc_003726F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372708; /* je: equal / zero */

loc_003726FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00372705u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00372705: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372708: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372720
 * Original: 0x00372720 - 0x0037273E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372720: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00372728u); RECOMP_ABI_CALL(0x00018DC3u, sub_00018DC3); /* call 0x00018DC3 */

loc_00372728: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372738; /* je: equal / zero */

loc_0037272F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00372735u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00372735: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372738: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372750
 * Original: 0x00372750 - 0x00372F55 (2053 bytes, 634 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00372750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372767u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00372767: ;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372770u); RECOMP_ABI_CALL(0x0001273Eu, sub_0001273E); /* call 0x0001273E */

loc_00372770: ;
    eax = MEM32(esi + 0x28);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003728C3; /* je: equal / zero */

loc_0037277D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00372C78; /* jne: not equal / not zero */

loc_00372784: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003727DE; /* jne: not equal / not zero */

loc_00372789: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00372790;

    /* nop */

loc_00372790: ;
    edi = ZX8(LO8(ebx));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372799u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00372799: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003727A0u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_003727A0: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003727AE; /* jne: not equal / not zero */

loc_003727A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003727C7; /* je: equal / zero */

loc_003727AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003727C7; /* jne: not equal / not zero */

loc_003727AE: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003727B7; /* je: equal / zero */

loc_003727B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003727C7; /* je: equal / zero */

loc_003727B7: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003727BDu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_003727BD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003727C4u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_003727C4: ;
    MEM32(esi + 0x2C) = eax;

loc_003727C7: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00372790; /* jl: less (signed <) */

loc_003727CD: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003727DE; /* jne: not equal / not zero */

loc_003727D2: ;
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003727DBu); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_003727DB: ;
    MEM32(esi + 0x2C) = eax;

loc_003727DE: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(0x8FA488);
    ebx = 2;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003727F8u); RECOMP_ABI_CALL(0x0003575Cu, sub_0003575C); /* call 0x0003575C */

loc_003727F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372820; /* je: equal / zero */

loc_003727FC: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372803u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00372803: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372818; /* je: equal / zero */

loc_0037280A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372815u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_00372815: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372818: ;
    MEM32(esi + 0x28) = ebx;
    goto loc_00372C78;

loc_00372820: ;
    ecx = MEM32(0x8FA488);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372830u); RECOMP_ABI_CALL(0x0003575Cu, sub_0003575C); /* call 0x0003575C */

loc_00372830: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372889; /* je: equal / zero */

loc_00372834: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372839u); RECOMP_ABI_CALL(0x00023395u, sub_00023395); /* call 0x00023395 */

loc_00372839: ;
    MEM8(eax + 0xF8) = 0;
    ecx = MEM32(esi + 0x30);
    eax = esp + 0x1C;
    edx = esp + 0x2C;
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x20) = 0x4B65AF5;
    MEM32(esp + 0x24) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372861u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00372861: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372866u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00372866: ;
    PUSH32(esp, 6);
    ecx = eax + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372873u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_00372873: ;
    ecx = esi;
    MEM32(esi + 0x48) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037287Du); RECOMP_ABI_CALL(0x00024952u, sub_00024952); /* call 0x00024952 */

loc_0037287D: ;
    MEM32(esi + 0x28) = 3;
    goto loc_00372C78;

loc_00372889: ;
    PUSH32(esp, 6);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372892u); RECOMP_ABI_CALL(0x00016D11u, sub_00016D11); /* call 0x00016D11 */

loc_00372892: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372C78; /* je: equal / zero */

loc_0037289A: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003728A1u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_003728A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372C78; /* je: equal / zero */

loc_003728AC: ;
    ecx = esi;
    MEM8(esi + 0x58) = 1;
    MEM32(esi + 0x48) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003728BEu); RECOMP_ABI_CALL(0x00024952u, sub_00024952); /* call 0x00024952 */

loc_003728BE: ;
    goto loc_00372C78;

loc_003728C3: ;
    ecx = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(ecx + 0x21C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x21C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372A81; /* je: equal / zero */

loc_003728D6: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003728E4u); RECOMP_ABI_CALL(0x00022BCFu, sub_00022BCF); /* call 0x00022BCF */

loc_003728E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372954; /* je: equal / zero */

loc_003728E8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003728F0: ;
    edi = ZX8(LO8(ebx));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003728F9u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_003728F9: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372900u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_00372900: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037290E; /* jne: not equal / not zero */

loc_00372906: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372927; /* je: equal / zero */

loc_0037290A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372927; /* jne: not equal / not zero */

loc_0037290E: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372917; /* je: equal / zero */

loc_00372913: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372927; /* je: equal / zero */

loc_00372917: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037291Du); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0037291D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372924u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_00372924: ;
    MEM32(esi + 0x2C) = eax;

loc_00372927: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003728F0; /* jl: less (signed <) */

loc_0037292D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372932u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00372932: ;
    PUSH32(esp, 1);
    ecx = eax + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037293Fu); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_0037293F: ;
    edx = MEM32(0x8FC1D0);
    MEM32(edx + 0x21C) = 2;
    goto loc_00372A81;

loc_00372954: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003729B8; /* je: equal / zero */

loc_0037295B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00372960: ;
    edi = ZX8(LO8(ebx));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372969u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00372969: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372970u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_00372970: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037297E; /* jne: not equal / not zero */

loc_00372976: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372997; /* je: equal / zero */

loc_0037297A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372997; /* jne: not equal / not zero */

loc_0037297E: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372987; /* je: equal / zero */

loc_00372983: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372997; /* je: equal / zero */

loc_00372987: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037298Du); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_0037298D: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372994u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_00372994: ;
    MEM32(esi + 0x2C) = eax;

loc_00372997: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00372960; /* jl: less (signed <) */

loc_0037299D: ;
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x21C) = 2;
    MEM8(0x90070C) = 1;
    goto loc_00372A81;

loc_003729B8: ;
    ebx = MEM32(esp + 0x14);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003729C3u); RECOMP_ABI_CALL(0x0002D845u, sub_0002D845); /* call 0x0002D845 */

loc_003729C3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372A81; /* je: equal / zero */

loc_003729CD: ;
    SET_LO8(ecx, MEM8(0x9006A0));

loc_003729D3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372A81; /* jne: not equal / not zero */

loc_003729DB: ;
    eax = MEM32(edi + 0x14);
    edx = eax + eax * 2 + 6;
    _fa = (uint32_t)(MEM8(edi + edx * 4 + 1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + edx * 4 + 1), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003729F4; /* je: equal / zero */

loc_003729E9: ;
    eax = eax + eax * 2 + 0xC;
    _fa = (uint32_t)(MEM8(edi + eax * 4 + 1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + eax * 4 + 1), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372A00; /* je: equal / zero */

loc_003729F4: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003729D3; /* jne: not equal / not zero */

loc_003729FB: ;
    goto loc_00372A81;

loc_00372A00: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372A08u); RECOMP_ABI_CALL(0x000226BBu, sub_000226BB); /* call 0x000226BB */

loc_00372A08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372A45; /* jne: not equal / not zero */

loc_00372A0D: ;
    ecx = MEM32(0x901E28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372A18u); RECOMP_ABI_CALL(0x00029178u, sub_00029178); /* call 0x00029178 */

loc_00372A18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372A81; /* je: equal / zero */

loc_00372A1C: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372A29; /* jne: not equal / not zero */

loc_00372A24: ;
    MEM32(esi + 0x2C) = edi;
    goto loc_00372A33;

loc_00372A29: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372A30u); RECOMP_ABI_CALL(0x00029DA8u, sub_00029DA8); /* call 0x00029DA8 */

loc_00372A30: ;
    MEM32(esi + 0x2C) = eax;

loc_00372A33: ;
    ecx = MEM32(0x8FC1D0);
    MEM32(ecx + 0x21C) = 2;
    goto loc_00372A81;

loc_00372A45: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00372A5D; /* je: equal / zero */

loc_00372A4C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00372A56; /* je: equal / zero */

loc_00372A4F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00372A62; /* jne: not equal / not zero */

loc_00372A52: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00372A62;

loc_00372A56: ;
    ecx = 2;
    goto loc_00372A62;

loc_00372A5D: ;
    ecx = 1;

loc_00372A62: ;
    eax = MEM32(edi + 0x48);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372A81; /* jne: not equal / not zero */

loc_00372A6A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372A7Eu); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_00372A7E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372A81: ;
    SET_LO8(eax, MEM8(esi + 0x59));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372AB6; /* jne: not equal / not zero */

loc_00372A88: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x83130C);
    MEM8(esp + 0x24) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372A9Cu); RECOMP_ABI_CALL(0x00508450u, sub_00508450); /* call 0x00508450 */

loc_00372A9C: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372AAB; /* jne: not equal / not zero */

loc_00372AA7: ;
    MEM8(esi + 0x59) = 1;

loc_00372AAB: ;
    SET_LO8(eax, MEM8(esi + 0x59));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372C78; /* je: equal / zero */

loc_00372AB6: ;
    ecx = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(ecx + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x218), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372C78; /* jne: not equal / not zero */

loc_00372AC9: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372AD6; /* je: equal / zero */

loc_00372AD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372B0C; /* jne: not equal / not zero */

loc_00372AD6: ;
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372ADCu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00372ADC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372B0C; /* jne: not equal / not zero */

loc_00372AE3: ;
    ecx = MEM32(0x8F0650);
    eax = MEM32(ecx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372B0C; /* je: equal / zero */

loc_00372AF3: ;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372AFCu); RECOMP_ABI_CALL(0x00014336u, sub_00014336); /* call 0x00014336 */

loc_00372AFC: ;
    ecx = MEM32(esp + 0x14);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B09u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_00372B09: ;
    MEM32(esi + 0x2C) = eax;

loc_00372B0C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8312F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B19u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00372B19: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B21u); RECOMP_ABI_CALL(0x0001532Bu, sub_0001532B); /* call 0x0001532B */

loc_00372B21: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B26u); RECOMP_ABI_CALL(0x00505B90u, sub_00505B90); /* call 0x00505B90 */

loc_00372B26: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x28) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00372B44; /* jne: not equal / not zero */

loc_00372B34: ;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, 0x168);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B44u); RECOMP_ABI_CALL(0x00020028u, sub_00020028); /* call 0x00020028 */

loc_00372B44: ;
    eax = MEM32(esi + 0x44);
    ebx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372B54; /* je: equal / zero */

loc_00372B50: ;
    MEM32(esi + eax * 4 + 0x34) = MEM32(esi + eax * 4 + 0x34) + 1;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00372B54: ;
    ecx = esi + 0x3C;
    MEM32(esi + 0x44) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B5Fu); RECOMP_ABI_CALL(0x0001DDBEu, sub_0001DDBE); /* call 0x0001DDBE */

loc_00372B5F: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B66u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00372B66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372C04; /* je: equal / zero */

loc_00372B71: ;
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372B77u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00372B77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372C04; /* je: equal / zero */

loc_00372B82: ;
    MEM8(esp + 0x30) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0x31;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x34;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0EF8);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BA8u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00372BA8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BB1u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00372BB1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BB8u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00372BB8: ;
    eax = MEM32(0x900708);
    edx = MEM32(eax + 0x38);
    ecx = 3;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x34);
    PUSH32(esp, 0x8F62C4);
    edx = 3;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F5B4C);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372BEFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00372BEF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    edx = esp + 0xD4;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C01u); RECOMP_ABI_CALL(0x0001D765u, sub_0001D765); /* call 0x0001D765 */

loc_00372C01: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372C04: ;
    ecx = esp + 0x1C;
    eax = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    MEM32(esp + 0x1C) = 4;
    MEM32(esp + 0x20) = 0x4B65AF5;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C29u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00372C29: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C2Eu); RECOMP_ABI_CALL(0x000287E1u, sub_000287E1); /* call 0x000287E1 */

loc_00372C2E: ;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x44), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372C46; /* jne: not equal / not zero */

loc_00372C33: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372C46; /* je: equal / zero */

loc_00372C3A: ;
    edx = MEM32(esi + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00372C40u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00372C3Eu); } /* indirect call */
    }

loc_00372C40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x50) = ebp;

loc_00372C46: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372C78; /* jne: not equal / not zero */

loc_00372C4D: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372C63; /* jne: not equal / not zero */

loc_00372C54: ;
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C5Au); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_00372C5A: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C61u); RECOMP_ABI_CALL(0x000218CEu, sub_000218CE); /* call 0x000218CE */

loc_00372C61: ;
    goto loc_00372C78;

loc_00372C63: ;
    eax = MEM32(eax + 0x48);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C71u); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_00372C71: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372C78u); RECOMP_ABI_CALL(0x000285E8u, sub_000285E8); /* call 0x000285E8 */

loc_00372C78: ;
    eax = MEM32(esi + 0x28);
    ebx = 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372EA9; /* jne: not equal / not zero */

loc_00372C88: ;
    eax = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(eax + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x218), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372D31; /* je: equal / zero */

loc_00372C99: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x8312D4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CA6u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00372CA6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CB0u); RECOMP_ABI_CALL(0x0001D765u, sub_0001D765); /* call 0x0001D765 */

loc_00372CB0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CB8u); RECOMP_ABI_CALL(0x000143E5u, sub_000143E5); /* call 0x000143E5 */

loc_00372CB8: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372CC5; /* je: equal / zero */

loc_00372CC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372CD0; /* jne: not equal / not zero */

loc_00372CC5: ;
    ecx = MEM32(0x8F0650);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CD0u); RECOMP_ABI_CALL(0x0002989Eu, sub_0002989E); /* call 0x0002989E */

loc_00372CD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esi + 0x2C) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CDAu); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_00372CDA: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CE1u); RECOMP_ABI_CALL(0x000285E8u, sub_000285E8); /* call 0x000285E8 */

loc_00372CE1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CE6u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00372CE6: ;
    PUSH32(esp, ebx);
    ecx = eax + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CF2u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_00372CF2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372CF7u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00372CF7: ;
    PUSH32(esp, 6);
    ecx = eax + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D04u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_00372D04: ;
    ecx = esp + 0x18;
    edx = esp + 0x1C;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    MEM32(esi + 0x28) = ebp;
    MEM32(esp + 0x1C) = 7;
    MEM32(esp + 0x20) = 0x4B65AF5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D2Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00372D2C: ;
    goto loc_00372EA9;

loc_00372D31: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(0x8FA488);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D46u); RECOMP_ABI_CALL(0x0003575Cu, sub_0003575C); /* call 0x0003575C */

loc_00372D46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372D71; /* jne: not equal / not zero */

loc_00372D4A: ;
    ecx = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(ecx + 0x21C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x21C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372D71; /* jne: not equal / not zero */

loc_00372D58: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D62u); RECOMP_ABI_CALL(0x0001D765u, sub_0001D765); /* call 0x0001D765 */

loc_00372D62: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = 1;
    goto loc_00372EA9;

loc_00372D71: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D79u); RECOMP_ABI_CALL(0x00022BCFu, sub_00022BCF); /* call 0x00022BCF */

loc_00372D79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372E11; /* je: equal / zero */

loc_00372D81: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D86u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00372D86: ;
    PUSH32(esp, ebx);
    ecx = eax + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D92u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_00372D92: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372D97u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00372D97: ;
    PUSH32(esp, 6);
    ecx = eax + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DA4u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_00372DA4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DA9u); RECOMP_ABI_CALL(0x00023291u, sub_00023291); /* call 0x00023291 */

loc_00372DA9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DAEu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00372DAE: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DB5u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_00372DB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372DBE; /* je: equal / zero */

loc_00372DB9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DBEu); RECOMP_ABI_CALL(0x0001E471u, sub_0001E471); /* call 0x0001E471 */

loc_00372DBE: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DC5u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00372DC5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372DEF; /* je: equal / zero */

loc_00372DCC: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DD3u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00372DD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372EA9; /* je: equal / zero */

loc_00372DDE: ;
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372DE4u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00372DE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372EA9; /* je: equal / zero */

loc_00372DEF: ;
    eax = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(eax + 0x21C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x21C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372EA9; /* jne: not equal / not zero */

loc_00372E00: ;
    edx = MEM32(eax + 0x220);
    MEM32(eax + 0x21C) = edx;
    goto loc_00372EA9;

loc_00372E11: ;
    eax = MEM32(0x8FA488);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E20u); RECOMP_ABI_CALL(0x0003575Cu, sub_0003575C); /* call 0x0003575C */

loc_00372E20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372E76; /* je: equal / zero */

loc_00372E24: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E29u); RECOMP_ABI_CALL(0x00023395u, sub_00023395); /* call 0x00023395 */

loc_00372E29: ;
    ecx = esp + 0x18;
    edx = esp + 0x1C;
    MEM8(eax + 0xF8) = 0;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = 0x4B65AF5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E51u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00372E51: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E56u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_00372E56: ;
    PUSH32(esp, 6);
    ecx = eax + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E63u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_00372E63: ;
    ecx = esi;
    MEM32(esi + 0x48) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E6Du); RECOMP_ABI_CALL(0x00024952u, sub_00024952); /* call 0x00024952 */

loc_00372E6D: ;
    MEM32(esi + 0x28) = 3;
    goto loc_00372EA9;

loc_00372E76: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E7Bu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00372E7B: ;
    PUSH32(esp, 6);
    ecx = eax + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E85u); RECOMP_ABI_CALL(0x00016D11u, sub_00016D11); /* call 0x00016D11 */

loc_00372E85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372EA9; /* je: equal / zero */

loc_00372E89: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372E90u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00372E90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372EA9; /* je: equal / zero */

loc_00372E97: ;
    ecx = esi;
    MEM8(esi + 0x58) = 1;
    MEM32(esi + 0x48) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372EA9u); RECOMP_ABI_CALL(0x00024952u, sub_00024952); /* call 0x00024952 */

loc_00372EA9: ;
    SET_LO8(eax, MEM8(esi + 0x58));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372F4D; /* je: equal / zero */

loc_00372EB4: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372EC4; /* je: equal / zero */

loc_00372EBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372F4D; /* jne: not equal / not zero */

loc_00372EC4: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372ECBu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00372ECB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372ED9; /* je: equal / zero */

loc_00372ED2: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372ED9u); RECOMP_ABI_CALL(0x00024952u, sub_00024952); /* call 0x00024952 */

loc_00372ED9: ;
    SET_LO8(eax, MEM8(0x8F4518));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372F4D; /* jne: not equal / not zero */

loc_00372EE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372EFF; /* jne: not equal / not zero */

loc_00372EE8: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372EF4u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_00372EF4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00372EFF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F04u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_00372F04: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372F20; /* jne: not equal / not zero */

loc_00372F09: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F15u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_00372F15: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00372F20: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F25u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_00372F25: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 5 (32-bit) */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00372F41; /* jne: not equal / not zero */

loc_00372F2D: ;
    PUSH32(esp, 7);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F36u); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_00372F36: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00372F41: ;
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372F4Au); RECOMP_ABI_CALL(0x00018E54u, sub_00018E54); /* call 0x00018E54 */

loc_00372F4A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372F4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00373160
 * Original: 0x00373160 - 0x00373262 (258 bytes, 73 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373160: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX16(MEM16(esi + 0x44));
    _fb = (uint32_t)(0xFFFFFFD0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFD0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00373260; /* ja: above (unsigned >) */

loc_00373175: ;
    eax = ZX8(MEM8(eax + 0x37327C));
    { uint32_t _jt = MEM32(eax * 4 + 0x373264); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00373183u) goto loc_00373183;
    if (_jt == 0x003731A1u) goto loc_003731A1;
    if (_jt == 0x003731F8u) goto loc_003731F8;
    if (_jt == 0x0037323Bu) goto loc_0037323B;
    if (_jt == 0x00373241u) goto loc_00373241;
    if (_jt == 0x00373260u) goto loc_00373260;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00373183: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0037318Au); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_0037318A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373260; /* jne: not equal / not zero */

loc_00373195: ;
    ecx = MEM32(0x900708);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00016C2B(); return; /* tail jmp 0x00016C2B */

loc_003731A1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x003731A8u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_003731A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373260; /* jne: not equal / not zero */

loc_003731B3: ;
    ecx = esi;
    PUSH32(esp, 0x003731BAu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_003731BA: ;
    esi = eax;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003731C4u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_003731C4: ;
    ecx = eax;
    PUSH32(esp, 0x003731CBu); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_003731CB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003731DB; /* je: equal / zero */

loc_003731D0: ;
    ecx = MEM32(0x900708);
    PUSH32(esp, 0x003731DBu); RECOMP_ABI_CALL(0x00016C2Bu, sub_00016C2B); /* call 0x00016C2B */

loc_003731DB: ;
    ecx = MEM32(0x900708);
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373260; /* je: equal / zero */

loc_003731E8: ;
    eax = MEM32(eax + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373260; /* jne: not equal / not zero */

loc_003731EF: ;
    MEM32(ecx + 0x2C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003731F8: ;
    edx = MEM32(0x900708);
    MEM8(edx + 0x58) = 1;
    ecx = MEM32(0x900708);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373235; /* jne: not equal / not zero */

loc_0037320F: ;
    esi = ecx;
    PUSH32(esp, 0x00373216u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00373216: ;
    ecx = eax;
    PUSH32(esp, 0x0037321Du); RECOMP_ABI_CALL(0x00029DA8u, sub_00029DA8); /* call 0x00029DA8 */

loc_0037321D: ;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x21C) = 2;
    ecx = MEM32(0x900708);

loc_00373235: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00024952(); return; /* tail jmp 0x00024952 */

loc_0037323B: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A659(); return; /* tail jmp 0x0002A659 */

loc_00373241: ;
    ecx = esi;
    PUSH32(esp, 0x00373248u); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_00373248: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x1C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x1C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373260; /* jne: not equal / not zero */

loc_0037324D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x831320);
    PUSH32(esp, 0x0037325Du); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_0037325D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00373260: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00373262
 * Original: 0x00373262 - 0x003733A2 (320 bytes, 159 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373262(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373262: ;
    edi = edi;
    MEM32(ecx) = MEM32(ecx) ^ 0x37;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -134203599) = MEM8(ecx + -134203599) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + -134203599)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(edi) = MEM32(edi) ^ esi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x32) = MEM8(ecx + 0x32) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x00373272u); /* TODO: aaa */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_HI8(edx, HI8(edx) ^ MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x32) = MEM8(eax + 0x32) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x32)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x0037327Au); /* TODO: aaa */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x5050505) = MEM32(0x5050505) + eax;
    _fa = (uint32_t)(MEM32(0x5050505)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050205) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050205;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x3050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x5050505) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5050505;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCC) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xCC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
    MEM32(esi) = 0x83113C;
    PUSH32(esp, 0x0037336Eu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_0037336E: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x33A56);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0037337Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373378u); } /* indirect call */
    }

loc_0037337B: ;
    ecx = esi;
    MEM32(0x9001DC) = 0;
    PUSH32(esp, 0x0037338Cu); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_0037338C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037339C; /* je: equal / zero */

loc_00373393: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373399u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00373399: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037339C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003733C0
 * Original: 0x003733C0 - 0x003733DE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003733C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003733C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003733C8u); RECOMP_ABI_CALL(0x00035BA3u, sub_00035BA3); /* call 0x00035BA3 */

loc_003733C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003733D8; /* je: equal / zero */

loc_003733CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003733D5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003733D5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003733D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003733F0
 * Original: 0x003733F0 - 0x0037374C (860 bytes, 339 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003733F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003733F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373409; /* je: equal / zero */

loc_003733FB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00373409; /* je: equal / zero */

loc_00373400: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373747; /* jne: not equal / not zero */

loc_00373409: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x8C4E84);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0037341Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037341Au); } /* indirect call */
    }

loc_0037341D: ;
    /* nop */

loc_00373420: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373444; /* jne: not equal / not zero */

loc_00373428: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00373440; /* je: equal / zero */

loc_0037342C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373444; /* jne: not equal / not zero */

loc_00373436: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00373420; /* jne: not equal / not zero */

loc_00373440: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00373449;

loc_00373444: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00373449: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003735B2; /* jne: not equal / not zero */

loc_00373452: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003735B2; /* je: equal / zero */

loc_0037345B: ;
    PUSH32(esp, 0x00373460u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00373460: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00373467u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373464u); } /* indirect call */
    }

loc_00373467: ;
    ecx = MEM32(0x8C4EA0);
    edx = MEM32(0x8631F4);
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0037347Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037347Bu); } /* indirect call */
    }

loc_0037347E: ;
    ecx = MEM32(0x8C4E8C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00373495u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373492u); } /* indirect call */
    }

loc_00373495: ;
    ecx = MEM32(0x8C4E90);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003734ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734A9u); } /* indirect call */
    }

loc_003734AC: ;
    ecx = MEM32(0x8C4E94);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003734C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734C0u); } /* indirect call */
    }

loc_003734C3: ;
    ecx = MEM32(0x8C4E98);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003734DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734D9u); } /* indirect call */
    }

loc_003734DC: ;
    ecx = MEM32(0x8C4E9C);
    edx = MEM32(0x8631F4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003734F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734F2u); } /* indirect call */
    }

loc_003734F5: ;
    ecx = MEM32(esp + 0x18);
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00373500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734FDu); } /* indirect call */
    }

loc_00373500: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037357B; /* je: equal / zero */

loc_00373504: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037357B; /* je: equal / zero */

loc_00373509: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00373512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037350Fu); } /* indirect call */
    }

loc_00373512: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00373519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373516u); } /* indirect call */
    }

loc_00373519: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00373522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037351Fu); } /* indirect call */
    }

loc_00373522: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00373529u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373526u); } /* indirect call */
    }

loc_00373529: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00373533u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373530u); } /* indirect call */
    }

loc_00373533: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0037353Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373538u); } /* indirect call */
    }

loc_0037353B: ;
    edi = MEM32(esp + 0x1C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00373548u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373545u); } /* indirect call */
    }

loc_00373548: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0037354Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037354Cu); } /* indirect call */
    }

loc_0037354F: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0037355Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373559u); } /* indirect call */
    }

loc_0037355C: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00373563u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373560u); } /* indirect call */
    }

loc_00373563: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0037356Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373569u); } /* indirect call */
    }

loc_0037356C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00373573u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373570u); } /* indirect call */
    }

loc_00373573: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0037357B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00373582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037357Fu); } /* indirect call */
    }

loc_00373582: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00373589u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373586u); } /* indirect call */
    }

loc_00373589: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00373591u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037358Eu); } /* indirect call */
    }

loc_00373591: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0037359Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373597u); } /* indirect call */
    }

loc_0037359A: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x003735A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003735A0u); } /* indirect call */
    }

loc_003735A3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x003735AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003735A7u); } /* indirect call */
    }

loc_003735AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_003735B2: ;
    edx = MEM32(ebp);
    ecx = ebp;
    edi = 0x820FC8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003735BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003735BCu); } /* indirect call */
    }

loc_003735BF: ;
    esi = eax;
    ecx = 7;
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
    if ((_flags == 0)) goto loc_00373611; /* jne: not equal / not zero */

loc_003735CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373611; /* jne: not equal / not zero */

loc_003735D1: ;
    PUSH32(esp, 0x003735D6u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_003735D6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x003735DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003735DAu); } /* indirect call */
    }

loc_003735DD: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82F32C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003735F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003735EDu); } /* indirect call */
    }

loc_003735F0: ;
    esi = eax;
    PUSH32(esp, 0x003735F7u); RECOMP_ABI_CALL(0x00014679u, sub_00014679); /* call 0x00014679 */

loc_003735F7: ;
    ecx = MEM32(eax);
    edi = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00373603u); RECOMP_ABI_CALL(0x00015A2Eu, sub_00015A2E); /* call 0x00015A2E */

loc_00373603: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x34); PUSH32(esp, 0x00373609u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373606u); } /* indirect call */
    }

loc_00373609: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00373611: ;
    edx = MEM32(ebp);
    ecx = ebp;
    edi = 0x82F32C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0037361Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037361Bu); } /* indirect call */
    }

loc_0037361E: ;
    esi = eax;
    ecx = 5;
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
    if ((_flags == 0)) goto loc_003736E0; /* jne: not equal / not zero */

loc_0037362F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003736E0; /* jne: not equal / not zero */

loc_00373638: ;
    PUSH32(esp, 0x0037363Du); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_0037363D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00373644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373641u); } /* indirect call */
    }

loc_00373644: ;
    ecx = MEM32(0x8631FC);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EFFC);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00373659u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373656u); } /* indirect call */
    }

loc_00373659: ;
    edx = MEM32(edi);
    esi = eax;
    eax = MEM32(0x8631FC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0037366Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037366Au); } /* indirect call */
    }

loc_0037366D: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00373676u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373673u); } /* indirect call */
    }

loc_00373676: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x0037367Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037367Cu); } /* indirect call */
    }

loc_0037367F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = edi;
    ebp = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0037368Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373687u); } /* indirect call */
    }

loc_0037368A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebp);
    if (CMP_GE(_fas, _fbs)) goto loc_003736BC; /* jge: greater or equal (signed >=) */

loc_00373690: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82E488);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x003736A1u); RECOMP_ABI_CALL(0x00036882u, sub_00036882); /* call 0x00036882 */

loc_003736A1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x003736ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003736A8u); } /* indirect call */
    }

loc_003736AB: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003736B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003736B1u); } /* indirect call */
    }

loc_003736B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_003736BC: ;
    ebx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x82E488);
    PUSH32(esp, 0x003736C9u); RECOMP_ABI_CALL(0x00036882u, sub_00036882); /* call 0x00036882 */

loc_003736C9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x003736CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003736CCu); } /* indirect call */
    }

loc_003736CF: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003736D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003736D5u); } /* indirect call */
    }

loc_003736D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_003736E0: ;
    edx = MEM32(ebp);
    ecx = ebp;
    edi = 0x82EFFC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003736EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003736EAu); } /* indirect call */
    }

loc_003736ED: ;
    esi = eax;
    ecx = 7;
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
    if ((_flags == 0)) goto loc_00373744; /* jne: not equal / not zero */

loc_003736FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373744; /* jne: not equal / not zero */

loc_003736FF: ;
    PUSH32(esp, 0x00373704u); RECOMP_ABI_CALL(0x004DBC0Eu, sub_004DBC0E); /* call 0x004DBC0E */

loc_00373704: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0037370Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373708u); } /* indirect call */
    }

loc_0037370B: ;
    ecx = MEM32(0x8631FC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82EF50);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0037371Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037371Bu); } /* indirect call */
    }

loc_0037371E: ;
    esi = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00373727u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373724u); } /* indirect call */
    }

loc_00373727: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0037373D; /* je: equal / zero */

loc_0037372E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00373735u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373732u); } /* indirect call */
    }

loc_00373735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0037373D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00373744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373741u); } /* indirect call */
    }

loc_00373744: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00373747: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00373830
 * Original: 0x00373830 - 0x0037384E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00373838u); RECOMP_ABI_CALL(0x00027666u, sub_00027666); /* call 0x00027666 */

loc_00373838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373848; /* je: equal / zero */

loc_0037383F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373845u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00373845: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00373848: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373860
 * Original: 0x00373860 - 0x00373973 (275 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373860: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x0037386Cu); RECOMP_ABI_CALL(0x0059918Bu, sub_0059918B); /* call 0x0059918B */

loc_0037386C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00373874u); RECOMP_ABI_CALL(0x000306B2u, sub_000306B2); /* call 0x000306B2 */

loc_00373874: ;
    PUSH32(esp, 0x00373879u); RECOMP_ABI_CALL(0x00544C60u, sub_00544C60); /* call 0x00544C60 */

loc_00373879: ;
    eax = MEM32(0x9127D0);
    edx = MEM32(0x9127AC);
    ecx = MEM32(0x9127EC);
    MEM32(0x9006B4) = eax;
    MEM32(0x9006B8) = ecx;
    MEM32(0x8FE154) = edx;
    MEM32(0x912788) = 0x368930;
    MEM32(0x91278C) = 0x368980;
    MEM32(0x912790) = 0x3689A0;
    MEM32(0x912794) = 0x368E30;
    MEM32(0x9127B8) = 0x3689C0;
    MEM32(0x9127BC) = 0x36F130;
    MEM32(0x9127C4) = 0x3689D0;
    MEM32(0x9127C8) = 0x36F180;
    MEM32(0x9127D0) = 0x368A10;
    MEM32(0x9127A8) = 0x22FF3;
    MEM32(0x9127AC) = 0x368BE0;
    MEM32(0x912820) = 0x368D50;
    MEM32(0x91281C) = 0x368E20;
    MEM32(0x91280C) = 0x367D60;
    MEM32(0x9127DC) = 0x368E40;
    MEM32(0x9127E0) = 0x368E50;
    MEM32(0x9127E4) = 0x368E60;
    MEM32(0x9127E8) = 0x368E70;
    MEM32(0x91279C) = 0x368D40;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00373961u); RECOMP_ABI_CALL(0x0050BEC0u, sub_0050BEC0); /* call 0x0050BEC0 */

loc_00373961: ;
    PUSH32(esp, 0x00373966u); RECOMP_ABI_CALL(0x00031323u, sub_00031323); /* call 0x00031323 */

loc_00373966: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037396Fu); RECOMP_ABI_CALL(0x00019C0Au, sub_00019C0A); /* call 0x00019C0A */

loc_0037396F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003739C0
 * Original: 0x003739C0 - 0x003739F7 (55 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003739C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003739C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003739E1; /* je: equal / zero */

loc_003739C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003739CFu); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_003739CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003739E1; /* jne: not equal / not zero */

loc_003739D6: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003739DEu); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_003739DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003739E1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003739F1; /* je: equal / zero */

loc_003739E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003739EEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003739EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003739F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373A10
 * Original: 0x00373A10 - 0x00373AB7 (167 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373A10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00373A27u); RECOMP_ABI_CALL(0x00012EAFu, sub_00012EAF); /* call 0x00012EAF */

loc_00373A27: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0x83135C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00373A39u); RECOMP_ABI_CALL(0x00011780u, sub_00011780); /* call 0x00011780 */

loc_00373A39: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x30) = ecx;
    ecx = esi + 0x3C;
    MEM32(esi) = 0x83134C;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x00373A54u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_00373A54: ;
    eax = 2;
    edi = esi + 0x5C;
    ecx = edi;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM8(esi + 0x58) = LO8(ebx);
    MEM8(esi + 0x59) = LO8(ebx);
    PUSH32(esp, 0x00373A75u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_00373A75: ;
    ecx = edi;
    MEM8(esi + 0x64) = LO8(ebx);
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x6C) = ebx;
    MEM8(esi + 0x70) = LO8(ebx);
    MEM8(esi + 0x71) = LO8(ebx);
    MEM8(esi + 0x72) = LO8(ebx);
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    PUSH32(esp, 0x00373A94u); RECOMP_ABI_CALL(0x0001DDBEu, sub_0001DDBE); /* call 0x0001DDBE */

loc_00373A94: ;
    PUSH32(esp, 0x00373A99u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00373A99: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 0x2AA7D);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00373AA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373AA6u); } /* indirect call */
    }

loc_00373AA9: ;
    POP32(esp, edi);
    MEM8(esi + 0x4C) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00373AE0
 * Original: 0x00373AE0 - 0x00373B13 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83134C;
    PUSH32(esp, 0x00373AEEu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00373AEE: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2AA7D);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00373AFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373AF8u); } /* indirect call */
    }

loc_00373AFB: ;
    ecx = esi + 0x5C;
    PUSH32(esp, 0x00373B03u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00373B03: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x00373B0Bu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00373B0B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001C18A(); return; /* tail jmp 0x0001C18A */

}

/**
 * sub_00373B20
 * Original: 0x00373B20 - 0x00373BAF (143 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373B20: ;
    PUSH32(esp, edi);
    edi = MEM32(0x9006BC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373BAD; /* je: equal / zero */

loc_00373B2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_00373B31: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373BA1; /* je: equal / zero */

loc_00373B38: ;
    esi = edi;
    ebx = edi + 0x110;
    edi = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373B48u); RECOMP_ABI_CALL(0x0003394Du, sub_0003394D); /* call 0x0003394D */

loc_00373B48: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373B5D; /* je: equal / zero */

loc_00373B51: ;
    ecx = MEM32(esi + 0x114);
    MEM32(eax + 0x114) = ecx;

loc_00373B5D: ;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373B71; /* je: equal / zero */

loc_00373B67: ;
    edx = MEM32(ebx);
    MEM32(eax + 0x110) = edx;
    goto loc_00373B78;

loc_00373B71: ;
    eax = MEM32(ebx);
    MEM32(0x9006BC) = eax;

loc_00373B78: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373B96; /* je: equal / zero */

loc_00373B7E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00373B84u); RECOMP_ABI_CALL(0x00509D60u, sub_00509D60); /* call 0x00509D60 */

loc_00373B84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373B96; /* jne: not equal / not zero */

loc_00373B8B: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00373B93u); RECOMP_ABI_CALL(0x0050A2C0u, sub_0050A2C0); /* call 0x0050A2C0 */

loc_00373B93: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00373B96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373B9Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00373B9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00373BA7;

loc_00373BA1: ;
    edi = MEM32(edi + 0x110);

loc_00373BA7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373B31; /* jne: not equal / not zero */

loc_00373BAB: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00373BAD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00373BE0
 * Original: 0x00373BE0 - 0x00373C4A (106 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(0x9006A1) = 1;
    SET_LO8(eax, MEM8(edi + 0xF5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373BFA; /* je: equal / zero */

loc_00373BF5: ;
    PUSH32(esp, 0x00373BFAu); RECOMP_ABI_CALL(0x00037D68u, sub_00037D68); /* call 0x00037D68 */

loc_00373BFA: ;
    PUSH32(esp, 0x00373BFFu); RECOMP_ABI_CALL(0x0001FE7Fu, sub_0001FE7F); /* call 0x0001FE7F */

loc_00373BFF: ;
    ecx = eax;
    PUSH32(esp, 0x00373C06u); RECOMP_ABI_CALL(0x000112A8u, sub_000112A8); /* call 0x000112A8 */

loc_00373C06: ;
    PUSH32(esp, 0x00373C0Bu); RECOMP_ABI_CALL(0x005400B0u, sub_005400B0); /* call 0x005400B0 */

loc_00373C0B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x11 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00373C17; /* jbe: below or equal (unsigned <=) */

loc_00373C12: ;
    esi = 0x11;

loc_00373C17: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00373C1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373C1Cu); } /* indirect call */
    }

loc_00373C1F: ;
    PUSH32(esp, 0x00373C24u); RECOMP_ABI_CALL(0x00540380u, sub_00540380); /* call 0x00540380 */

loc_00373C24: ;
    PUSH32(esp, 0x00373C29u); RECOMP_ABI_CALL(0x005400A0u, sub_005400A0); /* call 0x005400A0 */

loc_00373C29: ;
    PUSH32(esp, 0x00373C2Eu); RECOMP_ABI_CALL(0x00544130u, sub_00544130); /* call 0x00544130 */

loc_00373C2E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373C34u); RECOMP_ABI_CALL(0x00509720u, sub_00509720); /* call 0x00509720 */

loc_00373C34: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x00373C3Eu); RECOMP_ABI_CALL(0x00023EC6u, sub_00023EC6); /* call 0x00023EC6 */

loc_00373C3E: ;
    POP32(esp, edi);
    MEM8(0x9006A1) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373C70
 * Original: 0x00373C70 - 0x00373CCE (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00373C78u); RECOMP_ABI_CALL(0x0002D0B6u, sub_0002D0B6); /* call 0x0002D0B6 */

loc_00373C78: ;
    eax = MEM32(esi + 0xC0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00373CCA; /* ja: above (unsigned >) */

loc_00373C84: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x373CD0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00373C8Bu) goto loc_00373C8B;
    if (_jt == 0x00373C9Bu) goto loc_00373C9B;
    if (_jt == 0x00373CABu) goto loc_00373CAB;
    if (_jt == 0x00373CC3u) goto loc_00373CC3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00373C8B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00373C97u); RECOMP_ABI_CALL(0x000336D2u, sub_000336D2); /* call 0x000336D2 */

loc_00373C97: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00373C9B: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00373CA7u); RECOMP_ABI_CALL(0x0002E1F5u, sub_0002E1F5); /* call 0x0002E1F5 */

loc_00373CA7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00373CAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00373CB2u); RECOMP_ABI_CALL(0x00509990u, sub_00509990); /* call 0x00509990 */

loc_00373CB2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC0) = 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00373CC3: ;
    ecx = esi;
    PUSH32(esp, 0x00373CCAu); RECOMP_ABI_CALL(0x0002F4E7u, sub_0002F4E7); /* call 0x0002F4E7 */

loc_00373CCA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373CCE
 * Original: 0x00373CCE - 0x00373D3C (110 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373CCE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373CCE: ;
    edi = edi;
    edi = MEM32(edi + esi);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + -1426049220) = MEM8(ebx + -1426049220) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx + -1426049220)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x37) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x37 (8-bit) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x37) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x37 (8-bit) */
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
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x902534);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00373D0Fu); RECOMP_ABI_CALL(0x00021509u, sub_00021509); /* call 0x00021509 */

loc_00373D0F: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00373D1Bu); RECOMP_ABI_CALL(0x0002938Au, sub_0002938A); /* call 0x0002938A */

loc_00373D1B: ;
    PUSH32(esp, 0x00373D20u); RECOMP_ABI_CALL(0x00031B1Bu, sub_00031B1B); /* call 0x00031B1B */

loc_00373D20: ;
    ecx = eax;
    PUSH32(esp, 0x00373D27u); RECOMP_ABI_CALL(0x0001A1E1u, sub_0001A1E1); /* call 0x0001A1E1 */

loc_00373D27: ;
    ecx = MEM32(esi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373D37; /* je: equal / zero */

loc_00373D31: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00373D37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373D34u); } /* indirect call */
    }

loc_00373D37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373D50
 * Original: 0x00373D50 - 0x00373D7E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373D50(void)
{

loc_00373D50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x900708);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00373D64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373D61u); } /* indirect call */
    }

loc_00373D64: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373D6Au); RECOMP_ABI_CALL(0x00023395u, sub_00023395); /* call 0x00023395 */

loc_00373D6A: ;
    ecx = eax;
    PUSH32(esp, 0x00373D71u); RECOMP_ABI_CALL(0x00026C5Cu, sub_00026C5C); /* call 0x00026C5C */

loc_00373D71: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00373D79u); RECOMP_ABI_CALL(0x0002938Au, sub_0002938A); /* call 0x0002938A */

loc_00373D79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373D90
 * Original: 0x00373D90 - 0x00373E10 (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373D90: ;
    eax = MEM32(0x900708);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373DFF; /* jne: not equal / not zero */

loc_00373D9F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x74);
    PUSH32(esp, 0x00373DA7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00373DA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373DC6; /* je: equal / zero */

loc_00373DAE: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00373DBFu); RECOMP_ABI_CALL(0x0002BFDBu, sub_0002BFDB); /* call 0x0002BFDB */

loc_00373DBF: ;
    MEM32(0x900708) = eax;
    goto loc_00373DCC;

loc_00373DC6: ;
    MEM32(0x900708) = ebx;

loc_00373DCC: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00373DD3u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00373DD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373DFF; /* je: equal / zero */

loc_00373DDA: ;
    PUSH32(esp, 0x00373DDFu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_00373DDF: ;
    _fa = (uint32_t)(MEM32(eax + 0x40C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373DFF; /* je: equal / zero */

loc_00373DE7: ;
    PUSH32(esp, 0x75);
    ecx = esp + 8;
    PUSH32(esp, 0x00373DF2u); RECOMP_ABI_CALL(0x00031431u, sub_00031431); /* call 0x00031431 */

loc_00373DF2: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00373DFCu); RECOMP_ABI_CALL(0x0002AA7Du, sub_0002AA7D); /* call 0x0002AA7D */

loc_00373DFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00373DFF: ;
    MEM8(0x90070D) = LO8(ebx);
    MEM8(0x90070C) = LO8(ebx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00373E30
 * Original: 0x00373E30 - 0x00373E78 (72 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83134C;
    PUSH32(esp, 0x00373E3Eu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00373E3E: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2AA7D);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00373E4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373E48u); } /* indirect call */
    }

loc_00373E4B: ;
    ecx = esi + 0x5C;
    PUSH32(esp, 0x00373E53u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00373E53: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x00373E5Bu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00373E5B: ;
    ecx = esi;
    PUSH32(esp, 0x00373E62u); RECOMP_ABI_CALL(0x0001C18Au, sub_0001C18A); /* call 0x0001C18A */

loc_00373E62: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00373E72; /* je: equal / zero */

loc_00373E69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00373E6Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00373E6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00373E72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00373E90
 * Original: 0x00373E90 - 0x00373FD2 (322 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373E90: ;
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
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373EA3u); RECOMP_ABI_CALL(0x0003143Bu, sub_0003143B); /* call 0x0003143B */

loc_00373EA3: ;
    ecx = MEM32(eax + 0x10);
    SET_LO8(edx, MEM8(0x8FC1CD));
    esi = ecx + 0x50;
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x14;
    xmm0 = XMM_SCALAR(MEMF(ecx * 4 + 0x82EB80)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx * 4 + 0x82EB88)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx * 4 + 0x82EB70)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx * 4 + 0x82EB78)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F0Fu); RECOMP_ABI_CALL(0x00557FF4u, sub_00557FF4); /* call 0x00557FF4 */

loc_00373F0F: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F1Au); RECOMP_ABI_CALL(0x0002938Au, sub_0002938A); /* call 0x0002938A */

loc_00373F1A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F1Fu); RECOMP_ABI_CALL(0x00031B1Bu, sub_00031B1B); /* call 0x00031B1B */

loc_00373F1F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F26u); RECOMP_ABI_CALL(0x0001A1E1u, sub_0001A1E1); /* call 0x0001A1E1 */

loc_00373F26: ;
    ecx = MEM32(ebx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373F36; /* je: equal / zero */

loc_00373F30: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00373F36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373F33u); } /* indirect call */
    }

loc_00373F36: ;
    eax = MEM32(0x900270);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00373FC9; /* je: equal / zero */

loc_00373F43: ;
    ecx = MEM32(0x900268);
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373F8F; /* jne: not equal / not zero */

loc_00373F51: ;
    eax = esp + 0x18;
    edx = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx + 0xCC;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0x4B65AF5;
    MEM32(esp + 0x20) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373F79u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00373F79: ;
    ecx = MEM32(0x900268);
    MEM32(ecx + 0x18) = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00373F8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00373FC9; /* jne: not equal / not zero */

loc_00373F94: ;
    eax = esp + 0x18;
    edx = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx + 0xCC;
    MEM32(esp + 0x18) = 2;
    MEM32(esp + 0x1C) = 0x4B65AF5;
    MEM32(esp + 0x20) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373FBCu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00373FBC: ;
    ecx = MEM32(0x900268);
    MEM32(ecx + 0x18) = 6;

loc_00373FC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00374030
 * Original: 0x00374030 - 0x0037405D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00374030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00374030: ;
    eax = MEM32(0x9006BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0037405B; /* je: equal / zero */

loc_0037403C: ;
    /* nop */

loc_00374040: ;
    ecx = MEM32(0x9006AC);
    PUSH32(esp, 0x0037404Bu); RECOMP_ABI_CALL(0x00012031u, sub_00012031); /* call 0x00012031 */

loc_0037404B: ;
    ecx = esi;
    PUSH32(esp, 0x00374052u); RECOMP_ABI_CALL(0x00023EC6u, sub_00023EC6); /* call 0x00023EC6 */

loc_00374052: ;
    eax = MEM32(0x9006BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00374040; /* jne: not equal / not zero */

loc_0037405B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
