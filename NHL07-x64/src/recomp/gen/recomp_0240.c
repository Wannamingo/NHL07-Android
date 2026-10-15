/**
 * nhl_07_recomp - Recompiled code chunk 240
 * Functions: 250 (0x0055F7A6 - 0x00567A51)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0055F7A6
 * Original: 0x0055F7A6 - 0x0055F7CA (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F7A6(void)
{

loc_0055F7A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x0055F7B2u); RECOMP_ABI_CALL(0x00574387u, sub_00574387); /* call 0x00574387 */

loc_0055F7B2: ;
    POP32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0055F7C6u); RECOMP_ABI_CALL(0x005618EEu, sub_005618EE); /* call 0x005618EE */

loc_0055F7C6: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F7CA
 * Original: 0x0055F7CA - 0x0055F7EE (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F7CA(void)
{

loc_0055F7CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x0055F7D6u); RECOMP_ABI_CALL(0x005743A5u, sub_005743A5); /* call 0x005743A5 */

loc_0055F7D6: ;
    POP32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0055F7EAu); RECOMP_ABI_CALL(0x005618EEu, sub_005618EE); /* call 0x005618EE */

loc_0055F7EA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F7EE
 * Original: 0x0055F7EE - 0x0055F812 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F7EE(void)
{

loc_0055F7EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x0055F7FAu); RECOMP_ABI_CALL(0x0057438Du, sub_0057438D); /* call 0x0057438D */

loc_0055F7FA: ;
    POP32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0055F80Eu); RECOMP_ABI_CALL(0x005618EEu, sub_005618EE); /* call 0x005618EE */

loc_0055F80E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F812
 * Original: 0x0055F812 - 0x0055F836 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055F812(void)
{

loc_0055F812: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0x0055F81Eu); RECOMP_ABI_CALL(0x005674A5u, sub_005674A5); /* call 0x005674A5 */

loc_0055F81E: ;
    POP32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x0055F832u); RECOMP_ABI_CALL(0x005618EEu, sub_005618EE); /* call 0x005618EE */

loc_0055F832: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F836
 * Original: 0x0055F836 - 0x0055F8F6 (192 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F836(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055F836: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F886; /* je: equal / zero */

loc_0055F847: ;
    eax = MEM32(esi + 4);
    edi = MEM32(ebp + 8);

loc_0055F84D: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F86F; /* jne: not equal / not zero */

loc_0055F855: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F86B; /* je: equal / zero */

loc_0055F859: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F86F; /* jne: not equal / not zero */

loc_0055F863: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F84D; /* jne: not equal / not zero */

loc_0055F86B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055F874;

loc_0055F86F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055F874: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F87F; /* je: equal / zero */

loc_0055F878: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F847; /* jne: not equal / not zero */

loc_0055F87F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F8DC; /* jne: not equal / not zero */

loc_0055F883: ;
    edi = MEM32(ebp + -4);

loc_0055F886: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F893u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055F893: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_0055F89E: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F89E; /* jne: not equal / not zero */

loc_0055F8A5: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8772B4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F8B5u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055F8B5: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_0055F8BE: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F8BE; /* jne: not equal / not zero */

loc_0055F8C8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F8D1; /* je: equal / zero */

loc_0055F8CE: ;
    MEM32(eax + 0xC) = esi;

loc_0055F8D1: ;
    eax = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    MEM32(edi) = esi;

loc_0055F8DC: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F8EAu); RECOMP_ABI_CALL(0x005743D5u, sub_005743D5); /* call 0x005743D5 */

loc_0055F8EA: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F8F6
 * Original: 0x0055F8F6 - 0x0055F9AF (185 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F8F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055F8F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F946; /* je: equal / zero */

loc_0055F907: ;
    eax = MEM32(esi + 4);
    edi = MEM32(ebp + 8);

loc_0055F90D: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F92F; /* jne: not equal / not zero */

loc_0055F915: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F92B; /* je: equal / zero */

loc_0055F919: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F92F; /* jne: not equal / not zero */

loc_0055F923: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F90D; /* jne: not equal / not zero */

loc_0055F92B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055F934;

loc_0055F92F: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055F934: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F93F; /* je: equal / zero */

loc_0055F938: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F907; /* jne: not equal / not zero */

loc_0055F93F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F99C; /* jne: not equal / not zero */

loc_0055F943: ;
    edi = MEM32(ebp + -4);

loc_0055F946: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F953u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055F953: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_0055F95E: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F95E; /* jne: not equal / not zero */

loc_0055F965: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8772B5);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055F975u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055F975: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_0055F97E: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F97E; /* jne: not equal / not zero */

loc_0055F988: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F991; /* je: equal / zero */

loc_0055F98E: ;
    MEM32(eax + 0xC) = esi;

loc_0055F991: ;
    eax = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    MEM32(edi) = esi;

loc_0055F99C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(0x915794);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055F9AF
 * Original: 0x0055F9AF - 0x0055FA6F (192 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055F9AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055F9AF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9FF; /* je: equal / zero */

loc_0055F9C0: ;
    eax = MEM32(esi + 4);
    edi = MEM32(ebp + 8);

loc_0055F9C6: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F9E8; /* jne: not equal / not zero */

loc_0055F9CE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9E4; /* je: equal / zero */

loc_0055F9D2: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055F9E8; /* jne: not equal / not zero */

loc_0055F9DC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F9C6; /* jne: not equal / not zero */

loc_0055F9E4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055F9ED;

loc_0055F9E8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055F9ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055F9F8; /* je: equal / zero */

loc_0055F9F1: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055F9C0; /* jne: not equal / not zero */

loc_0055F9F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FA55; /* jne: not equal / not zero */

loc_0055F9FC: ;
    edi = MEM32(ebp + -4);

loc_0055F9FF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FA0Cu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055FA0C: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_0055FA17: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FA17; /* jne: not equal / not zero */

loc_0055FA1E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8772B6);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FA2Eu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055FA2E: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_0055FA37: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FA37; /* jne: not equal / not zero */

loc_0055FA41: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FA4A; /* je: equal / zero */

loc_0055FA47: ;
    MEM32(eax + 0xC) = esi;

loc_0055FA4A: ;
    eax = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    MEM32(edi) = esi;

loc_0055FA55: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FA63u); RECOMP_ABI_CALL(0x005674A5u, sub_005674A5); /* call 0x005674A5 */

loc_0055FA63: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055FA6F
 * Original: 0x0055FA6F - 0x0055FB2F (192 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FA6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0055FA6F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FABF; /* je: equal / zero */

loc_0055FA80: ;
    eax = MEM32(esi + 4);
    edi = MEM32(ebp + 8);

loc_0055FA86: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055FAA8; /* jne: not equal / not zero */

loc_0055FA8E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FAA4; /* je: equal / zero */

loc_0055FA92: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0055FAA8; /* jne: not equal / not zero */

loc_0055FA9C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FA86; /* jne: not equal / not zero */

loc_0055FAA4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0055FAAD;

loc_0055FAA8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0055FAAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FAB8; /* je: equal / zero */

loc_0055FAB1: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FA80; /* jne: not equal / not zero */

loc_0055FAB8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FB15; /* jne: not equal / not zero */

loc_0055FABC: ;
    edi = MEM32(ebp + -4);

loc_0055FABF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FACCu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0055FACC: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_0055FAD7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FAD7; /* jne: not equal / not zero */

loc_0055FADE: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8772B7);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FAEEu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0055FAEE: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;

loc_0055FAF7: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0055FAF7; /* jne: not equal / not zero */

loc_0055FB01: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FB0A; /* je: equal / zero */

loc_0055FB07: ;
    MEM32(eax + 0xC) = esi;

loc_0055FB0A: ;
    eax = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    MEM32(edi) = esi;

loc_0055FB15: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FB23u); RECOMP_ABI_CALL(0x005743A5u, sub_005743A5); /* call 0x005743A5 */

loc_0055FB23: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055FB2F
 * Original: 0x0055FB2F - 0x0055FB52 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FB2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FB2F: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x58;
    PUSH32(esp, 0x0055FB3Au); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0055FB3A: ;
    ecx = esi + 0x44;
    PUSH32(esp, 0x0055FB42u); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0055FB42: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x0055FB4Au); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_0055FB4A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00566C20(); return; /* tail jmp 0x00566C20 */

}

/**
 * sub_0055FB52
 * Original: 0x0055FB52 - 0x0055FB5F (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FB52(void)
{

loc_0055FB52: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    MEM32(ecx + 0x10) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055FB5F
 * Original: 0x0055FB5F - 0x0055FB73 (20 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FB5F(void)
{

loc_0055FB5F: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055FB73
 * Original: 0x0055FB73 - 0x0055FBC4 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FB73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FB73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x2004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FB80u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_0055FB80: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8196;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FB93u); RECOMP_ABI_CALL(0x005CC6CDu, sub_005CC6CD); /* call 0x005CC6CD */

loc_0055FB93: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FBA6; /* je: equal / zero */

loc_0055FB9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055FBA6; /* jb: below (unsigned <) */

loc_0055FBA2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;

loc_0055FBA6: ;
    eax = ebp + -8196;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FBBAu); RECOMP_ABI_CALL(0x00566C41u, sub_00566C41); /* call 0x00566C41 */

loc_0055FBBA: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FBC4
 * Original: 0x0055FBC4 - 0x0055FC15 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FBC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FBC4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x4004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FBD1u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_0055FBD1: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -16388;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FBE4u); RECOMP_ABI_CALL(0x005D07C6u, sub_005D07C6); /* call 0x005D07C6 */

loc_0055FBE4: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FBF7; /* je: equal / zero */

loc_0055FBEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055FBF7; /* jb: below (unsigned <) */

loc_0055FBF3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;

loc_0055FBF7: ;
    eax = ebp + -16388;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FC0Bu); RECOMP_ABI_CALL(0x00566CB6u, sub_00566CB6); /* call 0x00566CB6 */

loc_0055FC0B: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FC15
 * Original: 0x0055FC15 - 0x0055FC68 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FC15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FC15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x2004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FC22u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_0055FC22: ;
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -8196;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FC35u); RECOMP_ABI_CALL(0x005CC6CDu, sub_005CC6CD); /* call 0x005CC6CD */

loc_0055FC35: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FC48; /* je: equal / zero */

loc_0055FC3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055FC48; /* jb: below (unsigned <) */

loc_0055FC44: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;

loc_0055FC48: ;
    eax = ebp + -8196;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -4;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FC5Eu); RECOMP_ABI_CALL(0x00566C41u, sub_00566C41); /* call 0x00566C41 */

loc_0055FC5E: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FC68
 * Original: 0x0055FC68 - 0x0055FCBB (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FC68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FC68: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x4004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FC75u); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_0055FC75: ;
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -16388;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FC88u); RECOMP_ABI_CALL(0x005D07C6u, sub_005D07C6); /* call 0x005D07C6 */

loc_0055FC88: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FC9B; /* je: equal / zero */

loc_0055FC92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0055FC9B; /* jb: below (unsigned <) */

loc_0055FC97: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = eax;

loc_0055FC9B: ;
    eax = ebp + -16388;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -4;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FCB1u); RECOMP_ABI_CALL(0x00566CB6u, sub_00566CB6); /* call 0x00566CB6 */

loc_0055FCB1: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FCBB
 * Original: 0x0055FCBB - 0x0055FCE8 (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FCBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FCBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FCCC; /* jne: not equal / not zero */

loc_0055FCC4: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0055FCCC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FCE0; /* je: equal / zero */

loc_0055FCD2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FCE0; /* jne: not equal / not zero */

loc_0055FCD8: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0055FCE0: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0055FCE8
 * Original: 0x0055FCE8 - 0x0055FDCE (230 bytes, 83 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FCE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FCE8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FCF8u); RECOMP_ABI_CALL(0x0056704Bu, sub_0056704B); /* call 0x0056704B */

loc_0055FCF8: ;
    edi = esi + 0x30;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD02u); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_0055FD02: ;
    ebx = esi + 0x44;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD0Cu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_0055FD0C: ;
    ecx = esi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD14u); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_0055FD14: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD1Bu); RECOMP_ABI_CALL(0x005743F3u, sub_005743F3); /* call 0x005743F3 */

loc_0055FD1B: ;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD23u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055FD23: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD2Eu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_0055FD2E: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8772D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD3Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055FD3D: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD48u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_0055FD48: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD50u); RECOMP_ABI_CALL(0x00567499u, sub_00567499); /* call 0x00567499 */

loc_0055FD50: ;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD58u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055FD58: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD63u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_0055FD63: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8772DC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD71u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055FD71: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD7Cu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_0055FD7C: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD82u); RECOMP_ABI_CALL(0x005743DBu, sub_005743DB); /* call 0x005743DB */

loc_0055FD82: ;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD8Au); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0055FD8A: ;
    eax = ebp + 8;
    ebx = esi + 0x58;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FD98u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_0055FD98: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8772E4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FDA6u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0055FDA6: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FDB1u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_0055FDB1: ;
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 8) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_0055FDC5; /* je: equal / zero */

loc_0055FDBF: ;
    MEM32(eax) = 0x55FCBB;

loc_0055FDC5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055FDCE
 * Original: 0x0055FDCE - 0x0055FE59 (139 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0055FDCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FDCE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = ecx;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FDEBu); RECOMP_ABI_CALL(0x000238E5u, sub_000238E5); /* call 0x000238E5 */

loc_0055FDEB: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0055FDFB; /* jle: less or equal (signed <=) */

loc_0055FDF0: ;
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x8DBED0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0055FDFE; /* jne: not equal / not zero */

loc_0055FDFB: ;
    ebx = MEM32(ebp + 8);

loc_0055FDFE: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FE0Eu); RECOMP_ABI_CALL(0x0055FE84u, sub_0055FE84); /* call 0x0055FE84 */

loc_0055FE0E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0055FE1A; /* jg: greater (signed >) */

loc_0055FE13: ;
    MEM32(ebp + -4) = 0x87DB50;

loc_0055FE1A: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FE2Au); RECOMP_ABI_CALL(0x0055FEB1u, sub_0055FEB1); /* call 0x0055FEB1 */

loc_0055FE2A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    ecx = esi;
    if (CMP_G(_fas, _fbs)) goto loc_0055FE47; /* jg: greater (signed >) */

loc_0055FE31: ;
    eax = ebp + 8;
    MEM8(ebp + 0xB) = 0xFF;
    MEM8(ebp + 0xA) = 0xFF;
    MEM8(ebp + 9) = 0xFF;
    MEM8(ebp + 8) = 0xFF;
    PUSH32(esp, eax);
    goto loc_0055FE4A;

loc_0055FE47: ;
    PUSH32(esp, MEM32(ebp + 8));

loc_0055FE4A: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0055FE53u); RECOMP_ABI_CALL(0x00566D24u, sub_00566D24); /* call 0x00566D24 */

loc_0055FE53: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0055FE84
 * Original: 0x0055FE84 - 0x0055FEB1 (45 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FE84(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FE84: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FE9D; /* je: equal / zero */

loc_0055FE8B: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    goto loc_0055FEAE;

loc_0055FE9D: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFE6Au;

loc_0055FEAE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055FEB1
 * Original: 0x0055FEB1 - 0x0055FEDE (45 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FEB1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FEB1: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FECA; /* je: equal / zero */

loc_0055FEB8: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    goto loc_0055FEDB;

loc_0055FECA: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFE6Au;

loc_0055FEDB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0055FF55
 * Original: 0x0055FF55 - 0x0055FF9C (71 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0055FF55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0055FF55: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00574573(); return; /* tail jmp 0x00574573 */

loc_0055FF81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055FF9C
 * Original: 0x0055FF9C - 0x0055FFC4 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055FF9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FF9C: ;
    ecx = MEM32(0x9159AC);
    PUSH32(esp, 0x0055FFA7u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0055FFA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FFC1; /* je: equal / zero */

loc_0055FFAB: ;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0055FFC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FFC0
 * Original: 0x0055FFC0 - 0x0055FFC4 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055FFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FFC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0055FFC4
 * Original: 0x0055FFC4 - 0x0055FFE8 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055FFC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FFC4: ;
    ecx = MEM32(0x9159AC);
    PUSH32(esp, 0x0055FFCFu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0055FFCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0055FFE5; /* je: equal / zero */

loc_0055FFD3: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0055FFE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0055FFE8
 * Original: 0x0055FFE8 - 0x0056000C (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0055FFE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0055FFE8: ;
    ecx = MEM32(0x9159AC);
    PUSH32(esp, 0x0055FFF3u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_0055FFF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560009; /* je: equal / zero */

loc_0055FFF7: ;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00560009: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0056002C
 * Original: 0x0056002C - 0x00560050 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056002C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056002C: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00560040; /* jae: above or equal (unsigned >=) */

loc_00560037: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0056004D;

loc_00560040: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0056004D; /* jae: above or equal (unsigned >=) */

loc_00560045: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 4) = MEM32(eax + 4) | edx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0056004D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00560037
 * Original: 0x00560037 - 0x00560050 (25 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560037(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560037: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax) = MEM32(eax) | edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0056004D;

    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0056004D; /* jae: above or equal (unsigned >=) */

loc_00560045: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 4) = MEM32(eax + 4) | edx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0056004D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00560056
 * Original: 0x00560056 - 0x00560063 (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560056(void)
{

loc_00560056: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00560063
 * Original: 0x00560063 - 0x0056007F (28 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00560063(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560063: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056007A; /* jne: not equal / not zero */

loc_0056006D: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056007A; /* jne: not equal / not zero */

loc_00560075: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0056007C;

loc_0056007A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056007C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005600D7
 * Original: 0x005600D7 - 0x00560155 (126 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005600D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005600D7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x9159A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9159A0), ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0056010A; /* jbe: below or equal (unsigned <=) */

loc_005600E9: ;
    PUSH32(esp, esi);

loc_005600EA: ;
    ecx = MEM32(0x9159B0);
    esi = edi * 4 + 0x915798;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005600FEu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_005600FE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9159A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x9159A0) (32-bit) */
    MEM32(esi) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_005600EA; /* jb: below (unsigned <) */

loc_00560109: ;
    POP32(esp, esi);

loc_0056010A: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(0x9159A0) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560119u); RECOMP_ABI_CALL(0x00560DE8u, sub_00560DE8); /* call 0x00560DE8 */

loc_00560119: ;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056011C: ;
    MEM32(eax + 0x915A14) = ebx;
    MEM32(eax + 0x915A10) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0056011C; /* jb: below (unsigned <) */

loc_00560130: ;
    eax = MEM32(ebp + 8);
    MEM32(0x915A0C) = ebx;
    MEM32(0x915A08) = ebx;
    MEM32(0x915A34) = ebx;
    MEM32(0x915A30) = ebx;
    POP32(esp, edi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00560155
 * Original: 0x00560155 - 0x00560175 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560155(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560155: ;
    eax = MEM32(0x9159A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00560163; /* jb: below (unsigned <) */

loc_00560161: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00560163: ;
    ecx = MEM32(esp + 4);
    MEM32(eax * 4 + 0x915798) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9159A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0056018B
 * Original: 0x0056018B - 0x005601D0 (69 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056018B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056018B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00560197u); RECOMP_ABI_CALL(0x00560063u, sub_00560063); /* call 0x00560063 */

loc_00560197: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005601CA; /* je: equal / zero */

loc_0056019B: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    goto loc_005601B4;

loc_005601A2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005601BA; /* je: equal / zero */

loc_005601A6: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601CA; /* jne: not equal / not zero */

loc_005601AE: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + 8);

loc_005601B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601A2; /* jne: not equal / not zero */

loc_005601B8: ;
    goto loc_005601BE;

loc_005601BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601CA; /* jne: not equal / not zero */

loc_005601BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601CA; /* jne: not equal / not zero */

loc_005601C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601CA; /* jne: not equal / not zero */

loc_005601C6: ;
    SET_LO8(eax, 1);
    goto loc_005601CC;

loc_005601CA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_005601CC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005601D0
 * Original: 0x005601D0 - 0x005601EC (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005601D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005601D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    goto loc_005601E5;

loc_005601D9: ;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, 0x005601E2u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_005601E2: ;
    esi = MEM32(esi + 8);

loc_005601E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005601D9; /* jne: not equal / not zero */

loc_005601E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00560283
 * Original: 0x00560283 - 0x005602A4 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560283(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560283: ;
    eax = MEM32(esp + 4);
    MEM32(0x91599C) = eax;
    PUSH32(esp, 0x00560291u); RECOMP_ABI_CALL(0x00562A76u, sub_00562A76); /* call 0x00562A76 */

loc_00560291: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x005602A0u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_005602A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005602A4
 * Original: 0x005602A4 - 0x005602B1 (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005602A4(void)
{

loc_005602A4: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005602D3
 * Original: 0x005602D3 - 0x005602EE (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005602D3(void)
{

loc_005602D3: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM32(0x915998) = eax;
    PUSH32(esp, 0x005602E2u); RECOMP_ABI_CALL(0x00560283u, sub_00560283); /* call 0x00560283 */

loc_005602E2: ;
    eax = MEM32(esp + 8);
    POP32(esp, ecx);
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_005602EE
 * Original: 0x005602EE - 0x00560419 (299 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005602EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005602EE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x915A30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915A30), edi (32-bit) */
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00560306; /* jne: not equal / not zero */

loc_005602FE: ;
    _fa = (uint32_t)(MEM32(0x915A34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915A34), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056034F; /* je: equal / zero */

loc_00560306: ;
    edx = MEM32(0x9159B8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0056034F; /* jae: above or equal (unsigned >=) */

loc_00560311: ;
    esi = MEM32(0x9159BC);

loc_00560317: ;
    eax = MEM32(edx * 4 + 0x915A30);
    goto loc_00560331;

loc_00560320: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0056033B; /* jae: above or equal (unsigned >=) */

loc_00560325: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00560379; /* jne: not equal / not zero */

loc_0056032A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9159BC) = esi;

loc_00560331: ;
    ebx = eax;
    ecx = esi;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560320; /* jne: not equal / not zero */

loc_0056033B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(0x9159B8) = edx;
    MEM32(0x9159BC) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00560317; /* jb: below (unsigned <) */

loc_0056034F: ;
    _fa = (uint32_t)(MEM32(0x915A08)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915A08), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056035F; /* jne: not equal / not zero */

loc_00560357: ;
    _fa = (uint32_t)(MEM32(0x915A0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915A0C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005603CC; /* je: equal / zero */

loc_0056035F: ;
    edx = MEM32(0x9159C0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005603CC; /* jae: above or equal (unsigned >=) */

loc_0056036A: ;
    esi = MEM32(0x9159C4);

loc_00560370: ;
    eax = MEM32(edx * 4 + 0x915A08);
    goto loc_005603AE;

loc_00560379: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = edx + esi;
    edx = MEM32(esp + 0x14);
    MEM32(edx) = ecx;
    edx = MEM32(0x9159A4);
    ecx = MEM32(edx + ecx * 4 + 0xC);
    edx = MEM32(esp + 0x18);
    MEM32(edx) = ecx;
    MEM32(0x9159BC) = MEM32(0x9159BC) + 1;
    _fa = (uint32_t)(MEM32(0x9159BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005603E7;

loc_0056039D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_005603B8; /* jae: above or equal (unsigned >=) */

loc_005603A2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005603EE; /* jne: not equal / not zero */

loc_005603A7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x9159C4) = esi;

loc_005603AE: ;
    ebx = eax;
    ecx = esi;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056039D; /* jne: not equal / not zero */

loc_005603B8: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    MEM32(0x9159C0) = edx;
    MEM32(0x9159C4) = esi;
    if (CMP_B(_fa, _fb)) goto loc_00560370; /* jb: below (unsigned <) */

loc_005603CC: ;
    MEM32(0x9159C0) = edi;
    MEM32(0x9159C4) = edi;
    MEM32(0x9159B8) = edi;
    MEM32(0x9159BC) = edi;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_005603E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_005603EE: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560407; /* je: equal / zero */

loc_00560401: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ecx + 0xC);

loc_00560407: ;
    ecx = MEM32(ecx + edx * 4 + 0xC);
    edx = MEM32(esp + 0x18);
    MEM32(edx) = ecx;
    MEM32(0x9159C4) = MEM32(0x9159C4) + 1;
    _fa = (uint32_t)(MEM32(0x9159C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_005603E7;

}

/**
 * sub_00560419
 * Original: 0x00560419 - 0x005604A0 (135 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560419(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560419: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x9159A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9159A0), eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00560499; /* jbe: below or equal (unsigned <=) */

loc_0056042D: ;
    esi = MEM32(ebp + 0xC);

loc_00560430: ;
    edi = MEM32(eax * 4 + 0x915798);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560441u); RECOMP_ABI_CALL(0x00560063u, sub_00560063); /* call 0x00560063 */

loc_00560441: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056048A; /* je: equal / zero */

loc_00560445: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056046F; /* jne: not equal / not zero */

loc_00560449: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560466; /* jne: not equal / not zero */

loc_00560450: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560457; /* jne: not equal / not zero */

loc_00560454: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00560457: ;
    eax = edi;
    goto loc_0056049B;

loc_0056045B: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + ecx * 4 + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + ecx * 4 + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056048A; /* jne: not equal / not zero */

loc_00560466: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056045B; /* jne: not equal / not zero */

loc_0056046D: ;
    goto loc_00560450;

loc_0056046F: ;
    ecx = edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0xC;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00560478: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056048A; /* jne: not equal / not zero */

loc_0056047F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x37 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00560478; /* jb: below (unsigned <) */

loc_00560488: ;
    goto loc_00560450;

loc_0056048A: ;
    eax = MEM32(ebp + -4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x9159A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x9159A0) (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00560430; /* jb: below (unsigned <) */

loc_00560499: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056049B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005604A0
 * Original: 0x005604A0 - 0x00560519 (121 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005604A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005604A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_005604BE; /* je: equal / zero */

loc_005604B4: ;
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(eax + 0xC);
    goto loc_005604C0;

loc_005604BE: ;
    edi = ecx;

loc_005604C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005604D7; /* je: equal / zero */

loc_005604C4: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 4 + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x10); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0056050D; /* jnp: not parity */

loc_005604D7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005604E3; /* jne: not equal / not zero */

loc_005604DB: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ecx;
    if ((_fa != 0)) goto loc_005604EF; /* jne: not equal / not zero */

loc_005604E3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005604E8u); RECOMP_ABI_CALL(0x00560BF1u, sub_00560BF1); /* call 0x00560BF1 */

loc_005604E8: ;
    MEM32(esi) = eax;
    MEM32(eax + 0xC) = edi;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) | ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_005604EF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_005604F9; /* jne: not equal / not zero */

loc_005604F5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005604FC;

loc_005604F9: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005604FC: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056050Du); RECOMP_ABI_CALL(0x00560B5Cu, sub_00560B5C); /* call 0x00560B5C */

loc_0056050D: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00560519
 * Original: 0x00560519 - 0x00560588 (111 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560519(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560519: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    edx = ecx;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00560534; /* je: equal / zero */

loc_0056052A: ;
    eax = ecx;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(eax + 0xC);
    goto loc_00560536;

loc_00560534: ;
    edi = ecx;

loc_00560536: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00560546; /* je: equal / zero */

loc_0056053D: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560578; /* je: equal / zero */

loc_00560546: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560553; /* jne: not equal / not zero */

loc_0056054B: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00560560; /* jne: not equal / not zero */

loc_00560553: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560558u); RECOMP_ABI_CALL(0x00560BF1u, sub_00560BF1); /* call 0x00560BF1 */

loc_00560558: ;
    MEM32(esi) = eax;
    MEM32(eax + 0xC) = edi;
    MEM32(esi) = MEM32(esi) | 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00560560: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0056056A; /* jne: not equal / not zero */

loc_00560566: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0056056D;

loc_0056056A: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0056056D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560578u); RECOMP_ABI_CALL(0x00560B88u, sub_00560B88); /* call 0x00560B88 */

loc_00560578: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00560588
 * Original: 0x00560588 - 0x005605F7 (111 bytes, 47 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560588(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560588: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    edx = ecx;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_005605A3; /* je: equal / zero */

loc_00560599: ;
    eax = ecx;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(eax + 0xC);
    goto loc_005605A5;

loc_005605A3: ;
    edi = ecx;

loc_005605A5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = MEM32(ebp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_005605B5; /* je: equal / zero */

loc_005605AC: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005605E7; /* je: equal / zero */

loc_005605B5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005605C2; /* jne: not equal / not zero */

loc_005605BA: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_005605CF; /* jne: not equal / not zero */

loc_005605C2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005605C7u); RECOMP_ABI_CALL(0x00560BF1u, sub_00560BF1); /* call 0x00560BF1 */

loc_005605C7: ;
    MEM32(esi) = eax;
    MEM32(eax + 0xC) = edi;
    MEM32(esi) = MEM32(esi) | 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_005605CF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_005605D9; /* jne: not equal / not zero */

loc_005605D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005605DC;

loc_005605D9: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005605DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005605E7u); RECOMP_ABI_CALL(0x00560BB0u, sub_00560BB0); /* call 0x00560BB0 */

loc_005605E7: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005605F7
 * Original: 0x005605F7 - 0x00560633 (60 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005605F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005605F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0056060B; /* je: equal / zero */

loc_00560603: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0056062F;

loc_0056060B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560618; /* je: equal / zero */

loc_0056060F: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(eax + edx * 4 + 0xC);
    goto loc_00560625;

loc_00560618: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(0x9159A4);
    eax = MEM32(edx + eax * 4 + 0xC);

loc_00560625: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_0056062F: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00560633
 * Original: 0x00560633 - 0x0056066F (60 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560633(void)
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

loc_00560633: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560647; /* je: equal / zero */

loc_0056063F: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0056066B;

loc_00560647: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560654; /* je: equal / zero */

loc_0056064B: ;
    edx = MEM32(ebp + 0xC);
    fp_push(MEMF(eax + edx * 4 + 0xC)); /* fld float */
    goto loc_00560661;

loc_00560654: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(0x9159A4);
    fp_push(MEMF(edx + eax * 4 + 0xC)); /* fld float */

loc_00560661: ;
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_0056066B: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0056066F
 * Original: 0x0056066F - 0x005606AB (60 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056066F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056066F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560683; /* je: equal / zero */

loc_0056067B: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_005606A7;

loc_00560683: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560690; /* je: equal / zero */

loc_00560687: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(eax + edx * 4 + 0xC);
    goto loc_0056069D;

loc_00560690: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(0x9159A4);
    eax = MEM32(edx + eax * 4 + 0xC);

loc_0056069D: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_005606A7: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_005606BA
 * Original: 0x005606BA - 0x005606D4 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005606BA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005606BA: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005606D2; /* je: equal / zero */

loc_005606C3: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_005606D2; /* je: equal / zero */

loc_005606C8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x005606CEu); RECOMP_ABI_CALL(0x00560C8Bu, sub_00560C8B); /* call 0x00560C8B */

loc_005606CE: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_005606D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005606D4
 * Original: 0x005606D4 - 0x005607F4 (288 bytes, 90 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005606D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005606D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    MEM32(ebp + -4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_005606F9; /* je: equal / zero */

loc_005606EA: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_005606F9; /* je: equal / zero */

loc_005606EF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005606F5u); RECOMP_ABI_CALL(0x00560C8Bu, sub_00560C8B); /* call 0x00560C8B */

loc_005606F5: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_005606F9: ;
    _fa = (uint32_t)(MEM8(0x9159A8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x9159A8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056070F; /* je: equal / zero */

loc_00560702: ;
    _fa = (uint32_t)(MEM8(0x915A38)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x915A38), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005607E9; /* je: equal / zero */

loc_0056070F: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    MEM8(0x915A38) = 0;
    MEM8(0x9159A8) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560725u); RECOMP_ABI_CALL(0x00560DC6u, sub_00560DC6); /* call 0x00560DC6 */

loc_00560725: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(0x9159A4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005607E9; /* je: equal / zero */

loc_00560733: ;
    ecx = esi;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = ecx + 0x9159C8;
    ebx = MEM32(esi + 4);
    edx = MEM32(esi);
    esi = MEM32(eax + 4);
    edx = ~edx;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = ~ebx;
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edi;
    eax = ~eax;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ecx + 0x9159E8);
    edx = esi;
    edx = ~edx;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx + 0x9159EC);
    edx = edx & MEM32(ebp + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x915A08) = eax;
    eax = MEM32(ecx + 0x9159EC);
    MEM32(0x915A0C) = edx;
    edx = MEM32(ecx + 0x9159E8);
    eax = ~eax;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ecx + 0x915A10);
    edx = ~edx;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx + 0x915A14);
    edx = edx & MEM32(ebp + -12);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x915A10) = eax;
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -8;
    MEM32(ecx + 0x915A14) = edx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    MEM32(0x915A30) = esi;
    MEM32(0x915A34) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005607C8u); RECOMP_ABI_CALL(0x00563169u, sub_00563169); /* call 0x00563169 */

loc_005607C8: ;
    ecx = MEM32(ebp + -8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x915A0C) = eax;
    MEM32(0x915A08) = eax;
    MEM32(0x915A34) = eax;
    MEM32(0x915A30) = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    POP32(esp, edi);
    goto loc_005607EE;

loc_005607E9: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;

loc_005607EE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005607F4
 * Original: 0x005607F4 - 0x00560820 (44 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005607F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005607F4: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    goto loc_00560818;

loc_0056080C: ;
    ecx = MEM32(eax + 4);
    esi = MEM32(eax);
    MEM32(edx + esi * 4 + 0xC) = ecx;
    eax = MEM32(eax + 8);

loc_00560818: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056080C; /* jne: not equal / not zero */

loc_0056081C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560820
 * Original: 0x00560820 - 0x00560AF4 (724 bytes, 261 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(0x9159A8) = 0;
    eax = MEM32(edi);
    edx = eax;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = edi;
    if ((_fa == 0)) goto loc_00560847; /* je: equal / zero */

loc_0056083D: ;
    ecx = eax;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ecx + 0xC);
    goto loc_00560849;

loc_00560847: ;
    esi = eax;

loc_00560849: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00560856; /* je: equal / zero */

loc_0056084F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = ebx;
    goto loc_0056085E;

loc_00560856: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    ebx = eax;

loc_0056085E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0056093B; /* jne: not equal / not zero */

loc_0056086F: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560885; /* je: equal / zero */

loc_00560876: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00560885; /* jbe: below or equal (unsigned <=) */

loc_0056087B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560882; /* je: equal / zero */

loc_0056087F: ;
    MEM32(eax + 8) = MEM32(eax + 8) - 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00560882: ;
    MEM32(ebx + 0xC) = ecx;

loc_00560885: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_005608B6; /* je: equal / zero */

loc_00560894: ;
    eax = MEM32(esi);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 4);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -24) = eax;
    PUSH32(esp, esi);
    eax = ebp + -24;
    MEM32(ebp + -20) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005608AFu); RECOMP_ABI_CALL(0x005607F4u, sub_005607F4); /* call 0x005607F4 */

loc_005608AF: ;
    eax = esi;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = eax;

loc_005608B6: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005608C1u); RECOMP_ABI_CALL(0x00560419u, sub_00560419); /* call 0x00560419 */

loc_005608C1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056092D; /* jne: not equal / not zero */

loc_005608C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056091A; /* jne: not equal / not zero */

loc_005608CC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005608D1u); RECOMP_ABI_CALL(0x00560BD8u, sub_00560BD8); /* call 0x00560BD8 */

loc_005608D1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    ebx = esi + 0xC;

loc_005608DA: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005608F5; /* je: equal / zero */

loc_005608E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005608EEu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_005608EE: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;

loc_005608F5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x37 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005608DA; /* jb: below (unsigned <) */

loc_00560901: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560907u); RECOMP_ABI_CALL(0x00560155u, sub_00560155); /* call 0x00560155 */

loc_00560907: ;
    POP32(esp, ecx);
    ecx = MEM32(ebp + -8);
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560915u); RECOMP_ABI_CALL(0x005607F4u, sub_005607F4); /* call 0x005607F4 */

loc_00560915: ;
    ebx = MEM32(ebp + -8);
    goto loc_00560926;

loc_0056091A: ;
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560926u); RECOMP_ABI_CALL(0x005607F4u, sub_005607F4); /* call 0x005607F4 */

loc_00560926: ;
    MEM32(edi) = esi;
    MEM32(edi) = MEM32(edi) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00560938;

loc_0056092D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560934; /* je: equal / zero */

loc_00560931: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00560934: ;
    esi = eax;
    MEM32(edi) = eax;

loc_00560938: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0056093B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005609BA; /* jne: not equal / not zero */

loc_00560941: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560952u); RECOMP_ABI_CALL(0x00560419u, sub_00560419); /* call 0x00560419 */

loc_00560952: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005609A5; /* jne: not equal / not zero */

loc_0056095B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560960u); RECOMP_ABI_CALL(0x00560BD8u, sub_00560BD8); /* call 0x00560BD8 */

loc_00560960: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    MEM32(ebp + -8) = edx;
    esi = edx + 0xC;

loc_0056096B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560989; /* je: equal / zero */

loc_00560971: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056097Fu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_0056097F: ;
    eax = MEM32(eax);
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00560989: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x37 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0056096B; /* jb: below (unsigned <) */

loc_00560995: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056099Bu); RECOMP_ABI_CALL(0x00560155u, sub_00560155); /* call 0x00560155 */

loc_0056099B: ;
    eax = edx;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);
    MEM32(edi) = eax;
    goto loc_005609B7;

loc_005609A5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005609B3; /* je: equal / zero */

loc_005609A9: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005609AFu); RECOMP_ABI_CALL(0x00560C8Bu, sub_00560C8B); /* call 0x00560C8B */

loc_005609AF: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_005609B3: ;
    MEM32(edi) = esi;
    edx = esi;

loc_005609B7: ;
    MEM32(edx + 8) = MEM32(edx + 8) + 1;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005609BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005609C5; /* je: equal / zero */

loc_005609BE: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005609C4u); RECOMP_ABI_CALL(0x00560C8Bu, sub_00560C8B); /* call 0x00560C8B */

loc_005609C4: ;
    POP32(esp, ecx);

loc_005609C5: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005609CDu); RECOMP_ABI_CALL(0x00560DC6u, sub_00560DC6); /* call 0x00560DC6 */

loc_005609CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(0x9159A4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00560A02; /* je: equal / zero */

loc_005609D7: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005609E4; /* je: equal / zero */

loc_005609DE: ;
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx + 0xC);

loc_005609E4: ;
    ecx = MEM32(edx);
    esi = MEM32(eax + 4);
    edx = MEM32(edx + 4);
    eax = MEM32(eax + 8);
    ecx = ~ecx;
    edx = ~edx;
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x915A30) = esi;
    MEM32(0x915A34) = eax;

loc_00560A02: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560A0E; /* je: equal / zero */

loc_00560A08: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 0xC);

loc_00560A0E: ;
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(0x915A34);
    MEM32(ebp + -8) = eax;
    eax = MEM32(0x915A30);
    eax = ~eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(esi + 0x915A10);
    ecx = MEM32(esi + 0x9159E8);
    edi = MEM32(esi + 0x915A14);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x9159EC);
    ebx = ~ebx;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebx);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + 4);
    ecx = ecx | MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x915A0C) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(0x915A08) = eax;
    eax = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00560A75; /* je: equal / zero */

loc_00560A6F: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 0xC);

loc_00560A75: ;
    edi = MEM32(eax);
    edx = esi + 0x9159C8;
    MEM32(edx) = edi;
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560A92; /* je: equal / zero */

loc_00560A8C: ;
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edx + 0xC);

loc_00560A92: ;
    eax = MEM32(edx);
    eax = eax | MEM32(0x915A30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(edx + 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    edx = edx | MEM32(0x915A34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x915A10) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEM32(esi + 0x915A14) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560ABBu); RECOMP_ABI_CALL(0x00563169u, sub_00563169); /* call 0x00563169 */

loc_00560ABB: ;
    ecx = MEM32(eax);
    eax = MEM32(0x915A30);
    MEM32(esi + 0x9159E8) = eax;
    eax = MEM32(0x915A34);
    MEM32(esi + 0x9159EC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x915A0C) = eax;
    MEM32(0x915A08) = eax;
    MEM32(0x915A34) = eax;
    MEM32(0x915A30) = eax;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560AF4
 * Original: 0x00560AF4 - 0x00560B17 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560AF4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560AF4: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x55D153);
    PUSH32(esp, 0x37);
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 4);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00560B13u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_00560B13: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00560B35
 * Original: 0x00560B35 - 0x00560B5C (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560B35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560B35: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    goto loc_00560B4F;

loc_00560B3E: ;
    ecx = MEM32(0x9159AC);
    eax = esi;
    esi = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00560B4Fu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00560B4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560B3E; /* jne: not equal / not zero */

loc_00560B53: ;
    MEM32(edi + 8) = MEM32(edi + 8) & esi;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & esi;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00560B5C
 * Original: 0x00560B5C - 0x00560B88 (44 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560B5C(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00560B5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00560B68u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_00560B68: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00560B79u); RECOMP_ABI_CALL(0x0055FF9Cu, sub_0055FF9C); /* call 0x0055FF9C */

loc_00560B79: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00560B88
 * Original: 0x00560B88 - 0x00560BB0 (40 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560B88(void)
{

loc_00560B88: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00560B94u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_00560B94: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00560BA1u); RECOMP_ABI_CALL(0x0055FFC4u, sub_0055FFC4); /* call 0x0055FFC4 */

loc_00560BA1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560BB0
 * Original: 0x00560BB0 - 0x00560BD8 (40 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560BB0(void)
{

loc_00560BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00560BBCu); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_00560BBC: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00560BC9u); RECOMP_ABI_CALL(0x0055FFE8u, sub_0055FFE8); /* call 0x0055FFE8 */

loc_00560BC9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00560BD8
 * Original: 0x00560BD8 - 0x00560BF1 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00560BD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00560BD8: ;
    ecx = MEM32(0x9159B0);
    PUSH32(esp, 0x00560BE3u); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00560BE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560BEE; /* je: equal / zero */

loc_00560BE7: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00560AF4(); return; /* tail jmp 0x00560AF4 */

loc_00560BEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00560BF1
 * Original: 0x00560BF1 - 0x00560C0E (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00560BF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560BF1: ;
    ecx = MEM32(0x9159B4);
    PUSH32(esp, 0x00560BFCu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00560BFC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560C0B; /* je: equal / zero */

loc_00560C02: ;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_00560C0B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00560C0E
 * Original: 0x00560C0E - 0x00560C31 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560C0E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560C0E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00560C16u); RECOMP_ABI_CALL(0x00560B35u, sub_00560B35); /* call 0x00560B35 */

loc_00560C16: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560C2B; /* je: equal / zero */

loc_00560C1D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560C2B; /* je: equal / zero */

loc_00560C21: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00560C29u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00560C29: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00560C2B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00560C8B
 * Original: 0x00560C8B - 0x00560CAB (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560C8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560C8B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560C9D; /* je: equal / zero */

loc_00560C94: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00560C9Du); RECOMP_ABI_CALL(0x00560C0Eu, sub_00560C0E); /* call 0x00560C0E */

loc_00560C9D: ;
    ecx = MEM32(0x9159B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00560CA9u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00560CA9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00560CB9
 * Original: 0x00560CB9 - 0x00560CBC (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560CB9(void)
{

loc_00560CB9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00560CC1
 * Original: 0x00560CC1 - 0x00560D03 (66 bytes, 25 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560CC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00560CC1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = esi + edi * 4 + 0xC;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00560CEB; /* jnp: not parity */

loc_00560CDD: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560CEBu); RECOMP_ABI_CALL(0x005602A4u, sub_005602A4); /* call 0x005602A4 */

loc_00560CEB: ;
    PUSH32(esp, edi);
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560CF4u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_00560CF4: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00560D03
 * Original: 0x00560D03 - 0x00560D3C (57 bytes, 23 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560D03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560D03: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = esi + edi * 4 + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560D24; /* je: equal / zero */

loc_00560D18: ;
    MEM32(ebp + 0xC) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560D24u); RECOMP_ABI_CALL(0x005602A4u, sub_005602A4); /* call 0x005602A4 */

loc_00560D24: ;
    PUSH32(esp, edi);
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560D2Du); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_00560D2D: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00560D3C
 * Original: 0x00560D3C - 0x00560D75 (57 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560D3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560D3C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ecx = esi + edi * 4 + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560D5D; /* je: equal / zero */

loc_00560D51: ;
    MEM32(ebp + 0xC) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560D5Du); RECOMP_ABI_CALL(0x005602A4u, sub_005602A4); /* call 0x005602A4 */

loc_00560D5D: ;
    PUSH32(esp, edi);
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560D66u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_00560D66: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(eax) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00560DC6
 * Original: 0x00560DC6 - 0x00560DE8 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00560DC6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560DC6: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x915A44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00560DE5; /* jbe: below or equal (unsigned <=) */

loc_00560DDA: ;
    eax = MEM32(eax + 0x915A40);
    eax = MEM32(eax + ecx * 4 + -4);
    esp += 4; return; /* ret */

loc_00560DE5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00560DE8
 * Original: 0x00560DE8 - 0x00560E2B (67 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560DE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560DE8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    esi = 0x915A40;
    POP32(esp, ebx);

loc_00560DF3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00560E10; /* jbe: below or equal (unsigned <=) */

loc_00560DFA: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560E0A; /* je: equal / zero */

loc_00560E03: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00560E0Au); RECOMP_ABI_CALL(0x0055D7A8u, sub_0055D7A8); /* call 0x0055D7A8 */

loc_00560E0A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00560DFA; /* jb: below (unsigned <) */

loc_00560E10: ;
    ecx = esi;
    PUSH32(esp, 0x00560E17u); RECOMP_ABI_CALL(0x00560FDBu, sub_00560FDB); /* call 0x00560FDB */

loc_00560E17: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00560DF3; /* jne: not equal / not zero */

loc_00560E1D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00560E2B
 * Original: 0x00560E2B - 0x00560F5F (308 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00560E2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560E2B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x915A3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560E3Eu); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_00560E3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00560E50; /* je: equal / zero */

loc_00560E45: ;
    PUSH32(esp, MEM32(edi));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560E4Eu); RECOMP_ABI_CALL(0x0055D1F2u, sub_0055D1F2); /* call 0x0055D1F2 */

loc_00560E4E: ;
    goto loc_00560E52;

loc_00560E50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00560E52: ;
    ecx = MEM32(edi);
    ecx = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(ecx + 0x915A44);
    edx = edi + 4;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00560E75; /* jne: not equal / not zero */

loc_00560E6B: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560F46; /* je: equal / zero */

loc_00560E75: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_00560EFE; /* jbe: below or equal (unsigned <=) */

loc_00560E7E: ;
    ecx = MEM32(ecx + 0x915A40);
    ecx = MEM32(ecx + esi * 4 + -4);
    esi = MEM32(ecx + 4);
    esi = esi | MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(ecx + 8);
    edi = edi | MEM32(edx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    esi = MEM32(edx);
    ebx = MEM32(ecx + 4);
    edi = MEM32(edx + 4);
    esi = ~esi;
    ebx = ebx & esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ecx + 8);
    edi = ~edi;
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -8) = 3;
    edi = ebp + -24;

loc_00560EBC: ;
    esi = MEM32(edi);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00560EEC; /* je: equal / zero */

loc_00560EC9: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560EE0; /* je: equal / zero */

loc_00560ECF: ;
    ebx = MEM32(ebp + -12);
    esi = MEM32(ebp + -8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx = MEM32(esi + ecx);
    MEM32(esi + eax) = ebx;

loc_00560EE0: ;
    { uint32_t _sv=(uint32_t)(MEM32(ebp + -4)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(ebp + -4) = _sv >> _sc;
        _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560EC9; /* jne: not equal / not zero */

loc_00560EEC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x20;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x43 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00560EBC; /* jb: below (unsigned <) */

loc_00560EF9: ;
    edi = MEM32(ebp + 8);
    goto loc_00560F09;

loc_00560EFE: ;
    ecx = MEM32(edx);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 8) = ecx;

loc_00560F09: ;
    PUSH32(esp, 3);
    POP32(esp, esi);
    MEM32(ebp + 8) = edx;

loc_00560F0F: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00560F39; /* je: equal / zero */

loc_00560F1D: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00560F2F; /* je: equal / zero */

loc_00560F23: ;
    ecx = esi + ebx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = MEM32(ecx + edi);
    MEM32(ecx + eax) = edx;

loc_00560F2F: ;
    { uint32_t _sv=(uint32_t)(MEM32(ebp + -4)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(ebp + -4) = _sv >> _sc;
        _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00560F1D; /* jne: not equal / not zero */

loc_00560F39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x43 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00560F0F; /* jb: below (unsigned <) */

loc_00560F45: ;
    POP32(esp, ebx);

loc_00560F46: ;
    edi = MEM32(edi);
    eax = ebp + -16;
    ecx = edi + edi * 2;
    PUSH32(esp, eax);
    ecx = ecx * 4 + 0x915A40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00560F5Bu); RECOMP_ABI_CALL(0x00561085u, sub_00561085); /* call 0x00561085 */

loc_00560F5B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00560F5F
 * Original: 0x00560F5F - 0x00560F9D (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560F5F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560F5F: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x915A44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00560F9B; /* jbe: below or equal (unsigned <=) */

loc_00560F74: ;
    PUSH32(esp, edi);
    edi = eax + 0x915A40;
    eax = MEM32(edi);
    eax = MEM32(eax + esi * 4 + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560F91; /* je: equal / zero */

loc_00560F85: ;
    ecx = MEM32(0x915A3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00560F91u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_00560F91: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00560F9Au); RECOMP_ABI_CALL(0x005610ABu, sub_005610AB); /* call 0x005610AB */

loc_00560F9A: ;
    POP32(esp, edi);

loc_00560F9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00560FDB
 * Original: 0x00560FDB - 0x00561004 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00560FDB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00560FDB: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00560FF7; /* je: equal / zero */

loc_00560FE4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00560FF7; /* jle: less or equal (signed <=) */

loc_00560FEB: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00560FF5u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_00560FF5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00560FF7: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00561004
 * Original: 0x00561004 - 0x00561080 (124 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561004(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561004: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561027; /* jne: not equal / not zero */

loc_0056100E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x00561021u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_00561021: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = eax;
    goto loc_0056107C;

loc_00561027: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0056107C; /* jl: less (signed <) */

loc_00561036: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00561045u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_00561045: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00561066; /* jle: less or equal (signed <=) */

loc_00561050: ;
    ecx = edi;

loc_00561052: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056105D; /* je: equal / zero */

loc_00561056: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0056105D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00561052; /* jl: less (signed <) */

loc_00561066: ;
    eax = MEM32(esi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00561074u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_00561074: ;
    { uint32_t _sv=(uint32_t)(MEM32(esi + 8)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(esi + 8) = _sv << _sc;
        _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi) = edi;
    POP32(esp, edi);

loc_0056107C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00561080
 * Original: 0x00561080 - 0x00561085 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00561080: ;
    g_seh_ebp = ebp; sub_00560FDB(); return; /* tail jmp 0x00560FDB */

}

/**
 * sub_00561085
 * Original: 0x00561085 - 0x005610AB (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561085(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561085: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0056108Fu); RECOMP_ABI_CALL(0x00561004u, sub_00561004); /* call 0x00561004 */

loc_0056108F: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_005610A8; /* je: equal / zero */

loc_005610A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    MEM32(ecx) = eax;

loc_005610A8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005610AB
 * Original: 0x005610AB - 0x005610CE (35 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005610AB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005610AB: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_005610C6; /* jbe: below or equal (unsigned <=) */

loc_005610BA: ;
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x005610C6u); RECOMP_ABI_CALL(0x00561004u, sub_00561004); /* call 0x00561004 */

loc_005610C6: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005610E8
 * Original: 0x005610E8 - 0x00561112 (42 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005610E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005610E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005610F0u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_005610F0: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561107; /* jne: not equal / not zero */

loc_00561101: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00761DB0(); return; /* tail jmp 0x00761DB0 */

loc_00561107: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561110u); RECOMP_ABI_CALL(0x00761EB0u, sub_00761EB0); /* call 0x00761EB0 */

loc_00561110: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00561112
 * Original: 0x00561112 - 0x00561129 (23 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561112(void)
{

loc_00561112: ;
    PUSH32(esp, 0x00561117u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00561117: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00561128u); RECOMP_ABI_CALL(0x00764C30u, sub_00764C30); /* call 0x00764C30 */

loc_00561128: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00561129
 * Original: 0x00561129 - 0x00561154 (43 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561129(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561129: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ebx * 4 + 0x915A78;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561150; /* je: equal / zero */

loc_0056113F: ;
    PUSH32(esp, 0x00561144u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00561144: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0056114Eu); RECOMP_ABI_CALL(0x007621D0u, sub_007621D0); /* call 0x007621D0 */

loc_0056114E: ;
    MEM32(edi) = esi;

loc_00561150: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00561155
 * Original: 0x00561155 - 0x00561172 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561155(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561155: ;
    MEM32(0x915ABC) = MEM32(0x915ABC) & 0;
    _fa = (uint32_t)(MEM32(0x915ABC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x915AB8) = MEM32(0x915AB8) & 0;
    _fa = (uint32_t)(MEM32(0x915AB8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x915A78;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00561172
 * Original: 0x00561172 - 0x0056118E (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561172(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561172: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(0x915ABC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915ABC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056118C; /* je: equal / zero */

loc_0056117F: ;
    ecx = esi;
    PUSH32(esp, 0x00561186u); RECOMP_ABI_CALL(0x00566B4Eu, sub_00566B4E); /* call 0x00566B4E */

loc_00561186: ;
    MEM32(0x915ABC) = esi;

loc_0056118C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0056118E
 * Original: 0x0056118E - 0x005611AA (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056118E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056118E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(0x915AB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915AB8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005611A8; /* je: equal / zero */

loc_0056119B: ;
    ecx = esi;
    PUSH32(esp, 0x005611A2u); RECOMP_ABI_CALL(0x00566B9Fu, sub_00566B9F); /* call 0x00566B9F */

loc_005611A2: ;
    MEM32(0x915AB8) = esi;

loc_005611A8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005611AA
 * Original: 0x005611AA - 0x005611DD (51 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005611AA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005611AA: ;
    PUSH32(esp, 0x005611AFu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_005611AF: ;
    PUSH32(esp, 0x005611B4u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_005611B4: ;
    _fa = (uint32_t)(MEM8(0x915749)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x915749), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005611CB; /* je: equal / zero */

loc_005611BD: ;
    { extern void nhl07_invalidate_vertex_cache(void); nhl07_invalidate_vertex_cache(); } /* audited dirty-vertex publication before DrawIndexedVertices */
    PUSH32(esp, 0x005611C4u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_005611C4: ;
    MEM8(0x915749) = 0;

loc_005611CB: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x005611DCu); RECOMP_ABI_CALL(0x00764020u, sub_00764020); /* call 0x00764020 */

loc_005611DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005611DD
 * Original: 0x005611DD - 0x00561334 (343 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005611DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005611DD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0056132D; /* jbe: below or equal (unsigned <=) */

loc_005611F4: ;
    ecx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x18);
    MEM32(esp + 0x18) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    edi = 0xFF;

loc_0056120D: ;
    eax = MEM32(esi + -8);
    xmm4 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm2 = XMM_MEM(eax + 0x20); /* movaps */
    xmm3 = XMM_MEM(eax + 0x30); /* movaps */
    eax = MEM32(esi + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm4); /* mulps */
    xmm1 = XMM_MUL(xmm1, xmm4); /* mulps */
    xmm2 = XMM_MUL(xmm2, xmm4); /* mulps */
    xmm3 = XMM_MUL(xmm3, xmm4); /* mulps */
    if (CMP_EQ(_fa, _fb)) goto loc_005612F7; /* je: equal / zero */

loc_00561246: ;
    xmm4 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5 = XMM_MEM(eax); /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x10); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x20); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x30); /* movaps */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm5); /* addps */
    if (CMP_EQ(_fa, _fb)) goto loc_005612F7; /* je: equal / zero */

loc_00561283: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5 = XMM_MEM(eax); /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x10); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x20); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x30); /* movaps */
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm5); /* addps */
    if (CMP_EQ(_fa, _fb)) goto loc_005612F7; /* je: equal / zero */

loc_005612C0: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm5 = XMM_MEM(eax); /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm0 = XMM_ADD(xmm0, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x10); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm1 = XMM_ADD(xmm1, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x20); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    xmm5 = XMM_MEM(eax + 0x30); /* movaps */
    xmm5 = XMM_MUL(xmm5, xmm4); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm5); /* addps */

loc_005612F7: ;
    PUSH32(esp, MEM32(esp + 0x18));
    eax = esp + 0x24;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0x28, xmm0); /* movaps */
    XMM_STORE(esp + 0x38, xmm1); /* movaps */
    XMM_STORE(esp + 0x48, xmm2); /* movaps */
    XMM_STORE(esp + 0x58, xmm3); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561319u); RECOMP_ABI_CALL(0x005A0F40u, sub_005A0F40); /* call 0x005A0F40 */

loc_00561319: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 0x40;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = MEM32(esp + 0x20) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0056120D; /* jne: not equal / not zero */

loc_0056132D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00561334
 * Original: 0x00561334 - 0x0056135E (42 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561334(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00561334: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x18));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00561349u); RECOMP_ABI_CALL(0x00757D6Fu, sub_00757D6F); /* call 0x00757D6F */

loc_00561349: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00561350u); RECOMP_ABI_CALL(0x00763270u, sub_00763270); /* call 0x00763270 */

loc_00561350: ;
    { extern void nhl07_publish_vertex_data(uint32_t); nhl07_publish_vertex_data(esi); } /* audited vertex data publication; drawing still requires native upload */
    PUSH32(esp, 0x00561357u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00561357: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0075D370(); return; /* tail jmp 0x0075D370 */

}

/**
 * sub_0056135E
 * Original: 0x0056135E - 0x00561381 (35 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056135E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056135E: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00561361: ;
    PUSH32(esp, 0x00561366u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00561366: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00561370u); RECOMP_ABI_CALL(0x007621D0u, sub_007621D0); /* call 0x007621D0 */

loc_00561370: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00561361; /* jl: less (signed <) */

loc_00561376: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0056137Fu); RECOMP_ABI_CALL(0x007632A0u, sub_007632A0); /* call 0x007632A0 */

loc_0056137F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00561397
 * Original: 0x00561397 - 0x005613C1 (42 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561397(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561397: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005613B2; /* jne: not equal / not zero */

loc_005613AB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005613B0u); RECOMP_ABI_CALL(0x00761DB0u, sub_00761DB0); /* call 0x00761DB0 */

loc_005613B0: ;
    goto loc_005613BB;

loc_005613B2: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005613BBu); RECOMP_ABI_CALL(0x00761EB0u, sub_00761EB0); /* call 0x00761EB0 */

loc_005613BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00561417
 * Original: 0x00561417 - 0x0056141B (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561417(void)
{

loc_00561417: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0056141B
 * Original: 0x0056141B - 0x0056141F (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056141B(void)
{

loc_0056141B: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00561427
 * Original: 0x00561427 - 0x00561442 (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561427(void)
{

loc_00561427: ;
    eax = MEM32(esp + 8);
    eax = MEM32(ecx + eax * 4 + 0x20);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00561442
 * Original: 0x00561442 - 0x005614B7 (117 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561442(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561442: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561459; /* je: equal / zero */

loc_0056144E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD33Bu;
    goto loc_005614B2;

loc_00561459: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561464u); RECOMP_ABI_CALL(0x00566A3Du, sub_00566A3D); /* call 0x00566A3D */

loc_00561464: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561474; /* jne: not equal / not zero */

loc_00561469: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD33Cu;
    goto loc_005614B1;

loc_00561474: ;
    esi = esi + eax * 4 + 0x20;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005614A3; /* je: equal / zero */

loc_0056147E: ;
    MEM32(eax + 0x38) = MEM32(eax + 0x38) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM8(eax + 0x3C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005614A3; /* je: equal / zero */

loc_00561489: ;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x38), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005614A3; /* jne: not equal / not zero */

loc_0056148F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561494u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00561494: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005614A0u); RECOMP_ABI_CALL(0x0055DDAAu, sub_0055DDAA); /* call 0x0055DDAA */

loc_005614A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005614A3: ;
    eax = MEM32(ebp + 8);
    MEM32(esi) = edi;
    MEM32(edi + 0x38) = MEM32(edi + 0x38) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = 1;

loc_005614B1: ;
    POP32(esp, edi);

loc_005614B2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005614B7
 * Original: 0x005614B7 - 0x0056151B (100 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005614B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005614B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561510; /* je: equal / zero */

loc_005614C6: ;
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005614D0u); RECOMP_ABI_CALL(0x00761130u, sub_00761130); /* call 0x00761130 */

loc_005614D0: ;
    PUSH32(esp, MEM32(ebp + -36));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005614D8u); RECOMP_ABI_CALL(0x00755E1Au, sub_00755E1A); /* call 0x00755E1A */

loc_005614D8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -12));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -16));
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561510; /* jne: not equal / not zero */

loc_005614E5: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005614F4u); RECOMP_ABI_CALL(0x00761150u, sub_00761150); /* call 0x00761150 */

loc_005614F4: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561502u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00561502: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    goto loc_00561516;

loc_00561510: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00561516: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0056151B
 * Original: 0x0056151B - 0x00561547 (44 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056151B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056151B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561543; /* je: equal / zero */

loc_00561527: ;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561531u); RECOMP_ABI_CALL(0x00761130u, sub_00761130); /* call 0x00761130 */

loc_00561531: ;
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561539u); RECOMP_ABI_CALL(0x00755E1Au, sub_00755E1A); /* call 0x00755E1A */

loc_00561539: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -8));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00561543: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00561547
 * Original: 0x00561547 - 0x005615CB (132 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561547(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561547: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM8(ecx + 0x1C) = LO8(eax);
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM8(ecx + 0x3C) = LO8(eax);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(0x91572C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005615BB; /* je: equal / zero */

loc_0056157E: ;
    eax = MEM32(edx + 0x18);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(0x91572C);
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x91572C);
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x91572C);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(0x91572C);
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(0x91572C);
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;

loc_005615BB: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x20;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ecx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005615CB
 * Original: 0x005615CB - 0x005615D3 (8 bytes, 3 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005615CB(void)
{

loc_005615CB: ;
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0x005615D2u); RECOMP_ABI_CALL(0x007630E0u, sub_007630E0); /* call 0x007630E0 */

loc_005615D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00561649
 * Original: 0x00561649 - 0x00561766 (285 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561649(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561649: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    goto loc_00561680;

loc_00561652: ;
    ecx = MEM32(esi + 4);
    eax = ecx;
    edi = eax + 1;

loc_0056165A: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056165A; /* jne: not equal / not zero */

loc_00561661: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0056166Bu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0056166B: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi + 0x10);
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561680; /* je: equal / zero */

loc_00561676: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056167Eu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0056167E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00561680: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561652; /* jne: not equal / not zero */

loc_00561684: ;
    MEM32(ebx) = MEM32(ebx) & esi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx + 8);
    goto loc_005616B8;

loc_0056168B: ;
    ecx = MEM32(esi);
    eax = ecx;
    edi = eax + 1;

loc_00561692: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561692; /* jne: not equal / not zero */

loc_00561699: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005616A3u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005616A3: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi + 0x14);
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005616B8; /* je: equal / zero */

loc_005616AE: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005616B6u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005616B6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_005616B8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056168B; /* jne: not equal / not zero */

loc_005616BC: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & esi;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx + 0xC);
    goto loc_005616F1;

loc_005616C4: ;
    ecx = MEM32(esi);
    eax = ecx;
    edi = eax + 1;

loc_005616CB: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005616CB; /* jne: not equal / not zero */

loc_005616D2: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x005616DCu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005616DC: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi + 0x14);
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005616F1; /* je: equal / zero */

loc_005616E7: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x005616EFu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005616EF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_005616F1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005616C4; /* jne: not equal / not zero */

loc_005616F5: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & esi;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx + 4);
    goto loc_00561745;

loc_005616FD: ;
    ecx = MEM32(esi);
    eax = ecx;
    edi = eax + 1;

loc_00561704: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561704; /* jne: not equal / not zero */

loc_0056170B: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00561715u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00561715: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(esi + 4);
    eax = ecx;
    edi = eax + 1;

loc_0056171F: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056171F; /* jne: not equal / not zero */

loc_00561726: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00561730u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00561730: ;
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(esi + 0x14);
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561745; /* je: equal / zero */

loc_0056173B: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00561743u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00561743: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00561745: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005616FD; /* jne: not equal / not zero */

loc_00561749: ;
    eax = MEM32(ebx + 0x10);
    MEM32(ebx + 4) = MEM32(ebx + 4) & esi;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056175E; /* je: equal / zero */

loc_00561753: ;
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056175Cu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0056175C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0056175E: ;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00561766
 * Original: 0x00561766 - 0x00561830 (202 bytes, 92 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561766(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00561766: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_005617C0; /* je: equal / zero */

loc_0056177B: ;
    eax = MEM32(esi);
    edi = MEM32(ebp + 0xC);

loc_00561780: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005617A2; /* jne: not equal / not zero */

loc_00561788: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0056179E; /* je: equal / zero */

loc_0056178C: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005617A2; /* jne: not equal / not zero */

loc_00561796: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561780; /* jne: not equal / not zero */

loc_0056179E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005617A7;

loc_005617A2: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005617A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_005617B2; /* je: equal / zero */

loc_005617AB: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056177B; /* jne: not equal / not zero */

loc_005617B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_005617BD; /* je: equal / zero */

loc_005617B6: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    goto loc_00561829;

loc_005617BD: ;
    edi = MEM32(ebp + -4);

loc_005617C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005617CBu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_005617CB: ;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_005617D6: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005617D6; /* jne: not equal / not zero */

loc_005617DD: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8772F5);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005617ECu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_005617EC: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_005617F4: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005617F4; /* jne: not equal / not zero */

loc_005617FE: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 8) = eax;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561814; /* je: equal / zero */

loc_00561811: ;
    MEM32(eax + 0x10) = esi;

loc_00561814: ;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x10) = ebx;
    MEM32(edi + 0xC) = esi;
    MEM32(eax) = 1;

loc_00561829: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00561830
 * Original: 0x00561830 - 0x005618EE (190 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00561830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_005618E2; /* je: equal / zero */

loc_00561844: ;
    eax = MEM32(esi);
    edi = MEM32(ebp + 0xC);

loc_00561849: ;
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056186B; /* jne: not equal / not zero */

loc_00561851: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561867; /* je: equal / zero */

loc_00561855: ;
    SET_LO8(ecx, MEM8(edi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056186B; /* jne: not equal / not zero */

loc_0056185F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561849; /* jne: not equal / not zero */

loc_00561867: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00561870;

loc_0056186B: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00561870: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0056187B; /* je: equal / zero */

loc_00561874: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561844; /* jne: not equal / not zero */

loc_0056187B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005618E2; /* je: equal / zero */

loc_0056187F: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056188F; /* jne: not equal / not zero */

loc_00561889: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0xC) = eax;

loc_0056188F: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0056189C; /* je: equal / zero */

loc_00561896: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = ecx;

loc_0056189C: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005618A9; /* je: equal / zero */

loc_005618A3: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_005618A9: ;
    ecx = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    edi = eax + 1;

loc_005618B8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005618B8; /* jne: not equal / not zero */

loc_005618BF: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005618C9u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005618C9: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005618D4u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005618D4: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    goto loc_005618E8;

loc_005618E2: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005618E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005618EE
 * Original: 0x005618EE - 0x005619AE (192 bytes, 86 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005618EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005618EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0056193E; /* je: equal / zero */

loc_00561900: ;
    eax = MEM32(esi);
    edi = MEM32(ebp + 8);

loc_00561905: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561927; /* jne: not equal / not zero */

loc_0056190D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561923; /* je: equal / zero */

loc_00561911: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561927; /* jne: not equal / not zero */

loc_0056191B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561905; /* jne: not equal / not zero */

loc_00561923: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0056192C;

loc_00561927: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0056192C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561937; /* je: equal / zero */

loc_00561930: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561900; /* jne: not equal / not zero */

loc_00561937: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561996; /* jne: not equal / not zero */

loc_0056193B: ;
    edi = MEM32(ebp + -4);

loc_0056193E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056194Bu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0056194B: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax + 1;

loc_00561956: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561956; /* jne: not equal / not zero */

loc_0056195D: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x877324);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056196Du); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_0056196D: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00561975: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561975; /* jne: not equal / not zero */

loc_0056197F: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561989; /* je: equal / zero */

loc_00561986: ;
    MEM32(eax + 0x10) = esi;

loc_00561989: ;
    eax = MEM32(edi + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = eax;
    MEM32(edi + 8) = esi;

loc_00561996: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005619AE
 * Original: 0x005619AE - 0x00561A6C (190 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005619AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005619AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00561A60; /* je: equal / zero */

loc_005619C2: ;
    eax = MEM32(esi);
    edi = MEM32(ebp + 0xC);

loc_005619C7: ;
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005619E9; /* jne: not equal / not zero */

loc_005619CF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005619E5; /* je: equal / zero */

loc_005619D3: ;
    SET_LO8(ecx, MEM8(edi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005619E9; /* jne: not equal / not zero */

loc_005619DD: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005619C7; /* jne: not equal / not zero */

loc_005619E5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005619EE;

loc_005619E9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005619EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005619F9; /* je: equal / zero */

loc_005619F2: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005619C2; /* jne: not equal / not zero */

loc_005619F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561A60; /* je: equal / zero */

loc_005619FD: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561A0D; /* jne: not equal / not zero */

loc_00561A07: ;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 8) = eax;

loc_00561A0D: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561A1A; /* je: equal / zero */

loc_00561A14: ;
    ecx = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = ecx;

loc_00561A1A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561A27; /* je: equal / zero */

loc_00561A21: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_00561A27: ;
    ecx = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    edi = eax + 1;

loc_00561A36: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561A36; /* jne: not equal / not zero */

loc_00561A3D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561A47u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00561A47: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561A52u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00561A52: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    goto loc_00561A66;

loc_00561A60: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00561A66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00561A6C
 * Original: 0x00561A6C - 0x00561A9B (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561A6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561A6C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    edi = 0x877328;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00561A96; /* je: equal / zero */

loc_00561A80: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 5);
    edi = 0x877330;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00561A96; /* je: equal / zero */

loc_00561A92: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00561A98;

loc_00561A96: ;
    SET_LO8(eax, 1);

loc_00561A98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00561A9B
 * Original: 0x00561A9B - 0x00561ADA (63 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561A9B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561A9B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi;
    ecx = eax + 1;

loc_00561AA7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561AA7; /* jne: not equal / not zero */

loc_00561AAE: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x2D (8-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00561ACC; /* jne: not equal / not zero */

loc_00561AB9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00561ACC;

loc_00561ABC: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00561AC6u); RECOMP_ABI_CALL(0x005CD856u, sub_005CD856); /* call 0x005CD856 */

loc_00561AC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561AD6; /* je: equal / zero */

loc_00561ACB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00561ACC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00561ABC; /* jl: less (signed <) */

loc_00561AD0: ;
    SET_LO8(eax, 1);

loc_00561AD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00561AD6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00561AD2;

}

/**
 * sub_00561ADA
 * Original: 0x00561ADA - 0x00561B15 (59 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561ADA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561ADA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, edi);
    edx = eax + 1;

loc_00561AE6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561AE6; /* jne: not equal / not zero */

loc_00561AED: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00561B0B; /* jle: less or equal (signed <=) */

loc_00561AF7: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00561B01u); RECOMP_ABI_CALL(0x005CD856u, sub_005CD856); /* call 0x005CD856 */

loc_00561B01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561B11; /* je: equal / zero */

loc_00561B06: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00561AF7; /* jl: less (signed <) */

loc_00561B0B: ;
    SET_LO8(eax, 1);

loc_00561B0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00561B11: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00561B0D;

}

/**
 * sub_00561B15
 * Original: 0x00561B15 - 0x00561B99 (132 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561B15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561B15: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00561B29: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561B29; /* jne: not equal / not zero */

loc_00561B30: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0xC) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561B40u); RECOMP_ABI_CALL(0x005CD856u, sub_005CD856); /* call 0x005CD856 */

loc_00561B40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561B87; /* je: equal / zero */

loc_00561B45: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx);
    goto loc_00561B56;

loc_00561B4A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00561B84; /* jge: greater or equal (signed >=) */

loc_00561B52: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + ebx);

loc_00561B56: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561B5Cu); RECOMP_ABI_CALL(0x005CD856u, sub_005CD856); /* call 0x005CD856 */

loc_00561B5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00561B4A; /* jne: not equal / not zero */

loc_00561B61: ;
    _fa = (uint32_t)(MEM8(edi + ebx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ebx), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561B84; /* jne: not equal / not zero */

loc_00561B67: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00561B6A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00561B84; /* jge: greater or equal (signed >=) */

loc_00561B6F: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561B79u); RECOMP_ABI_CALL(0x005CD856u, sub_005CD856); /* call 0x005CD856 */

loc_00561B79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00561B8B; /* jne: not equal / not zero */

loc_00561B7E: ;
    _fa = (uint32_t)(MEM8(edi + ebx)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ebx), 0x66 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561B90; /* je: equal / zero */

loc_00561B84: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00561B87: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00561B94;

loc_00561B8B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00561B6A;

loc_00561B90: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);

loc_00561B94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00561B99
 * Original: 0x00561B99 - 0x00561BE4 (75 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561B99(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00561B99: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    goto loc_00561BD5;

loc_00561BA1: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(edi);

loc_00561BA7: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561BC9; /* jne: not equal / not zero */

loc_00561BAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561BC5; /* je: equal / zero */

loc_00561BB3: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561BC9; /* jne: not equal / not zero */

loc_00561BBD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561BA7; /* jne: not equal / not zero */

loc_00561BC5: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00561BCE;

loc_00561BC9: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00561BCE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561BE0; /* je: equal / zero */

loc_00561BD2: ;
    edi = MEM32(edi + 0x14);

loc_00561BD5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561BA1; /* jne: not equal / not zero */

loc_00561BD9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00561BDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00561BE0: ;
    eax = edi;
    goto loc_00561BDB;

}

/**
 * sub_00561BE4
 * Original: 0x00561BE4 - 0x00561C1E (58 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561BE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561BE4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00561BF5; /* jl: less (signed <) */

loc_00561BF1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00561BF5: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    goto loc_00561C06;

loc_00561BFC: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00561C1A; /* jge: greater or equal (signed >=) */

loc_00561C06: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00561C10u); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_00561C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00561BFC; /* jne: not equal / not zero */

loc_00561C15: ;
    SET_LO8(eax, 1);

loc_00561C17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00561C1A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00561C17;

}

/**
 * sub_00561C1E
 * Original: 0x00561C1E - 0x00561CE8 (202 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561C1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561C1E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi;
    edx = eax + 1;

loc_00561C2D: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561C2D; /* jne: not equal / not zero */

loc_00561C34: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x7B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x7B (8-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00561C45; /* je: equal / zero */

loc_00561C3E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00561CE5;

loc_00561C45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00561C3E; /* jle: less or equal (signed <=) */

loc_00561C50: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_00561CC1; /* jle: less or equal (signed <=) */

loc_00561C5D: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561C6Au); RECOMP_ABI_CALL(0x00561BE4u, sub_00561BE4); /* call 0x00561BE4 */

loc_00561C6A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561CD5; /* je: equal / zero */

loc_00561C71: ;
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561C85u); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_00561C85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561CD5; /* je: equal / zero */

loc_00561C8B: ;
    PUSH32(esp, MEM32(ebp + -8));
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561C9Eu); RECOMP_ABI_CALL(0x00561BE4u, sub_00561BE4); /* call 0x00561BE4 */

loc_00561C9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00561CD5; /* je: equal / zero */

loc_00561CA5: ;
    eax = ebx + -1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00561CB9; /* jge: greater or equal (signed >=) */

loc_00561CAD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + edi)) & 0xFFu; _fb = (uint32_t)(0x2C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi), 0x2C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561CD5; /* jne: not equal / not zero */

loc_00561CB6: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00561CB9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00561C5D; /* jl: less (signed <) */

loc_00561CC1: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561CCEu); RECOMP_ABI_CALL(0x00561BE4u, sub_00561BE4); /* call 0x00561BE4 */

loc_00561CCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00561CD9; /* jne: not equal / not zero */

loc_00561CD5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00561CE3;

loc_00561CD9: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + edi)) & 0xFFu; _fb = (uint32_t)(0x7D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi), 0x7D (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_00561CE3: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00561CE5: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00561CE8
 * Original: 0x00561CE8 - 0x00561D47 (95 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561CE8(void)
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

loc_00561CE8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    goto loc_00561CFE;

loc_00561CFD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00561CFE: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561D0Bu); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_00561D0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561CFD; /* je: equal / zero */

loc_00561D11: ;
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561D1Au); RECOMP_ABI_CALL(0x005CC4EBu, sub_005CC4EB); /* call 0x005CC4EB */

loc_00561D1A: ;
    MEMF(ebp + ebx * 4 + -16) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00561CFE; /* jl: less (signed <) */

loc_00561D28: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    POP32(esp, edi);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    eax = MEM32(ebp + -8);
    POP32(esp, esi);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00561D47
 * Original: 0x00561D47 - 0x00561DB5 (110 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561D47(void)
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

loc_00561D47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    goto loc_00561D5D;

loc_00561D5C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00561D5D: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561D6Au); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_00561D6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561D5C; /* je: equal / zero */

loc_00561D70: ;
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561D79u); RECOMP_ABI_CALL(0x005CC4EBu, sub_005CC4EB); /* call 0x005CC4EB */

loc_00561D79: ;
    MEMF(ebp + ebx * 4 + -16) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00561D5D; /* jl: less (signed <) */

loc_00561D87: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    esi = ebp + -28;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00561DB5
 * Original: 0x00561DB5 - 0x00561E3F (138 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561DB5(void)
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

loc_00561DB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ebx;
    goto loc_00561DCF;

loc_00561DCE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00561DCF: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561DDDu); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_00561DDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561DCE; /* je: equal / zero */

loc_00561DE3: ;
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561DECu); RECOMP_ABI_CALL(0x005CC4EBu, sub_005CC4EB); /* call 0x005CC4EB */

loc_00561DEC: ;
    MEMF(esp + ebx * 4 + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00561DCF; /* jl: less (signed <) */

loc_00561DFB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    esi = esp + 0x20;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
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
 * sub_00561E3F
 * Original: 0x00561E3F - 0x00561EAA (107 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561E3F(void)
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

loc_00561E3F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ebx;
    goto loc_00561E5C;

loc_00561E5B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00561E5C: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561E6Au); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_00561E6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00561E5B; /* je: equal / zero */

loc_00561E70: ;
    eax = esi + edi;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561E79u); RECOMP_ABI_CALL(0x005CC4EBu, sub_005CC4EB); /* call 0x005CC4EB */

loc_00561E79: ;
    MEMF(esp + ebx * 4 + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    POP32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_00561E5C; /* jl: less (signed <) */

loc_00561E88: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    PUSH32(esp, 0x10);
    esi = esp + 0x14;
    edi = esp + 0x54;
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
    POP32(esp, ecx);
    esi = esp + 0x50;
    edi = eax;
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
 * sub_00561EAA
 * Original: 0x00561EAA - 0x00561EC2 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561EAA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00561EAA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x877338;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00561EC2
 * Original: 0x00561EC2 - 0x00561FCD (267 bytes, 118 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00561EC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00561EC2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00561FC1; /* je: equal / zero */

loc_00561ED8: ;
    eax = MEM32(edi + 4);
    esi = MEM32(ebp + 0xC);

loc_00561EDE: ;
    SET_LO8(ecx, MEM8(esi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F00; /* jne: not equal / not zero */

loc_00561EE6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561EFC; /* je: equal / zero */

loc_00561EEA: ;
    SET_LO8(ecx, MEM8(esi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F00; /* jne: not equal / not zero */

loc_00561EF4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561EDE; /* jne: not equal / not zero */

loc_00561EFC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00561F05;

loc_00561F00: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00561F05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561F10; /* je: equal / zero */

loc_00561F09: ;
    edi = MEM32(edi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561ED8; /* jne: not equal / not zero */

loc_00561F10: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561FC1; /* je: equal / zero */

loc_00561F18: ;
    eax = MEM32(ebp + -4);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561FC1; /* je: equal / zero */

loc_00561F25: ;
    eax = MEM32(esi + 4);
    edi = MEM32(ebp + 0xC);

loc_00561F2B: ;
    SET_LO8(ecx, MEM8(edi));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F4D; /* jne: not equal / not zero */

loc_00561F33: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561F49; /* je: equal / zero */

loc_00561F37: ;
    SET_LO8(ecx, MEM8(edi + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F4D; /* jne: not equal / not zero */

loc_00561F41: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F2B; /* jne: not equal / not zero */

loc_00561F49: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00561F52;

loc_00561F4D: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00561F52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561F5D; /* je: equal / zero */

loc_00561F56: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F25; /* jne: not equal / not zero */

loc_00561F5D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561FC1; /* je: equal / zero */

loc_00561F61: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F6F; /* jne: not equal / not zero */

loc_00561F6A: ;
    eax = MEM32(eax + 0x10);
    MEM32(ecx) = eax;

loc_00561F6F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561F7C; /* je: equal / zero */

loc_00561F76: ;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;

loc_00561F7C: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00561F89; /* je: equal / zero */

loc_00561F83: ;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_00561F89: ;
    ecx = MEM32(esi + 4);
    eax = ecx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    edi = eax + 1;

loc_00561F97: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561F97; /* jne: not equal / not zero */

loc_00561F9E: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561FA8u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00561FA8: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00561FB3u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00561FB3: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    goto loc_00561FC6;

loc_00561FC1: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;

loc_00561FC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00561FCD
 * Original: 0x00561FCD - 0x00562014 (71 bytes, 31 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00561FCD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00561FCD: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);

loc_00561FD6: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561FF8; /* jne: not equal / not zero */

loc_00561FDE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00561FF4; /* je: equal / zero */

loc_00561FE2: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00561FF8; /* jne: not equal / not zero */

loc_00561FEC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00561FD6; /* jne: not equal / not zero */

loc_00561FF4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00561FFD;

loc_00561FF8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00561FFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0056200B; /* je: equal / zero */

loc_00562006: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00562011;

loc_0056200B: ;
    MEM32(eax) = 1;

loc_00562011: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00562014
 * Original: 0x00562014 - 0x00562044 (48 bytes, 18 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562014(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562014: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = ecx;
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
    eax = MEM32(esp + 0xC);
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
    POP32(esp, edi);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00562044
 * Original: 0x00562044 - 0x00562052 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562044(void)
{

loc_00562044: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0056204Fu); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_0056204F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00562052
 * Original: 0x00562052 - 0x005620A8 (86 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00562052(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562052: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562064u); RECOMP_ABI_CALL(0x00561A9Bu, sub_00561A9B); /* call 0x00561A9B */

loc_00562064: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005620A3; /* jne: not equal / not zero */

loc_00562069: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562073u); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_00562073: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005620A3; /* jne: not equal / not zero */

loc_00562079: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562081u); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_00562081: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005620A3; /* jne: not equal / not zero */

loc_00562087: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056208Fu); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_0056208F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005620A3; /* jne: not equal / not zero */

loc_00562095: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056209Du); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_0056209D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005620A5; /* je: equal / zero */

loc_005620A3: ;
    SET_LO8(eax, 1);

loc_005620A5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005620A8
 * Original: 0x005620A8 - 0x005620D1 (41 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005620A8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005620A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_005620CC; /* jle: less or equal (signed <=) */

loc_005620B4: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);

loc_005620B9: ;
    PUSH32(esp, MEM32(esi));
    ecx = ebx;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0x005620C5u); RECOMP_ABI_CALL(0x0055FA6Fu, sub_0055FA6F); /* call 0x0055FA6F */

loc_005620C5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005620B9; /* jne: not equal / not zero */

loc_005620CB: ;
    POP32(esp, esi);

loc_005620CC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005620D1
 * Original: 0x005620D1 - 0x005623A3 (722 bytes, 274 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005620D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005620D1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0056238F; /* jle: less or equal (signed <=) */

loc_005620EE: ;
    edi = MEM32(ebp + 0xC);
    goto loc_00562106;

loc_005620F3: ;
    _fa = (uint32_t)(MEM8(ebx + edi)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + edi), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005620FC; /* jne: not equal / not zero */

loc_005620F9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005620FC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0056238F; /* jge: greater or equal (signed >=) */

loc_00562106: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562110u); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_00562110: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005620F3; /* jne: not equal / not zero */

loc_00562115: ;
    PUSH32(esp, 2);
    eax = ebx + edi;
    PUSH32(esp, 0x8772F8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562125u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_00562125: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562161; /* jne: not equal / not zero */

loc_0056212C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00562145;

loc_00562130: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562161; /* je: equal / zero */

loc_00562134: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056213B; /* jne: not equal / not zero */

loc_00562138: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0056213B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0056238F; /* jge: greater or equal (signed >=) */

loc_00562145: ;
    SET_LO8(eax, MEM8(ebx + edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562130; /* jne: not equal / not zero */

loc_0056214C: ;
    goto loc_00562161;

loc_0056214E: ;
    _fa = (uint32_t)(MEM8(ebx + edi)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + edi), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562157; /* jne: not equal / not zero */

loc_00562154: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00562157: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0056238F; /* jge: greater or equal (signed >=) */

loc_00562161: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056216Bu); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_0056216B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0056214E; /* jne: not equal / not zero */

loc_00562170: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056217Bu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_0056217B: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebx + edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056218Bu); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_0056218B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005621AF; /* jne: not equal / not zero */

loc_00562192: ;
    eax = ebx + edi;
    MEM32(ebp + -8) = eax;

loc_00562198: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005621AAu); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_005621AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00562198; /* je: equal / zero */

loc_005621AF: ;
    eax = MEM32(ebp + -12);
    ecx = eax + ebx;
    PUSH32(esp, 0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x877305);
    PUSH32(esp, eax);
    MEM8(ecx + edi) = 0;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005621CAu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_005621CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = ebx + edi;

loc_005621D2: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005621D2; /* jne: not equal / not zero */

loc_005621DC: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ebp + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_005621F4;

loc_005621E1: ;
    _fa = (uint32_t)(MEM8(ebx + edi)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + edi), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005621EA; /* jne: not equal / not zero */

loc_005621E7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005621EA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0056239B; /* jge: greater or equal (signed >=) */

loc_005621F4: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005621FEu); RECOMP_ABI_CALL(0x005CD8ADu, sub_005CD8AD); /* call 0x005CD8AD */

loc_005621FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_005621E1; /* jne: not equal / not zero */

loc_00562203: ;
    eax = ebx + edi;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x7B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x7B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056223C; /* jne: not equal / not zero */

loc_0056220B: ;
    PUSH32(esp, 0x877308);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562216u); RECOMP_ABI_CALL(0x005CEE02u, sub_005CEE02); /* call 0x005CEE02 */

loc_00562216: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0056239B; /* je: equal / zero */

loc_00562223: ;
    edi = eax;
    edx = edi + 1;

loc_00562228: ;
    SET_LO8(ecx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00562228; /* jne: not equal / not zero */

loc_0056222F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + edi) = 0x7D;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + edi) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00562267;

loc_0056223C: ;
    PUSH32(esp, 0x8772FC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562247u); RECOMP_ABI_CALL(0x005CEE02u, sub_005CEE02); /* call 0x005CEE02 */

loc_00562247: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -12) = eax;
    edi = eax + 1;

loc_0056224F: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056224F; /* jne: not equal / not zero */

loc_00562256: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + 1;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00562267; /* jle: less or equal (signed <=) */

loc_00562264: ;
    edi = eax + 1;

loc_00562267: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x87730A);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562274u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00562274: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(esi + 4) = eax;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562281u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00562281: ;
    eax = MEM32(esi + 4);
    MEM8(eax + edi + -1) = 0;
    PUSH32(esp, MEM32(esi + 4));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562293u); RECOMP_ABI_CALL(0x00561ADAu, sub_00561ADA); /* call 0x00561ADA */

loc_00562293: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005622AC; /* je: equal / zero */

loc_0056229A: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005622A1u); RECOMP_ABI_CALL(0x005743BDu, sub_005743BD); /* call 0x005743BD */

loc_005622A1: ;
    eax = MEM32(eax);
    POP32(esp, ecx);
    MEM32(esi + 8) = eax;
    goto loc_00562363;

loc_005622AC: ;
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005622B4u); RECOMP_ABI_CALL(0x00561A9Bu, sub_00561A9B); /* call 0x00561A9B */

loc_005622B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005622C2; /* je: equal / zero */

loc_005622B9: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005622C0u); RECOMP_ABI_CALL(0x005743A5u, sub_005743A5); /* call 0x005743A5 */

loc_005622C0: ;
    goto loc_005622A1;

loc_005622C2: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005622CEu); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_005622CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005622DD; /* je: equal / zero */

loc_005622D4: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005622DBu); RECOMP_ABI_CALL(0x0057438Du, sub_0057438D); /* call 0x0057438D */

loc_005622DB: ;
    goto loc_005622A1;

loc_005622DD: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005622E7u); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_005622E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005622F6; /* je: equal / zero */

loc_005622ED: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005622F4u); RECOMP_ABI_CALL(0x005743F9u, sub_005743F9); /* call 0x005743F9 */

loc_005622F4: ;
    goto loc_005622A1;

loc_005622F6: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562300u); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_00562300: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0056230F; /* je: equal / zero */

loc_00562306: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056230Du); RECOMP_ABI_CALL(0x005743FFu, sub_005743FF); /* call 0x005743FF */

loc_0056230D: ;
    goto loc_005622A1;

loc_0056230F: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562319u); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_00562319: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0056232B; /* je: equal / zero */

loc_0056231F: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562326u); RECOMP_ABI_CALL(0x00574405u, sub_00574405); /* call 0x00574405 */

loc_00562326: ;
    goto loc_005622A1;

loc_0056232B: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562334u); RECOMP_ABI_CALL(0x00561A6Cu, sub_00561A6C); /* call 0x00561A6C */

loc_00562334: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00562345; /* je: equal / zero */

loc_00562339: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562340u); RECOMP_ABI_CALL(0x00574387u, sub_00574387); /* call 0x00574387 */

loc_00562340: ;
    goto loc_005622A1;

loc_00562345: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056234Bu); RECOMP_ABI_CALL(0x00562044u, sub_00562044); /* call 0x00562044 */

loc_0056234B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0056235C; /* je: equal / zero */

loc_00562350: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562357u); RECOMP_ABI_CALL(0x005743F3u, sub_005743F3); /* call 0x005743F3 */

loc_00562357: ;
    goto loc_005622A1;

loc_0056235C: ;
    MEM32(esi + 8) = 0x87730B;

loc_00562363: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00562376; /* je: equal / zero */

loc_00562373: ;
    MEM32(ecx + 0x10) = esi;

loc_00562376: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = ecx;
    MEM32(eax + 4) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005620EE; /* jl: less (signed <) */

loc_0056238F: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = esi;

loc_00562394: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0056239B: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00562394;

}

/**
 * sub_005623A3
 * Original: 0x005623A3 - 0x00562789 (998 bytes, 349 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005623A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_005623A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x104));
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 4);
    MEM32(esp + 0x1C) = edi;
    goto loc_00562760;

loc_005623C0: ;
    PUSH32(esp, MEM32(ebx));
    ecx = edi;
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005623CCu); RECOMP_ABI_CALL(0x00561B99u, sub_00561B99); /* call 0x00561B99 */

loc_005623CC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0056275D; /* je: equal / zero */

loc_005623DA: ;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005623E2u); RECOMP_ABI_CALL(0x00561ADAu, sub_00561ADA); /* call 0x00561ADA */

loc_005623E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebx + 4));
    if (CMP_EQ(_fa, _fb)) goto loc_0056245A; /* je: equal / zero */

loc_005623EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005623EFu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_005623EF: ;
    esi = MEM32(esi + 8);
    POP32(esp, ecx);
    PUSH32(esp, 4);
    edi = 0x87730C;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0056241D; /* jne: not equal / not zero */

loc_00562401: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0056241D; /* jl: less (signed <) */

loc_00562405: ;
    esi = MEM32(ebx + 8);
    PUSH32(esp, 0xD);
    edi = 0x877310;
    POP32(esp, ecx);
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
    if ((_flags == 0)) goto loc_0056241D; /* jne: not equal / not zero */

loc_00562416: ;
    MEM32(ebx + 8) = 0x877320;

loc_0056241D: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    esi = MEM32(esp + 0x18);
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, MEM32(ebx + 8));
    eax = esp + 0x5C;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056243Au); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_0056243A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562443: ;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056244Bu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0056244B: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;

loc_00562451: ;
    edi = MEM32(esp + 0x1C);
    goto loc_0056275D;

loc_0056245A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056245Fu); RECOMP_ABI_CALL(0x00561A9Bu, sub_00561A9B); /* call 0x00561A9B */

loc_0056245F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00562497; /* je: equal / zero */

loc_00562464: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    eax = esp + 0x44;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056247Bu); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_0056247B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562484: ;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056248Cu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0056248C: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;
    goto loc_0056275D;

loc_00562497: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005624A4u); RECOMP_ABI_CALL(0x00561B15u, sub_00561B15); /* call 0x00561B15 */

loc_005624A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005624E1; /* je: equal / zero */

loc_005624AA: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    eax = esp + 0x4C;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005624C1u); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_005624C1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_005624CA: ;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005624D2u); RECOMP_ABI_CALL(0x005CC4EBu, sub_005CC4EB); /* call 0x005CC4EB */

loc_005624D2: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esi + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    fp_pop(); /* fstp st(0) */
    goto loc_0056275D;

loc_005624E1: ;
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005624EBu); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_005624EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00562527; /* je: equal / zero */

loc_005624F1: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    eax = esp + 0x40;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562508u); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_00562508: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562511: ;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562519u); RECOMP_ABI_CALL(0x00561CE8u, sub_00561CE8); /* call 0x00561CE8 */

loc_00562519: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    goto loc_0056275D;

loc_00562527: ;
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562531u); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_00562531: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0056257A; /* je: equal / zero */

loc_00562537: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    eax = esp + 0x2C;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056254Eu); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_0056254E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562557: ;
    PUSH32(esp, MEM32(ebx + 4));
    eax = esp + 0x74;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562564u); RECOMP_ABI_CALL(0x00561D47u, sub_00561D47); /* call 0x00561D47 */

loc_00562564: ;
    esi = eax;
    eax = MEM32(esp + 0x1C);
    edi = esp + 0x5C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(eax + 4);
    esi = esp + 0x5C;
    goto loc_005625D0;

loc_0056257A: ;
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562584u); RECOMP_ABI_CALL(0x00561C1Eu, sub_00561C1E); /* call 0x00561C1E */

loc_00562584: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_005625DA; /* je: equal / zero */

loc_0056258A: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    eax = esp + 0x48;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005625A1u); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_005625A1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_005625AA: ;
    PUSH32(esp, MEM32(ebx + 4));
    eax = esp + 0x84;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005625BAu); RECOMP_ABI_CALL(0x00561DB5u, sub_00561DB5); /* call 0x00561DB5 */

loc_005625BA: ;
    esi = eax;
    eax = MEM32(esp + 0x1C);
    edi = esp + 0x68;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(eax + 4);
    esi = esp + 0x68;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_005625D0: ;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    goto loc_00562451;

loc_005625DA: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005625E3u); RECOMP_ABI_CALL(0x00561A6Cu, sub_00561A6C); /* call 0x00561A6C */

loc_005625E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0056261B; /* je: equal / zero */

loc_005625E8: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    eax = esp + 0x50;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005625FFu); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_005625FF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562608: ;
    PUSH32(esp, MEM32(ebx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562610u); RECOMP_ABI_CALL(0x00561EAAu, sub_00561EAA); /* call 0x00561EAA */

loc_00562610: ;
    POP32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEM8(ecx) = LO8(eax);
    goto loc_0056275D;

loc_0056261B: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562621u); RECOMP_ABI_CALL(0x00562044u, sub_00562044); /* call 0x00562044 */

loc_00562621: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0056267E; /* je: equal / zero */

loc_00562626: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    eax = esp + 0x30;
    PUSH32(esp, MEM32(esi));
    ecx = edi;
    PUSH32(esp, MEM32(ebx + 8));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056263Du); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_0056263D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562646: ;
    PUSH32(esp, MEM32(ebx + 4));
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562656u); RECOMP_ABI_CALL(0x00561E3Fu, sub_00561E3F); /* call 0x00561E3F */

loc_00562656: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    esi = eax;
    eax = MEM32(esp + 0x14);
    edi = esp + 0x90;
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
    edi = MEM32(eax + 4);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    esi = esp + 0x90;
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
    goto loc_00562451;

loc_0056267E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00562713; /* je: equal / zero */

loc_0056268C: ;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ecx;

loc_0056269A: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(ecx));
    edx = MEM32(esp + 0x20);
    MEM8(esp + 0x13) = LO8(ecx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005626D2; /* jne: not equal / not zero */

loc_005626AC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005626CE; /* je: equal / zero */

loc_005626B0: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(ecx + 1));
    MEM8(esp + 0x13) = LO8(ecx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005626D2; /* jne: not equal / not zero */

loc_005626C0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x14)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esp + 0x20)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 2;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0056269A; /* jne: not equal / not zero */

loc_005626CE: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005626D7;

loc_005626D2: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005626D7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005626E6; /* je: equal / zero */

loc_005626DB: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0056268C; /* jne: not equal / not zero */

loc_005626E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00562713; /* je: equal / zero */

loc_005626EA: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(eax + 8));
    eax = esp + 0x3C;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562701u); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_00562701: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562706: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 4);
    ecx = MEM32(ecx);
    MEM32(eax) = ecx;
    goto loc_0056275D;

loc_00562713: ;
    PUSH32(esp, MEM32(ebx + 4));
    ecx = edi;
    PUSH32(esp, MEM32(edi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562720u); RECOMP_ABI_CALL(0x00561B99u, sub_00561B99); /* call 0x00561B99 */

loc_00562720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0056277A; /* je: equal / zero */

loc_00562728: ;
    PUSH32(esp, MEM32(ebx + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(eax + 8));
    eax = esp + 0x44;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056273Fu); RECOMP_ABI_CALL(0x00561FCDu, sub_00561FCD); /* call 0x00561FCD */

loc_0056273F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_0056277A; /* jle: less or equal (signed <=) */

loc_00562744: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x1C));
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562755u); RECOMP_ABI_CALL(0x00562014u, sub_00562014); /* call 0x00562014 */

loc_00562755: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00562782; /* jle: less or equal (signed <=) */

loc_0056275D: ;
    ebx = MEM32(ebx + 0x14);

loc_00562760: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005623C0; /* jne: not equal / not zero */

loc_00562768: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;

loc_00562771: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0056277A: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00562771;

loc_00562782: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    goto loc_00562771;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00562789
 * Original: 0x00562789 - 0x005627FD (116 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00562789(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562789: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(ebx + 0x14) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x8772F4);
    PUSH32(esp, eax);
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 0x10) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005627B3u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_005627B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ebx + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_005627F5; /* je: equal / zero */

loc_005627BD: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005627F5; /* je: equal / zero */

loc_005627C2: ;
    ecx = MEM32(ebx + 0x14);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx;
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
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebx + 0x14);
    MEM8(eax + ecx) = 0;
    PUSH32(esp, MEM32(ebx + 0x14));
    eax = ebp + 8;
    PUSH32(esp, MEM32(ebx + 0x10));
    ecx = ebx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005627F4u); RECOMP_ABI_CALL(0x005620D1u, sub_005620D1); /* call 0x005620D1 */

loc_005627F4: ;
    POP32(esp, edi);

loc_005627F5: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00562A40
 * Original: 0x00562A40 - 0x00562A59 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562A40: ;
    eax = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax * 4 + 0x915AD0);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00562A59
 * Original: 0x00562A59 - 0x00562A76 (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00562A59(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562A59: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax * 4 + 0x915AD0;
    PUSH32(esp, 0x00562A75u); RECOMP_ABI_CALL(0x005602A4u, sub_005602A4); /* call 0x005602A4 */

loc_00562A75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00562A76
 * Original: 0x00562A76 - 0x00563169 (1779 bytes, 580 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00562A76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00562A76: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    MEM32(eax) = 0x203;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562A94u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562A94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 2);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562AA4u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562AA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 3);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562AB4u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562AB4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 4);
    MEM32(eax) = 0x204;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562AC8u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562AC8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 5);
    POP32(esp, edi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562ADEu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562ADE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 6);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562AEEu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562AEE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 7);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562AFEu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562AFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 8);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B0Eu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x15);
    MEM32(eax) = 0x302;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B22u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B22: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x16);
    MEM32(eax) = 0x303;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B36u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B36: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x17);
    MEM32(eax) = 0x8006;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B4Au); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B4A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 9);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B5Au); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B5A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0xA);
    MEM32(eax) = 0x1010101;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B6Eu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B6E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0xB);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B7Eu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x14);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562B8Eu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562B8E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x29);
    MEM32(eax) = 0x1D01;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562BA2u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562BA2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x21);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562BB2u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562BB2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x22);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562BC2u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562BC2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x2A);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562BD2u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562BD2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x19);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562BE2u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562BE2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    edi = 0x1E00;
    PUSH32(esp, 0x1A);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562BF7u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562BF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x1B);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C07u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C07: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x1C);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C17u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C17: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x1D);
    MEM32(eax) = 0x207;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C2Bu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C2B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x1E);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C3Bu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C3B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x1F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C4Cu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C4C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C5Du); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C5D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x23);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C6Du); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x24);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C7Du); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x25);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C8Du); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C8D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x26);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562C9Du); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562C9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x28);
    MEM32(eax) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562CB1u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562CB1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00562CB6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0xC);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562CC3u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562CC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0xD);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562CD3u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562CD3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x2E);
    MEM32(eax) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562CE3u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562CE3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0xE);
    MEM32(eax) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562CF7u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562CF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0xF);
    MEM32(eax) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562D0Bu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562D0B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x10);
    MEM32(eax) = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562D1Fu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562D1F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x11);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562D2Fu); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562D2F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0x12);
    MEM32(eax) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562D43u); RECOMP_ABI_CALL(0x00562A59u, sub_00562A59); /* call 0x00562A59 */

loc_00562D43: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00562CB6; /* jb: below (unsigned <) */

loc_00562D50: ;
    _fa = (uint32_t)(MEM32(0x915744)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915744), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563115; /* je: equal / zero */

loc_00562D5C: ;
    edx = MEM32(0x915B10);
    ecx = 0x40354;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562D6Eu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562D6E: ;
    edx = MEM32(0x915B50);
    MEM32(0x784FC4) = edi;
    ecx = 0x4035C;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562D86u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562D86: ;
    PUSH32(esp, MEM32(0x915B90));
    MEM32(0x784FE0) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562D97u); RECOMP_ABI_CALL(0x0075F860u, sub_0075F860); /* call 0x0075F860 */

loc_00562D97: ;
    edx = MEM32(0x915BD0);
    ecx = 0x4033C;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562DA9u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562DA9: ;
    edx = MEM32(0x915C10);
    MEM32(0x784FC8) = edi;
    ecx = 0x40340;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562DC1u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562DC1: ;
    edx = MEM32(0x915C50);
    MEM32(0x784FD4) = edi;
    ecx = 0x40300;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562DD9u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562DD9: ;
    edx = MEM32(0x915C90);
    MEM32(0x784FD0) = edi;
    ecx = 0x40304;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562DF1u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562DF1: ;
    edx = MEM32(0x916010);
    MEM32(0x784FCC) = edi;
    ecx = 0x40344;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E09u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562E09: ;
    edx = MEM32(0x916050);
    MEM32(0x784FD8) = edi;
    ecx = 0x40348;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E21u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562E21: ;
    edx = MEM32(0x916090);
    MEM32(0x784FDC) = edi;
    ecx = 0x40350;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E39u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562E39: ;
    edx = MEM32(0x915D10);
    MEM32(0x785008) = edi;
    ecx = 0x40310;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E51u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562E51: ;
    edx = MEM32(0x915D50);
    MEM32(0x784FE4) = edi;
    ecx = 0x40358;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E69u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562E69: ;
    PUSH32(esp, MEM32(0x916350));
    MEM32(0x784FEC) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E7Au); RECOMP_ABI_CALL(0x0075E890u, sub_0075E890); /* call 0x0075E890 */

loc_00562E7A: ;
    edx = MEM32(0x916510);
    ecx = 0x4037C;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E8Cu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562E8C: ;
    PUSH32(esp, MEM32(0x915FD0));
    MEM32(0x784FE8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562E9Du); RECOMP_ABI_CALL(0x0075FA00u, sub_0075FA00); /* call 0x0075FA00 */

loc_00562E9D: ;
    eax = MEM32(0x916310);
    PUSH32(esp, MEM32(0x916550));
    MEM8(0x784CD9) = MEM8(0x784CD9) | 0x30;
    _fa = (uint32_t)(MEM8(0x784CD9)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(0x78507C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562EB9u); RECOMP_ABI_CALL(0x0075FBD0u, sub_0075FBD0); /* call 0x0075FBD0 */

loc_00562EB9: ;
    PUSH32(esp, MEM32(0x916110));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562EC4u); RECOMP_ABI_CALL(0x0075F8F0u, sub_0075F8F0); /* call 0x0075F8F0 */

loc_00562EC4: ;
    PUSH32(esp, MEM32(0x916150));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562ECFu); RECOMP_ABI_CALL(0x0075F990u, sub_0075F990); /* call 0x0075F990 */

loc_00562ECF: ;
    edx = MEM32(0x916190);
    ecx = 0x40374;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562EE1u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562EE1: ;
    edx = MEM32(0x9161D0);
    MEM32(0x784FF0) = edi;
    ecx = 0x40378;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562EF9u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562EF9: ;
    edx = MEM32(0x916250);
    MEM32(0x784FF4) = edi;
    ecx = 0x40368;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F11u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562F11: ;
    edx = MEM32(0x916290);
    MEM32(0x784FFC) = edi;
    ecx = 0x4036C;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F29u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562F29: ;
    PUSH32(esp, esi);
    eax = ebp + -20;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    MEM32(0x785000) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F3Bu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00562F3B: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    ecx = 0x40360;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F4Cu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562F4C: ;
    PUSH32(esp, esi);
    eax = ebp + -20;
    PUSH32(esp, 0x1D);
    PUSH32(esp, eax);
    MEM32(0x785004) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F5Eu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00562F5E: ;
    edi = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    ecx = 0x40364;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F6Fu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00562F6F: ;
    PUSH32(esp, esi);
    eax = ebp + -20;
    PUSH32(esp, 0x23);
    PUSH32(esp, eax);
    MEM32(0x784FF8) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F81u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00562F81: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    MEM32(0x785050) = eax;
    eax = ebp + -20;
    PUSH32(esp, 0x28);
    edx = 0x2000;
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562F9Fu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00562F9F: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(0x785054) = eax;
    eax = ebp + -20;
    PUSH32(esp, 0x25);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562FB8u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00562FB8: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(0x785058) = eax;
    eax = ebp + -20;
    PUSH32(esp, 0x26);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00562FD1u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00562FD1: ;
    eax = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x78505C) = eax;
    MEM32(ebp + -4) = esi;
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEMF(ebp + -12) = xmm1.f[0]; /* movss */
    MEMF(ebp + -16) = xmm1.f[0]; /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    edi = 0x784CE4;

loc_00563008: ;
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563014u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00563014: ;
    eax = MEM32(eax);
    ecx = MEM32(ebp + -4);
    edx = ebx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, esi);
    MEM32(edi + -4) = eax;
    eax = ebp + -28;
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0xD);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563032u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00563032: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(edi) = eax;
    eax = ebp + -32;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563048u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00563048: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(edi + 4) = eax;
    eax = ebp + -36;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056305Fu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_0056305F: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(edi + 0xC) = eax;
    eax = ebp + -40;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563076u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00563076: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(edi + 8) = eax;
    eax = ebp + -44;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056308Du); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_0056308D: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(edi + 0x10) = eax;
    eax = ebp + -48;
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005630A7u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_005630A7: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM32(edi + 0x1C) = eax;
    eax = ebp + -52;
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005630BEu); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_005630BE: ;
    eax = MEM32(eax);
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0x16);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005630D9u); RECOMP_ABI_CALL(0x0075EE40u, sub_0075EE40); /* call 0x0075EE40 */

loc_005630D9: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x17);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005630E6u); RECOMP_ABI_CALL(0x0075EE40u, sub_0075EE40); /* call 0x0075EE40 */

loc_005630E6: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x19);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005630F3u); RECOMP_ABI_CALL(0x0075EE40u, sub_0075EE40); /* call 0x0075EE40 */

loc_005630F3: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x18);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563100u); RECOMP_ABI_CALL(0x0075EE40u, sub_0075EE40); /* call 0x0075EE40 */

loc_00563100: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x784EE4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x784EE4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00563008; /* jl: less (signed <) */

loc_00563115: ;
    PUSH32(esp, esi);
    eax = ebp + -52;
    PUSH32(esp, 0x15);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563121u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00563121: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    MEM32(0x915AC0) = eax;
    eax = ebp + -52;
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563134u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00563134: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    MEM32(0x915AC8) = eax;
    eax = ebp + -52;
    PUSH32(esp, 0x17);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563147u); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_00563147: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    MEM32(0x915ACC) = eax;
    eax = ebp + -52;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056315Au); RECOMP_ABI_CALL(0x00562A40u, sub_00562A40); /* call 0x00562A40 */

loc_0056315A: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x915AC4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00563169
 * Original: 0x00563169 - 0x00563A0F (2214 bytes, 542 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563169(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563169: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563186u); RECOMP_ABI_CALL(0x005602EEu, sub_005602EE); /* call 0x005602EE */

loc_00563186: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563982; /* je: equal / zero */

loc_00563192: ;
    edi = 0x40348;
    esi = 0x40350;

loc_0056319C: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = 0x2000;
    if (CMP_NE(_fa, _fb)) goto loc_00563875; /* jne: not equal / not zero */

loc_005631AC: ;
    ecx = MEM32(ebp + -8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x35 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00563969; /* ja: above (unsigned >) */

loc_005631B9: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x563A0F); /* switch: 63 entries, 61 targets */
    if (_jt == 0x005631C0u) goto loc_005631C0;
    if (_jt == 0x005631EBu) goto loc_005631EB;
    if (_jt == 0x00563208u) goto loc_00563208;
    if (_jt == 0x0056322Bu) goto loc_0056322B;
    if (_jt == 0x00563258u) goto loc_00563258;
    if (_jt == 0x00563275u) goto loc_00563275;
    if (_jt == 0x00563292u) goto loc_00563292;
    if (_jt == 0x005632AFu) goto loc_005632AF;
    if (_jt == 0x005632CCu) goto loc_005632CC;
    if (_jt == 0x005632DFu) goto loc_005632DF;
    if (_jt == 0x00563310u) goto loc_00563310;
    if (_jt == 0x0056333Au) goto loc_0056333A;
    if (_jt == 0x00563355u) goto loc_00563355;
    if (_jt == 0x00563399u) goto loc_00563399;
    if (_jt == 0x005633D5u) goto loc_005633D5;
    if (_jt == 0x00563411u) goto loc_00563411;
    if (_jt == 0x0056344Du) goto loc_0056344D;
    if (_jt == 0x00563486u) goto loc_00563486;
    if (_jt == 0x005634E7u) goto loc_005634E7;
    if (_jt == 0x00563515u) goto loc_00563515;
    if (_jt == 0x00563540u) goto loc_00563540;
    if (_jt == 0x0056356Bu) goto loc_0056356B;
    if (_jt == 0x00563588u) goto loc_00563588;
    if (_jt == 0x005635A5u) goto loc_005635A5;
    if (_jt == 0x005635B2u) goto loc_005635B2;
    if (_jt == 0x005635BFu) goto loc_005635BF;
    if (_jt == 0x005635CCu) goto loc_005635CC;
    if (_jt == 0x005635E9u) goto loc_005635E9;
    if (_jt == 0x00563606u) goto loc_00563606;
    if (_jt == 0x00563623u) goto loc_00563623;
    if (_jt == 0x00563640u) goto loc_00563640;
    if (_jt == 0x0056365Du) goto loc_0056365D;
    if (_jt == 0x0056367Au) goto loc_0056367A;
    if (_jt == 0x0056368Eu) goto loc_0056368E;
    if (_jt == 0x0056369Bu) goto loc_0056369B;
    if (_jt == 0x005636AEu) goto loc_005636AE;
    if (_jt == 0x005636C1u) goto loc_005636C1;
    if (_jt == 0x005636D4u) goto loc_005636D4;
    if (_jt == 0x005636E7u) goto loc_005636E7;
    if (_jt == 0x00563704u) goto loc_00563704;
    if (_jt == 0x00563711u) goto loc_00563711;
    if (_jt == 0x0056371Eu) goto loc_0056371E;
    if (_jt == 0x0056372Bu) goto loc_0056372B;
    if (_jt == 0x00563738u) goto loc_00563738;
    if (_jt == 0x0056374Bu) goto loc_0056374B;
    if (_jt == 0x0056375Eu) goto loc_0056375E;
    if (_jt == 0x00563771u) goto loc_00563771;
    if (_jt == 0x00563784u) goto loc_00563784;
    if (_jt == 0x00563797u) goto loc_00563797;
    if (_jt == 0x005637AAu) goto loc_005637AA;
    if (_jt == 0x005637BDu) goto loc_005637BD;
    if (_jt == 0x005637D0u) goto loc_005637D0;
    if (_jt == 0x005637EDu) goto loc_005637ED;
    if (_jt == 0x0056380Au) goto loc_0056380A;
    if (_jt == 0x00563827u) goto loc_00563827;
    if (_jt == 0x00563834u) goto loc_00563834;
    if (_jt == 0x00563841u) goto loc_00563841;
    if (_jt == 0x0056384Eu) goto loc_0056384E;
    if (_jt == 0x0056385Bu) goto loc_0056385B;
    if (_jt == 0x00563868u) goto loc_00563868;
    if (_jt == 0x00563969u) goto loc_00563969;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005631C0: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005631D1; /* je: equal / zero */

loc_005631C6: ;
    MEM8(0x8DBEEC) = LO8(ebx);
    goto loc_00563969;

loc_005631D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM8(0x8DBEEC) = 0;
    MEM32(0x915750) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005631E6u); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_005631E6: ;
    goto loc_00563969;

loc_005631EB: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40354;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005631FBu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005631FB: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FC4) = eax;
    goto loc_00563969;

loc_00563208: ;
    edx = MEM32(ebp + -4);
    ecx = 0x4035C;
    MEM32(0x8DCABC) = edx;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056321Eu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056321E: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FE0) = eax;
    goto loc_00563969;

loc_0056322B: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563233u); RECOMP_ABI_CALL(0x0075F860u, sub_0075F860); /* call 0x0075F860 */

loc_00563233: ;
    _fa = (uint32_t)(MEM32(0x8DCABC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8DCABC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563969; /* jne: not equal / not zero */

loc_00563240: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x4035C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056324Cu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056324C: ;
    MEM32(0x784FE0) = MEM32(0x784FE0) & 0;
    _fa = (uint32_t)(MEM32(0x784FE0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00563969;

loc_00563258: ;
    edx = MEM32(ebp + -4);
    ecx = 0x4033C;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563268u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563268: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FC8) = eax;
    goto loc_00563969;

loc_00563275: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40340;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563285u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563285: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FD4) = eax;
    goto loc_00563969;

loc_00563292: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40300;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005632A2u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005632A2: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FD0) = eax;
    goto loc_00563969;

loc_005632AF: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40304;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005632BFu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005632BF: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FCC) = eax;
    goto loc_00563969;

loc_005632CC: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005634DA; /* ja: above (unsigned >) */

loc_005632D8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x563AE7); /* switch: 9 entries, 9 targets */
    if (_jt == 0x005632DFu) goto loc_005632DF;
    if (_jt == 0x00563310u) goto loc_00563310;
    if (_jt == 0x0056333Au) goto loc_0056333A;
    if (_jt == 0x00563355u) goto loc_00563355;
    if (_jt == 0x00563399u) goto loc_00563399;
    if (_jt == 0x005633D5u) goto loc_005633D5;
    if (_jt == 0x00563411u) goto loc_00563411;
    if (_jt == 0x0056344Du) goto loc_0056344D;
    if (_jt == 0x00563486u) goto loc_00563486;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_005632DF: ;
    edx = 0x302;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005632EEu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005632EE: ;
    edx = 0x303;
    ecx = edi;
    MEM32(0x784FD8) = 0x302;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563304u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563304: ;
    MEM32(0x784FDC) = 0x303;
    goto loc_0056337E;

loc_00563310: ;
    edx = 0x302;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056331Fu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056331F: ;
    edx = ebx;
    ecx = edi;
    MEM32(0x784FD8) = 0x302;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563332u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563332: ;
    MEM32(0x784FDC) = ebx;
    goto loc_0056337E;

loc_0056333A: ;
    edx = 0x302;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563349u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563349: ;
    MEM32(0x784FD8) = 0x302;
    goto loc_0056336E;

loc_00563355: ;
    edx = 0x306;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563364u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563364: ;
    MEM32(0x784FD8) = 0x306;

loc_0056336E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563377u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563377: ;
    MEM32(0x784FDC) = MEM32(0x784FDC) & 0;
    _fa = (uint32_t)(MEM32(0x784FDC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0056337E: ;
    edx = 0x8006;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056338Au); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056338A: ;
    MEM32(0x785008) = 0x8006;
    goto loc_005634DA;

loc_00563399: ;
    edx = ebx;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005633A5u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005633A5: ;
    edx = ebx;
    ecx = edi;
    MEM32(0x784FD8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005633B4u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005633B4: ;
    edx = 0x800B;
    ecx = esi;
    MEM32(0x784FDC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005633C6u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005633C6: ;
    MEM32(0x785008) = 0x800B;
    goto loc_005634DA;

loc_005633D5: ;
    edx = ebx;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005633E1u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005633E1: ;
    edx = ebx;
    ecx = edi;
    MEM32(0x784FD8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005633F0u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005633F0: ;
    edx = 0x800A;
    ecx = esi;
    MEM32(0x784FDC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563402u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563402: ;
    MEM32(0x785008) = 0x800A;
    goto loc_005634DA;

loc_00563411: ;
    edx = ebx;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056341Du); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056341D: ;
    edx = ebx;
    ecx = edi;
    MEM32(0x784FD8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056342Cu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056342C: ;
    edx = 0x8007;
    ecx = esi;
    MEM32(0x784FDC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056343Eu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056343E: ;
    MEM32(0x785008) = 0x8007;
    goto loc_005634DA;

loc_0056344D: ;
    edx = ebx;
    ecx = 0x40344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563459u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563459: ;
    edx = ebx;
    ecx = edi;
    MEM32(0x784FD8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563468u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563468: ;
    edx = 0x8008;
    ecx = esi;
    MEM32(0x784FDC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056347Au); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056347A: ;
    MEM32(0x785008) = 0x8008;
    goto loc_005634DA;

loc_00563486: ;
    _fa = (uint32_t)(MEM32(0x915AC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915AC4), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005634DA; /* je: equal / zero */

loc_0056348F: ;
    edx = MEM32(0x915AC0);
    ecx = 0x40344;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005634A2u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005634A2: ;
    eax = MEM32(ebp + -16);
    edx = MEM32(0x915AC8);
    ecx = edi;
    MEM32(0x784FD8) = eax;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005634BAu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005634BA: ;
    eax = MEM32(ebp + -16);
    edx = MEM32(0x915ACC);
    ecx = esi;
    MEM32(0x784FDC) = eax;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005634D2u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005634D2: ;
    eax = MEM32(ebp + -16);
    MEM32(0x785008) = eax;

loc_005634DA: ;
    eax = MEM32(ebp + -4);
    MEM32(0x915AC4) = eax;
    goto loc_00563969;

loc_005634E7: ;
    _fa = (uint32_t)(MEM32(0x915AC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915AC4), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563508; /* jne: not equal / not zero */

loc_005634F0: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40344;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563500u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563500: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FD8) = eax;

loc_00563508: ;
    eax = MEM32(ebp + -4);
    MEM32(0x915AC0) = eax;
    goto loc_00563969;

loc_00563515: ;
    _fa = (uint32_t)(MEM32(0x915AC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915AC4), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563533; /* jne: not equal / not zero */

loc_0056351E: ;
    edx = MEM32(ebp + -4);
    ecx = esi;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056352Bu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056352B: ;
    eax = MEM32(ebp + -16);
    MEM32(0x785008) = eax;

loc_00563533: ;
    eax = MEM32(ebp + -4);
    MEM32(0x915ACC) = eax;
    goto loc_00563969;

loc_00563540: ;
    _fa = (uint32_t)(MEM32(0x915AC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915AC4), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056355E; /* jne: not equal / not zero */

loc_00563549: ;
    edx = MEM32(ebp + -4);
    ecx = edi;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563556u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563556: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FDC) = eax;

loc_0056355E: ;
    eax = MEM32(ebp + -4);
    MEM32(0x915AC8) = eax;
    goto loc_00563969;

loc_0056356B: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40310;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056357Bu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056357B: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FE4) = eax;
    goto loc_00563969;

loc_00563588: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40358;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563598u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563598: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FEC) = eax;
    goto loc_00563969;

loc_005635A5: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005635ADu); RECOMP_ABI_CALL(0x0075FA00u, sub_0075FA00); /* call 0x0075FA00 */

loc_005635AD: ;
    goto loc_00563969;

loc_005635B2: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005635BAu); RECOMP_ABI_CALL(0x0075F8F0u, sub_0075F8F0); /* call 0x0075F8F0 */

loc_005635BA: ;
    goto loc_00563969;

loc_005635BF: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005635C7u); RECOMP_ABI_CALL(0x0075F990u, sub_0075F990); /* call 0x0075F990 */

loc_005635C7: ;
    goto loc_00563969;

loc_005635CC: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40374;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005635DCu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005635DC: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FF0) = eax;
    goto loc_00563969;

loc_005635E9: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40378;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005635F9u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005635F9: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FF4) = eax;
    goto loc_00563969;

loc_00563606: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40364;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563616u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563616: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FF8) = eax;
    goto loc_00563969;

loc_00563623: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40368;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563633u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563633: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FFC) = eax;
    goto loc_00563969;

loc_00563640: ;
    edx = MEM32(ebp + -4);
    ecx = 0x4036C;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563650u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_00563650: ;
    eax = MEM32(ebp + -16);
    MEM32(0x785000) = eax;
    goto loc_00563969;

loc_0056365D: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40360;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056366Du); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056366D: ;
    eax = MEM32(ebp + -16);
    MEM32(0x785004) = eax;
    goto loc_00563969;

loc_0056367A: ;
    eax = MEM32(ebp + -4);
    MEM8(0x784CD9) = MEM8(0x784CD9) | 0x30;
    _fa = (uint32_t)(MEM8(0x784CD9)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(0x78507C) = eax;
    goto loc_00563969;

loc_0056368E: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563696u); RECOMP_ABI_CALL(0x0075E890u, sub_0075E890); /* call 0x0075E890 */

loc_00563696: ;
    goto loc_00563969;

loc_0056369B: ;
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(0x785050) = eax;
    goto loc_00563969;

loc_005636AE: ;
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(0x785054) = eax;
    goto loc_00563969;

loc_005636C1: ;
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(0x785058) = eax;
    goto loc_00563969;

loc_005636D4: ;
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(0x78505C) = eax;
    goto loc_00563969;

loc_005636E7: ;
    edx = MEM32(ebp + -4);
    ecx = 0x4037C;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005636F7u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005636F7: ;
    eax = MEM32(ebp + -16);
    MEM32(0x784FE8) = eax;
    goto loc_00563969;

loc_00563704: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056370Cu); RECOMP_ABI_CALL(0x0075EBB0u, sub_0075EBB0); /* call 0x0075EBB0 */

loc_0056370C: ;
    goto loc_00563969;

loc_00563711: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563719u); RECOMP_ABI_CALL(0x0075FBD0u, sub_0075FBD0); /* call 0x0075FBD0 */

loc_00563719: ;
    goto loc_00563969;

loc_0056371E: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563726u); RECOMP_ABI_CALL(0x0075FB70u, sub_0075FB70); /* call 0x0075FB70 */

loc_00563726: ;
    goto loc_00563969;

loc_0056372B: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563733u); RECOMP_ABI_CALL(0x0075FC50u, sub_0075FC50); /* call 0x0075FC50 */

loc_00563733: ;
    goto loc_00563969;

loc_00563738: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784CE0) = eax;
    goto loc_00563969;

loc_0056374B: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784CE4) = eax;
    goto loc_00563969;

loc_0056375E: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784CE8) = eax;
    goto loc_00563969;

loc_00563771: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784CEC) = eax;
    goto loc_00563969;

loc_00563784: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784CF0) = eax;
    goto loc_00563969;

loc_00563797: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784CF4) = eax;
    goto loc_00563969;

loc_005637AA: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784CF8) = eax;
    goto loc_00563969;

loc_005637BD: ;
    eax = MEM32(ebp + -4);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ebx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x784D00) = eax;
    goto loc_00563969;

loc_005637D0: ;
    edx = MEM32(ebp + -4);
    ecx = 0x4034C;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005637E0u); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005637E0: ;
    eax = MEM32(ebp + -16);
    MEM32(0x78500C) = eax;
    goto loc_00563969;

loc_005637ED: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40388;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005637FDu); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_005637FD: ;
    eax = MEM32(ebp + -16);
    MEM32(0x785018) = eax;
    goto loc_00563969;

loc_0056380A: ;
    edx = MEM32(ebp + -4);
    ecx = 0x40384;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056381Au); RECOMP_ABI_CALL(0x0075E280u, sub_0075E280); /* call 0x0075E280 */

loc_0056381A: ;
    eax = MEM32(ebp + -16);
    MEM32(0x785014) = eax;
    goto loc_00563969;

loc_00563827: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056382Fu); RECOMP_ABI_CALL(0x0075E800u, sub_0075E800); /* call 0x0075E800 */

loc_0056382F: ;
    goto loc_00563969;

loc_00563834: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056383Cu); RECOMP_ABI_CALL(0x0075FA30u, sub_0075FA30); /* call 0x0075FA30 */

loc_0056383C: ;
    goto loc_00563969;

loc_00563841: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563849u); RECOMP_ABI_CALL(0x0075FAA0u, sub_0075FAA0); /* call 0x0075FAA0 */

loc_00563849: ;
    goto loc_00563969;

loc_0056384E: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563856u); RECOMP_ABI_CALL(0x0075FB10u, sub_0075FB10); /* call 0x0075FB10 */

loc_00563856: ;
    goto loc_00563969;

loc_0056385B: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563863u); RECOMP_ABI_CALL(0x0075FB30u, sub_0075FB30); /* call 0x0075FB30 */

loc_00563863: ;
    goto loc_00563969;

loc_00563868: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563870u); RECOMP_ABI_CALL(0x0075FB50u, sub_0075FB50); /* call 0x0075FB50 */

loc_00563870: ;
    goto loc_00563969;

loc_00563875: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00563916; /* jg: greater (signed >) */

loc_00563881: ;
    if (CMP_EQ(_fa, _fb)) goto loc_005638FE; /* je: equal / zero */

loc_00563883: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005638E6; /* je: equal / zero */

loc_00563888: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005638CB; /* je: equal / zero */

loc_0056388B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005638B0; /* je: equal / zero */

loc_0056388E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00563969; /* jne: not equal / not zero */

loc_00563895: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784CF0) = eax;
    goto loc_00563969;

loc_005638B0: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784CEC) = eax;
    goto loc_00563969;

loc_005638CB: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784CE4) = eax;
    goto loc_00563969;

loc_005638E6: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784CE0) = eax;
    goto loc_00563969;

loc_005638FE: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784CF4) = eax;
    goto loc_00563969;

loc_00563916: ;
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00563953; /* je: equal / zero */

loc_0056391B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0056393B; /* je: equal / zero */

loc_0056391E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00563969; /* jne: not equal / not zero */

loc_00563923: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784CE8) = eax;
    goto loc_00563969;

loc_0056393B: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784D00) = eax;
    goto loc_00563969;

loc_00563953: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ecx + 0x784CF8) = eax;

loc_00563969: ;
    ecx = MEM32(ebp + -12);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563979u); RECOMP_ABI_CALL(0x005602EEu, sub_005602EE); /* call 0x005602EE */

loc_00563979: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056319C; /* jne: not equal / not zero */

loc_00563982: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563A03; /* je: equal / zero */

loc_0056398C: ;
    _fa = (uint32_t)(MEM8(eax + 0x88)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x88), 0 (8-bit) */
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_005639E0; /* je: equal / zero */

loc_00563998: ;
    ecx = edi;
    esi = ebx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 3);
    POP32(esp, edx);
    eax = edi;
    MEM32(0x784CD8) = MEM32(0x784CD8) | esi;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(eax + 0x784CE0) = edx;
    esi = edi * 8 + 0x915A10;
    MEM32(eax + 0x784CE4) = edx;
    PUSH32(esp, 0xC);
    ecx = esi;
    MEM32(eax + 0x784CE8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005639CEu); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_005639CE: ;
    PUSH32(esp, 0xD);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005639D7u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_005639D7: ;
    PUSH32(esp, 0x2E);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005639E0u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_005639E0: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM8(eax + 0x89)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x89), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563A03; /* je: equal / zero */

loc_005639EF: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005639F5u); RECOMP_ABI_CALL(0x0075FA00u, sub_0075FA00); /* call 0x0075FA00 */

loc_005639F5: ;
    PUSH32(esp, 0x14);
    ecx = edi * 8 + 0x915A10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563A03u); RECOMP_ABI_CALL(0x0056002Cu, sub_0056002C); /* call 0x0056002C */

loc_00563A03: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563B0B
 * Original: 0x00563B0B - 0x00563B24 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563B0B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563B0B: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563B17; /* je: equal / zero */

loc_00563B12: ;
    PUSH32(esp, 0x00563B17u); RECOMP_ABI_CALL(0x00565DEBu, sub_00565DEB); /* call 0x00565DEB */

loc_00563B17: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563B24
 * Original: 0x00563B24 - 0x00563B47 (35 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563B24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563B24: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563B3A; /* je: equal / zero */

loc_00563B2E: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563B3Au); RECOMP_ABI_CALL(0x00563E94u, sub_00563E94); /* call 0x00563E94 */

loc_00563B3A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563B47
 * Original: 0x00563B47 - 0x00563B84 (61 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563B47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00563B47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563B5Au); RECOMP_ABI_CALL(0x00563B0Bu, sub_00563B0B); /* call 0x00563B0B */

loc_00563B5A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563B68u); RECOMP_ABI_CALL(0x00560820u, sub_00560820); /* call 0x00560820 */

loc_00563B68: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563B76u); RECOMP_ABI_CALL(0x00563B24u, sub_00563B24); /* call 0x00563B24 */

loc_00563B76: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563B84
 * Original: 0x00563B84 - 0x00563B98 (20 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563B84(void)
{

loc_00563B84: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563B98
 * Original: 0x00563B98 - 0x00563BAC (20 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563B98(void)
{

loc_00563B98: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563BC9
 * Original: 0x00563BC9 - 0x00563C57 (142 bytes, 48 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563BC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563BC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00563BF3; /* jge: greater or equal (signed >=) */

loc_00563BD4: ;
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | edx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00563BE2: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    MEM32(ecx * 4 + 0x784CE0) = eax;
    goto loc_00563C51;

loc_00563BF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00563C0A; /* jge: greater or equal (signed >=) */

loc_00563BF8: ;
    ecx = MEM32(eax * 4 + 0x7A95B8);
    MEM32(0x784CD8) = MEM32(0x784CD8) | ecx;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 8);
    goto loc_00563BE2;

loc_00563C0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563C1C; /* jne: not equal / not zero */

loc_00563C0F: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563C1Au); RECOMP_ABI_CALL(0x0075ED30u, sub_0075ED30); /* call 0x0075ED30 */

loc_00563C1A: ;
    goto loc_00563C51;

loc_00563C1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563C2E; /* jne: not equal / not zero */

loc_00563C21: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563C2Cu); RECOMP_ABI_CALL(0x0075EEB0u, sub_0075EEB0); /* call 0x0075EEB0 */

loc_00563C2C: ;
    goto loc_00563C51;

loc_00563C2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563C40; /* jne: not equal / not zero */

loc_00563C33: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563C3Eu); RECOMP_ABI_CALL(0x0075EEF0u, sub_0075EEF0); /* call 0x0075EEF0 */

loc_00563C3E: ;
    goto loc_00563C51;

loc_00563C40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00563C51; /* jg: greater (signed >) */

loc_00563C45: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563C51u); RECOMP_ABI_CALL(0x0075EE40u, sub_0075EE40); /* call 0x0075EE40 */

loc_00563C51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00563C8F
 * Original: 0x00563C8F - 0x00563CE0 (81 bytes, 31 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563C8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563C8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563CD8u); RECOMP_ABI_CALL(0x0055DE76u, sub_0055DE76); /* call 0x0055DE76 */

loc_00563CD8: ;
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00563CE0
 * Original: 0x00563CE0 - 0x00563D13 (51 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00563CE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ecx;
    PUSH32(esp, MEM32(eax + 0x20));
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, MEM32(eax + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563CF4u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_00563CF4: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x877344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563D03u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00563D03: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563D0Fu); RECOMP_ABI_CALL(0x00577B3Cu, sub_00577B3C); /* call 0x00577B3C */

loc_00563D0F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00563D17
 * Original: 0x00563D17 - 0x00563DB3 (156 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563D17(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563D17: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x877340);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00563D30u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00563D30: ;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x877341);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00563D45u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00563D45: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    MEM32(esi + 0x28) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00563DAF; /* jbe: below or equal (unsigned <=) */

loc_00563D52: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00563D5Du); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00563D5D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563D78; /* je: equal / zero */

loc_00563D64: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, MEM32(ecx + edi * 4));
    ecx = MEM32(esi);
    PUSH32(esp, MEM32(ecx + edi * 4));
    ecx = eax;
    PUSH32(esp, 0x00563D76u); RECOMP_ABI_CALL(0x00566B0Fu, sub_00566B0F); /* call 0x00566B0F */

loc_00563D76: ;
    goto loc_00563D7A;

loc_00563D78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00563D7A: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    MEM32(ecx + edi * 4) = eax;
    PUSH32(esp, 0x00563D8Bu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00563D8B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563DA1; /* je: equal / zero */

loc_00563D92: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(ecx + edi * 4));
    ecx = eax;
    PUSH32(esp, 0x00563D9Fu); RECOMP_ABI_CALL(0x00566B66u, sub_00566B66); /* call 0x00566B66 */

loc_00563D9F: ;
    goto loc_00563DA3;

loc_00563DA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00563DA3: ;
    ecx = MEM32(esi + 0x28);
    MEM32(ecx + edi * 4) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00563D52; /* jb: below (unsigned <) */

loc_00563DAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00563DB3
 * Original: 0x00563DB3 - 0x00563E12 (95 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563DB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563DB3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00563DE6; /* jbe: below or equal (unsigned <=) */

loc_00563DBE: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563DCF; /* je: equal / zero */

loc_00563DC8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00563DCFu); RECOMP_ABI_CALL(0x0055F691u, sub_0055F691); /* call 0x0055F691 */

loc_00563DCF: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563DE0; /* je: equal / zero */

loc_00563DD9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00563DE0u); RECOMP_ABI_CALL(0x0055F6B4u, sub_0055F6B4); /* call 0x0055F6B4 */

loc_00563DE0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00563DBE; /* jb: below (unsigned <) */

loc_00563DE6: ;
    eax = MEM32(esi + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0x00563DF5u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00563DF5: ;
    eax = MEM32(esi + 0x10);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, 0x00563E04u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00563E04: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00563E94
 * Original: 0x00563E94 - 0x00563F60 (204 bytes, 77 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00563E94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563E94: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), edx (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00563EC3; /* je: equal / zero */

loc_00563EAA: ;
    ecx = esi * 4 + 0x915760;
    eax = ebx + 0x4C;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563EC3; /* je: equal / zero */

loc_00563EB8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563EC1u); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_00563EC1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00563EC3: ;
    _fa = (uint32_t)(MEM8(0x8DBEEC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8DBEEC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563F21; /* je: equal / zero */

loc_00563ECC: ;
    edi = esi * 4 + 0x915750;
    eax = MEM32(edi);
    ecx = ebx + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563F2F; /* je: equal / zero */

loc_00563EDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563EE9; /* je: equal / zero */

loc_00563EE0: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(edi) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563EE9u); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_00563EE9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x8C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00563F11; /* je: equal / zero */

loc_00563EF7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563EFCu); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_00563EFC: ;
    eax = MEM32(ebx);
    eax = MEM32(eax);
    MEM32(edi) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(eax));

loc_00563F06: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563F0Cu); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_00563F0C: ;
    ebx = MEM32(ebp + -4);
    goto loc_00563F2F;

loc_00563F11: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563F16u); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_00563F16: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    PUSH32(esp, eax);
    goto loc_00563F06;

loc_00563F21: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi * 4 + 0x915750) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00563F2Fu); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_00563F2F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebx + 0x8A)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x8A), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563F54; /* je: equal / zero */

loc_00563F3B: ;
    ecx = esi;
    eax = edx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(0x784CD8) = MEM32(0x784CD8) | eax;
    _fa = (uint32_t)(MEM32(0x784CD8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi + 0x784D08) = 0xE0000000u;

loc_00563F54: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563F60
 * Original: 0x00563F60 - 0x00563FEC (140 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00563F7B; /* jne: not equal / not zero */

loc_00563F6F: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0xFFFFD761u;
    goto loc_00563FE6;

loc_00563F7B: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563F9E; /* je: equal / zero */

loc_00563F80: ;
    eax = esi + 0x4C;
    _fa = (uint32_t)(MEM32(ebx * 4 + 0x915760)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx * 4 + 0x915760), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563F94; /* jne: not equal / not zero */

loc_00563F8C: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00563F94u); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_00563F94: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00563F80; /* jl: less (signed <) */

loc_00563F9A: ;
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00563F9E: ;
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x00563FA7u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_00563FA7: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00563FB4u); RECOMP_ABI_CALL(0x00757D9Fu, sub_00757D9F); /* call 0x00757D9F */

loc_00563FB4: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00563FBD; /* je: equal / zero */

loc_00563FBB: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00563FBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00563FC4u); RECOMP_ABI_CALL(0x00763270u, sub_00763270); /* call 0x00763270 */

loc_00563FC4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00563FC6: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x915760)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x915760), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00563FD6; /* jne: not equal / not zero */

loc_00563FCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00563FD6u); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_00563FD6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00563FC6; /* jl: less (signed <) */

loc_00563FDC: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 1;

loc_00563FE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00563FEC
 * Original: 0x00563FEC - 0x005640F2 (262 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00563FEC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00563FEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005640ED; /* je: equal / zero */

loc_00563FFD: ;
    ecx = edi;
    PUSH32(esp, 0x00564004u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564004: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 2), 0x40 (8-bit) */
    ecx = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00564078; /* je: equal / zero */

loc_0056400C: ;
    PUSH32(esp, 0x00564011u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564011: ;
    eax = MEM32(eax);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00564053; /* jg: greater (signed >) */

loc_0056401D: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0056404C; /* je: equal / zero */

loc_0056401F: ;
    _fb = (uint32_t)(0x61) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x61;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005640A9; /* je: equal / zero */

loc_00564028: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005640A5; /* je: equal / zero */

loc_0056402B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00564045; /* je: equal / zero */

loc_0056402F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0056403E; /* je: equal / zero */

loc_00564032: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00564067; /* jne: not equal / not zero */

loc_00564037: ;
    PUSH32(esp, 0x24);
    goto loc_005640D7;

loc_0056403E: ;
    PUSH32(esp, 0x1A);
    goto loc_005640D7;

loc_00564045: ;
    PUSH32(esp, 0x19);
    goto loc_005640D7;

loc_0056404C: ;
    PUSH32(esp, 4);
    goto loc_005640D7;

loc_00564053: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00564074; /* je: equal / zero */

loc_00564058: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00564070; /* je: equal / zero */

loc_0056405D: ;
    PUSH32(esp, 2);
    POP32(esp, esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0056406C; /* je: equal / zero */

loc_00564064: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005640D8; /* je: equal / zero */

loc_00564067: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_005640D8;

loc_0056406C: ;
    PUSH32(esp, 6);
    goto loc_005640D7;

loc_00564070: ;
    PUSH32(esp, 0xB);
    goto loc_005640D7;

loc_00564074: ;
    PUSH32(esp, 5);
    goto loc_005640D7;

loc_00564078: ;
    PUSH32(esp, 0x0056407Du); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0056407D: ;
    eax = MEM32(eax);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x68 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_005640B1; /* jg: greater (signed >) */

loc_00564089: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00564037; /* je: equal / zero */

loc_0056408B: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005640AD; /* je: equal / zero */

loc_00564090: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005640A9; /* je: equal / zero */

loc_00564093: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005640A5; /* je: equal / zero */

loc_00564096: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005640A1; /* je: equal / zero */

loc_0056409A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00564067; /* jne: not equal / not zero */

loc_0056409D: ;
    PUSH32(esp, 0x20);
    goto loc_005640D7;

loc_005640A1: ;
    PUSH32(esp, 0x1F);
    goto loc_005640D7;

loc_005640A5: ;
    PUSH32(esp, 0xF);
    goto loc_005640D7;

loc_005640A9: ;
    PUSH32(esp, 0xE);
    goto loc_005640D7;

loc_005640AD: ;
    PUSH32(esp, 0xC);
    goto loc_005640D7;

loc_005640B1: ;
    _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x6D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005640D5; /* je: equal / zero */

loc_005640B6: ;
    PUSH32(esp, 0xB);
    POP32(esp, esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005640D1; /* je: equal / zero */

loc_005640BD: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005640D8; /* je: equal / zero */

loc_005640C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_005640CD; /* je: equal / zero */

loc_005640C6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00564067; /* jne: not equal / not zero */

loc_005640C9: ;
    PUSH32(esp, 0x10);
    goto loc_005640D7;

loc_005640CD: ;
    PUSH32(esp, 0x12);
    goto loc_005640D7;

loc_005640D1: ;
    PUSH32(esp, 0x11);
    goto loc_005640D7;

loc_005640D5: ;
    PUSH32(esp, 0x1D);

loc_005640D7: ;
    POP32(esp, esi);

loc_005640D8: ;
    ecx = edi;
    PUSH32(esp, 0x005640DFu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005640DF: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 2), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005640ED; /* je: equal / zero */

loc_005640E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005640ED; /* jne: not equal / not zero */

loc_005640EA: ;
    PUSH32(esp, 0x28);
    POP32(esp, esi);

loc_005640ED: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005640F2
 * Original: 0x005640F2 - 0x0056420B (281 bytes, 111 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005640F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005640F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000 (32-bit) */
    PUSH32(esp, edi);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0056411D; /* jne: not equal / not zero */

loc_00564114: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056411Bu); RECOMP_ABI_CALL(0x00760DD0u, sub_00760DD0); /* call 0x00760DD0 */

loc_0056411B: ;
    goto loc_00564123;

loc_0056411D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564123u); RECOMP_ABI_CALL(0x00761130u, sub_00761130); /* call 0x00761130 */

loc_00564123: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056412Fu); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_0056412F: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564138u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_00564138: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564144; /* jne: not equal / not zero */

loc_0056413E: ;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0x34) = eax;

loc_00564144: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056416F; /* je: equal / zero */

loc_0056414C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056416F; /* je: equal / zero */

loc_00564151: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056416F; /* je: equal / zero */

loc_00564156: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056416F; /* je: equal / zero */

loc_0056415B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056416F; /* je: equal / zero */

loc_00564160: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056416F; /* je: equal / zero */

loc_00564165: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056416F; /* je: equal / zero */

loc_0056416A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564176; /* jne: not equal / not zero */

loc_0056416F: ;
    MEM8(esi + 0x88) = 1;

loc_00564176: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564180; /* je: equal / zero */

loc_0056417B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564187; /* jne: not equal / not zero */

loc_00564180: ;
    MEM8(esi + 0x89) = 1;

loc_00564187: ;
    PUSH32(esp, eax);
    MEM8(esi + 0x70) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564190u); RECOMP_ABI_CALL(0x00755E1Au, sub_00755E1A); /* call 0x00755E1A */

loc_00564190: ;
    edi = eax;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005641C5; /* je: equal / zero */

loc_0056419A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005641A9; /* je: equal / zero */

loc_0056419F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005641A9; /* je: equal / zero */

loc_005641A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005641C8; /* jne: not equal / not zero */

loc_005641A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005641C5; /* je: equal / zero */

loc_005641AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005641C8; /* jle: less or equal (signed <=) */

loc_005641B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005641C1; /* jle: less or equal (signed <=) */

loc_005641B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005641C8; /* jne: not equal / not zero */

loc_005641BD: ;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edi = _sv >> _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    goto loc_005641C8;

loc_005641C1: ;
    PUSH32(esp, 0x10);
    goto loc_005641C7;

loc_005641C5: ;
    PUSH32(esp, 8);

loc_005641C7: ;
    POP32(esp, edi);

loc_005641C8: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005641E3; /* je: equal / zero */

loc_005641CF: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005641D8u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005641D8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x7C) = ebx;

loc_005641E3: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    eax = esi + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x34));
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564206u); RECOMP_ABI_CALL(0x00757CF0u, sub_00757CF0); /* call 0x00757CF0 */

loc_00564206: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0056420B
 * Original: 0x0056420B - 0x0056456B (864 bytes, 306 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056420B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056420B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esi + 0x10;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564228u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_00564228: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564233u); RECOMP_ABI_CALL(0x00578152u, sub_00578152); /* call 0x00578152 */

loc_00564233: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564239u); RECOMP_ABI_CALL(0x00563FECu, sub_00563FEC); /* call 0x00563FEC */

loc_00564239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x34) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00564250; /* jne: not equal / not zero */

loc_00564242: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD75Cu;
    goto loc_00564566;

loc_00564250: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564257u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564257: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 2), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0056429E; /* jne: not equal / not zero */

loc_0056425D: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056429E; /* je: equal / zero */

loc_00564265: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056429E; /* je: equal / zero */

loc_0056426A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056429E; /* je: equal / zero */

loc_0056426F: ;
    ecx = ebx;
    MEM8(esi + 0x88) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056427Du); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0056427D: ;
    PUSH32(esp, MEM32(esi + 0x34));
    edi = MEM32(eax + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564288u); RECOMP_ABI_CALL(0x00755E1Au, sub_00755E1A); /* call 0x00755E1A */

loc_00564288: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = eax;
    if ((_fa == 0)) goto loc_0056429C; /* je: equal / zero */

loc_00564293: ;
    PUSH32(esp, 0x40);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = eax;

loc_0056429C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056429E: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005642AB; /* je: equal / zero */

loc_005642A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005642B2; /* jne: not equal / not zero */

loc_005642AB: ;
    MEM8(esi + 0x89) = 1;

loc_005642B2: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005642B9u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005642B9: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 2), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_005642C6; /* je: equal / zero */

loc_005642BF: ;
    MEM8(esi + 0x8A) = 1;

loc_005642C6: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005642CDu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005642CD: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005643DE; /* je: equal / zero */

loc_005642D8: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80000000u (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005643DE; /* jb: below (unsigned <) */

loc_005642E5: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005642ECu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005642EC: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564300; /* je: equal / zero */

loc_005642F3: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8FFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8FFFFFFFu (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_005643DE; /* ja: above (unsigned >) */

loc_00564300: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esi + 0x70) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0056431F; /* je: equal / zero */

loc_0056430B: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564314u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00564314: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x7C) = edi;

loc_0056431F: ;
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564327u); RECOMP_ABI_CALL(0x00755E1Au, sub_00755E1A); /* call 0x00755E1A */

loc_00564327: ;
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564363; /* je: equal / zero */

loc_00564332: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564341; /* je: equal / zero */

loc_00564337: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564341; /* je: equal / zero */

loc_0056433C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056436A; /* jne: not equal / not zero */

loc_00564341: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564363; /* je: equal / zero */

loc_00564346: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0056436A; /* jle: less or equal (signed <=) */

loc_0056434B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0056435A; /* jle: less or equal (signed <=) */

loc_00564350: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056436A; /* jne: not equal / not zero */

loc_00564355: ;
    { uint32_t _sv=(uint32_t)(MEM32(ebp + 0x14)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(ebp + 0x14) = _sv >> _sc;
        _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    goto loc_0056436A;

loc_0056435A: ;
    MEM32(ebp + 0x14) = 0x10;
    goto loc_0056436A;

loc_00564363: ;
    MEM32(ebp + 0x14) = 8;

loc_0056436A: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564371u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564371: ;
    edi = MEM32(eax + 0x18);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056437Bu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0056437B: ;
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564385u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564385: ;
    eax = MEM32(eax + 0x1C);
    ecx = ebx;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564392u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564392: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x14));
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x38;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -8);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x34));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(eax + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005643BBu); RECOMP_ABI_CALL(0x00757CF0u, sub_00757CF0); /* call 0x00757CF0 */

loc_005643BB: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005643C2u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005643C2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005643CD; /* jne: not equal / not zero */

loc_005643C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005643CF;

loc_005643CD: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005643CF: ;
    PUSH32(esp, eax);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005643D9u); RECOMP_ABI_CALL(0x00763270u, sub_00763270); /* call 0x00763270 */

loc_005643D9: ;
    goto loc_0056453A;

loc_005643DE: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esi + 0x70) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_005643FD; /* je: equal / zero */

loc_005643E9: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005643F2u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005643F2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x78) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x7C) = edi;

loc_005643FD: ;
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564405u); RECOMP_ABI_CALL(0x00755E1Au, sub_00755E1A); /* call 0x00755E1A */

loc_00564405: ;
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564441; /* je: equal / zero */

loc_00564410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056441F; /* je: equal / zero */

loc_00564415: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056441F; /* je: equal / zero */

loc_0056441A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564448; /* jne: not equal / not zero */

loc_0056441F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564441; /* je: equal / zero */

loc_00564424: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564448; /* jle: less or equal (signed <=) */

loc_00564429: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564438; /* jle: less or equal (signed <=) */

loc_0056442E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564448; /* jne: not equal / not zero */

loc_00564433: ;
    { uint32_t _sv=(uint32_t)(MEM32(ebp + 0x14)), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        MEM32(ebp + 0x14) = _sv >> _sc;
        _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    goto loc_00564448;

loc_00564438: ;
    MEM32(ebp + 0x14) = 0x10;
    goto loc_00564448;

loc_00564441: ;
    MEM32(ebp + 0x14) = 8;

loc_00564448: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056444Fu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0056444F: ;
    edi = MEM32(eax + 0x18);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564459u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564459: ;
    ecx = ebx;
    MEM32(ebp + -12) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564463u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564463: ;
    eax = MEM32(eax + 0x1C);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564470u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564470: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x14));
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x38;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x34));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(eax + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564499u); RECOMP_ABI_CALL(0x00757CF0u, sub_00757CF0); /* call 0x00757CF0 */

loc_00564499: ;
    ecx = ebx;
    MEM32(esi + 0x7C) = edi;
    MEM32(ebp + 0x14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005644A6u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005644A6: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_005644DB; /* jle: less or equal (signed <=) */

loc_005644B0: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = esi + 0x38;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005644C0u); RECOMP_ABI_CALL(0x00760DD0u, sub_00760DD0); /* call 0x00760DD0 */

loc_005644C0: ;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005644D0u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005644D0: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005644B0; /* jl: less (signed <) */

loc_005644DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x87734C);
    PUSH32(esp, 0x80);
    PUSH32(esp, MEM32(esi + 0x7C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005644EEu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_005644EE: ;
    ecx = MEM32(esi + 0x7C);
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = eax;
    MEM32(esi + 0x78) = edi;
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
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564510u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00564510: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056451B; /* jne: not equal / not zero */

loc_00564517: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0056451D;

loc_0056451B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0056451D: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x78));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564529u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_00564529: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x78));
    eax = esi + 0x38;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564538u); RECOMP_ABI_CALL(0x00763270u, sub_00763270); /* call 0x00763270 */

loc_00564538: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056453A: ;
    ebx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056455D; /* je: equal / zero */

loc_00564541: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056454Cu); RECOMP_ABI_CALL(0x00757D9Fu, sub_00757D9F); /* call 0x00757D9F */

loc_0056454C: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564556; /* je: equal / zero */

loc_00564553: ;
    edi = eax + ebx;

loc_00564556: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056455Du); RECOMP_ABI_CALL(0x00763270u, sub_00763270); /* call 0x00763270 */

loc_0056455D: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;

loc_00564566: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0056456B
 * Original: 0x0056456B - 0x0056485B (752 bytes, 251 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056456B(void)
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

loc_0056456B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056457Du); RECOMP_ABI_CALL(0x00565DEBu, sub_00565DEB); /* call 0x00565DEB */

loc_0056457D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, MEM32(0x916890));
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056459Au); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_0056459A: ;
    PUSH32(esp, MEM32(0x916894));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005645A5u); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_005645A5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(0x915774);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005645B9u); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_005645B9: ;
    ecx = MEM32(0x915774);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005645CCu); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_005645CC: ;
    ecx = MEM32(0x915774);
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005645DCu); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_005645DC: ;
    ecx = MEM32(0x915774);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005645EDu); RECOMP_ABI_CALL(0x00563B47u, sub_00563B47); /* call 0x00563B47 */

loc_005645ED: ;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056463B; /* je: equal / zero */

loc_005645F4: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005645FBu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_005645FB: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 2), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00564687; /* jne: not equal / not zero */

loc_00564605: ;
    esi = MEM32(esi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564687; /* je: equal / zero */

loc_0056460D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564687; /* je: equal / zero */

loc_00564612: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564687; /* je: equal / zero */

loc_00564617: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056461Eu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0056461E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x18); /* cvtsi2ss */
    ecx = edi;
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056462Fu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0056462F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x1C); /* cvtsi2ss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    goto loc_00564687;

loc_0056463B: ;
    PUSH32(esp, MEM32(esi + 0x34));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564643u); RECOMP_ABI_CALL(0x00755DD6u, sub_00755DD6); /* call 0x00755DD6 */

loc_00564643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564687; /* jne: not equal / not zero */

loc_00564647: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -68;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp + -68;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564661u); RECOMP_ABI_CALL(0x00760DD0u, sub_00760DD0); /* call 0x00760DD0 */

loc_00564661: ;
    eax = MEM32(ebp + -100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(ebp + -100)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00564671; /* jge: greater or equal (signed >=) */

loc_0056466B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00564671: ;
    eax = MEM32(ebp + -96);
    MEMF(ebp + -8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(ebp + -96)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00564684; /* jge: greater or equal (signed >=) */

loc_0056467E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00564684: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00564687: ;
    eax = ebp + -92;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564690u); RECOMP_ABI_CALL(0x0075ABC0u, sub_0075ABC0); /* call 0x0075ABC0 */

loc_00564690: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056469Du); RECOMP_ABI_CALL(0x0075E320u, sub_0075E320); /* call 0x0075E320 */

loc_0056469D: ;
    fp_push(MEMF(ebp + -32)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005646AAu); RECOMP_ABI_CALL(0x005CDA41u, sub_005CDA41); /* call 0x005CDA41 */

loc_005646AA: ;
    fp_top() = RECOMP_FP_PC(MEMF(ebp + -32) - fp_top()); /* fsubr dword ptr [ebp - 0x20] */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -28)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005646BBu); RECOMP_ABI_CALL(0x005CDA41u, sub_005CDA41); /* call 0x005CDA41 */

loc_005646BB: ;
    POP32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(ebp + -28) - fp_top()); /* fsubr dword ptr [ebp - 0x1c] */
    POP32(esp, ecx);
    PUSH32(esp, 8);
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005646CAu); RECOMP_ABI_CALL(0x007644F0u, sub_007644F0); /* call 0x007644F0 */

loc_005646CA: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005646D5u); RECOMP_ABI_CALL(0x007644A0u, sub_007644A0); /* call 0x007644A0 */

loc_005646D5: ;
    fp_push(0.0); /* fldz */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    POP32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005646EBu); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_005646EB: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + -88);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -88)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0056470A; /* jge: greater or equal (signed >=) */

loc_00564704: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0056470A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    eax = MEM32(ebp + -92);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -92)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00564721; /* jge: greater or equal (signed >=) */

loc_0056471B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00564721: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -12)); /* fadd dword ptr [ebp - 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056472Du); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_0056472D: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564741u); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_00564741: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + -88);
    ecx = MEM32(ebp + -80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push(0.0); /* fldz */
    MEM32(ebp + -16) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -16)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00564768; /* jge: greater or equal (signed >=) */

loc_00564762: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00564768: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    eax = MEM32(ebp + -92);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -92)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0056477F; /* jge: greater or equal (signed >=) */

loc_00564779: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0056477F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -12)); /* fadd dword ptr [ebp - 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056478Bu); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_0056478B: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005647A0u); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_005647A0: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + -88);
    ecx = MEM32(ebp + -80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push(0.0); /* fldz */
    MEM32(ebp + -16) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -16)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005647C7; /* jge: greater or equal (signed >=) */

loc_005647C1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_005647C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    eax = MEM32(ebp + -92);
    ecx = MEM32(ebp + -84);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -16) = ecx;
    fp_push((double)SMEM32(ebp + -16)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005647E6; /* jge: greater or equal (signed >=) */

loc_005647E0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_005647E6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -12)); /* fadd dword ptr [ebp - 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005647F2u); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_005647F2: ;
    fp_push(0.0); /* fldz */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564806u); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_00564806: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + -88);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -88)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00564825; /* jge: greater or equal (signed >=) */

loc_0056481F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00564825: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    eax = MEM32(ebp + -92);
    ecx = MEM32(ebp + -84);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 8) = ecx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00564844; /* jge: greater or equal (signed >=) */

loc_0056483E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00564844: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -12)); /* fadd dword ptr [ebp - 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564850u); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_00564850: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564855u); RECOMP_ABI_CALL(0x00764530u, sub_00764530); /* call 0x00764530 */

loc_00564855: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0056485B
 * Original: 0x0056485B - 0x0056487C (33 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056485B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056485B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x4C;

loc_00564862: ;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x915760)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x915760), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564873; /* jne: not equal / not zero */

loc_0056486B: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00564873u); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_00564873: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564862; /* jl: less (signed <) */

loc_00564879: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0056487C
 * Original: 0x0056487C - 0x00564909 (141 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056487C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056487C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00564895; /* jne: not equal / not zero */

loc_0056488A: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD760u;
    goto loc_00564903;

loc_00564895: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_005648B9; /* je: equal / zero */

loc_0056489B: ;
    edi = esi + 0x38;

loc_0056489E: ;
    _fa = (uint32_t)(MEM32(ebx * 4 + 0x915750)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx * 4 + 0x915750), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005648AF; /* jne: not equal / not zero */

loc_005648A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005648AFu); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_005648AF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0056489E; /* jl: less (signed <) */

loc_005648B5: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005648B9: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005648C2u); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_005648C2: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005648CFu); RECOMP_ABI_CALL(0x0056420Bu, sub_0056420B); /* call 0x0056420B */

loc_005648CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005648F2; /* je: equal / zero */

loc_005648D9: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x38;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_005648DC: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x915750)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x915750), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005648EC; /* jne: not equal / not zero */

loc_005648E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005648ECu); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_005648EC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005648DC; /* jl: less (signed <) */

loc_005648F2: ;
    eax = MEM32(ebp + 8);
    MEM8(0x915749) = 1;
    MEM32(eax) = 1;
    POP32(esp, edi);

loc_00564903: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00564909
 * Original: 0x00564909 - 0x00564995 (140 bytes, 53 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564909(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564909: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00564920; /* jne: not equal / not zero */

loc_00564914: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0xFFFFD761u;
    goto loc_00564991;

loc_00564920: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00564948; /* je: equal / zero */

loc_00564926: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x4C;

loc_0056492C: ;
    _fa = (uint32_t)(MEM32(ebx * 4 + 0x915760)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx * 4 + 0x915760), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0056493E; /* jne: not equal / not zero */

loc_00564935: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0056493Cu); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_0056493C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056493E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0056492C; /* jl: less (signed <) */

loc_00564944: ;
    MEM32(esi + 0x50) = eax;
    POP32(esp, ebx);

loc_00564948: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00564953u); RECOMP_ABI_CALL(0x00757D9Fu, sub_00757D9F); /* call 0x00757D9F */

loc_00564953: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564960; /* je: equal / zero */

loc_0056495E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00564960: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00564967u); RECOMP_ABI_CALL(0x00763270u, sub_00763270); /* call 0x00763270 */

loc_00564967: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00564969: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x915760)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x915760), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564979; /* jne: not equal / not zero */

loc_00564972: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00564979u); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_00564979: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564969; /* jl: less (signed <) */

loc_0056497F: ;
    eax = MEM32(esp + 0xC);
    MEM8(0x915749) = 1;
    MEM32(eax) = 1;
    POP32(esp, edi);

loc_00564991: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00564995
 * Original: 0x00564995 - 0x00564A71 (220 bytes, 83 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564995(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564995: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_005649B1; /* jne: not equal / not zero */

loc_005649A3: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD760u;
    goto loc_00564A6B;

loc_005649B1: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00564A01; /* je: equal / zero */

loc_005649B7: ;
    ebx = esi + 0x38;

loc_005649BA: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x915750)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x915750), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005649CB; /* jne: not equal / not zero */

loc_005649C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005649CBu); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_005649CB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005649BA; /* jl: less (signed <) */

loc_005649D1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005649F7; /* je: equal / zero */

loc_005649D8: ;
    edi = ebx * 4 + 0x915760;
    eax = esi + 0x4C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005649F1; /* jne: not equal / not zero */

loc_005649E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005649EEu); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_005649EE: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005649F1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005649D8; /* jl: less (signed <) */

loc_005649F7: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x38;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00564A01: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564A0Au); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_00564A0A: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564A17u); RECOMP_ABI_CALL(0x0056420Bu, sub_0056420B); /* call 0x0056420B */

loc_00564A17: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564A3A; /* je: equal / zero */

loc_00564A21: ;
    edi = esi + 0x38;

loc_00564A24: ;
    _fa = (uint32_t)(MEM32(ebx * 4 + 0x915750)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx * 4 + 0x915750), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564A34; /* jne: not equal / not zero */

loc_00564A2D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564A34u); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_00564A34: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564A24; /* jl: less (signed <) */

loc_00564A3A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00564A5B; /* je: equal / zero */

loc_00564A42: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00564A45: ;
    _fa = (uint32_t)(MEM32(edi * 4 + 0x915760)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi * 4 + 0x915760), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564A55; /* jne: not equal / not zero */

loc_00564A4E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564A55u); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_00564A55: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564A45; /* jl: less (signed <) */

loc_00564A5B: ;
    eax = MEM32(ebp + 8);
    MEM8(0x915749) = 1;
    MEM32(eax) = 1;

loc_00564A6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00564A71
 * Original: 0x00564A71 - 0x00564B0D (156 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564A71(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564A71: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00564A86; /* jne: not equal / not zero */

loc_00564A7E: ;
    _fa = (uint32_t)(MEM8(0x8DBEEC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8DBEEC), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564AA5; /* je: equal / zero */

loc_00564A86: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00564A88: ;
    edi = ebp * 4 + 0x915750;
    eax = esi + 0x38;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564A9F; /* jne: not equal / not zero */

loc_00564A96: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00564A9Du); RECOMP_ABI_CALL(0x0075CE40u, sub_0075CE40); /* call 0x0075CE40 */

loc_00564A9D: ;
    MEM32(edi) = ebx;

loc_00564A9F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564A88; /* jl: less (signed <) */

loc_00564AA5: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564AC9; /* je: equal / zero */

loc_00564AAA: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00564AAC: ;
    edi = ebp * 4 + 0x915760;
    eax = esi + 0x4C;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564AC3; /* jne: not equal / not zero */

loc_00564ABA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00564AC1u); RECOMP_ABI_CALL(0x0075D020u, sub_0075D020); /* call 0x0075D020 */

loc_00564AC1: ;
    MEM32(edi) = ebx;

loc_00564AC3: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00564AAC; /* jl: less (signed <) */

loc_00564AC9: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564AE4; /* je: equal / zero */

loc_00564AD0: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00564AD9u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00564AD9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x7C) = ebx;

loc_00564AE4: ;
    edi = esi + 0x20;
    ecx = edi;
    PUSH32(esp, 0x00564AEEu); RECOMP_ABI_CALL(0x0055A981u, sub_0055A981); /* call 0x0055A981 */

loc_00564AEE: ;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    edi = esi + 0x10;
    ecx = edi;
    PUSH32(esp, 0x00564AFDu); RECOMP_ABI_CALL(0x0055A981u, sub_0055A981); /* call 0x0055A981 */

loc_00564AFD: ;
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_00564B0D
 * Original: 0x00564B0D - 0x00564B21 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564B0D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00564B0D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564B1Fu); RECOMP_ABI_CALL(0x0056487Cu, sub_0056487C); /* call 0x0056487C */

loc_00564B1F: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00564B21
 * Original: 0x00564B21 - 0x00564B35 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564B21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00564B21: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564B33u); RECOMP_ABI_CALL(0x00564909u, sub_00564909); /* call 0x00564909 */

loc_00564B33: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00564B35
 * Original: 0x00564B35 - 0x00564B56 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564B35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564B35: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x91577C);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564B45u); RECOMP_ABI_CALL(0x000196DDu, sub_000196DD); /* call 0x000196DD */

loc_00564B45: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564B52u); RECOMP_ABI_CALL(0x00564995u, sub_00564995); /* call 0x00564995 */

loc_00564B52: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00564B56
 * Original: 0x00564B56 - 0x00564B62 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00564B56(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564B56: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00564B5Fu); RECOMP_ABI_CALL(0x0056485Bu, sub_0056485B); /* call 0x0056485B */

loc_00564B5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00564B62
 * Original: 0x00564B62 - 0x00564CBC (346 bytes, 109 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564B62(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564B62: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00564B70u); RECOMP_ABI_CALL(0x0056748Du, sub_0056748D); /* call 0x0056748D */

loc_00564B70: ;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00564B78u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00564B78: ;
    ecx = esi;
    PUSH32(esp, 0x00564B7Fu); RECOMP_ABI_CALL(0x0055B5B0u, sub_0055B5B0); /* call 0x0055B5B0 */

loc_00564B7F: ;
    eax = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ebp = esi + 0x10;
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM16(ebp + 0xC) = LO16(ebx);
    MEM16(ebp + 0xE) = LO16(ebx);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM16(esi + 0x2C) = LO16(ebx);
    MEM16(esi + 0x2E) = LO16(ebx);
    MEM32(esi + 0x34) = MEM32(esi + 0x34) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 4);
    MEM32(esi + 0x30) = eax;
    POP32(esp, edx);
    MEM32(esi + 0x5C) = edx;
    MEM8(esi + 0x70) = LO8(ebx);
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM8(esi + 0x80) = LO8(ebx);
    MEM32(esi + 0x84) = ebx;
    MEM8(esi + 0x88) = LO8(ebx);
    MEM8(esi + 0x89) = LO8(ebx);
    MEM8(esi + 0x8A) = LO8(ebx);
    MEM32(esi + 0x8C) = ebx;
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x6C) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = esi + 0x38;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi + 0x4C;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fa = (uint32_t)(MEM32(0x916890)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916890), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564C4B; /* jne: not equal / not zero */

loc_00564C1C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00564C26u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00564C26: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564C45; /* je: equal / zero */

loc_00564C2D: ;
    PUSH32(esp, 0x8DCAD4);
    PUSH32(esp, 0x8DCAC0);
    ecx = eax;
    PUSH32(esp, 0x00564C3Eu); RECOMP_ABI_CALL(0x00566B0Fu, sub_00566B0F); /* call 0x00566B0F */

loc_00564C3E: ;
    MEM32(0x916890) = eax;
    goto loc_00564C4B;

loc_00564C45: ;
    MEM32(0x916890) = ebx;

loc_00564C4B: ;
    _fa = (uint32_t)(MEM32(0x916894)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x916894), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564C7E; /* jne: not equal / not zero */

loc_00564C53: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00564C5Eu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00564C5E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00564C78; /* je: equal / zero */

loc_00564C65: ;
    PUSH32(esp, 0x8DCB08);
    ecx = eax;
    PUSH32(esp, 0x00564C71u); RECOMP_ABI_CALL(0x00566B66u, sub_00566B66); /* call 0x00566B66 */

loc_00564C71: ;
    MEM32(0x916894) = eax;
    goto loc_00564C7E;

loc_00564C78: ;
    MEM32(0x916894) = ebx;

loc_00564C7E: ;
    PUSH32(esp, 0x564B0D);
    PUSH32(esp, 0x564B35);
    ecx = ebp;
    PUSH32(esp, 0x00564C8Fu); RECOMP_ABI_CALL(0x005780EAu, sub_005780EA); /* call 0x005780EA */

loc_00564C8F: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00564C97u); RECOMP_ABI_CALL(0x005780D8u, sub_005780D8); /* call 0x005780D8 */

loc_00564C97: ;
    PUSH32(esp, 0x564B21);
    edi = esi + 0x20;
    PUSH32(esp, 0x564B56);
    ecx = edi;
    PUSH32(esp, 0x00564CABu); RECOMP_ABI_CALL(0x005780EAu, sub_005780EA); /* call 0x005780EA */

loc_00564CAB: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00564CB3u); RECOMP_ABI_CALL(0x005780D8u, sub_005780D8); /* call 0x005780D8 */

loc_00564CB3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564CBC
 * Original: 0x00564CBC - 0x00564CD2 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564CBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00564CBC: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x90;
    PUSH32(esp, 0x00564CCAu); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_00564CCA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00564A71(); return; /* tail jmp 0x00564A71 */

}

/**
 * sub_00564D11
 * Original: 0x00564D11 - 0x00564D40 (47 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564D11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00564D11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564D3Au); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_00564D3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00564D86
 * Original: 0x00564D86 - 0x00564DA8 (34 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564D86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564D86: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00564D9F; /* jne: not equal / not zero */

loc_00564D97: ;
    MEM32(eax) = 0x280E;
    goto loc_00564DA5;

loc_00564D9F: ;
    MEM32(eax) = 1;

loc_00564DA5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00564DCC
 * Original: 0x00564DCC - 0x00564DD6 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564DCC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564DCC: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00564DD6
 * Original: 0x00564DD6 - 0x00564E42 (108 bytes, 38 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564DD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564DD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564DE5u); RECOMP_ABI_CALL(0x00564B62u, sub_00564B62); /* call 0x00564B62 */

loc_00564DE5: ;
    edi = esi + 0x90;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564DF2u); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_00564DF2: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564DF9u); RECOMP_ABI_CALL(0x00567499u, sub_00567499); /* call 0x00567499 */

loc_00564DF9: ;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564E01u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00564E01: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564E0Cu); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_00564E0C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x877350);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564E1Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00564E1B: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564E26u); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_00564E26: ;
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00564E3A; /* je: equal / zero */

loc_00564E34: ;
    MEM32(eax) = 0x564DCC;

loc_00564E3A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564E42
 * Original: 0x00564E42 - 0x00564E81 (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564E42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564E42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    esi = ecx;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564E61u); RECOMP_ABI_CALL(0x000238E5u, sub_000238E5); /* call 0x000238E5 */

loc_00564E61: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00564E71; /* jle: less or equal (signed <=) */

loc_00564E66: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8DBED0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8DBED0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00564E74; /* jne: not equal / not zero */

loc_00564E71: ;
    eax = MEM32(ebp + 8);

loc_00564E74: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00564E7Cu); RECOMP_ABI_CALL(0x0056456Bu, sub_0056456B); /* call 0x0056456B */

loc_00564E7C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00564E97
 * Original: 0x00564E97 - 0x00564EB9 (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564E97(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564E97: ;
    _fa = (uint32_t)(MEM8(0x916898)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x916898), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00564EAB; /* je: equal / zero */

loc_00564EA4: ;
    MEM32(eax) = 0x2DF4;
    esp += 4; return; /* ret */

loc_00564EAB: ;
    MEM8(0x916898) = 1;
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00564EB9
 * Original: 0x00564EB9 - 0x00564EDB (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00564EB9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00564EB9: ;
    _fa = (uint32_t)(MEM8(0x916898)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x916898), 0 (8-bit) */
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00564ECD; /* jne: not equal / not zero */

loc_00564EC6: ;
    MEM32(eax) = 0x2DF5;
    esp += 4; return; /* ret */

loc_00564ECD: ;
    MEM8(0x916898) = 0;
    MEM32(eax) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00564EDB
 * Original: 0x00564EDB - 0x0056505C (385 bytes, 76 insns)
 * CC: cdecl, 30 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00564EDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00564EDB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ecx;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x44)); /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x5C)); /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x68)); /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x74)); /* movss */
    MEMF(eax + 0x90) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x3C)); /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x48)); /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x54)); /* movss */
    MEMF(eax + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x60)); /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x6C)); /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x78)); /* movss */
    MEMF(eax + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x40)); /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x4C)); /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x58)); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x64)); /* movss */
    MEMF(eax + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x70)); /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x7C)); /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    esp += 124; return; /* ret 120 */

}

/**
 * sub_0056505C
 * Original: 0x0056505C - 0x0056507F (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056505C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056505C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0xA);
    eax = ecx + 8;
    POP32(esp, ecx);

loc_00565065: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00565065; /* jne: not equal / not zero */

loc_0056507E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0056507F
 * Original: 0x0056507F - 0x005650EF (112 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056507F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056507F: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    edx = ecx + 0x20;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00565091: ;
    edi = MEM32(eax + -12);
    MEM32(edx + -32) = edi;
    edi = MEM32(eax);
    MEM32(edx + -16) = edi;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    edi = MEM32(eax + 0xC);
    MEM32(edx + 0x10) = edi;
    edi = MEM32(eax + 0x18);
    MEM32(edx + 0x20) = edi;
    edi = MEM32(eax + 0x24);
    MEM32(edx + 0x30) = edi;
    edi = MEM32(eax + 0x30);
    MEM32(edx + 0x40) = edi;
    edi = MEM32(eax + 0x3C);
    MEM32(edx + 0x50) = edi;
    edi = MEM32(eax + 0x48);
    MEM32(edx + 0x60) = edi;
    edi = MEM32(eax + 0x54);
    MEM32(edx + 0x70) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00565091; /* jne: not equal / not zero */

loc_005650DA: ;
    PUSH32(esp, 0xA);
    eax = ecx + 0xC;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_005650E2: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005650E2; /* jne: not equal / not zero */

loc_005650EC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005650EF
 * Original: 0x005650EF - 0x00565314 (549 bytes, 120 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005650EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005650EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm7 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x877384)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm3 = xmm6; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(0x877380)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm5 = xmm6; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    MEMF(ebp + -16) = xmm5.f[0]; /* movss */
    MEMF(ebp + -20) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm5 = xmm7; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD450); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x87737C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm6.f[0]; /* mulss */
    xmm4 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x877378); /* mulss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    MEMF(ebp + -12) = xmm3.f[0]; /* movss */
    MEMF(ebp + 0x14) = xmm5.f[0]; /* movss */
    MEMF(ebp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x10) = xmm6.f[0]; /* movss */
    eax = ecx + 0x20;
    goto loc_005651C3;

loc_005651AA: ;
    xmm5 = XMM_SCALAR(MEMF(ebp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */

loc_005651C3: ;
    xmm7 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    ecx = MEM32(ebp + 8);
    xmm4 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    ecx = ecx + edx * 4;
    xmm6 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(ecx); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x877374); /* mulss */
    MEMF(ebp + -56) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -20)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    MEMF(ebp + -28) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    MEMF(ebp + -24) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x877370); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(0x87736C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x877368); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x10); /* addss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] + MEMF(eax + -32); /* addss */
    MEMF(eax + -32) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -24)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x877364); /* mulss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] + MEMF(eax + -16); /* addss */
    MEMF(eax + -16) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + -28)); /* movss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(0x877360)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x87735C)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x20); /* addss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + MEMF(eax + 0x40); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 0x50); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x60); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x70); /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm2.f[0]; /* movss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_005651AA; /* jl: less (signed <) */

loc_00565310: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00565314
 * Original: 0x00565314 - 0x0056548C (376 bytes, 101 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00565314(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00565314: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 8); /* subss */
    MEMF(ebp + 8) = xmm4.f[0]; /* movss */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm3 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -4) = xmm3.f[0]; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
    xmm2 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(ebp + -8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    PUSH32(esp, edi);
    edi = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -12); /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp + -8) = xmm5.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_005653D3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_005653CC: ;
    MEMF(ebp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_005653E4;

loc_005653D3: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */

loc_005653E4: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    esi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056540Du); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_0056540D: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x877388)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -8); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565486u); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_00565486: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00565343
 * Original: 0x00565343 - 0x0056548C (329 bytes, 87 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565343(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00565343: ;
    xmm2 = xmm1; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(ebp + -8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    PUSH32(esp, edi);
    edi = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -12); /* divss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebp + -8) = xmm5.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_005653D3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_005653CC: ;
    MEMF(ebp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_005653E4;

loc_005653D3: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    MEMF(ebp + 0xC) = xmm0.f[0]; /* movss */

loc_005653E4: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    esi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0056540Du); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_0056540D: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x877388)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -8); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00565486u); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_00565486: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0056548C
 * Original: 0x0056548C - 0x005655B7 (299 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056548C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0056548C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(ebp + -4) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    xmm1 = xmm0; /* movaps */
    fp_push(MEMF(ebp + -4)); /* fld float */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    MEMF(ebp + -8) = xmm1.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(ebp + -8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -8)); /* fmul dword ptr [ebp - 8] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + -12); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) / fp_top()); /* fdivr dword ptr [0x7a9980] */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    MEMF(ebp + -8) = xmm4.f[0]; /* movss */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp) = (float)fp_top(); /* fst */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056553Bu); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_0056553B: ;
    xmm0 = XMM_SCALAR(MEMF(0x877388)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -8); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005655B1u); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_005655B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005655B7
 * Original: 0x005655B7 - 0x0056567E (199 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005655B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_005655B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEM32(ebp + -4) = ecx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(ebp + -4)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565600u); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_00565600: ;
    fp_push(1.0); /* fld1 */
    xmm0 = XMM_SCALAR(MEMF(0x877388)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -8); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565678u); RECOMP_ABI_CALL(0x005650EFu, sub_005650EF); /* call 0x005650EF */

loc_00565678: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0056567E
 * Original: 0x0056567E - 0x00565734 (182 bytes, 50 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056567E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056567E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ZX8(MEM8(ebp + 0x12));
    xmm1 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x82B4DC)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(ebp + 0x11));
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(ebp + 0x10));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(ebp + 0x13));
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    edx = esi + 0xC;
    PUSH32(esp, 0xA);
    eax = ecx + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);

loc_005656BD: ;
    xmm6 = XMM_SCALAR(MEMF(edx + -12)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(eax + -4); /* addss */
    MEMF(eax + -4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + eax)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(eax); /* addss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(edx + -4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005656BD; /* jne: not equal / not zero */

loc_0056572F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00565734
 * Original: 0x00565734 - 0x005657B4 (128 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565734(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565734: ;
    eax = ZX8(MEM8(esp + 6));
    xmm0 = XMM_SCALAR(MEMF(0x82B4DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 5));
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 4));
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 7));
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xA);
    eax = ecx + 8;
    POP32(esp, ecx);

loc_00565766: ;
    xmm5 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + -8) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + -4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 4); /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00565766; /* jne: not equal / not zero */

loc_005657B1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005657B4
 * Original: 0x005657B4 - 0x0056584A (150 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005657B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005657B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ZX8(MEM8(ebp + 0xE));
    xmm1 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x82B4DC)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(ebp + 0xD));
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(ebp + 0xC));
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(ebp + 0xF));
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0xA);
    eax = ecx + 8;
    POP32(esp, ecx);

loc_005657EA: ;
    xmm6 = XMM_SCALAR(MEMF(eax + -8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + -8) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + -4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + -4) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005657EA; /* jne: not equal / not zero */

loc_00565846: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0056584A
 * Original: 0x0056584A - 0x00565C9A (1104 bytes, 246 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056584A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056584A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    PUSH32(esp, 4);
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    eax = ecx + 0x20;
    MEMF(ebp + -72) = xmm6.f[0]; /* movss */
    MEMF(ebp + -80) = xmm5.f[0]; /* movss */
    MEMF(ebp + -104) = xmm4.f[0]; /* movss */
    POP32(esp, ecx);

loc_005658BA: ;
    xmm1 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(ebp + -36) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(ebp + -68) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ebp + -32) = xmm3.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + -12) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(ebp + -8) = xmm2.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(ebp + -4); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -4); /* mulss */
    MEMF(ebp + -100) = xmm6.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 8); /* mulss */
    MEMF(ebp + -108) = xmm1.f[0]; /* movss */
    MEMF(eax + -16) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + -16); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -16); /* mulss */
    MEMF(ebp + -76) = xmm5.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(ebp + -4); /* mulss */
    xmm4 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 8); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -4); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -24); /* mulss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -68)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -20); /* mulss */
    MEMF(ebp + -56) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -28); /* mulss */
    MEMF(ebp + -52) = xmm6.f[0]; /* movss */
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -24); /* mulss */
    MEMF(ebp + -48) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -28); /* mulss */
    MEMF(ebp + -44) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -36)); /* movss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -28); /* mulss */
    MEMF(ebp + -64) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x60)); /* movss */
    MEMF(ebp + -60) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x70)); /* movss */
    MEMF(ebp + -40) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    MEMF(ebp + -96) = xmm7.f[0]; /* movss */
    MEMF(ebp + -92) = xmm1.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(ebp + -56); /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebp + -48); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -24); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(ebp + -16); /* mulss */
    xmm7.f[0] = xmm7.f[0] * MEMF(ebp + -80); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -28); /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -16); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -72); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 8); /* mulss */
    MEMF(eax + 0x10) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -72)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -76)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(ebp + -80)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -100)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ebp + -104)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -108)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -32)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -20); /* mulss */
    MEMF(eax + 0x20) = xmm7.f[0]; /* movss */
    MEMF(ebp + -88) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -20); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ebp + -84) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -24); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(ebp + -84); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebp + -84); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -4); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -88)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -40)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + -4); /* mulss */
    xmm7 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -44)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -48)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -52)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -56)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -92)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    MEMF(eax + 0x40) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 8); /* mulss */
    MEMF(eax + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + -20); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + -4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x60) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -60)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -24); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ebp + -64)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -28); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x70) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_005658BA; /* jne: not equal / not zero */

loc_00565C96: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00565C9A
 * Original: 0x00565C9A - 0x00565CF2 (88 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00565C9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565C9A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565CACu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00565CAC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565CB3u); RECOMP_ABI_CALL(0x0055D514u, sub_0055D514); /* call 0x0055D514 */

loc_00565CB3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565CC5; /* je: equal / zero */

loc_00565CBA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD176u;
    goto loc_00565CEE;

loc_00565CC5: ;
    _fa = (uint32_t)(MEM8(0x916898)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x916898), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565CD8; /* jne: not equal / not zero */

loc_00565CCD: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD179u;
    goto loc_00565CEE;

loc_00565CD8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00565CE8; /* jne: not equal / not zero */

loc_00565CE0: ;
    MEM32(eax) = 0xFFFFD17Du;
    goto loc_00565CEE;

loc_00565CE8: ;
    MEM32(eax) = 1;

loc_00565CEE: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00565CF2
 * Original: 0x00565CF2 - 0x00565D24 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00565CF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565CF2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565CFCu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00565CFC: ;
    ecx = ebp + -1;
    PUSH32(esp, ecx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565D0Bu); RECOMP_ABI_CALL(0x0055D514u, sub_0055D514); /* call 0x0055D514 */

loc_00565D0B: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00565D1C; /* jne: not equal / not zero */

loc_00565D14: ;
    MEM32(eax) = 0xFFFFD177u;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00565D1C: ;
    MEM32(eax) = 1;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00565D24
 * Original: 0x00565D24 - 0x00565D2E (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565D24(void)
{

loc_00565D24: ;
    edx = ecx;
    PUSH32(esp, 0x00565D2Bu); RECOMP_ABI_CALL(0x0056505Cu, sub_0056505C); /* call 0x0056505C */

loc_00565D2B: ;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00565D58
 * Original: 0x00565D58 - 0x00565D92 (58 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565D58(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565D58: ;
    PUSH32(esp, esi);
    eax = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEM32(eax + 0x40) = ecx;
    POP32(esp, ecx);
    edx = 0x87DB50;
    PUSH32(esp, 0x10);
    edi = eax + 0x50;
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
    POP32(esp, ecx);
    edi = eax + 0x110;
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
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax + 0x1B0) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00565D92
 * Original: 0x00565D92 - 0x00565D93 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565D92(void)
{

loc_00565D92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00565D93
 * Original: 0x00565D93 - 0x00565DDD (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00565D93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565D93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    eax = ebx + 0xD0;
    PUSH32(esp, eax);
    eax = ebx + 0x50;
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565DB9u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_00565DB9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    PUSH32(esp, 0x10);
    esi = eax;
    edi = esp + 0x14;
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
    POP32(esp, ecx);
    edi = ebx + 0x110;
    esi = esp + 0x10;
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
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00565DDD
 * Original: 0x00565DDD - 0x00565DE4 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565DDD(void)
{

loc_00565DDD: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_00565DE4
 * Original: 0x00565DE4 - 0x00565DEB (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00565DE4(void)
{

loc_00565DE4: ;
    eax = ecx + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00565DEB
 * Original: 0x00565DEB - 0x00565F0A (287 bytes, 98 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00565DEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00565DEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    edi = ecx;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 3);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565E07u); RECOMP_ABI_CALL(0x00561427u, sub_00561427); /* call 0x00561427 */

loc_00565E07: ;
    eax = MEM32(edi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565E71; /* je: equal / zero */

loc_00565E0E: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565E71; /* je: equal / zero */

loc_00565E15: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(0x915738)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915738), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565E2D; /* jne: not equal / not zero */

loc_00565E1F: ;
    edx = MEM32(0x91573C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565ED8; /* je: equal / zero */

loc_00565E2D: ;
    edx = MEM32(eax);
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565E5A; /* jne: not equal / not zero */

loc_00565E3D: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565E45u); RECOMP_ABI_CALL(0x00760DE0u, sub_00760DE0); /* call 0x00760DE0 */

loc_00565E45: ;
    esi = eax;
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565E52u); RECOMP_ABI_CALL(0x0075BCC0u, sub_0075BCC0); /* call 0x0075BCC0 */

loc_00565E52: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565E58u); RECOMP_ABI_CALL(0x007630E0u, sub_007630E0); /* call 0x007630E0 */

loc_00565E58: ;
    goto loc_00565E62;

loc_00565E5A: ;
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565E62u); RECOMP_ABI_CALL(0x0075BCC0u, sub_0075BCC0); /* call 0x0075BCC0 */

loc_00565E62: ;
    eax = MEM32(edi + 0x40);
    eax = MEM32(eax);
    MEM32(0x915738) = eax;
    eax = MEM32(ebp + -4);
    goto loc_00565ED1;

loc_00565E71: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(0x915738)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915738), eax (32-bit) */
    ecx = MEM32(0x915734);
    if (CMP_NE(_fa, _fb)) goto loc_00565E8B; /* jne: not equal / not zero */

loc_00565E81: ;
    edx = MEM32(0x91573C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00565ED8; /* je: equal / zero */

loc_00565E8B: ;
    edx = MEM32(eax);
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00565EBA; /* jne: not equal / not zero */

loc_00565E9B: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565EA3u); RECOMP_ABI_CALL(0x00760DE0u, sub_00760DE0); /* call 0x00760DE0 */

loc_00565EA3: ;
    esi = eax;
    eax = MEM32(0x915734);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565EB2u); RECOMP_ABI_CALL(0x0075BCC0u, sub_0075BCC0); /* call 0x0075BCC0 */

loc_00565EB2: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565EB8u); RECOMP_ABI_CALL(0x007630E0u, sub_007630E0); /* call 0x007630E0 */

loc_00565EB8: ;
    goto loc_00565EC2;

loc_00565EBA: ;
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565EC2u); RECOMP_ABI_CALL(0x0075BCC0u, sub_0075BCC0); /* call 0x0075BCC0 */

loc_00565EC2: ;
    eax = MEM32(edi + 0x40);
    eax = MEM32(eax);
    MEM32(0x915738) = eax;
    eax = MEM32(0x915734);

loc_00565ED1: ;
    eax = MEM32(eax);
    MEM32(0x91573C) = eax;

loc_00565ED8: ;
    _fb = (uint32_t)(0x198) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x198;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565EE4u); RECOMP_ABI_CALL(0x0075C7C0u, sub_0075C7C0); /* call 0x0075C7C0 */

loc_00565EE4: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565EF1u); RECOMP_ABI_CALL(0x0075E320u, sub_0075E320); /* call 0x0075E320 */

loc_00565EF1: ;
    edx = ebp + -24;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565EFBu); RECOMP_ABI_CALL(0x00761D50u, sub_00761D50); /* call 0x00761D50 */

loc_00565EFB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -40;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565F06u); RECOMP_ABI_CALL(0x00761D50u, sub_00761D50); /* call 0x00761D50 */

loc_00565F06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00565F0A
 * Original: 0x00565F0A - 0x00565F55 (75 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00565F0A(void)
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

loc_00565F0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00565F1B; /* je: equal / zero */

loc_00565F16: ;
    esi = 0xF0;

loc_00565F1B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00565F24; /* je: equal / zero */

loc_00565F21: ;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00565F24: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00565F2D; /* je: equal / zero */

loc_00565F2A: ;
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00565F2D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565F32u); RECOMP_ABI_CALL(0x00565DEBu, sub_00565DEB); /* call 0x00565DEB */

loc_00565F32: ;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565F47u); RECOMP_ABI_CALL(0x00761290u, sub_00761290); /* call 0x00761290 */

loc_00565F47: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00565F55
 * Original: 0x00565F55 - 0x005666A5 (1872 bytes, 455 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00565F55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00565F55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x194));
    esp = esp - 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565F75u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00565F75: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565F7Cu); RECOMP_ABI_CALL(0x0055DDD5u, sub_0055DDD5); /* call 0x0055DDD5 */

loc_00565F7C: ;
    ecx = MEM32(esp + 0x38);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565F85u); RECOMP_ABI_CALL(0x00561417u, sub_00561417); /* call 0x00561417 */

loc_00565F85: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00565F97; /* jge: greater or equal (signed >=) */

loc_00565F91: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00565F97: ;
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00565FA4u); RECOMP_ABI_CALL(0x0056141Bu, sub_0056141B); /* call 0x0056141B */

loc_00565FA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00565FB6; /* jge: greater or equal (signed >=) */

loc_00565FB0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00565FB6: ;
    eax = MEM32(ebx + 8);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_push((double)SMEM32(ebx + 8)); /* fild */
    xmm0.f[0] = (float)(int32_t)MEM32(ebx); /* cvtsi2ss */
    xmm3.f[0] = (float)(int32_t)MEM32(ebx + 4); /* cvtsi2ss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_00565FEB; /* jge: greater or equal (signed >=) */

loc_00565FE5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_00565FEB: ;
    eax = MEM32(ebx + 0xC);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_push((double)SMEM32(ebx + 0xC)); /* fild */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_0056600F; /* jge: greater or equal (signed >=) */

loc_00566009: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0056600F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00566033; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_0056602D: ;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00566033: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00566040; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_0056603A: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00566040: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0056604E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00566045: ;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */

loc_0056604E: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0056605C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00566053: ;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm2 = xmm0; /* movaps */

loc_0056605C: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00566073; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0056606D: ;
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */

loc_00566073: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0056608A; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_00566084: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0056608A: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00566095; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0056608F: ;
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */

loc_00566095: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_005660A0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0056609A: ;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */

loc_005660A0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esi = ebx + 0x198;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005660AFu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005660AF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005660BAu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005660BA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(ebx + 0x19C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005660DBu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005660DB: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    edi = eax;
    MEM32(ebx + 0x1A0) = edi;
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005660F4u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005660F4: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = eax;
    eax = MEM32(ebx + 0x10);
    MEM32(ebx + 0x1A8) = eax;
    eax = MEM32(ebx + 0x14);
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    MEM32(ebx + 0x1AC) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0x1A4) = ecx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0056613C; /* jp: parity */

loc_0056612F: ;
    _fca = xmm4.f[0]; _fcb = xmm7.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0056626A; /* jnp: not parity */

loc_0056613C: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00566251; /* je: equal / zero */

loc_00566147: ;
    xmm6 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm5 = xmm6; /* movaps */
    xmm5.f[0] = xmm5.f[0] / xmm3.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ebx + 0x150) = xmm0.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm4.f[0]; /* divss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ebx + 0x154) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x18); /* addss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x20); /* addss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ebx + 0x164) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x15C) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    MEMF(ebx + 0x188) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    MEMF(ebx + 0x18C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm7.f[0]; /* divss */
    MEMF(ebx + 0x190) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm7.f[0]; /* divss */
    goto loc_005662AD;

loc_00566251: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x19C) = MEM32(ebx + 0x19C) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x19C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x1A0) = eax;
    MEM32(ebx + 0x1A4) = eax;

loc_0056626A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0x154) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x150) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x15C) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x164) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x188) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x18C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x190) = xmm0.f[0]; /* movss */

loc_005662AD: ;
    ecx = ebx;
    MEMF(ebx + 0x158) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x160) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0x194) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005662CCu); RECOMP_ABI_CALL(0x00565DEBu, sub_00565DEB); /* call 0x00565DEB */

loc_005662CC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005662D2u); RECOMP_ABI_CALL(0x0075C7C0u, sub_0075C7C0); /* call 0x0075C7C0 */

loc_005662D2: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005662E1u); RECOMP_ABI_CALL(0x0075E320u, sub_0075E320); /* call 0x0075E320 */

loc_005662E1: ;
    edx = esp + 0x50;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005662ECu); RECOMP_ABI_CALL(0x00761D50u, sub_00761D50); /* call 0x00761D50 */

loc_005662EC: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x40;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005662F8u); RECOMP_ABI_CALL(0x00761D50u, sub_00761D50); /* call 0x00761D50 */

loc_005662F8: ;
    eax = MEM32(ebx + 0x3C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_005664BD; /* je: equal / zero */

loc_00566304: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00566419; /* je: equal / zero */

loc_0056630B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0056635E; /* je: equal / zero */

loc_0056630E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00566693; /* jne: not equal / not zero */

loc_00566315: ;
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ebx + 0xD0;
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x34)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056634Du); RECOMP_ABI_CALL(0x005DC9D6u, sub_005DC9D6); /* call 0x005DC9D6 */

loc_0056634D: ;
    eax = ebx + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0xA8;
    goto loc_00566670;

loc_0056635E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = ebx + 0xD0;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebx + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005663E5; /* jge: greater or equal (signed >=) */

loc_005663DF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_005663E5: ;
    eax = MEM32(ebx + 8);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_push((double)SMEM32(ebx + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_005663F9; /* jge: greater or equal (signed >=) */

loc_005663F3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_005663F9: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566408u); RECOMP_ABI_CALL(0x005DCBFAu, sub_005DCBFA); /* call 0x005DCBFA */

loc_00566408: ;
    eax = ebx + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x128;
    goto loc_00566670;

loc_00566419: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = ebx + 0xD0;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABE28); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(0x7ABE28)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005664ACu); RECOMP_ABI_CALL(0x005DCB14u, sub_005DCB14); /* call 0x005DCB14 */

loc_005664AC: ;
    eax = ebx + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0xE8;
    goto loc_00566670;

loc_005664BD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = ebx + 0xD0;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x1C)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056654Du); RECOMP_ABI_CALL(0x005DC8AEu, sub_005DC8AE); /* call 0x005DC8AE */

loc_0056654D: ;
    fp_push(MEMF(ebx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7F1360)); /* fmul dword ptr [0x7f1360] */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x150)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi); /* mulss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x154)); /* movss */
    eax = ebx + 0xE4;
    xmm0.f[0] = xmm0.f[0] * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x158); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x15C); /* subss */
    MEMF(ebx + 0xF0) = xmm1.f[0]; /* movss */
    MEMF(ebx + 0xF4) = xmm0.f[0]; /* movss */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x188)); /* fmul dword ptr [ebx + 0x188] */
    fp_top() = -fp_top(); /* fchs */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x18C)); /* fmul dword ptr [ebx + 0x18c] */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x190)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + 0x1C)); /* fdiv dword ptr [ebx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AACB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + 0x1C)); /* fdiv dword ptr [ebx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x194)); /* fmul dword ptr [ebx + 0x194] */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(1.0); /* fld1 */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    eax = ebx + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x168;
    fp_pop(); /* fstp st(0) */
    MEMF(ebx + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA7D4)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(ebx + 0x16C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(ebx + 0x170) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(ebx + 0x174) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(ebx + 0x178) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(ebx + 0x17C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    { fp_top() = tan(fp_top()); fp_push(1.0); } /* fptan */
    fp_pop(); /* fstp st(0) */
    MEMF(ebx + 0x180) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    MEMF(ebx + 0x184) = (float)fp_top(); fp_pop(); /* fstp */

loc_00566670: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566676u); RECOMP_ABI_CALL(0x0001155Fu, sub_0001155F); /* call 0x0001155F */

loc_00566676: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    esi = eax;
    edi = esp + 0x60;
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
    PUSH32(esp, 0x10);
    esi = esp + 0x64;
    edi = ebx + 0x110;
    POP32(esp, ecx);
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

loc_00566693: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_005666C5
 * Original: 0x005666C5 - 0x005666FB (54 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005666C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005666C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005666E0; /* jne: not equal / not zero */

loc_005666D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005666DEu); RECOMP_ABI_CALL(0x00761D50u, sub_00761D50); /* call 0x00761D50 */

loc_005666DE: ;
    goto loc_005666F5;

loc_005666E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005666EC; /* jne: not equal / not zero */

loc_005666E5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005666EAu); RECOMP_ABI_CALL(0x00761E00u, sub_00761E00); /* call 0x00761E00 */

loc_005666EA: ;
    goto loc_005666F5;

loc_005666EC: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005666F5u); RECOMP_ABI_CALL(0x00761F90u, sub_00761F90); /* call 0x00761F90 */

loc_005666F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0056677E
 * Original: 0x0056677E - 0x0056678B (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056677E(void)
{

loc_0056677E: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0xFFFFFF9Cu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0056678B
 * Original: 0x0056678B - 0x00566791 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056678B(void)
{

loc_0056678B: ;
    eax = 0x8773F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00566791
 * Original: 0x00566791 - 0x005667A0 (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566791(void)
{

loc_00566791: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x0056679Cu); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_0056679C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005667AE
 * Original: 0x005667AE - 0x005667C1 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005667AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005667AE: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x18;
    PUSH32(esp, 0x005667B9u); RECOMP_ABI_CALL(0x00575ED1u, sub_00575ED1); /* call 0x00575ED1 */

loc_005667B9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_005667C1
 * Original: 0x005667C1 - 0x005667C9 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005667C1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005667C1: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_005667C9
 * Original: 0x005667C9 - 0x005667DE (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005667C9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005667C9: ;
    eax = ecx + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_005667DD; /* je: equal / zero */

loc_005667D7: ;
    MEM32(eax) = 0x5667C1;

loc_005667DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005667DE
 * Original: 0x005667DE - 0x005667EE (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005667DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005667DE: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_005667ED; /* je: equal / zero */

loc_005667E7: ;
    MEM32(eax) = 0x5667C1;

loc_005667ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005667EE
 * Original: 0x005667EE - 0x005667FB (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005667EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005667EE: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_005667FA; /* je: equal / zero */

loc_005667F7: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005667FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005667FB
 * Original: 0x005667FB - 0x0056689E (163 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005667FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005667FB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056680Cu); RECOMP_ABI_CALL(0x0056747Bu, sub_0056747B); /* call 0x0056747B */

loc_0056680C: ;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566814u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00566814: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056681Bu); RECOMP_ABI_CALL(0x0055B5B0u, sub_0055B5B0); /* call 0x0055B5B0 */

loc_0056681B: ;
    edi = esi + 0x18;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566825u); RECOMP_ABI_CALL(0x00575E02u, sub_00575E02); /* call 0x00575E02 */

loc_00566825: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566831u); RECOMP_ABI_CALL(0x005743B7u, sub_005743B7); /* call 0x005743B7 */

loc_00566831: ;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566839u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00566839: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566844u); RECOMP_ABI_CALL(0x00575FD2u, sub_00575FD2); /* call 0x00575FD2 */

loc_00566844: ;
    PUSH32(esp, ecx);
    eax = ebp + 8;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566850u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00566850: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056685Bu); RECOMP_ABI_CALL(0x00576009u, sub_00576009); /* call 0x00576009 */

loc_0056685B: ;
    PUSH32(esp, ecx);
    eax = ebp + 0xC;
    ecx = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566867u); RECOMP_ABI_CALL(0x0002D9EEu, sub_0002D9EE); /* call 0x0002D9EE */

loc_00566867: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566872u); RECOMP_ABI_CALL(0x00576041u, sub_00576041); /* call 0x00576041 */

loc_00566872: ;
    ecx = esi;
    MEM32(esi + 0x2C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056687Cu); RECOMP_ABI_CALL(0x005667C9u, sub_005667C9); /* call 0x005667C9 */

loc_0056687C: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566884u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00566884: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0056688D; /* je: equal / zero */

loc_0056688A: ;
    MEM32(ebp + 0xC) = ebx;

loc_0056688D: ;
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566895u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00566895: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0056689E
 * Original: 0x0056689E - 0x005668C9 (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056689E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0056689E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5667EE);
    PUSH32(esp, 0x5667DE);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x8773F8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005668BBu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_005668BB: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005668C7u); RECOMP_ABI_CALL(0x0057740Bu, sub_0057740B); /* call 0x0057740B */

loc_005668C7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005668E2
 * Original: 0x005668E2 - 0x005668E8 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005668E2(void)
{

loc_005668E2: ;
    eax = 0x877478;
    esp += 4; return; /* ret */

}

/**
 * sub_005668E8
 * Original: 0x005668E8 - 0x005668EE (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005668E8(void)
{

loc_005668E8: ;
    eax = 0x877478;
    esp += 4; return; /* ret */

}

/**
 * sub_005668EE
 * Original: 0x005668EE - 0x00566900 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005668EE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005668EE: ;
    eax = MEM32(ecx + 0x18);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x14));
    PUSH32(esp, 0x005668FDu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_005668FD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00566900
 * Original: 0x00566900 - 0x00566985 (133 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00566900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00566900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00566919; /* jne: not equal / not zero */

loc_0056690E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD469u;
    goto loc_0056697F;

loc_00566919: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0056692D; /* jae: above or equal (unsigned >=) */

loc_00566922: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0xFFFFD46Au;
    goto loc_0056697E;

loc_0056692D: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00566940; /* je: equal / zero */

loc_00566933: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00566940; /* jbe: below or equal (unsigned <=) */

loc_00566939: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566940u); RECOMP_ABI_CALL(0x005668EEu, sub_005668EE); /* call 0x005668EE */

loc_00566940: ;
    PUSH32(esp, 0);
    eax = edi;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x877475);
    PUSH32(esp, eax);
    MEM32(esi + 0x10) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566955u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00566955: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00566979; /* jbe: below or equal (unsigned <=) */

loc_0056696D: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + eax * 4) = MEM32(edx + eax * 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0056696D; /* jb: below (unsigned <) */

loc_00566979: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;

loc_0056697E: ;
    POP32(esp, edi);

loc_0056697F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00566985
 * Original: 0x00566985 - 0x00566988 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00566985(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00566985: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00566988
 * Original: 0x00566988 - 0x005669BE (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566988(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00566988: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00566994u); RECOMP_ABI_CALL(0x00567481u, sub_00567481); /* call 0x00567481 */

loc_00566994: ;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056699Cu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0056699C: ;
    ecx = esi;
    PUSH32(esp, 0x005669A3u); RECOMP_ABI_CALL(0x0055B5B0u, sub_0055B5B0); /* call 0x0055B5B0 */

loc_005669A3: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x24) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_005669BE
 * Original: 0x005669BE - 0x005669CE (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005669BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005669BE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x005669C6u); RECOMP_ABI_CALL(0x005668EEu, sub_005668EE); /* call 0x005668EE */

loc_005669C6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_005669CE
 * Original: 0x005669CE - 0x005669DE (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005669CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005669CE: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_005669DD; /* je: equal / zero */

loc_005669D7: ;
    MEM32(eax) = 0x566985;

loc_005669DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005669DE
 * Original: 0x005669DE - 0x005669EB (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005669DE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005669DE: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_005669EA; /* je: equal / zero */

loc_005669E7: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005669EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005669EB
 * Original: 0x005669EB - 0x00566A16 (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005669EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_005669EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5669DE);
    PUSH32(esp, 0x5669CE);
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x877478);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566A08u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00566A08: ;
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566A14u); RECOMP_ABI_CALL(0x0057740Bu, sub_0057740B); /* call 0x0057740B */

loc_00566A14: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00566A26
 * Original: 0x00566A26 - 0x00566A38 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566A26(void)
{

loc_00566A26: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00566A32u); RECOMP_ABI_CALL(0x00561547u, sub_00561547); /* call 0x00561547 */

loc_00566A32: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00566A38
 * Original: 0x00566A38 - 0x00566A3D (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566A38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00566A38: ;
    g_seh_ebp = ebp; sub_005615CB(); return; /* tail jmp 0x005615CB */

}

/**
 * sub_00566A3D
 * Original: 0x00566A3D - 0x00566A41 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566A3D(void)
{

loc_00566A3D: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00566ADC
 * Original: 0x00566ADC - 0x00566AED (17 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566ADC(void)
{

loc_00566ADC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00566AE5u); RECOMP_ABI_CALL(0x007632A0u, sub_007632A0); /* call 0x007632A0 */

loc_00566AE5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00566AEBu); RECOMP_ABI_CALL(0x007630E0u, sub_007630E0); /* call 0x007630E0 */

loc_00566AEB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00566B0F
 * Original: 0x00566B0F - 0x00566B2D (30 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566B0F(void)
{

loc_00566B0F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00566B17u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00566B17: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x00566B27u); RECOMP_ABI_CALL(0x00761BF0u, sub_00761BF0); /* call 0x00761BF0 */

loc_00566B27: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00566B2D
 * Original: 0x00566B2D - 0x00566B4E (33 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566B2D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00566B2D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00566B35u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00566B35: ;
    eax = MEM32(0x915A70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00566B45; /* jne: not equal / not zero */

loc_00566B3E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00566B45u); RECOMP_ABI_CALL(0x00762730u, sub_00762730); /* call 0x00762730 */

loc_00566B45: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00566B4Cu); RECOMP_ABI_CALL(0x00762620u, sub_00762620); /* call 0x00762620 */

loc_00566B4C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00566B4E
 * Original: 0x00566B4E - 0x00566B66 (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566B4E(void)
{

loc_00566B4E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00566B56u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00566B56: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00566B5Du); RECOMP_ABI_CALL(0x00762730u, sub_00762730); /* call 0x00762730 */

loc_00566B5D: ;
    eax = MEM32(esi);
    MEM32(0x915A70) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00566B66
 * Original: 0x00566B66 - 0x00566B7E (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566B66(void)
{

loc_00566B66: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00566B6Eu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00566B6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00566B78u); RECOMP_ABI_CALL(0x00764580u, sub_00764580); /* call 0x00764580 */

loc_00566B78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00566B7E
 * Original: 0x00566B7E - 0x00566B9F (33 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566B7E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00566B7E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00566B86u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00566B86: ;
    eax = MEM32(0x915A74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00566B96; /* jne: not equal / not zero */

loc_00566B8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00566B96u); RECOMP_ABI_CALL(0x00764A30u, sub_00764A30); /* call 0x00764A30 */

loc_00566B96: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00566B9Du); RECOMP_ABI_CALL(0x007645D0u, sub_007645D0); /* call 0x007645D0 */

loc_00566B9D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00566B9F
 * Original: 0x00566B9F - 0x00566BB7 (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566B9F(void)
{

loc_00566B9F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00566BA7u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00566BA7: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x00566BAEu); RECOMP_ABI_CALL(0x00764A30u, sub_00764A30); /* call 0x00764A30 */

loc_00566BAE: ;
    eax = MEM32(esi);
    MEM32(0x915A74) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00566C20
 * Original: 0x00566C20 - 0x00566C41 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00566C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00566C35; /* je: equal / zero */

loc_00566C2A: ;
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00566C33u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00566C33: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00566C35: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_00566C41
 * Original: 0x00566C41 - 0x00566CB6 (117 bytes, 40 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566C41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00566C41: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x24);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00566C83; /* jbe: below or equal (unsigned <=) */

loc_00566C54: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00566C64; /* je: equal / zero */

loc_00566C5B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00566C62u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00566C62: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00566C64: ;
    eax = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x877491);
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x00566C7Du); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00566C7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;

loc_00566C83: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x877494);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00566CA2u); RECOMP_ABI_CALL(0x005B48D3u, sub_005B48D3); /* call 0x005B48D3 */

loc_00566CA2: ;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00566CB6
 * Original: 0x00566CB6 - 0x00566D24 (110 bytes, 35 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00566CB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00566CB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x24);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00566CF1; /* jbe: below or equal (unsigned <=) */

loc_00566CC9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, 0x00566CD2u); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_00566CD2: ;
    eax = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x877497);
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x00566CEBu); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00566CEB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;

loc_00566CF1: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x877498);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esi + 0x20));
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x00566D10u); RECOMP_ABI_CALL(0x005B48F3u, sub_005B48F3); /* call 0x005B48F3 */

loc_00566D10: ;
    MEM32(esi + 0x28) = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00566D24
 * Original: 0x00566D24 - 0x0056704B (807 bytes, 238 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00566D24(void)
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

loc_00566D24: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x174;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 0 (32-bit) */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    esi = 0x87DB50;
    edi = esp + 0x30;
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
    if (CMP_NE(_fa, _fb)) goto loc_00566D67; /* jne: not equal / not zero */

loc_00566D49: ;
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566D65u); RECOMP_ABI_CALL(0x005580C0u, sub_005580C0); /* call 0x005580C0 */

loc_00566D65: ;
    goto loc_00566D76;

loc_00566D67: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    edi = esp + 0x30;
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

loc_00566D76: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566D7Eu); RECOMP_ABI_CALL(0x00565DE4u, sub_00565DE4); /* call 0x00565DE4 */

loc_00566D7E: ;
    PUSH32(esp, 0x10);
    esi = eax;
    POP32(esp, ecx);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = esp + 0xCC;
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566DA1u); RECOMP_ABI_CALL(0x0002F965u, sub_0002F965); /* call 0x0002F965 */

loc_00566DA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(0x915710)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x915710), 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00566DCA; /* jne: not equal / not zero */

loc_00566DB0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */

loc_00566DCA: ;
    eax = esp + 0x100;
    PUSH32(esp, eax);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566DE7u); RECOMP_ABI_CALL(0x0002F965u, sub_0002F965); /* call 0x0002F965 */

loc_00566DE7: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566DF2u); RECOMP_ABI_CALL(0x00565DEBu, sub_00565DEB); /* call 0x00565DEB */

loc_00566DF2: ;
    eax = esp + 0x100;
    PUSH32(esp, eax);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E07u); RECOMP_ABI_CALL(0x0078A062u, sub_0078A062); /* call 0x0078A062 */

loc_00566E07: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x60);
    edx = esp + 0x148;
    POP32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E18u); RECOMP_ABI_CALL(0x00761EB0u, sub_00761EB0); /* call 0x00761EB0 */

loc_00566E18: ;
    PUSH32(esp, MEM32(0x91689C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E23u); RECOMP_ABI_CALL(0x00561172u, sub_00561172); /* call 0x00561172 */

loc_00566E23: ;
    PUSH32(esp, MEM32(0x9168A0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E2Eu); RECOMP_ABI_CALL(0x0056118Eu, sub_0056118E); /* call 0x0056118E */

loc_00566E2E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(0x915778);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E43u); RECOMP_ABI_CALL(0x00563B98u, sub_00563B98); /* call 0x00563B98 */

loc_00566E43: ;
    PUSH32(esp, MEM32(ebx + 0x1C));
    ecx = MEM32(0x915778);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E56u); RECOMP_ABI_CALL(0x00563B84u, sub_00563B84); /* call 0x00563B84 */

loc_00566E56: ;
    ecx = MEM32(0x915778);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E6Au); RECOMP_ABI_CALL(0x00560519u, sub_00560519); /* call 0x00560519 */

loc_00566E6A: ;
    ecx = MEM32(0x915778);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E7Du); RECOMP_ABI_CALL(0x00563B47u, sub_00563B47); /* call 0x00563B47 */

loc_00566E7D: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E8Cu); RECOMP_ABI_CALL(0x0075E320u, sub_0075E320); /* call 0x0075E320 */

loc_00566E8C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566E9Au); RECOMP_ABI_CALL(0x005CDA41u, sub_005CDA41); /* call 0x005CDA41 */

loc_00566E9A: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566EAEu); RECOMP_ABI_CALL(0x005CDA41u, sub_005CDA41); /* call 0x005CDA41 */

loc_00566EAE: ;
    POP32(esp, ecx);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    POP32(esp, ecx);
    PUSH32(esp, 8);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566EBFu); RECOMP_ABI_CALL(0x007644F0u, sub_007644F0); /* call 0x007644F0 */

loc_00566EBF: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566ECBu); RECOMP_ABI_CALL(0x007644A0u, sub_007644A0); /* call 0x007644A0 */

loc_00566ECB: ;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0056703D; /* jbe: below or equal (unsigned <=) */

loc_00566ED4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00566ED6: ;
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566EF0u); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_00566EF0: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    fp_push(0.0); /* fldz */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566F2Cu); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_00566F2C: ;
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566F46u); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_00566F46: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    fp_push(0.0); /* fldz */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566F82u); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_00566F82: ;
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566F9Du); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_00566F9D: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    fp_push(0.0); /* fldz */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566FD9u); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_00566FD9: ;
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00566FF4u); RECOMP_ABI_CALL(0x00764320u, sub_00764320); /* call 0x00764320 */

loc_00566FF4: ;
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebx + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    fp_push(0.0); /* fldz */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567030u); RECOMP_ABI_CALL(0x00764360u, sub_00764360); /* call 0x00764360 */

loc_00567030: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00566ED6; /* jb: below (unsigned <) */

loc_0056703D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567042u); RECOMP_ABI_CALL(0x00764530u, sub_00764530); /* call 0x00764530 */

loc_00567042: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0056704B
 * Original: 0x0056704B - 0x00567111 (198 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056704B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056704B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00567057u); RECOMP_ABI_CALL(0x00567487u, sub_00567487); /* call 0x00567487 */

loc_00567057: ;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0056705Fu); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_0056705F: ;
    ecx = esi;
    PUSH32(esp, 0x00567066u); RECOMP_ABI_CALL(0x0055B5B0u, sub_0055B5B0); /* call 0x0055B5B0 */

loc_00567066: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = eax;
    _fa = (uint32_t)(MEM32(0x91689C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x91689C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005670B7; /* jne: not equal / not zero */

loc_00567087: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00567092u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00567092: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005670B1; /* je: equal / zero */

loc_00567099: ;
    PUSH32(esp, 0x8DCC28);
    PUSH32(esp, 0x8DCC10);
    ecx = eax;
    PUSH32(esp, 0x005670AAu); RECOMP_ABI_CALL(0x00566B0Fu, sub_00566B0F); /* call 0x00566B0F */

loc_005670AA: ;
    MEM32(0x91689C) = eax;
    goto loc_005670B7;

loc_005670B1: ;
    MEM32(0x91689C) = edi;

loc_005670B7: ;
    _fa = (uint32_t)(MEM32(0x9168A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x9168A0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005670EA; /* jne: not equal / not zero */

loc_005670BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, 0x005670CAu); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_005670CA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005670E4; /* je: equal / zero */

loc_005670D1: ;
    PUSH32(esp, 0x8DCCB0);
    ecx = eax;
    PUSH32(esp, 0x005670DDu); RECOMP_ABI_CALL(0x00566B66u, sub_00566B66); /* call 0x00566B66 */

loc_005670DD: ;
    MEM32(0x9168A0) = eax;
    goto loc_005670EA;

loc_005670E4: ;
    MEM32(0x9168A0) = edi;

loc_005670EA: ;
    eax = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi + 0x24) = eax;
    if ((_fa == 0)) goto loc_0056710A; /* je: equal / zero */

loc_005670F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x877490);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00567104u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00567104: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;

loc_0056710A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00567114
 * Original: 0x00567114 - 0x0056713D (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00567114(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00567114: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(eax + 3));
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 1));
    MEM8(ebp + 0xB) = LO8(ebx);
    SET_LO8(ebx, MEM8(eax));
    eax = MEM32(ebp + 0xC);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0xB));
    MEM8(eax + 3) = LO8(ebx);
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax) = LO8(ecx);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0056713D
 * Original: 0x0056713D - 0x00567146 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056713D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0056713D: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00565DDD(); return; /* tail jmp 0x00565DDD */

}

/**
 * sub_00567146
 * Original: 0x00567146 - 0x00567162 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00567146(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00567146: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056715Du); RECOMP_ABI_CALL(0x005611DDu, sub_005611DD); /* call 0x005611DD */

loc_0056715D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00567162
 * Original: 0x00567162 - 0x005671C6 (100 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00567162(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00567162: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(ebp + 0xF));
    edx = ZX8(MEM8(ebp + 0xE));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(esi + 3));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = 0x80;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ebp + -1) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 2));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX8(MEM8(ebp + 0xD));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ebp + -2) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 1));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX8(MEM8(ebp + 0xC));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ebp + -3) = LO8(ecx);
    ecx = ZX8(MEM8(esi));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM8(ebp + -4) = LO8(ecx);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00567294
 * Original: 0x00567294 - 0x00567295 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567294(void)
{

loc_00567294: ;
    esp += 4; return; /* ret */

}

/**
 * sub_005672A2
 * Original: 0x005672A2 - 0x005672FA (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005672A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_005672A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x7FE8B4)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005672BAu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005672BA: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005672C6u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005672C6: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM8(ebp + 0xB) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005672D3u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005672D3: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005672E0u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_005672E0: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0xC);
    MEM8(ecx + 3) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ecx + 1) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, esi);
    MEM8(ecx + 2) = LO8(ebx);
    MEM8(ecx) = LO8(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00567335
 * Original: 0x00567335 - 0x00567384 (79 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00567335(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00567335: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    SET_LO8(edx, MEM8(eax + 2));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 1));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 3));
    SET_LO8(eax, MEM8(eax));
    MEM8(ebp + 0xB) = LO8(eax);
    eax = ZX8(LO8(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = 0xFF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = MEM32(ebp + 0xC);
    MEM8(ecx + 3) = 0xFF;
    MEM8(ecx + 2) = LO8(eax);
    eax = ZX8(LO8(ebx));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM8(ecx + 1) = LO8(eax);
    eax = ZX8(MEM8(ebp + 0xB));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    esi = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM8(ecx) = LO8(eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00567384
 * Original: 0x00567384 - 0x005673DB (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00567384(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00567384: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0xC); /* mulss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = esp + 0x10;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_005673DB
 * Original: 0x005673DB - 0x005673F9 (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005673DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_005673DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax));
    ecx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005673F0u); RECOMP_ABI_CALL(0x00567162u, sub_00567162); /* call 0x00567162 */

loc_005673F0: ;
    eax = MEM32(eax);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_005673F9
 * Original: 0x005673F9 - 0x0056743F (70 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005673F9(void)
{

loc_005673F9: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    edx = MEM32(esp + 0xC);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0056746F
 * Original: 0x0056746F - 0x00567475 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056746F(void)
{

loc_0056746F: ;
    eax = 0x9168BC;
    esp += 4; return; /* ret */

}

/**
 * sub_00567475
 * Original: 0x00567475 - 0x0056747B (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567475(void)
{

loc_00567475: ;
    eax = 0x9168B8;
    esp += 4; return; /* ret */

}

/**
 * sub_0056747B
 * Original: 0x0056747B - 0x00567481 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056747B(void)
{

loc_0056747B: ;
    eax = 0x9168C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00567481
 * Original: 0x00567481 - 0x00567487 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567481(void)
{

loc_00567481: ;
    eax = 0x9168A4;
    esp += 4; return; /* ret */

}

/**
 * sub_00567487
 * Original: 0x00567487 - 0x0056748D (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567487(void)
{

loc_00567487: ;
    eax = 0x9168C8;
    esp += 4; return; /* ret */

}

/**
 * sub_0056748D
 * Original: 0x0056748D - 0x00567493 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056748D(void)
{

loc_0056748D: ;
    eax = 0x9168A8;
    esp += 4; return; /* ret */

}

/**
 * sub_00567493
 * Original: 0x00567493 - 0x00567499 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567493(void)
{

loc_00567493: ;
    eax = 0x9168D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00567499
 * Original: 0x00567499 - 0x0056749F (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567499(void)
{

loc_00567499: ;
    eax = 0x9168AC;
    esp += 4; return; /* ret */

}

/**
 * sub_0056749F
 * Original: 0x0056749F - 0x005674A5 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0056749F(void)
{

loc_0056749F: ;
    eax = 0x9168DC;
    esp += 4; return; /* ret */

}

/**
 * sub_005674A5
 * Original: 0x005674A5 - 0x005674AB (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005674A5(void)
{

loc_005674A5: ;
    eax = 0x9168CC;
    esp += 4; return; /* ret */

}

/**
 * sub_005674AB
 * Original: 0x005674AB - 0x005674B1 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005674AB(void)
{

loc_005674AB: ;
    eax = 0x9168B4;
    esp += 4; return; /* ret */

}

/**
 * sub_005674B1
 * Original: 0x005674B1 - 0x005674B7 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005674B1(void)
{

loc_005674B1: ;
    eax = 0x9168B0;
    esp += 4; return; /* ret */

}

/**
 * sub_005674B7
 * Original: 0x005674B7 - 0x005674BD (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005674B7(void)
{

loc_005674B7: ;
    eax = 0x9168C0;
    esp += 4; return; /* ret */

}

/**
 * sub_005674BD
 * Original: 0x005674BD - 0x005674C3 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005674BD(void)
{

loc_005674BD: ;
    eax = 0x9168D8;
    esp += 4; return; /* ret */

}

/**
 * sub_005674C3
 * Original: 0x005674C3 - 0x005674C9 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005674C3(void)
{

loc_005674C3: ;
    eax = 0x9168D4;
    esp += 4; return; /* ret */

}

/**
 * sub_005674E0
 * Original: 0x005674E0 - 0x00567532 (82 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005674E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005674E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0056750B; /* jne: not equal / not zero */

loc_005674EC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005674F8u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_005674F8: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567503u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00567503: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056750Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0056750B: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567518u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00567518: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567523u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00567523: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056752Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0056752B: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00567580
 * Original: 0x00567580 - 0x0056759F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00567580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00567580: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0056759A; /* je: equal / zero */

loc_00567587: ;
    ecx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 4));
    eax = ecx + eax + 4;
    goto loc_0056759C;

loc_0056759A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056759C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005675CA
 * Original: 0x005675CA - 0x005675E3 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_005675CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005675CA: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005675E0; /* je: equal / zero */

loc_005675D1: ;
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_005675E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00567737
 * Original: 0x00567737 - 0x0056774D (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567737(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00567737: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00567746u); RECOMP_ABI_CALL(0x005720B5u, sub_005720B5); /* call 0x005720B5 */

loc_00567746: ;
    eax = MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00567774
 * Original: 0x00567774 - 0x00567822 (174 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00567774(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00567774: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567786u); RECOMP_ABI_CALL(0x0056BC9Eu, sub_0056BC9E); /* call 0x0056BC9E */

loc_00567786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00567818; /* jbe: below or equal (unsigned <=) */

loc_0056778E: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567799u); RECOMP_ABI_CALL(0x0056BCA2u, sub_0056BCA2); /* call 0x0056BCA2 */

loc_00567799: ;
    esi = MEM32(ebp + 0xC);
    edi = eax;
    eax = MEM32(edi + 8);

loc_005677A1: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005677C3; /* jne: not equal / not zero */

loc_005677A9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005677BF; /* je: equal / zero */

loc_005677AD: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005677C3; /* jne: not equal / not zero */

loc_005677B7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005677A1; /* jne: not equal / not zero */

loc_005677BF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005677C8;

loc_005677C3: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005677C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00567804; /* jne: not equal / not zero */

loc_005677CC: ;
    ecx = edi + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005677D4u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_005677D4: ;
    esi = MEM32(ebp + 0x10);
    eax = MEM32(eax);

loc_005677D9: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005677FB; /* jne: not equal / not zero */

loc_005677E1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005677F7; /* je: equal / zero */

loc_005677E5: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005677FB; /* jne: not equal / not zero */

loc_005677EF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005677D9; /* jne: not equal / not zero */

loc_005677F7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00567800;

loc_005677FB: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00567800: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0056781E; /* je: equal / zero */

loc_00567804: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056780Fu); RECOMP_ABI_CALL(0x0056BC9Eu, sub_0056BC9E); /* call 0x0056BC9E */

loc_0056780F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0056778E; /* jb: below (unsigned <) */

loc_00567818: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0056781A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0056781E: ;
    eax = edi;
    goto loc_0056781A;

}

/**
 * sub_00567822
 * Original: 0x00567822 - 0x005678D0 (174 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00567822(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00567822: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567834u); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_00567834: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_005678C6; /* jbe: below or equal (unsigned <=) */

loc_0056783C: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567847u); RECOMP_ABI_CALL(0x0056BCF6u, sub_0056BCF6); /* call 0x0056BCF6 */

loc_00567847: ;
    edi = eax;
    ecx = MEM32(edi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567851u); RECOMP_ABI_CALL(0x00571D3Au, sub_00571D3A); /* call 0x00571D3A */

loc_00567851: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(eax);

loc_00567856: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00567878; /* jne: not equal / not zero */

loc_0056785E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00567874; /* je: equal / zero */

loc_00567862: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00567878; /* jne: not equal / not zero */

loc_0056786C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00567856; /* jne: not equal / not zero */

loc_00567874: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0056787D;

loc_00567878: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0056787D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_005678B2; /* jne: not equal / not zero */

loc_00567881: ;
    esi = MEM32(ebp + 0x10);
    eax = MEM32(edi + 0x14);

loc_00567887: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005678A9; /* jne: not equal / not zero */

loc_0056788F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005678A5; /* je: equal / zero */

loc_00567893: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_005678A9; /* jne: not equal / not zero */

loc_0056789D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00567887; /* jne: not equal / not zero */

loc_005678A5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_005678AE;

loc_005678A9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_005678AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_005678CC; /* je: equal / zero */

loc_005678B2: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005678BDu); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_005678BD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0056783C; /* jb: below (unsigned <) */

loc_005678C6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_005678C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_005678CC: ;
    eax = edi;
    goto loc_005678C8;

}

/**
 * sub_005678D0
 * Original: 0x005678D0 - 0x0056798E (190 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_005678D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_005678D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005678E7u); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_005678E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00567982; /* jbe: below or equal (unsigned <=) */

loc_005678EF: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005678FAu); RECOMP_ABI_CALL(0x0056BCF6u, sub_0056BCF6); /* call 0x0056BCF6 */

loc_005678FA: ;
    edi = eax;
    ecx = MEM32(edi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567904u); RECOMP_ABI_CALL(0x00571D3Au, sub_00571D3A); /* call 0x00571D3A */

loc_00567904: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(eax);

loc_00567909: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056792B; /* jne: not equal / not zero */

loc_00567911: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00567927; /* je: equal / zero */

loc_00567915: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056792B; /* jne: not equal / not zero */

loc_0056791F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00567909; /* jne: not equal / not zero */

loc_00567927: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00567930;

loc_0056792B: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00567930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00567965; /* jne: not equal / not zero */

loc_00567934: ;
    esi = MEM32(ebp + 0x10);
    eax = MEM32(edi + 0x14);

loc_0056793A: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056795C; /* jne: not equal / not zero */

loc_00567942: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00567958; /* je: equal / zero */

loc_00567946: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056795C; /* jne: not equal / not zero */

loc_00567950: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0056793A; /* jne: not equal / not zero */

loc_00567958: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00567961;

loc_0056795C: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00567961: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00567989; /* je: equal / zero */

loc_00567965: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0056796E; /* jne: not equal / not zero */

loc_0056796B: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0056796E: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00567979u); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_00567979: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_005678EF; /* jb: below (unsigned <) */

loc_00567982: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00567985: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00567989: ;
    eax = MEM32(ebp + -8);
    goto loc_00567985;

}

/**
 * sub_0056798E
 * Original: 0x0056798E - 0x005679BB (45 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0056798E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0056798E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0056799Bu); RECOMP_ABI_CALL(0x0055B564u, sub_0055B564); /* call 0x0055B564 */

loc_0056799B: ;
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), LO8(eax) (8-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_005679AC; /* je: equal / zero */

loc_005679A8: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_005679AC: ;
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x005679B4u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_005679B4: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005679BB
 * Original: 0x005679BB - 0x005679D6 (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005679BB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005679BB: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_005679D1; /* je: equal / zero */

loc_005679C6: ;
    MEM32(ecx + 0x10) = edx;
    MEM32(eax) = 1;
    goto loc_005679D3;

loc_005679D1: ;
    MEM32(eax) = edx;

loc_005679D3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_005679D6
 * Original: 0x005679D6 - 0x00567A0D (55 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005679D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_005679D6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x005679E8u); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_005679E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00567A07; /* jbe: below or equal (unsigned <=) */

loc_005679EC: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x005679F4u); RECOMP_ABI_CALL(0x0056BCF6u, sub_0056BCF6); /* call 0x0056BCF6 */

loc_005679F4: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_005679FB; /* jne: not equal / not zero */

loc_005679FA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_005679FB: ;
    ecx = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00567A03u); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_00567A03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_005679EC; /* jb: below (unsigned <) */

loc_00567A07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00567A0D
 * Original: 0x00567A0D - 0x00567A27 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567A0D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00567A0D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x10);
    _fb = (uint32_t)(0x9168E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x9168E0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    eax = 0xCBCBCBCBu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00567A27
 * Original: 0x00567A27 - 0x00567A40 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567A27(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00567A27: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00567A2Eu); RECOMP_ABI_CALL(0x00567A0Du, sub_00567A0D); /* call 0x00567A0D */

loc_00567A2E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00567A35u); RECOMP_ABI_CALL(0x00567A0Du, sub_00567A0D); /* call 0x00567A0D */

loc_00567A35: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00567A3Cu); RECOMP_ABI_CALL(0x00567A0Du, sub_00567A0D); /* call 0x00567A0D */

loc_00567A3C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00567A51
 * Original: 0x00567A51 - 0x00567A74 (35 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00567A51(void)
{

loc_00567A51: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = ecx;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    edi = eax + 0x50;
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
    MEM8(eax + 0x78) = 1;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
