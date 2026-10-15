/**
 * nhl_07_recomp - Recompiled code chunk 110
 * Functions: 250 (0x0012EF00 - 0x001339E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0012EF00
 * Original: 0x0012EF00 - 0x0012EF34 (52 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EF00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EF10; /* jne: not equal / not zero */

loc_0012EF0B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012EF10: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EF2A; /* jne: not equal / not zero */

loc_0012EF17: ;
    SET_LO8(edx, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x21 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EF24; /* je: equal / zero */

loc_0012EF1F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EF32; /* jne: not equal / not zero */

loc_0012EF24: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EF2A; /* jne: not equal / not zero */

loc_0012EF29: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012EF2A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EF10; /* jne: not equal / not zero */

loc_0012EF32: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012EF50
 * Original: 0x0012EF50 - 0x0012F08B (315 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012EF50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F087; /* je: equal / zero */

loc_0012EF5F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F087; /* je: equal / zero */

loc_0012EF68: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F082; /* je: equal / zero */

loc_0012EF75: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F082; /* je: equal / zero */

loc_0012EF7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0012EF80: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EF9D; /* je: equal / zero */

loc_0012EF87: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EF96; /* je: equal / zero */

loc_0012EF8B: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EF87; /* jne: not equal / not zero */

loc_0012EF94: ;
    goto loc_0012EF9D;

loc_0012EF96: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EFBA; /* jne: not equal / not zero */

loc_0012EF9D: ;
    SET_LO8(edx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x3F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x3F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F010; /* je: equal / zero */

loc_0012EFA5: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EFBA; /* jne: not equal / not zero */

loc_0012EFAC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x21 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F010; /* je: equal / zero */

loc_0012EFB1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F07B; /* je: equal / zero */

loc_0012EFBA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFBF; /* je: equal / zero */

loc_0012EFBE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012EFBF: ;
    SET_LO8(ecx, MEM8(eax));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFE4; /* je: equal / zero */

loc_0012EFC7: ;
    esi = ebx;
    ecx = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0012EFD0: ;
    SET_LO8(edx, MEM8(esi + ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFE4; /* je: equal / zero */

loc_0012EFD7: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EFE4; /* jne: not equal / not zero */

loc_0012EFDB: ;
    SET_LO8(edx, MEM8(ecx + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EFD0; /* jne: not equal / not zero */

loc_0012EFE4: ;
    SET_LO8(ecx, MEM8(edi + eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F07B; /* je: equal / zero */

loc_0012EFEF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012EFFE; /* jbe: below or equal (unsigned <=) */

loc_0012EFF4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFFE; /* je: equal / zero */

loc_0012EFF9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F00F; /* jne: not equal / not zero */

loc_0012EFFE: ;
    SET_LO8(edx, MEM8(edi + ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F028; /* je: equal / zero */

loc_0012F005: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F00F; /* jne: not equal / not zero */

loc_0012F00A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F032; /* jne: not equal / not zero */

loc_0012F00F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012F010: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012F016u); RECOMP_ABI_CALL(0x0002B40Au, sub_0002B40A); /* call 0x0002B40A */

loc_0012F016: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EF80; /* jne: not equal / not zero */

loc_0012F021: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F028: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ebp = eax + -1;
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F032: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F045; /* je: equal / zero */

loc_0012F038: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F045; /* je: equal / zero */

loc_0012F03D: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F038; /* jne: not equal / not zero */

loc_0012F045: ;
    SET_LO8(edx, MEM8(edi + ebx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    ecx = edi + ebx + 1;
    if (CMP_NE(_fa, _fb)) goto loc_0012F069; /* jne: not equal / not zero */

loc_0012F051: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F060; /* je: equal / zero */

loc_0012F056: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ebp = eax + 1;
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F060: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F069: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F07B; /* je: equal / zero */

loc_0012F06E: ;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012F076u); RECOMP_ABI_CALL(0x000288EFu, sub_000288EF); /* call 0x000288EF */

loc_0012F076: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;

loc_0012F07B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F082: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F087: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F0E0
 * Original: 0x0012F0E0 - 0x0012F181 (161 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012F0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F0E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F0FC; /* je: equal / zero */

loc_0012F0ED: ;
    /* nop */

loc_0012F0F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F0FC; /* je: equal / zero */

loc_0012F0F4: ;
    SET_LO8(eax, MEM8(ebp + 1));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F0F0; /* jne: not equal / not zero */

loc_0012F0FC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012F102u); RECOMP_ABI_CALL(0x0002B40Au, sub_0002B40A); /* call 0x0002B40A */

loc_0012F102: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F17C; /* je: equal / zero */

loc_0012F10B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    /* nop */

loc_0012F110: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F123; /* je: equal / zero */

loc_0012F116: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F123; /* je: equal / zero */

loc_0012F11B: ;
    SET_LO8(ecx, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F116; /* jne: not equal / not zero */

loc_0012F123: ;
    SET_LO8(ecx, MEM8(esi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012F150; /* jbe: below or equal (unsigned <=) */

loc_0012F12C: ;
    edi = esi;
    edx = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012F132: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F150; /* je: equal / zero */

loc_0012F137: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012F150; /* jbe: below or equal (unsigned <=) */

loc_0012F13D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F150; /* je: equal / zero */

loc_0012F141: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F150; /* jne: not equal / not zero */

loc_0012F145: ;
    SET_LO8(ecx, MEM8(edi + edx + 1));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F132; /* ja: above (unsigned >) */

loc_0012F150: ;
    SET_LO8(eax, MEM8(ebx + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012F15B; /* jbe: below or equal (unsigned <=) */

loc_0012F157: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F166; /* jne: not equal / not zero */

loc_0012F15B: ;
    SET_LO8(eax, MEM8(ebx + ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012F175; /* jbe: below or equal (unsigned <=) */

loc_0012F162: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F175; /* je: equal / zero */

loc_0012F166: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F16Cu); RECOMP_ABI_CALL(0x0002B40Au, sub_0002B40A); /* call 0x0002B40A */

loc_0012F16C: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F110; /* jne: not equal / not zero */

loc_0012F175: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F17C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F1B0
 * Original: 0x0012F1B0 - 0x0012F1E9 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012F1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F1B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, 0x21);

loc_0012F1B6: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1CA; /* je: equal / zero */

loc_0012F1BE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1CA; /* je: equal / zero */

loc_0012F1C3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F1B6; /* jne: not equal / not zero */

loc_0012F1C8: ;
    goto loc_0012F1CF;

loc_0012F1CA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F1D4; /* jne: not equal / not zero */

loc_0012F1CF: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1B6; /* je: equal / zero */

loc_0012F1D4: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1E6; /* je: equal / zero */

loc_0012F1DB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F1E8; /* jne: not equal / not zero */

loc_0012F1E0: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F1E8; /* jne: not equal / not zero */

loc_0012F1E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012F1E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F200
 * Original: 0x0012F200 - 0x0012F257 (87 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F200: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F20F; /* je: equal / zero */

loc_0012F209: ;
    eax = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0012F20F: ;
    SET_LO8(eax, MEM8(ecx + 1));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F24D; /* je: equal / zero */

loc_0012F224: ;
    PUSH32(esp, esi);
    esi = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0012F230: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F24C; /* je: equal / zero */

loc_0012F234: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F24C; /* je: equal / zero */

loc_0012F238: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F24C; /* je: equal / zero */

loc_0012F23C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F24C; /* jge: greater or equal (signed >=) */

loc_0012F240: ;
    MEM8(esi + ecx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F230; /* jne: not equal / not zero */

loc_0012F24C: ;
    POP32(esp, esi);

loc_0012F24D: ;
    POP32(esp, edi);
    MEM8(edx + ebx) = 0;
    eax = edx + 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F270
 * Original: 0x0012F270 - 0x0012F2AF (63 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F270: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F2A5; /* je: equal / zero */

loc_0012F287: ;
    PUSH32(esp, esi);
    esi = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0012F290: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F2A4; /* je: equal / zero */

loc_0012F294: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F2A4; /* jge: greater or equal (signed >=) */

loc_0012F298: ;
    MEM8(esi + ecx) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F290; /* jne: not equal / not zero */

loc_0012F2A4: ;
    POP32(esp, esi);

loc_0012F2A5: ;
    POP32(esp, edi);
    MEM8(edx + ebx) = 0;
    eax = edx + 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F2C0
 * Original: 0x0012F2C0 - 0x0012F310 (80 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F2C0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x0012F2CEu); RECOMP_ABI_CALL(0x0012ECB0u, sub_0012ECB0); /* call 0x0012ECB0 */

loc_0012F2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F2D7; /* jne: not equal / not zero */

loc_0012F2D2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012F2D7: ;
    edi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax));
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F306; /* je: equal / zero */

loc_0012F2E9: ;
    PUSH32(esp, esi);
    esi = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_0012F2F0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F305; /* je: equal / zero */

loc_0012F2F5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F305; /* jge: greater or equal (signed >=) */

loc_0012F2F9: ;
    MEM8(esi + eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F2F0; /* jne: not equal / not zero */

loc_0012F305: ;
    POP32(esp, esi);

loc_0012F306: ;
    MEM8(edx + ebx) = 0;
    POP32(esp, ebx);
    eax = edx + 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F330
 * Original: 0x0012F330 - 0x0012F3D1 (161 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F330: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x0012F33Eu); RECOMP_ABI_CALL(0x0012ECB0u, sub_0012ECB0); /* call 0x0012ECB0 */

loc_0012F33E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F364; /* je: equal / zero */

loc_0012F342: ;
    SET_LO8(edx, MEM8(eax));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F35E; /* je: equal / zero */

loc_0012F34A: ;
    /* nop */

loc_0012F350: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x3D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F35E; /* je: equal / zero */

loc_0012F355: ;
    SET_LO8(edx, MEM8(ecx + eax + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F350; /* jne: not equal / not zero */

loc_0012F35E: ;
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0x3D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0x3D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F369; /* je: equal / zero */

loc_0012F364: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012F369: ;
    SET_LO8(edx, MEM8(ecx + eax + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F369; /* je: equal / zero */

loc_0012F373: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F369; /* je: equal / zero */

loc_0012F378: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x22 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F389; /* je: equal / zero */

loc_0012F380: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x27 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F389; /* je: equal / zero */

loc_0012F385: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0012F38C;

loc_0012F389: ;
    SET_LO8(ebx, LO8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F38C: ;
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F3C6; /* je: equal / zero */

loc_0012F39F: ;
    /* nop */

loc_0012F3A0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F3C6; /* je: equal / zero */

loc_0012F3A4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F3C6; /* je: equal / zero */

loc_0012F3A9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F3C6; /* jge: greater or equal (signed >=) */

loc_0012F3AD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x26) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x26 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F3BB; /* jne: not equal / not zero */

loc_0012F3B2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0012F3B8u); RECOMP_ABI_CALL(0x0012E9D0u, sub_0012E9D0); /* call 0x0012E9D0 */

loc_0012F3B8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012F3BF;

loc_0012F3BB: ;
    MEM8(esi) = LO8(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F3BF: ;
    SET_LO8(ecx, MEM8(eax));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F3A0; /* jne: not equal / not zero */

loc_0012F3C6: ;
    MEM8(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = edi + 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F400
 * Original: 0x0012F400 - 0x0012F4C1 (193 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012F400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F400: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F4BB; /* je: equal / zero */

loc_0012F40E: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F4BB; /* jl: less (signed <) */

loc_0012F41B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012F425u); RECOMP_ABI_CALL(0x0012EAF0u, sub_0012EAF0); /* call 0x0012EAF0 */

loc_0012F425: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F487; /* je: equal / zero */

loc_0012F429: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F43D; /* je: equal / zero */

loc_0012F42F: ;
    /* nop */

loc_0012F430: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F43D; /* ja: above (unsigned >) */

loc_0012F435: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F430; /* jne: not equal / not zero */

loc_0012F43D: ;
    edi = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F47D; /* jle: less or equal (signed <=) */

loc_0012F446: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F468; /* je: equal / zero */

loc_0012F44C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F468; /* je: equal / zero */

loc_0012F451: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x26) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x26 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F45F; /* jne: not equal / not zero */

loc_0012F456: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0012F45Cu); RECOMP_ABI_CALL(0x0012E9D0u, sub_0012E9D0); /* call 0x0012E9D0 */

loc_0012F45C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012F463;

loc_0012F45F: ;
    MEM8(esi) = LO8(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F463: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F446; /* jl: less (signed <) */

loc_0012F468: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F47D; /* jle: less or equal (signed <=) */

loc_0012F46D: ;
    /* nop */

loc_0012F470: ;
    _fa = (uint32_t)(MEM8(esi + -1)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -1), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F47D; /* ja: above (unsigned >) */

loc_0012F476: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F470; /* jg: greater (signed >) */

loc_0012F47D: ;
    eax = edi + -1;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F487: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F4B2; /* je: equal / zero */

loc_0012F48F: ;
    edi = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F4A8; /* jle: less or equal (signed <=) */

loc_0012F498: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F4A8; /* je: equal / zero */

loc_0012F49E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + -1) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F498; /* jl: less (signed <) */

loc_0012F4A8: ;
    eax = edi + -1;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F4B2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + -1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F4BB: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F500
 * Original: 0x0012F500 - 0x0012F58B (139 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F500: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F531; /* je: equal / zero */

loc_0012F50E: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F531; /* jne: not equal / not zero */

loc_0012F513: ;
    SET_LO8(eax, 0x3C);

loc_0012F515: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F523; /* je: equal / zero */

loc_0012F519: ;
    SET_LO8(eax, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F515; /* jne: not equal / not zero */

loc_0012F521: ;
    goto loc_0012F533;

loc_0012F523: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F533; /* je: equal / zero */

loc_0012F528: ;
    _fa = (uint32_t)(MEM8(edx + -1)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + -1), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F531; /* je: equal / zero */

loc_0012F52E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012F533;

loc_0012F531: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012F533: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F53D; /* jne: not equal / not zero */

loc_0012F537: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012F53D: ;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F54F; /* je: equal / zero */

loc_0012F543: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F54F; /* ja: above (unsigned >) */

loc_0012F547: ;
    SET_LO8(eax, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F543; /* jne: not equal / not zero */

loc_0012F54F: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x2B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F55A; /* jne: not equal / not zero */

loc_0012F554: ;
    esi = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F55A: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F563; /* jne: not equal / not zero */

loc_0012F55F: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F563: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012F586; /* jb: below (unsigned <) */

loc_0012F56E: ;
    edi = edi;

loc_0012F570: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F586; /* ja: above (unsigned >) */

loc_0012F575: ;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + eax * 2;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012F570; /* jae: above or equal (unsigned >=) */

loc_0012F586: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F5B0
 * Original: 0x0012F5B0 - 0x0012F6F5 (325 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F5B0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5DF; /* je: equal / zero */

loc_0012F5BB: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F5DF; /* jne: not equal / not zero */

loc_0012F5C0: ;
    SET_LO8(ecx, 0x3C);

loc_0012F5C2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5D1; /* je: equal / zero */

loc_0012F5C7: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F5C2; /* jne: not equal / not zero */

loc_0012F5CF: ;
    goto loc_0012F5E1;

loc_0012F5D1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5E1; /* je: equal / zero */

loc_0012F5D6: ;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5DF; /* je: equal / zero */

loc_0012F5DC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012F5E1;

loc_0012F5DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012F5E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F6ED; /* je: equal / zero */

loc_0012F5E9: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F5FD; /* je: equal / zero */

loc_0012F5EF: ;
    /* nop */

loc_0012F5F0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F5FD; /* ja: above (unsigned >) */

loc_0012F5F5: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F5F0; /* jne: not equal / not zero */

loc_0012F5FD: ;
    PUSH32(esp, esi);
    esi = esp + 0x18;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0012F61Fu); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012F61F: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F62B; /* je: equal / zero */

loc_0012F626: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F62C; /* jne: not equal / not zero */

loc_0012F62B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F62C: ;
    esi = esp + 0x14;
    PUSH32(esp, 0x0012F635u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012F635: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F641; /* je: equal / zero */

loc_0012F63C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F642; /* jne: not equal / not zero */

loc_0012F641: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F642: ;
    esi = esp + 0x10;
    PUSH32(esp, 0x0012F64Bu); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012F64B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F651; /* jne: not equal / not zero */

loc_0012F650: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F651: ;
    esi = esp + 0xC;
    PUSH32(esp, 0x0012F65Au); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012F65A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F660; /* jne: not equal / not zero */

loc_0012F65F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F660: ;
    esi = esp + 8;
    PUSH32(esp, 0x0012F669u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012F669: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F66F; /* jne: not equal / not zero */

loc_0012F66E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F66F: ;
    esi = esp + 4;
    PUSH32(esp, 0x0012F678u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012F678: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7B2 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0012F6ED; /* jl: less (signed <) */

loc_0012F685: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x833) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x833 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F6ED; /* jg: greater (signed >) */

loc_0012F68D: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F6ED; /* jl: less (signed <) */

loc_0012F696: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F6ED; /* jg: greater (signed >) */

loc_0012F69B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F6ED; /* jl: less (signed <) */

loc_0012F6A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F6ED; /* jg: greater (signed >) */

loc_0012F6A9: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F6ED; /* jl: less (signed <) */

loc_0012F6B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F6ED; /* jg: greater (signed >) */

loc_0012F6B6: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F6ED; /* jl: less (signed <) */

loc_0012F6BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F6ED; /* jg: greater (signed >) */

loc_0012F6C3: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F6ED; /* jl: less (signed <) */

loc_0012F6CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012F6ED; /* jg: greater (signed >) */

loc_0012F6CF: ;
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x76C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp + 4;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0012F6E8u); RECOMP_ABI_CALL(0x0012E930u, sub_0012E930); /* call 0x0012E930 */

loc_0012F6E8: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012F6ED: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012F750
 * Original: 0x0012F750 - 0x0012F811 (193 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F750: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F77C; /* je: equal / zero */

loc_0012F758: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x3C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F77C; /* jne: not equal / not zero */

loc_0012F75D: ;
    SET_LO8(eax, 0x3C);
    /* nop */

loc_0012F760: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F76E; /* je: equal / zero */

loc_0012F764: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F760; /* jne: not equal / not zero */

loc_0012F76C: ;
    goto loc_0012F77E;

loc_0012F76E: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F77E; /* je: equal / zero */

loc_0012F773: ;
    _fa = (uint32_t)(MEM8(ecx + -1)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + -1), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F77C; /* je: equal / zero */

loc_0012F779: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012F77E;

loc_0012F77C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012F77E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F785; /* jne: not equal / not zero */

loc_0012F782: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0012F785: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F79C; /* je: equal / zero */

loc_0012F78B: ;
    goto loc_0012F790;

    /* nop */

loc_0012F790: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F79C; /* ja: above (unsigned >) */

loc_0012F794: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F790; /* jne: not equal / not zero */

loc_0012F79C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F7C4; /* jne: not equal / not zero */

loc_0012F7A5: ;
    SET_LO8(edx, MEM8(ecx));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012F80F; /* jb: below (unsigned <) */

loc_0012F7AE: ;
    edi = edi;

loc_0012F7B0: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012F80F; /* jb: below (unsigned <) */

loc_0012F7B6: ;
    SET_LO8(edx, MEM8(ecx + 2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x30 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012F7B0; /* jae: above or equal (unsigned >=) */

loc_0012F7C2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012F7C4: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F7D3; /* jge: greater or equal (signed >=) */

loc_0012F7CD: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012F7D3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F80E; /* jle: less or equal (signed <=) */

loc_0012F7D9: ;
    PUSH32(esp, ebx);
    /* nop */

loc_0012F7E0: ;
    SET_LO8(ebx, MEM8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012F80D; /* jb: below (unsigned <) */

loc_0012F7E7: ;
    SET_LO8(edx, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012F80D; /* jb: below (unsigned <) */

loc_0012F7EF: ;
    edx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(edx + 0x7DC8C8));
    ebx = ZX8(LO8(ebx));
    SET_LO8(edx, LO8(edx) | MEM8(ebx + 0x7DC7C8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + -1) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F7E0; /* jl: less (signed <) */

loc_0012F80D: ;
    POP32(esp, ebx);

loc_0012F80E: ;
    POP32(esp, edi);

loc_0012F80F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F850
 * Original: 0x0012F850 - 0x0012F91B (203 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012F850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F850: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F915; /* je: equal / zero */

loc_0012F85E: ;
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F915; /* jl: less (signed <) */

loc_0012F86B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012F879u); RECOMP_ABI_CALL(0x0012EB30u, sub_0012EB30); /* call 0x0012EB30 */

loc_0012F879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F8E1; /* je: equal / zero */

loc_0012F87D: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F890; /* je: equal / zero */

loc_0012F883: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F890; /* ja: above (unsigned >) */

loc_0012F888: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F883; /* jne: not equal / not zero */

loc_0012F890: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x22 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F8A1; /* je: equal / zero */

loc_0012F898: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x27 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F8A1; /* je: equal / zero */

loc_0012F89D: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0012F8A4;

loc_0012F8A1: ;
    SET_LO8(ebx, LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F8A4: ;
    edi = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F8D6; /* jle: less or equal (signed <=) */

loc_0012F8AD: ;
    /* nop */

loc_0012F8B0: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F8D6; /* je: equal / zero */

loc_0012F8B6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F8D6; /* je: equal / zero */

loc_0012F8BA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F8D6; /* je: equal / zero */

loc_0012F8BF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x26) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x26 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F8CD; /* jne: not equal / not zero */

loc_0012F8C4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0012F8CAu); RECOMP_ABI_CALL(0x0012E9D0u, sub_0012E9D0); /* call 0x0012E9D0 */

loc_0012F8CA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012F8D1;

loc_0012F8CD: ;
    MEM8(esi) = LO8(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F8D1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F8B0; /* jl: less (signed <) */

loc_0012F8D6: ;
    POP32(esp, ebx);
    eax = edi + -1;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F8E1: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F90C; /* je: equal / zero */

loc_0012F8E9: ;
    edi = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F902; /* jle: less or equal (signed <=) */

loc_0012F8F2: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F902; /* je: equal / zero */

loc_0012F8F8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + -1) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F8F2; /* jl: less (signed <) */

loc_0012F902: ;
    eax = edi + -1;
    POP32(esp, edi);
    MEM8(esi) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F90C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + -1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0012F915: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F950
 * Original: 0x0012F950 - 0x0012FA37 (231 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F950: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 1;
    PUSH32(esp, 0x0012F963u); RECOMP_ABI_CALL(0x0012EB30u, sub_0012EB30); /* call 0x0012EB30 */

loc_0012F963: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F96D; /* jne: not equal / not zero */

loc_0012F967: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012F96D: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F980; /* je: equal / zero */

loc_0012F973: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F980; /* ja: above (unsigned >) */

loc_0012F978: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F973; /* jne: not equal / not zero */

loc_0012F980: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x22 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F98C; /* je: equal / zero */

loc_0012F987: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x27 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F98D; /* jne: not equal / not zero */

loc_0012F98C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F98D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F998; /* jne: not equal / not zero */

loc_0012F992: ;
    esi = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F998: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F9A1; /* jne: not equal / not zero */

loc_0012F99D: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012F9A1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012F9C6; /* jb: below (unsigned <) */

loc_0012F9AC: ;
    /* nop */

loc_0012F9B0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F9C6; /* ja: above (unsigned >) */

loc_0012F9B5: ;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx + edx * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + edx * 2;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012F9B0; /* jae: above or equal (unsigned >=) */

loc_0012F9C6: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x74 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F9FA; /* jne: not equal / not zero */

loc_0012F9D0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ebx, LO8(ebx) | 0x20);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x72) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x72 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F9F9; /* jne: not equal / not zero */

loc_0012F9DC: ;
    SET_LO8(ebx, MEM8(eax + 2));
    SET_LO8(ebx, LO8(ebx) | 0x20);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x75 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F9F9; /* jne: not equal / not zero */

loc_0012F9E7: ;
    SET_LO8(ebx, MEM8(eax + 3));
    SET_LO8(ebx, LO8(ebx) | 0x20);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x65 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F9F9; /* jne: not equal / not zero */

loc_0012F9F2: ;
    esi = 1;
    edx = esi;

loc_0012F9F9: ;
    POP32(esp, ebx);

loc_0012F9FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x66 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FA30; /* jne: not equal / not zero */

loc_0012F9FF: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FA30; /* jne: not equal / not zero */

loc_0012FA0A: ;
    SET_LO8(ecx, MEM8(eax + 2));
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x6C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x6C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FA30; /* jne: not equal / not zero */

loc_0012FA15: ;
    SET_LO8(ecx, MEM8(eax + 3));
    SET_LO8(ecx, LO8(ecx) | 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x73 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FA30; /* jne: not equal / not zero */

loc_0012FA20: ;
    SET_LO8(eax, MEM8(eax + 4));
    SET_LO8(eax, LO8(eax) | 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x65 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FA30; /* jne: not equal / not zero */

loc_0012FA29: ;
    esi = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012FA30: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FA70
 * Original: 0x0012FA70 - 0x0012FBA2 (306 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FA70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0012FA80u); RECOMP_ABI_CALL(0x0012EB30u, sub_0012EB30); /* call 0x0012EB30 */

loc_0012FA80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FB9A; /* je: equal / zero */

loc_0012FA88: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FA9D; /* je: equal / zero */

loc_0012FA8E: ;
    edi = edi;

loc_0012FA90: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012FA9D; /* ja: above (unsigned >) */

loc_0012FA95: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FA90; /* jne: not equal / not zero */

loc_0012FA9D: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x22 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FAA9; /* je: equal / zero */

loc_0012FAA4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x27 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FAAA; /* jne: not equal / not zero */

loc_0012FAA9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012FAAA: ;
    PUSH32(esp, esi);
    esi = esp + 0x18;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0012FACCu); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012FACC: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FAD8; /* je: equal / zero */

loc_0012FAD3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FAD9; /* jne: not equal / not zero */

loc_0012FAD8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012FAD9: ;
    esi = esp + 0x14;
    PUSH32(esp, 0x0012FAE2u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012FAE2: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FAEE; /* je: equal / zero */

loc_0012FAE9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FAEF; /* jne: not equal / not zero */

loc_0012FAEE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012FAEF: ;
    esi = esp + 0x10;
    PUSH32(esp, 0x0012FAF8u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012FAF8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FAFE; /* jne: not equal / not zero */

loc_0012FAFD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012FAFE: ;
    esi = esp + 0xC;
    PUSH32(esp, 0x0012FB07u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012FB07: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FB0D; /* jne: not equal / not zero */

loc_0012FB0C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012FB0D: ;
    esi = esp + 8;
    PUSH32(esp, 0x0012FB16u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012FB16: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FB1C; /* jne: not equal / not zero */

loc_0012FB1B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012FB1C: ;
    esi = esp + 4;
    PUSH32(esp, 0x0012FB25u); RECOMP_ABI_CALL(0x0012E740u, sub_0012E740); /* call 0x0012E740 */

loc_0012FB25: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7B2 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0012FB9A; /* jl: less (signed <) */

loc_0012FB32: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x833) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x833 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012FB9A; /* jg: greater (signed >) */

loc_0012FB3A: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012FB9A; /* jl: less (signed <) */

loc_0012FB43: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012FB9A; /* jg: greater (signed >) */

loc_0012FB48: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012FB9A; /* jl: less (signed <) */

loc_0012FB51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012FB9A; /* jg: greater (signed >) */

loc_0012FB56: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012FB9A; /* jl: less (signed <) */

loc_0012FB5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012FB9A; /* jg: greater (signed >) */

loc_0012FB63: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012FB9A; /* jl: less (signed <) */

loc_0012FB6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012FB9A; /* jg: greater (signed >) */

loc_0012FB70: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012FB9A; /* jl: less (signed <) */

loc_0012FB77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012FB9A; /* jg: greater (signed >) */

loc_0012FB7C: ;
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x76C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp + 4;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0012FB95u); RECOMP_ABI_CALL(0x0012E930u, sub_0012E930); /* call 0x0012E930 */

loc_0012FB95: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012FB9A: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012FBF0
 * Original: 0x0012FBF0 - 0x0012FC6E (126 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FBF0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0012FC05u); RECOMP_ABI_CALL(0x0012E780u, sub_0012E780); /* call 0x0012E780 */

loc_0012FC05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC67; /* je: equal / zero */

loc_0012FC0C: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC1A; /* je: equal / zero */

loc_0012FC14: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;

loc_0012FC1A: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC28; /* je: equal / zero */

loc_0012FC22: ;
    edx = MEM32(esp + 0x14);
    MEM32(eax) = edx;

loc_0012FC28: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC36; /* je: equal / zero */

loc_0012FC30: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;

loc_0012FC36: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC44; /* je: equal / zero */

loc_0012FC3E: ;
    edx = MEM32(esp + 0xC);
    MEM32(eax) = edx;

loc_0012FC44: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC52; /* je: equal / zero */

loc_0012FC4C: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;

loc_0012FC52: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FC60; /* je: equal / zero */

loc_0012FC5A: ;
    edx = MEM32(esp + 4);
    MEM32(eax) = edx;

loc_0012FC60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012FC67: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012FC90
 * Original: 0x0012FC90 - 0x0012FCA1 (17 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FC90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 4));
    SET_LO8(ecx, MEM8(esp + 8));
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012FCB0
 * Original: 0x0012FCB0 - 0x0012FCCC (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FCB0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xB) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO16(eax, LO16(eax) ^ MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(ecx) = MEM16(ecx) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FCE0
 * Original: 0x0012FCE0 - 0x0012FCE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FCE0(void)
{

loc_0012FCE0: ;
    eax = ecx + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FCF0
 * Original: 0x0012FCF0 - 0x0012FD13 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FCF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FCF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x119);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012FD05u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_0012FD05: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x0012FD0Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012FD09u); } /* indirect call */
    }

loc_0012FD0F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012FD20
 * Original: 0x0012FD20 - 0x0012FD24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD20(void)
{

loc_0012FD20: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FD30
 * Original: 0x0012FD30 - 0x0012FD3E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD30(void)
{

loc_0012FD30: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(eax + 0x230);
    eax = ZX8(MEM8(ecx + 0xD));
    esp += 4; return; /* ret */

}

/**
 * sub_0012FD50
 * Original: 0x0012FD50 - 0x0012FD53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD50(void)
{

loc_0012FD50: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FD60
 * Original: 0x0012FD60 - 0x0012FD64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD60(void)
{

loc_0012FD60: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FD70
 * Original: 0x0012FD70 - 0x0012FD74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD70(void)
{

loc_0012FD70: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FD80
 * Original: 0x0012FD80 - 0x0012FD83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FD80: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0012FD90
 * Original: 0x0012FD90 - 0x0012FD94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FD90: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0012FDA0
 * Original: 0x0012FDA0 - 0x0012FDA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FDA0(void)
{

loc_0012FDA0: ;
    SET_LO8(eax, MEM8(ecx + 0x98));
    esp += 4; return; /* ret */

}

/**
 * sub_0012FDB0
 * Original: 0x0012FDB0 - 0x0012FDBC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FDB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FDC0
 * Original: 0x0012FDC0 - 0x0012FDFE (62 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FDC0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x90) = 5;
    MEM32(eax) = 5;
    MEM32(eax + 0xB0) = 2;
    MEM32(eax + 0x94) = ecx;
    MEM8(eax + 0x98) = LO8(ecx);
    MEM8(eax + 0x99) = LO8(ecx);
    MEM8(eax + 0xAC) = LO8(ecx);
    MEM8(eax + 0xAD) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FE10
 * Original: 0x0012FE10 - 0x0012FE11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FE10(void)
{

loc_0012FE10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FE20
 * Original: 0x0012FE20 - 0x0012FE8E (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FE20: ;
    eax = MEM32(0x8F0650);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FE8A; /* jne: not equal / not zero */

loc_0012FE2C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x0012FE37u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0012FE37: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FE80; /* je: equal / zero */

loc_0012FE3E: ;
    MEM32(eax + 0x94) = ebx;
    MEM8(eax + 0x98) = LO8(ebx);
    MEM8(eax + 0x99) = LO8(ebx);
    MEM8(eax + 0xAC) = LO8(ebx);
    MEM32(eax + 0x90) = 5;
    MEM32(eax) = 5;
    MEM32(eax + 0xB0) = 2;
    MEM8(eax + 0xAD) = 1;
    MEM32(0x8F0650) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012FE80: ;
    MEM32(0x8F0650) = ebx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012FE8A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FEB0
 * Original: 0x0012FEB0 - 0x0012FEC9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FEB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0012FEC3; /* je: equal / zero */

loc_0012FEBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012FEC0u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0012FEC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012FEC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FED0
 * Original: 0x0012FED0 - 0x0012FF2B (91 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012FED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(0x896160) = 0;
    MEM16(0x896162) = 0;
    PUSH32(esp, 0x0012FEEAu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0012FEEA: ;
    ecx = eax;
    PUSH32(esp, 0x0012FEF1u); RECOMP_ABI_CALL(0x0002BC02u, sub_0002BC02); /* call 0x0002BC02 */

loc_0012FEF1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x119);
    PUSH32(esp, 0);
    MEM16(0x896166) = 2;
    PUSH32(esp, 0);
    MEM8(esi + 0x98) = 1;
    PUSH32(esp, 0x0012FF13u); RECOMP_ABI_CALL(0x005BE562u, sub_005BE562); /* call 0x005BE562 */

loc_0012FF13: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x91EB78); PUSH32(esp, 0x0012FF1Du); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0012FF17u); } /* indirect call */
    }

loc_0012FF1D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8B2228;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002768E(); return; /* tail jmp 0x0002768E */

}

/**
 * sub_0012FF50
 * Original: 0x0012FF50 - 0x0012FF72 (34 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FF50(void)
{

loc_0012FF50: ;
    PUSH32(esp, 0x0012FF55u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0012FF55: ;
    ecx = eax;
    PUSH32(esp, 0x0012FF5Cu); RECOMP_ABI_CALL(0x0002BC02u, sub_0002BC02); /* call 0x0002BC02 */

loc_0012FF5C: ;
    SET_LO16(eax, MEM16(0x8AEAD4));
    MEM16(0x896160) = LO16(eax);
    MEM16(0x896162) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FF80
 * Original: 0x0012FF80 - 0x0012FFC8 (72 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FF80: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FF90; /* je: equal / zero */

loc_0012FF8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FFC5; /* jne: not equal / not zero */

loc_0012FF90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FFB2; /* jne: not equal / not zero */

loc_0012FF9B: ;
    eax = MEM32(ecx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FFB2; /* jne: not equal / not zero */

loc_0012FFA5: ;
    MEM32(ecx + 0xA4) = 1;
    esp += 8; return; /* ret 4 */

loc_0012FFB2: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FFC5; /* jne: not equal / not zero */

loc_0012FFBB: ;
    MEM32(ecx + 0xA4) = 3;

loc_0012FFC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FFA1
 * Original: 0x0012FFA1 - 0x0012FFC8 (39 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FFA1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FFA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FFB2; /* jne: not equal / not zero */

loc_0012FFA5: ;
    MEM32(ecx + 0xA4) = 1;
    esp += 8; return; /* ret 4 */

loc_0012FFB2: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FFC5; /* jne: not equal / not zero */

loc_0012FFBB: ;
    MEM32(ecx + 0xA4) = 3;

loc_0012FFC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FFA3
 * Original: 0x0012FFA3 - 0x0012FFC8 (37 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FFA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FFA3: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0012FFB2;

loc_0012FFA5: ;
    MEM32(ecx + 0xA4) = 1;
    esp += 8; return; /* ret 4 */

loc_0012FFB2: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012FFC5; /* jne: not equal / not zero */

loc_0012FFBB: ;
    MEM32(ecx + 0xA4) = 3;

loc_0012FFC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FFA5
 * Original: 0x0012FFA5 - 0x0012FFC8 (35 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FFA5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FFA5: ;
    MEM32(ecx + 0xA4) = 1;
    esp += 8; return; /* ret 4 */

    MEM32(ecx + 0xA4) = 3;

loc_0012FFC5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FFE0
 * Original: 0x0012FFE0 - 0x0012FFF5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FFE0(void)
{

loc_0012FFE0: ;
    eax = 0x1E;
    MEM32(ecx + 0x94) = eax;
    ecx = MEM32(0x8E8F84);
    MEM32(ecx + 0x2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00130000
 * Original: 0x00130000 - 0x00130025 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130000: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130010; /* je: equal / zero */

loc_0013000B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013001F; /* jne: not equal / not zero */

loc_00130010: ;
    eax = MEM32(ecx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130022; /* je: equal / zero */

loc_0013001B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130022; /* je: equal / zero */

loc_0013001F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00130022: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00130030
 * Original: 0x00130030 - 0x00130053 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130030: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    if (CMP_NE(_fa, _fb)) goto loc_00130046; /* jne: not equal / not zero */

loc_00130040: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00130046: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013004E; /* jne: not equal / not zero */

loc_0013004A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0013004E: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00130060
 * Original: 0x00130060 - 0x0013009B (59 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130060: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    if (CMP_NE(_fa, _fb)) goto loc_00130076; /* jne: not equal / not zero */

loc_00130070: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00130076: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013007E; /* jne: not equal / not zero */

loc_0013007A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0013007E: ;
    eax = MEM32(eax + 4);
    edx = MEM32(eax + 0x230);
    ecx = MEM32(ecx + 4);
    eax = ZX8(MEM8(edx + 0xD));
    edx = MEM32(ecx + 0x230);
    ecx = ZX8(MEM8(edx + 0xD));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_001300B0
 * Original: 0x001300B0 - 0x001300B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300B0(void)
{

loc_001300B0: ;
    eax = ecx;
    MEM32(eax) = 0x7DCF24;
    esp += 4; return; /* ret */

}

/**
 * sub_001300C0
 * Original: 0x001300C0 - 0x001300C3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300C0(void)
{

loc_001300C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001300D0
 * Original: 0x001300D0 - 0x001300DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300D0(void)
{

loc_001300D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DCF34;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001300E0
 * Original: 0x001300E0 - 0x00130109 (41 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001300E0: ;
    eax = MEM32(0x8F0650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001300FB; /* je: equal / zero */

loc_001300E9: ;
    SET_LO8(ecx, MEM8(eax + 0x98));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001300FE; /* jne: not equal / not zero */

loc_001300FB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001300FE: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00130120
 * Original: 0x00130120 - 0x00130129 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130120(void)
{

loc_00130120: ;
    eax = ecx;
    MEM32(eax) = 0x7DCF48;
    esp += 4; return; /* ret */

}

/**
 * sub_00130130
 * Original: 0x00130130 - 0x00130133 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130130(void)
{

loc_00130130: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130140
 * Original: 0x00130140 - 0x0013014D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130140(void)
{

loc_00130140: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DCF58;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130150
 * Original: 0x00130150 - 0x00130179 (41 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130150: ;
    eax = MEM32(0x8F0650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013016B; /* je: equal / zero */

loc_00130159: ;
    ecx = MEM32(eax + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_G(_fas, _fbs)) goto loc_0013016E; /* jg: greater (signed >) */

loc_0013016B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0013016E: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00130190
 * Original: 0x00130190 - 0x00130199 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130190(void)
{

loc_00130190: ;
    eax = ecx;
    MEM32(eax) = 0x7DCF70;
    esp += 4; return; /* ret */

}

/**
 * sub_001301A0
 * Original: 0x001301A0 - 0x001301A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001301A0(void)
{

loc_001301A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001301B0
 * Original: 0x001301B0 - 0x001301BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001301B0(void)
{

loc_001301B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DCF80;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001301C0
 * Original: 0x001301C0 - 0x001301C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001301C0(void)
{

loc_001301C0: ;
    eax = ecx;
    MEM32(eax) = 0x7DCF9C;
    esp += 4; return; /* ret */

}

/**
 * sub_001301D0
 * Original: 0x001301D0 - 0x001301D3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001301D0(void)
{

loc_001301D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001301E0
 * Original: 0x001301E0 - 0x001301ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001301E0(void)
{

loc_001301E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DCFAC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001301F0
 * Original: 0x001301F0 - 0x001301F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001301F0(void)
{

loc_001301F0: ;
    eax = ecx;
    MEM32(eax) = 0x7DCFC8;
    esp += 4; return; /* ret */

}

/**
 * sub_00130200
 * Original: 0x00130200 - 0x00130203 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130200(void)
{

loc_00130200: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130210
 * Original: 0x00130210 - 0x0013021D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130210(void)
{

loc_00130210: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DCFD8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130220
 * Original: 0x00130220 - 0x00130254 (52 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130220: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130241; /* jne: not equal / not zero */

loc_0013022A: ;
    eax = MEM32(0x8F0650);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130241; /* je: equal / zero */

loc_00130236: ;
    SET_LO8(ecx, MEM8(ecx + 0x39));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0x39) (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00130249; /* je: equal / zero */

loc_00130241: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00130249: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00130270
 * Original: 0x00130270 - 0x00130279 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130270(void)
{

loc_00130270: ;
    eax = ecx;
    MEM32(eax) = 0x7DCFFC;
    esp += 4; return; /* ret */

}

/**
 * sub_00130280
 * Original: 0x00130280 - 0x00130283 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130280(void)
{

loc_00130280: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130290
 * Original: 0x00130290 - 0x0013029D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130290(void)
{

loc_00130290: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD00C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001302A0
 * Original: 0x001302A0 - 0x001302F1 (81 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001302A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001302A0: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001302E3; /* jge: greater or equal (signed >=) */

loc_001302AF: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x001302BAu); RECOMP_ABI_CALL(0x0002863Du, sub_0002863D); /* call 0x0002863D */

loc_001302BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001302E3; /* jne: not equal / not zero */

loc_001302BE: ;
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001302D0; /* je: equal / zero */

loc_001302CA: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001302E3; /* je: equal / zero */

loc_001302D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

loc_001302E3: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00130310
 * Original: 0x00130310 - 0x00130319 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130310(void)
{

loc_00130310: ;
    eax = ecx;
    MEM32(eax) = 0x7DD01C;
    esp += 4; return; /* ret */

}

/**
 * sub_00130320
 * Original: 0x00130320 - 0x00130323 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130320(void)
{

loc_00130320: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130330
 * Original: 0x00130330 - 0x0013033D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130330(void)
{

loc_00130330: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD02C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130340
 * Original: 0x00130340 - 0x00130349 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130340(void)
{

loc_00130340: ;
    eax = ecx;
    MEM32(eax) = 0x7DD05C;
    esp += 4; return; /* ret */

}

/**
 * sub_00130350
 * Original: 0x00130350 - 0x00130353 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130350: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00130360
 * Original: 0x00130360 - 0x0013036D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130360(void)
{

loc_00130360: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD06C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130370
 * Original: 0x00130370 - 0x00130379 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130370(void)
{

loc_00130370: ;
    eax = ecx;
    MEM32(eax) = 0x7DD07C;
    esp += 4; return; /* ret */

}

/**
 * sub_00130380
 * Original: 0x00130380 - 0x00130383 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130380: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00130390
 * Original: 0x00130390 - 0x0013039D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130390(void)
{

loc_00130390: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD08C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001303A0
 * Original: 0x001303A0 - 0x00130500 (352 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001303A0(void)
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

loc_001303A0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001303BB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_001303B9: ;
    goto loc_001303C3;

loc_001303BB: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */

loc_001303C3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7BA43C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00130401; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7BA43C)) */

loc_001303CC: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001303DF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0x30)) */

loc_001303D2: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8E9324); /* subss */
    goto loc_001303E7;

loc_001303DF: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9324)); /* movss */

loc_001303E7: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x38); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001303F7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0x38)) */

loc_001303ED: ;
    xmm1 = XMM_SCALAR(MEMF(0x7ABD70)); /* movss */
    goto loc_00130432;

loc_001303F7: ;
    xmm1 = XMM_SCALAR(MEMF(0x7DCAC0)); /* movss */
    goto loc_00130432;

loc_00130401: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x30); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00130414; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0x30)) */

loc_00130407: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8E9324); /* subss */
    goto loc_0013041C;

loc_00130414: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9324)); /* movss */

loc_0013041C: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x38); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7BA2E4)); /* movss */
    if ((_fca > _fcb)) goto loc_00130432; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(eax + 0x38)) */

loc_0013042A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA2E8)); /* movss */

loc_00130432: ;
    eax = MEM32(edi + 0x20);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    PUSH32(esp, 0x48C);
    PUSH32(esp, 0x7DD0A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013046Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0013046F: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B04A0); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    PUSH32(esp, 0x48D);
    PUSH32(esp, 0x7DD0A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001304AEu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001304AE: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B04A0); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    esi = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001304EAu); RECOMP_ABI_CALL(0x000367E7u, sub_000367E7); /* call 0x000367E7 */

loc_001304EA: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x001304F5u); RECOMP_ABI_CALL(0x000127BBu, sub_000127BB); /* call 0x000127BB */

loc_001304F5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00130560
 * Original: 0x00130560 - 0x0013056C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130560: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130570
 * Original: 0x00130570 - 0x0013057C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130570: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130580
 * Original: 0x00130580 - 0x0013058A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130580(void)
{

loc_00130580: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130590
 * Original: 0x00130590 - 0x0013059A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130590(void)
{

loc_00130590: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001305A0
 * Original: 0x001305A0 - 0x001305BD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001305A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001305A0: ;
    eax = MEM32(0x8F0650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001305BC; /* je: equal / zero */

loc_001305A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001305AFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001305AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F0650) = 0;

loc_001305BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001305D0
 * Original: 0x001305D0 - 0x00130647 (119 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001305D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001305D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130638; /* jle: less or equal (signed <=) */

loc_001305DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x9C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00130600; /* jle: less or equal (signed <=) */

loc_001305EF: ;
    edx = edi;
    ecx = esi + 0x10;

loc_001305F4: ;
    MEM32(esp + eax * 4 + 8) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001305F4; /* jl: less (signed <) */

loc_00130600: ;
    PUSH32(esp, 0x130030);
    PUSH32(esp, 4);
    eax = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00130612u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_00130612: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130628; /* jne: not equal / not zero */

loc_00130623: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013062C; /* jg: greater (signed >) */

loc_00130628: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130641; /* jle: less or equal (signed <=) */

loc_0013062C: ;
    POP32(esp, edi);
    MEM32(esi + 0x9C) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00130638: ;
    edx = esi + 0x10;
    MEM32(esi + 0x9C) = edx;

loc_00130641: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00130670
 * Original: 0x00130670 - 0x001306F2 (130 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130670: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001306E3; /* jle: less or equal (signed <=) */

loc_0013067F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0xA0) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0013069C; /* jle: less or equal (signed <=) */

loc_0013068B: ;
    edx = edi;
    ecx = esi + 0x10;

loc_00130690: ;
    MEM32(esp + eax * 4 + 8) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130690; /* jl: less (signed <) */

loc_0013069C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x130060);
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001306AFu); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_001306AF: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x230);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 4);
    edx = MEM32(edx + 0x230);
    SET_LO8(ebx, MEM8(ecx + 0xD));
    SET_LO8(edx, MEM8(edx + 0xD));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_001306EC; /* jbe: below or equal (unsigned <=) */

loc_001306D7: ;
    POP32(esp, edi);
    MEM32(esi + 0xA0) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001306E3: ;
    eax = esi + 0x10;
    MEM32(esi + 0xA0) = eax;

loc_001306EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00130720
 * Original: 0x00130720 - 0x0013072E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130720(void)
{

loc_00130720: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x80);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130740
 * Original: 0x00130740 - 0x0013074E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130740(void)
{

loc_00130740: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = MEM32(eax + ecx + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130760
 * Original: 0x00130760 - 0x00130B09 (937 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130760: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130B04; /* jne: not equal / not zero */

loc_00130774: ;
    eax = MEM32(edi + 4);
    MEM8(edi + 0xAC) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x438) = ebp;
    MEM16(eax + 0x444) = LO16(ebp);
    eax = MEM32(edi + 4);
    eax = MEM32(eax + 0x54);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edi + 4);
    MEM32(ecx + 0x42C) = ebp;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001307ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001307A8u); } /* indirect call */
    }

loc_001307AB: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001307B7u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_001307B7: ;
    PUSH32(esp, 0x23E);
    PUSH32(esp, 0x7DD0A8);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x001307C8u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001307C8: ;
    PUSH32(esp, 0x23F);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    PUSH32(esp, 0x7DD0A8);
    PUSH32(esp, 0xA);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x001307EEu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001307EE: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013080A; /* jge: greater or equal (signed >=) */

loc_001307F6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_0013080A: ;
    eax = MEM32(edi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130885; /* je: equal / zero */

loc_00130815: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130885; /* je: equal / zero */

loc_0013081A: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x88)); /* movss */
    PUSH32(esp, 0x257);
    PUSH32(esp, 0x7DD0A8);
    PUSH32(esp, 5);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00130839u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_00130839: ;
    PUSH32(esp, 0x258);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    PUSH32(esp, 0x7DD0A8);
    PUSH32(esp, 0xA);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013085Fu); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_0013085F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130875; /* jge: greater or equal (signed >=) */

loc_0013086D: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AACB4); /* mulss */

loc_00130875: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AF57C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    goto loc_001308DB;

loc_00130885: ;
    PUSH32(esp, 0x0013088Au); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0013088A: ;
    ecx = eax;
    PUSH32(esp, 0x00130891u); RECOMP_ABI_CALL(0x0002BC02u, sub_0002BC02); /* call 0x0002BC02 */

loc_00130891: ;
    SET_LO16(eax, MEM16(0x8AEAD4));
    PUSH32(esp, 0x24C);
    PUSH32(esp, 0x7DD0A8);
    PUSH32(esp, 0x64);
    MEM16(0x896160) = LO16(eax);
    MEM16(0x896162) = LO16(ebp);
    PUSH32(esp, 0x001308B5u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_001308B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001308C7; /* jl: less (signed <) */

loc_001308BD: ;
    SET_LO8(eax, MEM8(edi + 0x99));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001308D0; /* jne: not equal / not zero */

loc_001308C7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_001308D0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x7DD0D0)); /* movss */

loc_001308DB: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = MEM32(0x8E8F84);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AA7E0)); /* movss */
    ecx = esp + 0x14;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x00130912u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00130912: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00130921u); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_00130921: ;
    MEM8(edi + 0x99) = 1;
    ecx = MEM32(0x8E8F84);
    MEM32(ecx + 0x2C) = ebp;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013093Eu); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_0013093E: ;
    edx = MEM32(0x8E8F84);
    MEM8(edx + 0x38) = 0;
    MEM32(edi + 0xA4) = ebp;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0013095Bu); RECOMP_ABI_CALL(0x00022FDFu, sub_00022FDF); /* call 0x00022FDF */

loc_0013095B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00130961u); RECOMP_ABI_CALL(0x0001F39Eu, sub_0001F39E); /* call 0x0001F39E */

loc_00130961: ;
    eax = MEM32(edi + 0x8C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130978; /* je: equal / zero */

loc_0013096F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130B03; /* jne: not equal / not zero */

loc_00130978: ;
    SET_LO8(eax, MEM8(edi + 0xAD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013098B; /* je: equal / zero */

loc_00130982: ;
    MEM8(edi + 0xAD) = 0;
    goto loc_001309A7;

loc_0013098B: ;
    edx = MEM32(edi + 0xA8);
    ecx = MEM32(edi + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 0xA8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001309A7; /* jne: not equal / not zero */

loc_001309A1: ;
    MEM32(edi + 0xA8) = ebp;

loc_001309A7: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebp (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x88)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7AEBF0); /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00130AC4; /* jle: less or equal (signed <=) */

loc_001309C6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 0x14;
    goto loc_001309D3;

loc_001309CD: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_001309D3: ;
    esi = MEM32(ebx);
    eax = ebp;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001309E3; /* jns: not sign (positive) */

loc_001309DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001309E3: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    eax = eax + eax * 4;
    ecx = eax * 4 + -10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebp + -2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    ecx = esp + 0x1C;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x00130A3Cu); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00130A3C: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00130A5Au); RECOMP_ABI_CALL(0x0001349Au, sub_0001349A); /* call 0x0001349A */

loc_00130A5A: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x00130A78u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00130A78: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00130A82u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00130A82: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00130A88u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_00130A88: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x248) = 0;
    PUSH32(esp, 0x00130A9Fu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_00130A9F: ;
    esi = MEM32(esi + 0x3D8);
    MEM32(esi + 8) = 2;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    eax = MEM32(edi + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001309CD; /* jl: less (signed <) */

loc_00130AC2: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00130AC4: ;
    edx = MEM32(edi + 0xA8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = edx + edi + 0x10;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0xA8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    edx = MEM32(ecx + edi + 0x14);
    ecx = MEM32(edx + 0x20);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00130B03u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00130B03: ;
    POP32(esp, ebp);

loc_00130B04: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00130C00
 * Original: 0x00130C00 - 0x00130C36 (54 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130C00: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130C15; /* je: equal / zero */

loc_00130C0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130C15; /* je: equal / zero */

loc_00130C10: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00130C15: ;
    eax = MEM32(ecx + 0xA8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130C50
 * Original: 0x00130C50 - 0x00130CBC (108 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130C63; /* je: equal / zero */

loc_00130C5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130CB8; /* jne: not equal / not zero */

loc_00130C63: ;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130CB8; /* jne: not equal / not zero */

loc_00130C6C: ;
    PUSH32(esp, 0x00130C71u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00130C71: ;
    ecx = eax;
    PUSH32(esp, 0x00130C78u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_00130C78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130CB8; /* je: equal / zero */

loc_00130C7C: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130C9A; /* je: equal / zero */

loc_00130C84: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130CB8; /* jne: not equal / not zero */

loc_00130C8B: ;
    ecx = MEM32(esi + 0xA8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fa = (uint32_t)(MEM32(ecx + esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130CB8; /* jne: not equal / not zero */

loc_00130C9A: ;
    eax = 0x1E;
    MEM32(esi + 0xA4) = 2;
    MEM32(esi + 0x94) = eax;
    edx = MEM32(0x8E8F84);
    MEM32(edx + 0x2C) = eax;

loc_00130CB8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130CE0
 * Original: 0x00130CE0 - 0x00130D41 (97 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00130CE0: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130CF0; /* je: equal / zero */

loc_00130CEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130D40; /* jne: not equal / not zero */

loc_00130CF0: ;
    eax = MEM32(ecx + 0xA8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = MEM32(eax + ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130D40; /* je: equal / zero */

loc_00130D01: ;
    edx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7DCAB8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00130D40; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7DCAB8)) */

loc_00130D12: ;
    eax = MEM32(ecx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130D40; /* je: equal / zero */

loc_00130D1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130D40; /* je: equal / zero */

loc_00130D22: ;
    eax = 0x1E;
    MEM32(ecx + 0xA4) = 3;
    MEM32(ecx + 0x94) = eax;
    ecx = MEM32(0x8E8F84);
    MEM32(ecx + 0x2C) = eax;

loc_00130D40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00130D60
 * Original: 0x00130D60 - 0x00130E0D (173 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130E07; /* je: equal / zero */

loc_00130D71: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130DB1; /* jl: less (signed <) */

loc_00130D77: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130DB1; /* jne: not equal / not zero */

loc_00130D80: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130DA1; /* jle: less or equal (signed <=) */

loc_00130D89: ;
    ebx = esi + -1;
    esi = ecx + 0x10;
    /* nop */

loc_00130D90: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130D99; /* jl: less (signed <) */

loc_00130D94: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130DA1; /* jne: not equal / not zero */

loc_00130D99: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130D90; /* jl: less (signed <) */

loc_00130DA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130E01; /* je: equal / zero */

loc_00130DA5: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = MEM32(edx + ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130E01; /* je: equal / zero */

loc_00130DB1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130E07; /* je: equal / zero */

loc_00130DB5: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xB0) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130E07; /* jl: less (signed <) */

loc_00130DC0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8C), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130E07; /* jne: not equal / not zero */

loc_00130DC9: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130DF1; /* jle: less or equal (signed <=) */

loc_00130DD2: ;
    esi = MEM32(edi);
    ebx = esi + -1;
    esi = ecx + 0x10;
    /* nop */

loc_00130DE0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130DE9; /* jl: less (signed <) */

loc_00130DE4: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130DF1; /* jne: not equal / not zero */

loc_00130DE9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130DE0; /* jl: less (signed <) */

loc_00130DF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130E01; /* je: equal / zero */

loc_00130DF5: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = MEM32(edx + ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130E07; /* jne: not equal / not zero */

loc_00130E01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00130E07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130E40
 * Original: 0x00130E40 - 0x00130E86 (70 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130E40: ;
    eax = MEM32(ecx + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130E50; /* je: equal / zero */

loc_00130E4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130E81; /* jne: not equal / not zero */

loc_00130E50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130E81; /* jne: not equal / not zero */

loc_00130E5B: ;
    edx = MEM32(ecx + 0xA8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + ecx + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130E79; /* jne: not equal / not zero */

loc_00130E6A: ;
    SET_LO8(eax, MEM8(ecx + 0x99));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130E79; /* je: equal / zero */

loc_00130E74: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00130E79: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00130E81: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130EA0
 * Original: 0x00130EA0 - 0x00130F0B (107 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130EA0(void)
{

loc_00130EA0: ;
    eax = MEM32(esp + 8);
    SET_LO8(edx, MEM8(eax + 0x39));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ebx + ebx * 2;
    SET_LO8(ecx, MEM8(esi * 8 + 0x8E94ED));
    esi = esi * 8 + 0x8E94EC;
    MEM8(eax + 0x1DC) = LO8(ecx);
    MEM8(esi + 2) = LO8(edx);
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, 0x00130ECFu); RECOMP_ABI_CALL(0x000352A7u, sub_000352A7); /* call 0x000352A7 */

loc_00130ECF: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    ecx = MEM32(0x8F9CCC);
    MEM8(esi + 3) = LO8(eax);
    PUSH32(esp, 0x00130EE1u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00130EE1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00130EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130EE5u); } /* indirect call */
    }

loc_00130EE8: ;
    esi = eax;
    edx = MEM32(esi);
    eax = ZX8(LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00130EF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130EF5u); } /* indirect call */
    }

loc_00130EF7: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00130F06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00130F03u); } /* indirect call */
    }

loc_00130F06: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00130F30
 * Original: 0x00130F30 - 0x00130F78 (72 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130F30: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130F74; /* jle: less or equal (signed <=) */

loc_00130F3A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = ecx + 0x14;

loc_00130F42: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00130F5C; /* je: equal / zero */

loc_00130F46: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130F5C; /* jne: not equal / not zero */

loc_00130F4E: ;
    eax = MEM32(edx);
    eax = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = MEM8(eax + 1) | 8;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00130F68;

loc_00130F5C: ;
    eax = MEM32(edx);
    eax = MEM32(eax + 0x3C);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = MEM8(eax + 1) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00130F68: ;
    eax = MEM32(ecx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130F42; /* jl: less (signed <) */

loc_00130F73: ;
    POP32(esp, edi);

loc_00130F74: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130F90
 * Original: 0x00130F90 - 0x00130F9E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130F90(void)
{

loc_00130F90: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = MEM32(eax + ecx + 0x18);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130FB0
 * Original: 0x00130FB0 - 0x00130FC2 (18 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130FB0(void)
{

loc_00130FB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + ecx + 0x18) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00130FD0
 * Original: 0x00130FD0 - 0x00130FE2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130FD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + ecx) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00130FF0
 * Original: 0x00130FF0 - 0x00131002 (18 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130FF0(void)
{

loc_00130FF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + ecx + 0x20) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00131010
 * Original: 0x00131010 - 0x00131019 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131010(void)
{

loc_00131010: ;
    eax = ecx;
    MEM32(eax) = 0x7DD0D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00131020
 * Original: 0x00131020 - 0x00131023 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131020(void)
{

loc_00131020: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131030
 * Original: 0x00131030 - 0x0013103D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131030(void)
{

loc_00131030: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD0E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131040
 * Original: 0x00131040 - 0x00131063 (35 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131040: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131050; /* je: equal / zero */

loc_00131049: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_00131058; /* jne: not equal / not zero */

loc_00131050: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_00131058: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00131070
 * Original: 0x00131070 - 0x00131079 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131070(void)
{

loc_00131070: ;
    eax = ecx;
    MEM32(eax) = 0x7DD0F8;
    esp += 4; return; /* ret */

}

/**
 * sub_00131080
 * Original: 0x00131080 - 0x00131083 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131080(void)
{

loc_00131080: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131090
 * Original: 0x00131090 - 0x0013109D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131090(void)
{

loc_00131090: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD0E4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001310A0
 * Original: 0x001310A0 - 0x001310C3 (35 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001310A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001310A0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001310B0; /* je: equal / zero */

loc_001310A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_001310B8; /* jne: not equal / not zero */

loc_001310B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */

loc_001310B8: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001310D0
 * Original: 0x001310D0 - 0x001310EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001310D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001310D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001310D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001310D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001310E7; /* je: equal / zero */

loc_001310E0: ;
    MEM32(eax) = 0x7DCF24;
    esp += 4; return; /* ret */

loc_001310E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001310F0
 * Original: 0x001310F0 - 0x0013110A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001310F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001310F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001310F9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001310F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131107; /* je: equal / zero */

loc_00131100: ;
    MEM32(eax) = 0x7DCF48;
    esp += 4; return; /* ret */

loc_00131107: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131110
 * Original: 0x00131110 - 0x00131119 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131110(void)
{

loc_00131110: ;
    eax = ecx;
    MEM32(eax) = 0x7DD108;
    esp += 4; return; /* ret */

}

/**
 * sub_00131120
 * Original: 0x00131120 - 0x00131123 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131120(void)
{

loc_00131120: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131130
 * Original: 0x00131130 - 0x0013113D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131130(void)
{

loc_00131130: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD118;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131140
 * Original: 0x00131140 - 0x001311EE (174 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131140: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_NE(_fa, _fb)) goto loc_001311E3; /* jne: not equal / not zero */

loc_00131152: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x8F0650);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001311B8; /* jl: less (signed <) */

loc_0013116D: ;
    SET_LO8(edx, MEM8(eax + 0x39));
    eax = esi + -4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx + 0x30;
    edi = eax * 4;
    PUSH32(esp, ebp);

loc_00131182: ;
    ebp = MEM32(ecx + -28);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 0x39) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013118D; /* jne: not equal / not zero */

loc_0013118A: ;
    xmm0 = xmm1; /* movaps */

loc_0013118D: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 0x39) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131197; /* jne: not equal / not zero */

loc_00131194: ;
    xmm0 = xmm1; /* movaps */

loc_00131197: ;
    ebp = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 0x39) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001311A2; /* jne: not equal / not zero */

loc_0013119F: ;
    xmm0 = xmm1; /* movaps */

loc_001311A2: ;
    ebp = MEM32(ecx + 0x38);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebp + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ebp + 0x39) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001311AD; /* jne: not equal / not zero */

loc_001311AA: ;
    xmm0 = xmm1; /* movaps */

loc_001311AD: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00131182; /* jne: not equal / not zero */

loc_001311B3: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);

loc_001311B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001311E0; /* jge: greater or equal (signed >=) */

loc_001311BC: ;
    SET_LO8(ecx, MEM8(eax + 0x39));
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + ebx + 0x14;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001311D0: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x39)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx + 0x39) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001311DA; /* jne: not equal / not zero */

loc_001311D7: ;
    xmm0 = xmm1; /* movaps */

loc_001311DA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001311D0; /* jne: not equal / not zero */

loc_001311E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001311E3: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00131220
 * Original: 0x00131220 - 0x0013123A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00131220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131220: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00131229u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00131229: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131237; /* je: equal / zero */

loc_00131230: ;
    MEM32(eax) = 0x7DCF70;
    esp += 4; return; /* ret */

loc_00131237: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131240
 * Original: 0x00131240 - 0x00131269 (41 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131240: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013124Cu); RECOMP_ABI_CALL(0x00131280u, sub_00131280); /* call 0x00131280 */

loc_0013124C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013125E; /* jne: not equal / not zero */

loc_0013125B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0013125E: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00131280
 * Original: 0x00131280 - 0x001312A5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131280: ;
    eax = MEM32(0x8F0650);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001312A2; /* jle: less or equal (signed <=) */

loc_0013128E: ;
    eax = MEM32(eax + ecx * 4 + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001312A2; /* je: equal / zero */

loc_00131299: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001312A2; /* jne: not equal / not zero */

loc_0013129F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001312A2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001312B0
 * Original: 0x001312B0 - 0x001312CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001312B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001312B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001312B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001312B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001312C7; /* je: equal / zero */

loc_001312C0: ;
    MEM32(eax) = 0x7DCF9C;
    esp += 4; return; /* ret */

loc_001312C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001312D0
 * Original: 0x001312D0 - 0x00131301 (49 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001312D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001312D0: ;
    eax = MEM32(0x8F0650);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001312F3; /* jle: less or equal (signed <=) */

loc_001312DB: ;
    eax = MEM32(eax + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001312F3; /* je: equal / zero */

loc_001312E5: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001312F6; /* je: equal / zero */

loc_001312F3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001312F6: ;
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00131310
 * Original: 0x00131310 - 0x0013132A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00131310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131310: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00131319u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00131319: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131327; /* je: equal / zero */

loc_00131320: ;
    MEM32(eax) = 0x7DCFC8;
    esp += 4; return; /* ret */

loc_00131327: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131330
 * Original: 0x00131330 - 0x0013134A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00131330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131330: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00131339u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00131339: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131347; /* je: equal / zero */

loc_00131340: ;
    MEM32(eax) = 0x7DCFFC;
    esp += 4; return; /* ret */

loc_00131347: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131350
 * Original: 0x00131350 - 0x0013136A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00131350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131350: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00131359u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00131359: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131367; /* je: equal / zero */

loc_00131360: ;
    MEM32(eax) = 0x7DD01C;
    esp += 4; return; /* ret */

loc_00131367: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131370
 * Original: 0x00131370 - 0x001313C0 (80 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131370(void)
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

loc_00131370: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x8F0650);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001313B0; /* jle: less or equal (signed <=) */

loc_0013137E: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00131389u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131386u); } /* indirect call */
    }

loc_00131389: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x84);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00131398u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131395u); } /* indirect call */
    }

loc_00131398: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B04A0)); /* fadd dword ptr [0x7b04a0] */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_001313B3; /* ja: above (unsigned >) */

loc_001313B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_001313B3: ;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001313E0
 * Original: 0x001313E0 - 0x001313E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001313E0(void)
{

loc_001313E0: ;
    eax = ecx;
    MEM32(eax) = 0x7DD130;
    esp += 4; return; /* ret */

}

/**
 * sub_001313F0
 * Original: 0x001313F0 - 0x001313F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001313F0(void)
{

loc_001313F0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00131400
 * Original: 0x00131400 - 0x0013140D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131400(void)
{

loc_00131400: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD140;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131410
 * Original: 0x00131410 - 0x0013141E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131410(void)
{

loc_00131410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013141Au); RECOMP_ABI_CALL(0x00131430u, sub_00131430); /* call 0x00131430 */

loc_0013141A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131430
 * Original: 0x00131430 - 0x001314A2 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00131430: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x3C);
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0);
    MEM8(esi + 0x38) = LO8(eax);
    MEM8(esi + 0x3A) = LO8(eax);
    PUSH32(esp, 0x0013144Au); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_0013144A: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0x34) = 0;
    eax = MEM32(0x8F0650);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x88)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00131476; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013146E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00131476: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DD154); /* mulss */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013149Du); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0013149D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001314C0
 * Original: 0x001314C0 - 0x001314C9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001314C0(void)
{

loc_001314C0: ;
    eax = ecx;
    MEM32(eax) = 0x7DD158;
    esp += 4; return; /* ret */

}

/**
 * sub_001314D0
 * Original: 0x001314D0 - 0x001314D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001314D0(void)
{

loc_001314D0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001314E0
 * Original: 0x001314E0 - 0x001314ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001314E0(void)
{

loc_001314E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD168;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001314F0
 * Original: 0x001314F0 - 0x001314FE (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001314F0(void)
{

loc_001314F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001314FAu); RECOMP_ABI_CALL(0x00131430u, sub_00131430); /* call 0x00131430 */

loc_001314FA: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131510
 * Original: 0x00131510 - 0x00131519 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131510(void)
{

loc_00131510: ;
    eax = ecx;
    MEM32(eax) = 0x7DD17C;
    esp += 4; return; /* ret */

}

/**
 * sub_00131520
 * Original: 0x00131520 - 0x00131523 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131520: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131530
 * Original: 0x00131530 - 0x0013153D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131530(void)
{

loc_00131530: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0x7DD18C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131540
 * Original: 0x00131540 - 0x001315D1 (145 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131540: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8F0650);
    MEM32(esi + 0x94) = MEM32(esi + 0x94) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00131559; /* jns: not sign (positive) */

loc_0013154F: ;
    MEM32(esi + 0x94) = 0;

loc_00131559: ;
    _fa = (uint32_t)(MEM32(esi + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x94), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013157F; /* jne: not equal / not zero */

loc_00131562: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013157F; /* je: equal / zero */

loc_0013156D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013157F; /* je: equal / zero */

loc_00131572: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013157Fu); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_0013157F: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001315CD; /* jne: not equal / not zero */

loc_00131589: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001315A4; /* je: equal / zero */

loc_00131594: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001315A4; /* je: equal / zero */

loc_00131599: ;
    ecx = esi;
    PUSH32(esp, 0x001315A0u); RECOMP_ABI_CALL(0x00027639u, sub_00027639); /* call 0x00027639 */

loc_001315A0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001315A4: ;
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001315B2u); RECOMP_ABI_CALL(0x000359AAu, sub_000359AA); /* call 0x000359AA */

loc_001315B2: ;
    PUSH32(esp, 0x001315B7u); RECOMP_ABI_CALL(0x000265D6u, sub_000265D6); /* call 0x000265D6 */

loc_001315B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001315C4; /* je: equal / zero */

loc_001315BB: ;
    PUSH32(esp, 0x001315C0u); RECOMP_ABI_CALL(0x0003441Au, sub_0003441A); /* call 0x0003441A */

loc_001315C0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001315C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001315CAu); RECOMP_ABI_CALL(0x00032025u, sub_00032025); /* call 0x00032025 */

loc_001315CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001315CD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131600
 * Original: 0x00131600 - 0x0013161A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00131600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131600: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00131609u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00131609: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131617; /* je: equal / zero */

loc_00131610: ;
    MEM32(eax) = 0x7DD05C;
    esp += 4; return; /* ret */

loc_00131617: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131620
 * Original: 0x00131620 - 0x001316A5 (133 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00131620: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x8F0650);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00131632u); RECOMP_ABI_CALL(0x0002FC58u, sub_0002FC58); /* call 0x0002FC58 */

loc_00131632: ;
    ecx = esi;
    PUSH32(esp, 0x00131639u); RECOMP_ABI_CALL(0x00020F00u, sub_00020F00); /* call 0x00020F00 */

loc_00131639: ;
    edi = MEM32(esp + 0x18);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi + 0x38) = LO8(eax);
    MEM8(edi + 0x3A) = LO8(eax);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x88)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00131665; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0013165D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00131665: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DD154); /* mulss */
    ecx = MEM32(edi + 0x20);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0013168Cu); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0013168C: ;
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00131696u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_00131696: ;
    MEM32(edi + 0x34) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001316D0
 * Original: 0x001316D0 - 0x001316EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001316D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001316D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001316D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001316D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001316E7; /* je: equal / zero */

loc_001316E0: ;
    MEM32(eax) = 0x7DD07C;
    esp += 4; return; /* ret */

loc_001316E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001316F0
 * Original: 0x001316F0 - 0x00131772 (130 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001316F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001316F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x438) = edx;
    MEM16(eax + 0x444) = LO16(edx);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 0x54);
    ecx = MEM32(eax);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x18BFC);
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x2B220);
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x1C6);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00131737u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131734u); } /* indirect call */
    }

loc_00131737: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 0x54);
    MEM32(eax) = MEM32(eax) | 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 4);
    MEM32(eax + 0x42C) = MEM32(eax + 0x42C) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x42C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(0x8F00F8);
    SET_LO8(eax, 1);
    MEM8(edx + 0x52) = LO8(eax);
    ecx = MEM32(0x8F00FC);
    MEM8(ecx + 0x52) = LO8(eax);
    ecx = esi;
    PUSH32(esp, 0x00131765u); RECOMP_ABI_CALL(0x00027639u, sub_00027639); /* call 0x00027639 */

loc_00131765: ;
    PUSH32(esp, 0x0013176Au); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_0013176A: ;
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002BC02(); return; /* tail jmp 0x0002BC02 */

}

/**
 * sub_001317A0
 * Original: 0x001317A0 - 0x00131C7E (1246 bytes, 320 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001317A0(void)
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

loc_001317A0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001317B6u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_001317B6: ;
    eax = MEM32(ebp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001317D9; /* je: equal / zero */

loc_001317C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001317D9; /* je: equal / zero */

loc_001317C6: ;
    SET_LO16(eax, MEM16(ebp + 0x90));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)0x3C));
    MEM16(0x896160) = LO16(eax);
    goto loc_001317E7;

loc_001317D9: ;
    SET_LO16(ecx, MEM16(0x8AEAD4));
    MEM16(0x896160) = LO16(ecx);

loc_001317E7: ;
    MEM16(0x896162) = 0;
    PUSH32(esp, 0x001317F5u); RECOMP_ABI_CALL(0x0001DE59u, sub_0001DE59); /* call 0x0001DE59 */

loc_001317F5: ;
    PUSH32(esp, 0x001317FAu); RECOMP_ABI_CALL(0x000377FFu, sub_000377FF); /* call 0x000377FF */

loc_001317FA: ;
    PUSH32(esp, 0x001317FFu); RECOMP_ABI_CALL(0x0001D0C6u, sub_0001D0C6); /* call 0x0001D0C6 */

loc_001317FF: ;
    PUSH32(esp, 0x00131804u); RECOMP_ABI_CALL(0x00013251u, sub_00013251); /* call 0x00013251 */

loc_00131804: ;
    edx = MEM32(0x8F0040);
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x00131812u); RECOMP_ABI_CALL(0x000312D3u, sub_000312D3); /* call 0x000312D3 */

loc_00131812: ;
    eax = MEM32(0x8F0044);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0013181Fu); RECOMP_ABI_CALL(0x000312D3u, sub_000312D3); /* call 0x000312D3 */

loc_0013181F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(0x8E8F84);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7CA7A0)); /* movss */
    ecx = esp + 0x24;
    MEM32(0x895B1C) = 2;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x00131861u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00131861: ;
    eax = MEM32(0x8E8F84);
    MEM32(eax + 0x2C) = 0x2710;
    eax = MEM32(ebp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131887; /* je: equal / zero */

loc_00131878: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131887; /* je: equal / zero */

loc_0013187D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DCAC0)); /* movss */
    goto loc_00131897;

loc_00131887: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x88)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AEBF0); /* subss */

loc_00131897: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_00131A1D; /* jle: less or equal (signed <=) */

loc_001318A8: ;
    edi = ebp + 0x18;
    ebx = 1;
    MEM32(esp + 0x10) = edi;
    goto loc_001318C0;

loc_001318B6: ;
    edi = MEM32(esp + 0x10);
    /* nop */

loc_001318C0: ;
    esi = MEM32(edi + -4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x896172));
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001318D3u); RECOMP_ABI_CALL(0x0002994Du, sub_0002994D); /* call 0x0002994D */

loc_001318D3: ;
    edx = MEM32(esi + 0xF0);
    eax = ebx + -1;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 4) = 0x8E93A0;
    if ((_fas >= 0)) goto loc_001318EF; /* jns: not sign (positive) */

loc_001318EA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001318EF: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D0)); /* movss */
    eax = eax + eax * 4;
    ecx = eax * 4 + -10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + -3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    ecx = esp + 0x30;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0013194Au); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_0013194A: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00131968u); RECOMP_ABI_CALL(0x0001349Au, sub_0001349A); /* call 0x0001349A */

loc_00131968: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x00131986u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00131986: ;
    PUSH32(esp, esi);
    MEM8(esi + 0x38) = 0;
    MEM8(esi + 0x3A) = 0;
    PUSH32(esp, 0x00131994u); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_00131994: ;
    MEM32(esi + 0x248) = 0;
    eax = MEM32(edi);
    edi = eax + eax * 2;
    SET_LO8(edx, MEM8(edi * 8 + 0x8E94ED));
    edi = edi * 8 + 0x8E94EC;
    MEM32(esp + 0x24) = eax;
    SET_LO8(eax, MEM8(esi + 0x39));
    MEM8(esi + 0x1DC) = LO8(edx);
    MEM8(edi + 2) = LO8(eax);
    ecx = MEM32(esi + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001319CCu); RECOMP_ABI_CALL(0x000352A7u, sub_000352A7); /* call 0x000352A7 */

loc_001319CC: ;
    ecx = MEM32(0x8F9CCC);
    MEM8(edi + 3) = LO8(ebx);
    PUSH32(esp, 0x001319DAu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_001319DA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001319E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001319DEu); } /* indirect call */
    }

loc_001319E1: ;
    ecx = MEM32(esp + 0x20);
    esi = eax;
    edx = MEM32(esi);
    eax = ZX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001319F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001319F2u); } /* indirect call */
    }

loc_001319F4: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00131A03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00131A00u); } /* indirect call */
    }

loc_00131A03: ;
    ecx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001318B6; /* jl: less (signed <) */

loc_00131A1D: ;
    eax = MEM32(ebp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131A2D; /* je: equal / zero */

loc_00131A28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131A5C; /* jne: not equal / not zero */

loc_00131A2D: ;
    ecx = MEM32(ebp + 0xA8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    edx = MEM32(ecx + ebp + 0x14);
    ecx = MEM32(edx + 0x20);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00131A5Cu); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00131A5C: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00131B7B; /* jle: less or equal (signed <=) */

loc_00131A67: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00131B7B; /* jle: less or equal (signed <=) */

loc_00131A71: ;
    ebx = ebp + 0x80;

loc_00131A77: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00131A9B; /* je: equal / zero */

loc_00131A7A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00131AA9; /* jne: not equal / not zero */

loc_00131A7D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7DD1A8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00131AA9;

loc_00131A9B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00131AA9: ;
    esi = MEM32(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x896172));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131ABCu); RECOMP_ABI_CALL(0x0002994Du, sub_0002994D); /* call 0x0002994D */

loc_00131ABC: ;
    ecx = MEM32(esi + 0xF0);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(ecx + 4) = 0x8E9398;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x88)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_00131AE9; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00131AE1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00131AE9: ;
    xmm2 = XMM_SCALAR(MEMF(esp + edi * 4 + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7DD1A4); /* mulss */
    ecx = MEM32(esi + 0x20);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00131B16u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00131B16: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131B33u); RECOMP_ABI_CALL(0x0001349Au, sub_0001349A); /* call 0x0001349A */

loc_00131B33: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00131B51u); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00131B51: ;
    PUSH32(esp, esi);
    MEM8(esi + 0x38) = 0;
    MEM8(esi + 0x3A) = 0;
    PUSH32(esp, 0x00131B5Fu); RECOMP_ABI_CALL(0x000183BEu, sub_000183BE); /* call 0x000183BE */

loc_00131B5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x248) = 0;
    eax = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131A77; /* jl: less (signed <) */

loc_00131B7B: ;
    ecx = MEM32(ebp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x896172));
    SET_LO8(eax, LO8(eax) ^ 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131B8Du); RECOMP_ABI_CALL(0x0002994Du, sub_0002994D); /* call 0x0002994D */

loc_00131B8D: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx + 0xF0);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(edx + 4) = 0x8E9398;
    ecx = MEM32(ebp + 4);
    ecx = MEM32(ecx + 0x20);
    eax = esp + 0x30;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA82C)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00131BCAu); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_00131BCA: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(ebp + 4);
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131BEBu); RECOMP_ABI_CALL(0x0001349Au, sub_0001349A); /* call 0x0001349A */

loc_00131BEB: ;
    eax = MEM32(ebp + 4);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x20;
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00131C0Cu); RECOMP_ABI_CALL(0x00034A1Eu, sub_00034A1E); /* call 0x00034A1E */

loc_00131C0C: ;
    eax = MEM32(ebp + 4);
    MEM8(eax + 0x38) = 0;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 1);
    MEM8(ecx + 0x3A) = 0;
    PUSH32(esp, 0x00131C21u); RECOMP_ABI_CALL(0x00012EEBu, sub_00012EEB); /* call 0x00012EEB */

loc_00131C21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x3C;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM16(esp + 0x48) = 0x58;
    MEM32(esp + 0x58) = 0xD;
    MEM32(esp + 0x3C) = 0x7C2754;
    MEM8(esp + 0x5C) = 1;
    PUSH32(esp, 0x00131C53u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00131C53: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0x1E4);
    ecx = MEM32(eax + 0xD0);
    PUSH32(esp, 0x00131C6Au); RECOMP_ABI_CALL(0x0002ADCAu, sub_0002ADCA); /* call 0x0002ADCA */

loc_00131C6A: ;
    PUSH32(esp, 0x00131C6Fu); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_00131C6F: ;
    ecx = eax;
    PUSH32(esp, 0x00131C76u); RECOMP_ABI_CALL(0x0001B541u, sub_0001B541); /* call 0x0001B541 */

loc_00131C76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131DC0
 * Original: 0x00131DC0 - 0x00131F3C (380 bytes, 118 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131DC0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    MEM8(esi + 0xAC) = 1;
    eax = MEM32(eax + 0x230);
    MEM16(eax + 2) = MEM16(eax + 2) + 1;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 0x230);
    MEM8(eax + 6) = MEM8(eax + 6) + 1;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM16(esp + 0x18) = 0x58;
    MEM32(esp + 0x28) = 0xD;
    MEM32(esp + 0xC) = 0x7C2754;
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x00131E1Du); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_00131E1D: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131E36; /* jl: less (signed <) */

loc_00131E2D: ;
    ebp = MEM32(eax * 4 + 0x8E8FA8);
    goto loc_00131E3E;

loc_00131E36: ;
    eax = MEM32(0x8F0040);
    ebp = MEM32(eax + 0x1C);

loc_00131E3E: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00131E4Cu); RECOMP_ABI_CALL(0x0002DCD7u, sub_0002DCD7); /* call 0x0002DCD7 */

loc_00131E4C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x8B2228;
    PUSH32(esp, 0x00131E5Fu); RECOMP_ABI_CALL(0x000161D6u, sub_000161D6); /* call 0x000161D6 */

loc_00131E5F: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00131F35; /* jle: less or equal (signed <=) */

loc_00131E6C: ;
    eax = esi + 0x14;
    /* nop */

loc_00131E70: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131E86; /* je: equal / zero */

loc_00131E74: ;
    ecx = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131E70; /* jl: less (signed <) */

loc_00131E7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00131E86: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    ecx = 0x901D8C;
    PUSH32(esp, 0x00131E93u); RECOMP_ABI_CALL(0x0002A0FAu, sub_0002A0FA); /* call 0x0002A0FA */

loc_00131E93: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(edx + esi + 0x10);
    eax = edx + esi + 0x10;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x230);
    SET_LO8(edx, MEM8(eax + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1000F);
    PUSH32(esp, 0x8B21B8);
    MEM8(eax + 0xC) = LO8(edx);
    PUSH32(esp, 0x00131EC3u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_00131EC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00131ECDu); RECOMP_ABI_CALL(0x00034D7Fu, sub_00034D7F); /* call 0x00034D7F */

loc_00131ECD: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131EED; /* je: equal / zero */

loc_00131ED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131EED; /* je: equal / zero */

loc_00131EDD: ;
    eax = MEM32(esi + 0x9C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00131EEBu); RECOMP_ABI_CALL(0x000359AAu, sub_000359AA); /* call 0x000359AA */

loc_00131EEB: ;
    goto loc_00131EF9;

loc_00131EED: ;
    PUSH32(esp, 0x00131EF2u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00131EF2: ;
    ecx = eax;
    PUSH32(esp, 0x00131EF9u); RECOMP_ABI_CALL(0x00021C9Du, sub_00021C9D); /* call 0x00021C9D */

loc_00131EF9: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131F21; /* jne: not equal / not zero */

loc_00131F03: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131F21; /* je: equal / zero */

loc_00131F0D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131F21; /* jl: less (signed <) */

loc_00131F13: ;
    ecx = esi;
    PUSH32(esp, 0x00131F1Au); RECOMP_ABI_CALL(0x0003441Au, sub_0003441A); /* call 0x0003441A */

loc_00131F1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00131F21: ;
    eax = 0x1E;
    MEM32(esi + 0x94) = eax;
    edx = MEM32(0x8E8F84);
    MEM32(edx + 0x2C) = eax;

loc_00131F35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00131FA0
 * Original: 0x00131FA0 - 0x0013229A (762 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0x901D8C;
    PUSH32(esp, 0x00131FAEu); RECOMP_ABI_CALL(0x0002EE39u, sub_0002EE39); /* call 0x0002EE39 */

loc_00131FAE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00131FB6u); RECOMP_ABI_CALL(0x00012EEBu, sub_00012EEB); /* call 0x00012EEB */

loc_00131FB6: ;
    MEM8(0x896172) = 1;
    MEM16(0x896166) = LO16(ebx);
    eax = MEM32(esi + 0x8C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM8(esi + 0x98) = LO8(ebx);
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00131FF7; /* je: equal / zero */

loc_00131FEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7DCAC0)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00131FFF; /* jne: not equal / not zero */

loc_00131FF7: ;
    xmm0 = XMM_SCALAR(MEMF(0x8AEB10)); /* movss */

loc_00131FFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    ebp = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00132018; /* jne: not equal / not zero */

loc_00132012: ;
    MEM32(0x8E9810) = ebp;

loc_00132018: ;
    eax = MEM32(0x8F6A6C);
    ecx = MEM32(0x8F6A70);
    eax = eax & 0xFFFFFCFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F6A6C) = eax;
    eax = MEM32(0x8F6A68);
    ecx = ecx & 0xFFFFFCFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xF0DCC03Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x1050003C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8F6A70) = ecx;
    MEM32(0x8F6A68) = eax;
    PUSH32(esp, 0x0013205Du); RECOMP_ABI_CALL(0x00030C7Fu, sub_00030C7F); /* call 0x00030C7F */

loc_0013205D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00132060: ;
    ecx = MEM32(edi * 4 + 0x89617C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013206Eu); RECOMP_ABI_CALL(0x00024E84u, sub_00024E84); /* call 0x00024E84 */

loc_0013206E: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013207Au); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_0013207A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132060; /* jl: less (signed <) */

loc_00132083: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 0x0013208Eu); RECOMP_ABI_CALL(0x00021856u, sub_00021856); /* call 0x00021856 */

loc_0013208E: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 0x00132099u); RECOMP_ABI_CALL(0x00021856u, sub_00021856); /* call 0x00021856 */

loc_00132099: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001320A1u); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_001320A1: ;
    edx = MEM32(0x8E8FA8);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001320AFu); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_001320AF: ;
    edi = MEM32(esi + 8);
    ecx = MEM32(0x8E8FAC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001320CCu); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_001320CC: ;
    edi = MEM32(esi + 8);
    ecx = MEM32(0x8E8FB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001320EAu); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_001320EA: ;
    edi = MEM32(esi + 8);
    ecx = MEM32(0x8E8FB4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132108u); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_00132108: ;
    PUSH32(esp, 5);
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00132112u); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_00132112: ;
    eax = MEM32(0x8E9040);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132123u); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_00132123: ;
    edx = MEM32(esi + 0xC);
    edi = MEM32(0x8E8FF8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, ebp);
    PUSH32(esp, 7);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013213Fu); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_0013213F: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(0x8E8FFC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 2);
    PUSH32(esp, 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013215Cu); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_0013215C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 9);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00132166u); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_00132166: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xA);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00132170u); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_00132170: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xB);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013217Au); RECOMP_ABI_CALL(0x0002BAF9u, sub_0002BAF9); /* call 0x0002BAF9 */

loc_0013217A: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00132182u); RECOMP_ABI_CALL(0x0001DE59u, sub_0001DE59); /* call 0x0001DE59 */

loc_00132182: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x14;

loc_00132187: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001321B3; /* jge: greater or equal (signed >=) */

loc_0013218C: ;
    ecx = ebp + 1;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 0x0013219Bu); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_0013219B: ;
    MEM32(edi) = eax;
    edx = MEM32(eax + 0x230);
    MEM8(edx + 0xC) = LO8(ebx);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x230);
    MEM8(ecx + 0xD) = LO8(ebx);
    goto loc_001321B5;

loc_001321B3: ;
    MEM32(edi) = ebx;

loc_001321B5: ;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + -4) = ebx;
    MEM32(edi + 0x14) = ebx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132187; /* jl: less (signed <) */

loc_001321C7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0x80;
    /* nop */

loc_001321D0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001321F2; /* jge: greater or equal (signed >=) */

loc_001321D5: ;
    ecx = MEM32(0x8F00FC);
    edx = edi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001321E4u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_001321E4: ;
    MEM32(ebp) = eax;
    eax = MEM32(eax + 0x230);
    MEM8(eax + 0xD) = LO8(ebx);
    goto loc_001321F5;

loc_001321F2: ;
    MEM32(ebp) = ebx;

loc_001321F5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001321D0; /* jl: less (signed <) */

loc_001321FE: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013220Au); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_0013220A: ;
    MEM32(esi + 4) = eax;
    ecx = MEM32(eax + 0x230);
    MEM16(ecx + 2) = LO16(ebx);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x230);
    PUSH32(esp, 0x3F800000);
    MEM8(eax + 6) = LO8(ebx);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx + 0x54);
    edi = MEM32(eax);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x33AB5);
    edi = edi & 0xFFFFFFFBu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edi;
    ecx = MEM32(esi + 4);
    edi = MEM32(ecx);
    PUSH32(esp, 0x1514B);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00132252u); RECOMP_ABI_CALL(0x0002826Eu, sub_0002826E); /* call 0x0002826E */

loc_00132252: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x00132259u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132256u); } /* indirect call */
    }

loc_00132259: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_0013227E; /* jle: less or equal (signed <=) */

loc_00132264: ;
    edx = esi + 0x14;

loc_00132267: ;
    eax = MEM32(edx);
    eax = MEM32(eax + 0x3C);
    MEM8(eax + 0x39) = MEM8(eax + 0x39) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 0x39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132267; /* jl: less (signed <) */

loc_0013227E: ;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM8(esi + 0x99) = LO8(ebx);
    MEM8(esi + 0xAD) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00132360
 * Original: 0x00132360 - 0x001323FB (155 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001323F8; /* jle: less or equal (signed <=) */

loc_0013236F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 1;
    edi = ebp + 0x18;
    /* nop */

loc_00132380: ;
    ebx = MEM32(edi);
    eax = MEM32(edi + -4);
    SET_LO8(edx, MEM8(eax + 0x39));
    esi = ebx + ebx * 2;
    SET_LO8(ecx, MEM8(esi * 8 + 0x8E94ED));
    esi = esi * 8 + 0x8E94EC;
    MEM8(eax + 0x1DC) = LO8(ecx);
    MEM8(esi + 2) = LO8(edx);
    ecx = MEM32(eax + 0x50);
    PUSH32(esp, 0x001323AAu); RECOMP_ABI_CALL(0x000352A7u, sub_000352A7); /* call 0x000352A7 */

loc_001323AA: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    ecx = MEM32(0x8F9CCC);
    MEM8(esi + 3) = LO8(eax);
    PUSH32(esp, 0x001323BCu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_001323BC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001323C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001323C0u); } /* indirect call */
    }

loc_001323C3: ;
    esi = eax;
    edx = MEM32(esi);
    eax = ZX8(LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001323D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001323D0u); } /* indirect call */
    }

loc_001323D2: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001323E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001323DEu); } /* indirect call */
    }

loc_001323E1: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132380; /* jl: less (signed <) */

loc_001323F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001323F8: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00132430
 * Original: 0x00132430 - 0x0013244A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00132430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132430: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00132439u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00132439: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132447; /* je: equal / zero */

loc_00132440: ;
    MEM32(eax) = 0x7DD0D4;
    esp += 4; return; /* ret */

loc_00132447: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132450
 * Original: 0x00132450 - 0x0013246A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00132450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132450: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00132459u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00132459: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132467; /* je: equal / zero */

loc_00132460: ;
    MEM32(eax) = 0x7DD0F8;
    esp += 4; return; /* ret */

loc_00132467: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132470
 * Original: 0x00132470 - 0x0013248A (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00132470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132470: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00132479u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00132479: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132487; /* je: equal / zero */

loc_00132480: ;
    MEM32(eax) = 0x7DD108;
    esp += 4; return; /* ret */

loc_00132487: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132490
 * Original: 0x00132490 - 0x001324AA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00132490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132490: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00132499u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00132499: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001324A7; /* je: equal / zero */

loc_001324A0: ;
    MEM32(eax) = 0x7DD130;
    esp += 4; return; /* ret */

loc_001324A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001324B0
 * Original: 0x001324B0 - 0x001324CA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001324B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001324B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001324B9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001324B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001324C7; /* je: equal / zero */

loc_001324C0: ;
    MEM32(eax) = 0x7DD158;
    esp += 4; return; /* ret */

loc_001324C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001324D0
 * Original: 0x001324D0 - 0x001324EA (26 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001324D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001324D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001324D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001324D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001324E7; /* je: equal / zero */

loc_001324E0: ;
    MEM32(eax) = 0x7DD17C;
    esp += 4; return; /* ret */

loc_001324E7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001324F0
 * Original: 0x001324F0 - 0x00132518 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001324F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001324F0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132508; /* je: equal / zero */

loc_001324F7: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132504; /* je: equal / zero */

loc_001324FE: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00132504: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132512; /* jne: not equal / not zero */

loc_00132508: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132512; /* jne: not equal / not zero */

loc_0013250F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00132512: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00132530
 * Original: 0x00132530 - 0x00132541 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132530(void)
{

loc_00132530: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132550
 * Original: 0x00132550 - 0x00132561 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132550(void)
{

loc_00132550: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132570
 * Original: 0x00132570 - 0x001325AA (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132570: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132598; /* jne: not equal / not zero */

loc_0013257E: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00132596; /* je: equal / zero */

loc_0013258C: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = 0;

loc_00132596: ;
    SET_LO8(eax, 1);

loc_00132598: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001325A7; /* jne: not equal / not zero */

loc_0013259E: ;
    MEM32(ecx + 8) = 0;
    SET_LO8(eax, 1);

loc_001325A7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001325C0
 * Original: 0x001325C0 - 0x001325DC (28 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001325C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001325C0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001325D1; /* jne: not equal / not zero */

loc_001325CE: ;
    edx = MEM32(ecx + 8);

loc_001325D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001325D9; /* je: equal / zero */

loc_001325D7: ;
    eax = edx;

loc_001325D9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001325F0
 * Original: 0x001325F0 - 0x001325F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001325F0(void)
{

loc_001325F0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00132600
 * Original: 0x00132600 - 0x0013260A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132600(void)
{

loc_00132600: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132610
 * Original: 0x00132610 - 0x0013261A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132610(void)
{

loc_00132610: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132620
 * Original: 0x00132620 - 0x00132665 (69 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013265F; /* jle: less or equal (signed <=) */

loc_00132630: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013265F; /* jne: not equal / not zero */

loc_00132634: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0013263Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132639u); } /* indirect call */
    }

loc_0013263C: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013264E; /* je: equal / zero */

loc_00132643: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132657; /* jne: not equal / not zero */

loc_0013264A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132657; /* jne: not equal / not zero */

loc_0013264E: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132657; /* jne: not equal / not zero */

loc_00132655: ;
    ebx = eax;

loc_00132657: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132630; /* jl: less (signed <) */

loc_0013265F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00132680
 * Original: 0x00132680 - 0x00132689 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132680(void)
{

loc_00132680: ;
    eax = ecx;
    MEM32(eax) = 0x7DD1AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00132690
 * Original: 0x00132690 - 0x00132698 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132690(void)
{

loc_00132690: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001326A0
 * Original: 0x001326A0 - 0x001326B1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001326A0(void)
{

loc_001326A0: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    MEM32(ecx) = 0x7DD1B0;
    PUSH32(esp, 0x001326AFu); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_001326AF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001326C0
 * Original: 0x001326C0 - 0x001326D6 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001326C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001326C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    edx = MEM32(ecx + eax * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001326E0
 * Original: 0x001326E0 - 0x00132717 (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001326E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001326E0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    edx = edx + edx * 2;
    edx = ecx + edx * 4;
    ecx = MEM32(edx + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132714; /* je: equal / zero */

loc_001326F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132705; /* jne: not equal / not zero */

loc_00132702: ;
    esi = MEM32(ecx + 8);

loc_00132705: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) esi = edi; /* cmove */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132712; /* je: equal / zero */

loc_0013270F: ;
    eax = MEM32(esi + 4);

loc_00132712: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00132714: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132730
 * Original: 0x00132730 - 0x001327A4 (116 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132730: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    edx = MEM32(ecx + eax * 4);
    esi = MEM32(ecx + eax * 4 + 8);
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    ecx = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013274Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013274Bu); } /* indirect call */
    }

loc_0013274D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013279C; /* je: equal / zero */

loc_00132751: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013275E; /* jne: not equal / not zero */

loc_0013275B: ;
    ebp = MEM32(esi + 8);

loc_0013275E: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) ebp = eax; /* cmove */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132777; /* jne: not equal / not zero */

loc_0013276A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00132777; /* je: equal / zero */

loc_00132771: ;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ebx;

loc_00132777: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013277F; /* jne: not equal / not zero */

loc_0013277C: ;
    MEM32(esi + 8) = ebx;

loc_0013277F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132792; /* je: equal / zero */

loc_00132783: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0013278Bu); RECOMP_ABI_CALL(0x0002439Eu, sub_0002439E); /* call 0x0002439E */

loc_0013278B: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00132792u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132790u); } /* indirect call */
    }

loc_00132792: ;
    edx = MEM32(esi);
    ecx = esi;
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0013279Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132798u); } /* indirect call */
    }

loc_0013279B: ;
    POP32(esp, ebp);

loc_0013279C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001327D0
 * Original: 0x001327D0 - 0x00132814 (68 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001327D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001327D0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0xC);
    edx = edx + edx * 2;
    edx = ecx + edx * 4;
    ecx = MEM32(edx + 8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132811; /* je: equal / zero */

loc_001327E6: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132803; /* jne: not equal / not zero */

loc_001327EB: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00132803; /* je: equal / zero */

loc_001327F9: ;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = 0;

loc_00132803: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013280F; /* jne: not equal / not zero */

loc_00132808: ;
    MEM32(ecx + 8) = 0;

loc_0013280F: ;
    SET_LO8(eax, 1);

loc_00132811: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132830
 * Original: 0x00132830 - 0x00132880 (80 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013285C; /* jle: less or equal (signed <=) */

loc_0013283E: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00132841: ;
    esi = MEM32(edi + 0xC);
    eax = MEM32(esi + ebp);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0013284Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013284Bu); } /* indirect call */
    }

loc_0013284D: ;
    MEM32(esi + 4) = ebx;
    eax = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132841; /* jl: less (signed <) */

loc_0013285B: ;
    POP32(esp, ebp);

loc_0013285C: ;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013287C; /* jle: less or equal (signed <=) */

loc_00132865: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0013286Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013286Au); } /* indirect call */
    }

loc_0013286D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00132874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132871u); } /* indirect call */
    }

loc_00132874: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132865; /* jl: less (signed <) */

loc_0013287C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001328A0
 * Original: 0x001328A0 - 0x001328A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001328A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001328A0: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_001328B0
 * Original: 0x001328B0 - 0x00132907 (87 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001328B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001328B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    MEM32(esi) = 0x7DD1B0;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001328D4u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_001328D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001328FB; /* je: equal / zero */

loc_001328DB: ;
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001328FD; /* jl: less (signed <) */

loc_001328E4: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001328E5: ;
    MEM32(ecx) = 0x7DD1AC;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001328E5; /* jne: not equal / not zero */

loc_001328F1: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001328FB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001328FD: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132920
 * Original: 0x00132920 - 0x0013294C (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x7DD1B0;
    PUSH32(esp, 0x00132932u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00132932: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132946; /* je: equal / zero */

loc_0013293D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132943u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00132943: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132946: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132960
 * Original: 0x00132960 - 0x00132999 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = eax + eax * 2;
    eax = MEM32(edi + 0xC);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(esi + eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132992; /* jne: not equal / not zero */

loc_00132979: ;
    ecx = edi;
    PUSH32(esp, 0x00132980u); RECOMP_ABI_CALL(0x0001B6B3u, sub_0001B6B3); /* call 0x0001B6B3 */

loc_00132980: ;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0;
    MEM32(ecx + 8) = eax;

loc_00132992: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001329B0
 * Original: 0x001329B0 - 0x001329FA (74 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001329B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001329B0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = edx + edx * 2;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(edx + edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001329F5; /* jne: not equal / not zero */

loc_001329C9: ;
    esi = MEM32(esp + 0x10);
    esi = esi + esi * 2;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    ebx = MEM32(esi + edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001329F5; /* jne: not equal / not zero */

loc_001329DD: ;
    eax = edi;
    edi = eax + edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001329E9u); RECOMP_ABI_CALL(0x0001B6B3u, sub_0001B6B3); /* call 0x0001B6B3 */

loc_001329E9: ;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = esi;
    MEM32(edi + 8) = eax;
    MEM32(esi + 8) = eax;

loc_001329F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132A10
 * Original: 0x00132A10 - 0x00132A26 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00132A1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132A1Bu); } /* indirect call */
    }

loc_00132A1E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00011D02(); return; /* tail jmp 0x00011D02 */

}

/**
 * sub_00132A30
 * Original: 0x00132A30 - 0x00132A42 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132A30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132A3Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_00132A3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132A50
 * Original: 0x00132A50 - 0x00132A58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132A50: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_0003478F(); return; /* tail jmp 0x0003478F */

}

/**
 * sub_00132A60
 * Original: 0x00132A60 - 0x00132A67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A60(void)
{

loc_00132A60: ;
    MEM32(ecx) = 0x7DD254;
    esp += 4; return; /* ret */

}

/**
 * sub_00132A70
 * Original: 0x00132A70 - 0x00132A73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A70(void)
{

loc_00132A70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132A80
 * Original: 0x00132A80 - 0x00132ABD (61 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A80(void)
{

loc_00132A80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0x7DD254;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00132AD0
 * Original: 0x00132AD0 - 0x00132ADA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132AD0(void)
{

loc_00132AD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132AE0
 * Original: 0x00132AE0 - 0x00132B1D (61 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132AE0(void)
{

loc_00132AE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x7DD260;
    esp += 4; return; /* ret */

}

/**
 * sub_00132B30
 * Original: 0x00132B30 - 0x00132B42 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132B30(void)
{

loc_00132B30: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00132B3Fu); RECOMP_ABI_CALL(0x00034794u, sub_00034794); /* call 0x00034794 */

loc_00132B3F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132B50
 * Original: 0x00132B50 - 0x00132B8A (58 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132B50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, MEM8(eax + esi + 0xD));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0xC) = edx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00132B87; /* je: equal / zero */

loc_00132B6E: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132B7A; /* jne: not equal / not zero */

loc_00132B74: ;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

loc_00132B7A: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x00132B87u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00132B87: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132BA0
 * Original: 0x00132BA0 - 0x00132BDD (61 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132BA0(void)
{

loc_00132BA0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x7DD26C;
    esp += 4; return; /* ret */

}

/**
 * sub_00132BF0
 * Original: 0x00132BF0 - 0x00132BF3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132BF0(void)
{

loc_00132BF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132C00
 * Original: 0x00132C00 - 0x00132C55 (85 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00132C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132C00: ;
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, 0x00132C08u); RECOMP_ABI_CALL(0x0003478Fu, sub_0003478F); /* call 0x0003478F */

loc_00132C08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00132C10u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_00132C10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132C52; /* je: equal / zero */

loc_00132C17: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x7DD260;
    esp += 4; return; /* ret */

loc_00132C52: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132C70
 * Original: 0x00132C70 - 0x00132CC5 (85 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00132C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132C70: ;
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, 0x00132C78u); RECOMP_ABI_CALL(0x0003478Fu, sub_0003478F); /* call 0x0003478F */

loc_00132C78: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x00132C80u); RECOMP_ABI_CALL(0x000368C8u, sub_000368C8); /* call 0x000368C8 */

loc_00132C80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132CC2; /* je: equal / zero */

loc_00132C87: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax + 4) = 0xFFFFFFFFu;
    MEM32(eax + 8) = 0;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0x7DD26C;
    esp += 4; return; /* ret */

loc_00132CC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132CE0
 * Original: 0x00132CE0 - 0x00132D29 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132CE0: ;
    eax = MEM32(0x8F0668);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00132D28; /* jne: not equal / not zero */

loc_00132CE9: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00132CF3u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_00132CF3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132D21; /* je: equal / zero */

loc_00132CFA: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x7DD288);
    PUSH32(esp, 0x7DD278);
    PUSH32(esp, 2);
    PUSH32(esp, 0x8AEC54);
    PUSH32(esp, 5);
    PUSH32(esp, 0x8AEC40);
    ecx = eax;
    PUSH32(esp, 0x00132D1Bu); RECOMP_ABI_CALL(0x00031760u, sub_00031760); /* call 0x00031760 */

loc_00132D1B: ;
    MEM32(0x8F0668) = eax;
    esp += 4; return; /* ret */

loc_00132D21: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8F0668) = eax;

loc_00132D28: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00132D40
 * Original: 0x00132D40 - 0x00132D5B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132D40: ;
    ecx = MEM32(0x8F0668);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132D5A; /* je: equal / zero */

loc_00132D4A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00132D50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132D4Eu); } /* indirect call */
    }

loc_00132D50: ;
    MEM32(0x8F0668) = 0;

loc_00132D5A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00132D70
 * Original: 0x00132D70 - 0x00132D92 (34 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132D70: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00132D90; /* jbe: below or equal (unsigned <=) */

loc_00132D7D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);

loc_00132D82: ;
    ecx = MEM32(esi + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) eax = ecx; /* cmova */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00132D82; /* jb: below (unsigned <) */

loc_00132D8F: ;
    POP32(esp, esi);

loc_00132D90: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00132DA0
 * Original: 0x00132DA0 - 0x00132DC2 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132DA0(void)
{

loc_00132DA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2C);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00132DB6u); RECOMP_ABI_CALL(0x0001DA35u, sub_0001DA35); /* call 0x0001DA35 */

loc_00132DB6: ;
    MEM32(esi) = 0x7DD290;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132DD0
 * Original: 0x00132DD0 - 0x00132DDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132DD0: ;
    MEM32(ecx) = 0x7DD290;
    g_seh_ebp = ebp; sub_000184CC(); return; /* tail jmp 0x000184CC */

}

/**
 * sub_00132DE0
 * Original: 0x00132DE0 - 0x00132DE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132DE0: ;
    g_seh_ebp = ebp; sub_0002389A(); return; /* tail jmp 0x0002389A */

}

/**
 * sub_00132DF0
 * Original: 0x00132DF0 - 0x00132E03 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132DF0(void)
{

loc_00132DF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi * 4 + 0x8AEC5C); PUSH32(esp, 0x00132DFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00132DF5u); } /* indirect call */
    }

loc_00132DFC: ;
    MEM32(eax + 4) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132E10
 * Original: 0x00132E10 - 0x00132E2F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132E10: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD254;
    if (TEST_Z(_fa, _fb)) goto loc_00132E29; /* je: equal / zero */

loc_00132E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132E26u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00132E26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132E29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132E40
 * Original: 0x00132E40 - 0x00132E5F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132E40: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD254;
    if (TEST_Z(_fa, _fb)) goto loc_00132E59; /* je: equal / zero */

loc_00132E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132E56u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00132E56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132E59: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132E70
 * Original: 0x00132E70 - 0x00132E8F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132E70: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD254;
    if (TEST_Z(_fa, _fb)) goto loc_00132E89; /* je: equal / zero */

loc_00132E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132E86u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00132E86: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132E89: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132EA0
 * Original: 0x00132EA0 - 0x00132EC4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD290;
    PUSH32(esp, 0x00132EAEu); RECOMP_ABI_CALL(0x000184CCu, sub_000184CC); /* call 0x000184CC */

loc_00132EAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132EBE; /* je: equal / zero */

loc_00132EB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132EBBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00132EBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00132EBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132ED0
 * Original: 0x00132ED0 - 0x00132EF3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132ED0(void)
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

loc_00132ED0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SMEM32(esp) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); /* fist */
    fp_top() = RECOMP_FP_PC((double)SMEM32(esp) - fp_top()); /* fisubr dword ptr [esp] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F00
 * Original: 0x00132F00 - 0x00132F23 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F00(void)
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

loc_00132F00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    SMEM32(esp) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); /* fist */
    fp_top() = RECOMP_FP_PC((double)SMEM32(esp) - fp_top()); /* fisubr dword ptr [esp] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    ecx = MEM32(esp);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F30
 * Original: 0x00132F30 - 0x00132F33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00132F30: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F40
 * Original: 0x00132F40 - 0x00132F44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00132F40: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F50
 * Original: 0x00132F50 - 0x00132F54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00132F50: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F60
 * Original: 0x00132F60 - 0x00132F64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00132F60: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F70
 * Original: 0x00132F70 - 0x00132F74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00132F70: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F80
 * Original: 0x00132F80 - 0x00132F84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00132F80: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132F90
 * Original: 0x00132F90 - 0x00132F94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00132F90: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00132FA0
 * Original: 0x00132FA0 - 0x00132FA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132FA0(void)
{

loc_00132FA0: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x3C2);
    esp += 4; return; /* ret */

}

/**
 * sub_00132FB0
 * Original: 0x00132FB0 - 0x00132FB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132FB0: ;
    MEM8(ecx + 0x3C2) = MEM8(ecx + 0x3C2) + 1;
    _fa = (uint32_t)(MEM8(ecx + 0x3C2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00132FC0
 * Original: 0x00132FC0 - 0x00132FCB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132FC0: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132FD0
 * Original: 0x00132FD0 - 0x00132FDB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132FD0: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00132FE0
 * Original: 0x00132FE0 - 0x00132FE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132FE0(void)
{

loc_00132FE0: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00132FF0
 * Original: 0x00132FF0 - 0x00133017 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132FF0(void)
{

loc_00132FF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00132FFEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_00132FFE: ;
    MEM32(esi) = 0x7B1DF0;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, edi);
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133020
 * Original: 0x00133020 - 0x0013303B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133020: ;
    ecx = MEM32(0x8F066C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133030; /* je: equal / zero */

loc_0013302A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00133030u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0013302Eu); } /* indirect call */
    }

loc_00133030: ;
    MEM32(0x8F066C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00133050
 * Original: 0x00133050 - 0x00133056 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133050(void)
{

loc_00133050: ;
    eax = MEM32(0x8F066C);
    esp += 4; return; /* ret */

}

/**
 * sub_00133060
 * Original: 0x00133060 - 0x00133069 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133060(void)
{

loc_00133060: ;
    eax = ecx;
    MEM32(eax) = 0x7DD76C;
    esp += 4; return; /* ret */

}

/**
 * sub_00133070
 * Original: 0x00133070 - 0x00133077 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133070(void)
{

loc_00133070: ;
    MEM32(ecx) = 0x7DD76C;
    esp += 4; return; /* ret */

}

/**
 * sub_00133080
 * Original: 0x00133080 - 0x00133088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133080(void)
{

loc_00133080: ;
    MEM8(0x896174) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00133090
 * Original: 0x00133090 - 0x00133098 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133090(void)
{

loc_00133090: ;
    MEM8(0x896174) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001330A0
 * Original: 0x001330A0 - 0x001330BE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001330A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001330A0: ;
    SET_LO8(eax, MEM8(0x896174));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001330BB; /* jne: not equal / not zero */

loc_001330A9: ;
    ecx = MEM32(0x8E9380);
    SET_LO8(edx, MEM8(ecx + 6));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001330BD; /* jne: not equal / not zero */

loc_001330BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001330BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001330D0
 * Original: 0x001330D0 - 0x001330ED (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001330D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001330D0: ;
    SET_LO8(ecx, MEM8(0x896174));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001330EC; /* jne: not equal / not zero */

loc_001330DF: ;
    ecx = MEM32(0x8E9380);
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 6), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001330EC; /* je: equal / zero */

loc_001330EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001330EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133100
 * Original: 0x00133100 - 0x0013311D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00133100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133100: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013311A; /* jne: not equal / not zero */

loc_0013310A: ;
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013311A; /* jne: not equal / not zero */

loc_00133114: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0013311A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00133130
 * Original: 0x00133130 - 0x00133138 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133130(void)
{

loc_00133130: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896160);
    esp += 4; return; /* ret */

}

/**
 * sub_00133140
 * Original: 0x00133140 - 0x00133148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133140(void)
{

loc_00133140: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896162);
    esp += 4; return; /* ret */

}

/**
 * sub_00133150
 * Original: 0x00133150 - 0x00133183 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133150: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 3 (16-bit) */
    eax = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_0013317F; /* jne: not equal / not zero */

loc_0013315F: ;
    ecx = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013317A; /* je: equal / zero */

loc_00133170: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013317A; /* je: equal / zero */

loc_00133175: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013317F; /* jne: not equal / not zero */

loc_0013317A: ;
    eax = 5;

loc_0013317F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00133190
 * Original: 0x00133190 - 0x001331A5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00133190: ;
    eax = MEM32(0x8F6A68);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x4000000));
    eax = eax - 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001331B0
 * Original: 0x001331B0 - 0x001331F6 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001331B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001331B0: ;
    PUSH32(esp, 0x001331B5u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_001331B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001331C4; /* jl: less (signed <) */

loc_001331BA: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x3C (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001331F0; /* jl: less (signed <) */

loc_001331C4: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331F0; /* je: equal / zero */

loc_001331CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001331F0; /* je: equal / zero */

loc_001331D1: ;
    PUSH32(esp, 0x001331D6u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_001331D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001331E1; /* jne: not equal / not zero */

loc_001331DB: ;
    eax = 0x15;
    esp += 4; return; /* ret */

loc_001331E1: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001331F0: ;
    eax = 0x1D;
    esp += 4; return; /* ret */

}

/**
 * sub_00133210
 * Original: 0x00133210 - 0x0013334A (314 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133210(void)
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

loc_00133210: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013324F; /* jne: not equal / not zero */

loc_0013321D: ;
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013324F; /* jne: not equal / not zero */

loc_00133227: ;
    eax = MEM32(0x8F6A68);
    eax = eax & 0xC000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133249; /* jne: not equal / not zero */

loc_00133238: ;
    PUSH32(esp, 0x0013323Du); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_0013323D: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00133249: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013324F: ;
    PUSH32(esp, 0x00133254u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_00133254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133263; /* jl: less (signed <) */

loc_00133259: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x3C (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133294; /* jl: less (signed <) */

loc_00133263: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133294; /* je: equal / zero */

loc_0013326C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133294; /* je: equal / zero */

loc_00133270: ;
    PUSH32(esp, 0x00133275u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_00133275: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    ecx = MEM32(0x8F6A68);
    if (CMP_NE(_fa, _fb)) goto loc_00133287; /* jne: not equal / not zero */

loc_00133280: ;
    eax = 0x15;
    goto loc_0013329F;

loc_00133287: ;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013329F;

loc_00133294: ;
    ecx = MEM32(0x8F6A68);
    eax = 0x1D;

loc_0013329F: ;
    edx = (uint32_t)(int32_t)SMEM16(0x896162);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(0x896160);
    edx = ecx;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    edx = edx & 0xC000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4000000 (32-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if (CMP_NE(_fa, _fb)) goto loc_0013331E; /* jne: not equal / not zero */

loc_001332D1: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 3 (16-bit) */
    eax = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_001332FA; /* jne: not equal / not zero */

loc_001332E0: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001332F5; /* je: equal / zero */

loc_001332EB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001332F5; /* je: equal / zero */

loc_001332F0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001332FA; /* jne: not equal / not zero */

loc_001332F5: ;
    eax = 5;

loc_001332FA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = SX16(LO16(eax));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB868); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    eax = (int32_t)MEMF(esp); /* cvttss2si */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013331E: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB868); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    SMEM32(esp) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); /* fist */
    fp_top() = RECOMP_FP_PC((double)SMEM32(esp) - fp_top()); /* fisubr dword ptr [esp] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    eax = MEM32(esp);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001333A0
 * Original: 0x001333A0 - 0x001333BB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001333A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001333A0: ;
    ecx = MEM32(0x8F0670);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001333B0; /* je: equal / zero */

loc_001333AA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001333B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001333AEu); } /* indirect call */
    }

loc_001333B0: ;
    MEM32(0x8F0670) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001333D0
 * Original: 0x001333D0 - 0x001333D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001333D0(void)
{

loc_001333D0: ;
    eax = MEM32(0x8F0670);
    esp += 4; return; /* ret */

}

/**
 * sub_001333E0
 * Original: 0x001333E0 - 0x001333E9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001333E0(void)
{

loc_001333E0: ;
    eax = ecx;
    MEM32(eax) = 0x7DD770;
    esp += 4; return; /* ret */

}

/**
 * sub_001333F0
 * Original: 0x001333F0 - 0x001333F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001333F0(void)
{

loc_001333F0: ;
    MEM32(ecx) = 0x7DD770;
    esp += 4; return; /* ret */

}

/**
 * sub_00133400
 * Original: 0x00133400 - 0x00133401 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133400(void)
{

loc_00133400: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133410
 * Original: 0x00133410 - 0x00133411 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133410(void)
{

loc_00133410: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133420
 * Original: 0x00133420 - 0x00133421 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133420(void)
{

loc_00133420: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133430
 * Original: 0x00133430 - 0x00133479 (73 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133430: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00133448; /* je: equal / zero */

loc_00133439: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00133476; /* jne: not equal / not zero */

loc_0013343C: ;
    eax = MEM32(0x8E9380);
    MEM8(eax + 6) = 1;
    esp += 12; return; /* ret 8 */

loc_00133448: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00133459u); RECOMP_ABI_CALL(0x000150A6u, sub_000150A6); /* call 0x000150A6 */

loc_00133459: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(0x8E9380);
    if (CMP_EQ(_fa, _fb)) goto loc_00133472; /* je: equal / zero */

loc_00133462: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 6);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133472; /* je: equal / zero */

loc_0013346A: ;
    MEM8(eax + 6) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00133472: ;
    MEM8(eax + 6) = LO8(ebx);
    POP32(esp, ebx);

loc_00133476: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133490
 * Original: 0x00133490 - 0x001334D5 (69 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133490(void)
{

loc_00133490: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013349Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_0013349E: ;
    MEM32(esi) = 0x7B1DF0;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    MEM8(esi + 0x1D) = LO8(ecx);
    MEM32(esi) = 0x7B1E00;
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = edx;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(esi + 0x28) = ecx;
    edx = MEM32(edi + 0x2C);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001334F0
 * Original: 0x001334F0 - 0x0013350B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001334F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001334F0: ;
    ecx = MEM32(0x8F0674);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133500; /* je: equal / zero */

loc_001334FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00133500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001334FEu); } /* indirect call */
    }

loc_00133500: ;
    MEM32(0x8F0674) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00133520
 * Original: 0x00133520 - 0x00133526 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133520(void)
{

loc_00133520: ;
    eax = MEM32(0x8F0674);
    esp += 4; return; /* ret */

}

/**
 * sub_00133530
 * Original: 0x00133530 - 0x00133539 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133530(void)
{

loc_00133530: ;
    eax = ecx;
    MEM32(eax) = 0x7DD774;
    esp += 4; return; /* ret */

}

/**
 * sub_00133540
 * Original: 0x00133540 - 0x00133547 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133540(void)
{

loc_00133540: ;
    MEM32(ecx) = 0x7DD774;
    esp += 4; return; /* ret */

}

/**
 * sub_00133550
 * Original: 0x00133550 - 0x00133603 (179 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133550: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_0013356F; /* jne: not equal / not zero */

loc_00133560: ;
    ecx = MEM32(0x8E9394);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0013356F; /* je: equal / zero */

loc_0013356B: ;
    SET_LO8(ecx, 1);
    goto loc_00133571;

loc_0013356F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00133571: ;
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00133600; /* ja: above (unsigned >) */

loc_0013357D: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x133604); /* switch: 11 entries, 7 targets */
    if (_jt == 0x00133584u) goto loc_00133584;
    if (_jt == 0x001335BAu) goto loc_001335BA;
    if (_jt == 0x001335C2u) goto loc_001335C2;
    if (_jt == 0x001335CAu) goto loc_001335CA;
    if (_jt == 0x001335DBu) goto loc_001335DB;
    if (_jt == 0x001335EAu) goto loc_001335EA;
    if (_jt == 0x001335FBu) goto loc_001335FB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00133584: ;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 0x2C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001335A1; /* jns: not sign (positive) */

loc_0013358F: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0x40);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(3)) >> 32) & 1);
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 12; return; /* ret 8 */

loc_001335A1: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001335AE; /* je: equal / zero */

loc_001335A6: ;
    eax = 4;
    esp += 12; return; /* ret 8 */

loc_001335AE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00133600; /* je: equal / zero */

loc_001335B2: ;
    eax = 0x10;
    esp += 12; return; /* ret 8 */

loc_001335BA: ;
    eax = 9;
    esp += 12; return; /* ret 8 */

loc_001335C2: ;
    eax = 0xC;
    esp += 12; return; /* ret 8 */

loc_001335CA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax * 4 + 0xD;
    esp += 12; return; /* ret 8 */

loc_001335DB: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xF)) >> 32) & 1);
    ecx = ecx + 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 12; return; /* ret 8 */

loc_001335EA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax * 4 + 0x13;
    esp += 12; return; /* ret 8 */

loc_001335FB: ;
    eax = 0x15;

loc_00133600: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133670
 * Original: 0x00133670 - 0x0013369E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00133670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133670: ;
    eax = MEM32(0x8F6A68);
    ecx = eax;
    ecx = ecx & 0xC000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013369B; /* je: equal / zero */

loc_00133685: ;
    _fa = (uint32_t)(MEM32(0x8E932C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E932C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013369B; /* je: equal / zero */

loc_0013368E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1C0 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013369B; /* je: equal / zero */

loc_00133695: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0013369B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001336B0
 * Original: 0x001336B0 - 0x0013377E (206 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001336B0(void)
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

loc_001336B0: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001336D1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001336CC: ;
    xmm2 = xmm1; /* movaps */
    goto loc_001336D8;

loc_001336D1: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_001336D8: ;
    xmm4 = XMM_SCALAR(MEMF(0x7DD63C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013372D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_001336E5: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001336EF; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_001336EA: ;
    xmm0 = xmm1; /* movaps */
    goto loc_001336F3;

loc_001336EF: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_001336F3: ;
    xmm1 = XMM_SCALAR(MEMF(0x8AEC9C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7B047C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x7DD778); /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0013372D: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133737; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00133732: ;
    xmm2 = xmm1; /* movaps */
    goto loc_0013373E;

loc_00133737: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */

loc_0013373E: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00133777; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm5.f[0]) */

loc_00133750: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0013375A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00133755: ;
    xmm0 = xmm1; /* movaps */
    goto loc_0013375E;

loc_0013375A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0013375E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7DD778)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_00133777: ;
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001337C0
 * Original: 0x001337C0 - 0x001337C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001337C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001337C0: ;
    fp_push(MEMF(0x7DD698)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001337D0
 * Original: 0x001337D0 - 0x001337D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001337D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001337D0: ;
    fp_push(MEMF(0x7DD69C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001337E0
 * Original: 0x001337E0 - 0x0013380B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001337E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001337E0: ;
    SET_LO8(ecx, MEM8(0x8F6A24));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001337F4; /* jl: less (signed <) */

loc_001337ED: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001337F4; /* jg: greater (signed >) */

loc_001337F2: ;
    SET_LO8(eax, 1);

loc_001337F4: ;
    ecx = MEM32(0x8F6A68);
    ecx = ecx & 0xC000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013380A; /* jne: not equal / not zero */

loc_00133808: ;
    SET_LO8(eax, 1);

loc_0013380A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133820
 * Original: 0x00133820 - 0x00133826 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133820(void)
{

loc_00133820: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00133830
 * Original: 0x00133830 - 0x00133841 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133830(void)
{

loc_00133830: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x30) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133850
 * Original: 0x00133850 - 0x00133877 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133850: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00133859u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00133859: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013386C; /* je: equal / zero */

loc_00133860: ;
    MEM32(eax) = 0x7DD76C;
    MEM32(0x8F066C) = eax;
    esp += 4; return; /* ret */

loc_0013386C: ;
    MEM32(0x8F066C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00133880
 * Original: 0x00133880 - 0x0013389F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133880: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DD76C;
    if (TEST_Z(_fa, _fb)) goto loc_00133899; /* je: equal / zero */

loc_00133890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00133896u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00133896: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00133899: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001338B0
 * Original: 0x001338B0 - 0x001338F7 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001338B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001338B0: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 3 (16-bit) */
    ecx = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_001338DE; /* jne: not equal / not zero */

loc_001338BF: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001338D9; /* je: equal / zero */

loc_001338CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001338D9; /* je: equal / zero */

loc_001338D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001338DE; /* jne: not equal / not zero */

loc_001338D9: ;
    ecx = 5;

loc_001338DE: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x896160) = LO16(ecx);
    MEM16(0x896162) = LO16(eax);
    MEM16(0x896164) = LO16(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00133910
 * Original: 0x00133910 - 0x0013394E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133910: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 3 (16-bit) */
    ecx = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_0013393E; /* jne: not equal / not zero */

loc_0013391F: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133939; /* je: equal / zero */

loc_0013392F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133939; /* je: equal / zero */

loc_00133934: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013393E; /* jne: not equal / not zero */

loc_00133939: ;
    ecx = 5;

loc_0013393E: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), LO16(ecx) (16-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    esp += 4; return; /* ret */

}

/**
 * sub_00133960
 * Original: 0x00133960 - 0x001339C3 (99 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133960: ;
    PUSH32(esp, 0x00133965u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_00133965: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133974; /* jl: less (signed <) */

loc_0013396A: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0x3C (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001339B3; /* jl: less (signed <) */

loc_00133974: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001339B3; /* je: equal / zero */

loc_0013397D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001339B3; /* je: equal / zero */

loc_00133981: ;
    PUSH32(esp, 0x00133986u); RECOMP_ABI_CALL(0x00028D22u, sub_00028D22); /* call 0x00028D22 */

loc_00133986: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013399A; /* jne: not equal / not zero */

loc_0013398B: ;
    eax = 0x15;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_0013399A: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_001339B3: ;
    eax = 0x1D;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_001339E0
 * Original: 0x001339E0 - 0x00133A07 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001339E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001339E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x001339E9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001339E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001339FC; /* je: equal / zero */

loc_001339F0: ;
    MEM32(eax) = 0x7DD770;
    MEM32(0x8F0670) = eax;
    esp += 4; return; /* ret */

loc_001339FC: ;
    MEM32(0x8F0670) = 0;
    esp += 4; return; /* ret */

}
